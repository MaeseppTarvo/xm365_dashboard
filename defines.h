// #define _DEBUG_MODE  //For test purposes, disables data requests and just listens for BUS
// #include <SPI.h>
#include <Wire.h>

#include <Adafruit_GFX.h>

#include <Adafruit_SSD1306.h>

#include <gfxfont.h>

#include <avr/pgmspace.h>

#include <avr/eeprom.h>

#include "language.h"

#include "messages.h"

#include "fonts/m365.h"

#define FONT FreeSerifBoldItalic18pt7b
    #include <./Fonts/FreeSerifBoldItalic18pt7b.h>
    #include "SSD1306Ascii.h"
#ifdef LANG_ENG
    #include "fonts/System5x7mod.h"
#endif

MessagesClass Message;
Adafruit_SSD1306 display(128, 64, &Wire, -1, 400000UL, 100000UL);

#include <SoftwareSerial.h> //For Arduino Nano and others that have standalone USB port
//#define XIAOMI_PORT Serial //For other Arduinos such as Mini that does not have standalone USB port

SoftwareSerial XIAOMI_PORT(11, 12);
#define RX_DISABLE UCSR0B &= ~_BV(RXEN0);
#define RX_ENABLE UCSR0B |= _BV(RXEN0);

const unsigned char THROTTLE_KEY_TRES = 53; //38-190
const unsigned char BR_KEY_TRES = 43; //35-169
const unsigned int LONG_PRESS = 500; //
const unsigned int MENU_INITIAL = 100; //ms

//available screens
enum {
  NONE,
  MILEAGE,
  TEST,
  BATT,
  TRIP,
  MENU,
  BIG_SPEED,
  BIG_CURRENT,
  BIG_AVERAGE,
  BIG_REMAIN,
  BIG_MILEAGE,
  BIG_SPENT,
  CELLS,
  CHARGING,
  NO_BIG,
  BIG_VOLTS,
  DEBUG_MODE,
  BIG_TIME
};
//available messages
enum {
  MESSAGE_KEY_TH = 0,
  MESSAGE_KEY_BR,
  MESSAGE_KEY_BOTH,
  MESSAGE_KEY_MENU,
  MESSAGE_KEY_RELEASED,
  MESSAGE_KEY_TH_LONG,
  MESSAGE_KEY_BR_LONG,
  MESSAGE_KEY_ANY
};
//available broadcast
enum {
  BR_MESSAGE_HIBERNATE_ON = 0,
  BR_MESSAGE_HIBERNATE_OFF
};

bool bigWarn = true;
uint8_t warnBatteryPercent = 5;

struct {
  unsigned char prepared; //1 if prepared, 0 after writing
  unsigned char DataLen; //lenght of data to write
  unsigned char buf[16]; //buffer
  unsigned int cs; //cs of data into buffer
  unsigned char _dynQueries[5];
  unsigned char _dynSize = 0;
}_Query;

volatile unsigned char _NewDataFlag = 0; //assign '1' for renew display once
volatile unsigned char _Hibernate = 0; //disable requests. For flashind or other things

enum {
  CMD_CRUISE_ON,
  CMD_CRUISE_OFF,
  CMD_LED_ON,
  CMD_LED_OFF,
  CMD_WEAK,
  CMD_MEDIUM,
  CMD_STRONG
};
struct __attribute__((packed)) CMD {
  uint8_t len;
  uint8_t address;
  uint8_t rlen;
  uint8_t param;
  uint16_t value;
}_cmd;

const uint8_t _commandsWeWillSend[] = {
  1,
  8,
  10
}; //insert INDEXES of commands, wich will be send in a circle

// INDEX                     //0     1     2     3     4     5     6     7     8     9    10    11    12    13    14
const uint8_t _q[] PROGMEM = {
  0x3B,
  0x31,
  0x20,
  0x1B,
  0x10,
  0x1A,
  0x69,
  0x3E,
  0xB0,
  0x23,
  0x3A,
  0x7B,
  0x7C,
  0x7D,
  0x40
}; //commands
const uint8_t _l[] PROGMEM = {
  2,
  10,
  6,
  4,
  18,
  12,
  2,
  2,
  32,
  6,
  4,
  2,
  2,
  2,
  30
}; //expected answer length of command
const uint8_t _f[] PROGMEM = {
  1,
  1,
  1,
  1,
  1,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  1
}; //format of packet

//wrappers for known commands
const uint8_t _h0[] PROGMEM = {
  0x55,
  0xAA
};
const uint8_t _h1[] PROGMEM = {
  0x03,
  0x22,
  0x01
};
const uint8_t _h2[] PROGMEM = {
  0x03,
  0x20,
  0x01
};
//head of control commands
const uint8_t _hc[] PROGMEM = {
  0x04,
  0x20,
  0x03
};

struct {
  unsigned char activeMenu; //0 - nomenu (0,1,2,3,4)
  unsigned char selectedMenuItem;
  unsigned char bigVar; //variant of big digits in riding mode (speed > 1kmh)
  unsigned char dispVar; //variant of data on display (menu, big, min)
}_Menu;

const char mainMenuItemm1[] PROGMEM = {
  "RECUP"
}; //main menu items
const char mainMenuItemm2[] PROGMEM = {
  "CRUISE"
};
const char mainMenuItemm3[] PROGMEM = {
  "REAR-LED"
};
const char mainMenuItemm4[] PROGMEM = {
  "BIG DISP"
};
const char mainMenuItemm5[] PROGMEM = {
  "DEBUG"
};

const char rm1[] PROGMEM = {
  "WEAK"
};
const char rm2[] PROGMEM = {
  "MEDIUM"
};
const char rm3[] PROGMEM = {
  "STRONG"
};

const char m1[] PROGMEM = {
  "ON"
};
const char m2[] PROGMEM = {
  "OFF"
};

const char bigMenuItem1[] PROGMEM = {
  "SPEED"
}; //BIG screens list
const char bigMenuItem2[] PROGMEM = {
  "AVERAGE"
};
const char bigMenuItem3[] PROGMEM = {
  "CURRENT"
};
const char bigMenuItem4[] PROGMEM = {
  "SPENT %"
};
const char bigMenuItem5[] PROGMEM = {
  "MILEAGE"
};
const char bigMenuItem6[] PROGMEM = {
  "VOLTAGE"
};
const char bigMenuItem7[] PROGMEM = {
  "PWR TIME"
};
const char bigMenuItem8[] PROGMEM = {
  "NO BIG"
};

const char bp0[] PROGMEM = {
  "Vlt"
}; //for BIG screens
const char bp1[] PROGMEM = {
  "Ave"
};
const char bp2[] PROGMEM = {
  "Amp"
};
const char bp3[] PROGMEM = {
  "Mil"
};
const char bp4[] PROGMEM = {
  "Spd"
};
const char bp5[] PROGMEM = {
  "Tim"
};

const char * menuMainItems[] = {
  mainMenuItemm1,
  mainMenuItemm2,
  mainMenuItemm3,
  mainMenuItemm4,
  mainMenuItemm5
};
const char * menuRecupItems[] = {
  rm1,
  rm2,
  rm3
};
const char * menuOnOffItems[] = {
  m1,
  m2
};
const char * menuBigItems[] = {
  bigMenuItem1,
  bigMenuItem2,
  bigMenuItem3,
  bigMenuItem4,
  bigMenuItem5,
  bigMenuItem6,
  bigMenuItem7,
  bigMenuItem8
};
const char * dispBp[] = {
  bp0,
  bp1,
  bp2,
  bp3,
  bp4,
  bp5
};

//const unsigned char BR_RELEASED_TRES = 40; //full range (35 -) range may vary on different scooters
//const unsigned char TH_RELEASED_TRES = 43; //full range (38 - 196)
const uint8_t RECV_TIMEOUT = 5;
const uint8_t RECV_BUFLEN = 64;

struct { //D
  //unsigned char recup;  //0 - weak, 1 - medium, 2 - strong
  //unsigned char cruise; //1 - on, 0 - off
  //unsigned char tail;   //tail led 1 - on, 0 - off
  unsigned char throttle;
  unsigned char brake;
  char initialPercent;
  int initialCapacity;
  char spentPercent; //percent spented from power On
  int spentCapacity;
  unsigned int chargedCapacity;
  unsigned int sph; //1  km/h
  unsigned int spl; //0.01 km/h
  unsigned int average; //average
  unsigned int avel;
  unsigned int mileage; //mileage current
  unsigned int mill;
  unsigned int curh; //current
  unsigned int curl;
  char remPercent; //remain percent
  int remCapacity;
  unsigned int tripMin;
  unsigned int tripSec;
  unsigned char powerMin;
  unsigned char powerSec;
  unsigned int milTotH; //total mileage
  unsigned char milTotL;
  unsigned char temp1; //first temperature of battery
  unsigned char temp2;
  int voltage;
  //unsigned char volth;
  //unsigned char voltl;
  unsigned int loopsTime;
}D;

struct __attribute__((packed)) ANSWER_HEADER { //header of receiving answer
  uint8_t len;
  uint8_t address;
  uint8_t hz;
  uint8_t cmd;
}AnswerHeader;

/*
//----- states of controllable var :)
struct __attribute__ ((packed)) A23C7B{
  int recupMode; // 0 - weak, 1 - medium, 2 - strong
}S23C7B;

struct __attribute__ ((packed)) A23C7D{
  int rearLight; // 2 = ON, 0 = OFF
}S23C7D;

struct __attribute__((packed)) A23C7C{ //UNKNOWN
  int u1; //0 - cruise mode OFF; 1 - cruise mode ON
}S23C7C;
*/

struct __attribute__((packed)) {
  uint8_t state; //0-stall, 1-drive, 2-eco stall, 3-eco drive
  uint8_t ledBatt; //battery status 0 - min, 7(or 8...) - max
  uint8_t headLamp; //0-off, 0x64-on
  uint8_t beepAction;
}S21C00HZ64;

struct __attribute__((packed)) A20C00HZ65 {
  uint8_t hz1;
  uint8_t throttle;
  uint8_t brake;
  uint8_t hz2;
  uint8_t hz3;
}S20C00HZ65;

// Battery
struct __attribute__((packed)) A25C31 {
  uint16_t remainCapacity; //remaining capacity mAh
  uint8_t remainPercent; //charge in percent
  uint8_t u4; //battery status??? (unknown)
  int16_t current; //current        divided by 100 = A
  int16_t voltage; //battery voltage   divided by 100 = V
  uint8_t temp1; //-=20
  uint8_t temp2; //-=20
}S25C31;

struct __attribute__((packed)) A25C40 {
  int16_t cell1; //cell1 divided by 1000
  int16_t cell2; //cell2
  int16_t cell3; //etc.
  int16_t cell4;
  int16_t cell5;
  int16_t cell6;
  int16_t cell7;
  int16_t cell8;
  int16_t cell9;
  int16_t cell10;
  int16_t cell11;
  int16_t cell12;
  int16_t cell13;
  int16_t cell14;
  int16_t cell15;
}S25C40;

struct __attribute__((packed)) A23C3E {
  int16_t i1; //mainframe temp
}S23C3E;

struct __attribute__((packed)) A23CB0 {
  //32 bytes;
  uint8_t u1[10];
  int16_t speed; // divided by 1000
  uint16_t averageSpeed; // divided by 1000
  unsigned long mileageTotal; // divided by 1000
  uint16_t mileageCurrent; // divided by 100
  uint16_t elapsedPowerOnTime; //time from power on, in seconds
  int16_t mainframeTemp; // divided by 10
  uint8_t u2[8];
}S23CB0;

struct __attribute__((packed)) A23C23 { //skip
  uint8_t u1;
  uint8_t u2;
  uint8_t u3; //0x30
  uint8_t u4; //0x09
  uint16_t remainMileage; // /100 
}S23C23;

struct __attribute__((packed)) A23C3A {
  uint16_t powerOnTime;
  uint16_t ridingTime;
}S23C3A;