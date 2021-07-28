//**********************************************//
// LANGUAGE SELECTION. Uncomment only one line. //
// Defaults to 🇬🇧                               //
//**********************************************//
#define LANG_ENG    // English 🇬🇧
//#define LANG_FRA  // French 🇫🇷
//#define LANG_DE   // German 🇩🇪
//#define LANG_RU   // Russian. Use together with the russian font in libraries folder 🇷🇺
//#define LANG_ES   // Spanish 🇪🇸
//#define LANG_CZ   // Czech 🇨🇿
//#define LANG_IT   // Italian 🇮🇹
//#define LANG_EE   // Estonian 🇪🇪

#ifdef LANG_EE
  #define defaultFont System5x7mod
 
  const char noBUS1[] PROGMEM = {"Yhendus"};
  const char noBUS2[] PROGMEM = {"puudb..."};
  const char noBUS3[] PROGMEM = {""};
  const char noBUS4[] PROGMEM = {""};
 
  const char confScr1[] PROGMEM = {"Big speedometer: "};
  const char confScr2[] PROGMEM = {"Big speedo.: "};
  const char confScr2a[] PROGMEM = {"  SPEED"};
  const char confScr2b[] PROGMEM = {"CURRENT"};
  const char confScr3[] PROGMEM = {"Battery warning: "};
  const char confScr4[] PROGMEM = {"Big batt. warn.: "};
  const char confScr5[] PROGMEM = {"Battery info"};
  const char confScr6[] PROGMEM = {"Configure M365"};
  const char confScr7[] PROGMEM = {"Save and exit"};
 
  const char infoScr1[] PROGMEM = {"Total distance"};
  const char infoScr2[] PROGMEM = {"Power on time"};
 
  const char battScr[] PROGMEM = {">>> Brake to exit <<<"};
 
  const char M365CfgScr1[] PROGMEM = {"Cruise control: "};
  const char M365CfgScr2[] PROGMEM = {"Update Cruise"};
  const char M365CfgScr3[] PROGMEM = {"Tailight on:    "};
  const char M365CfgScr4[] PROGMEM = {"Update Tailight"};
  const char M365CfgScr5[] PROGMEM = {"KERS:        "};
  const char M365CfgScr6[] PROGMEM = {"Update KERS"};
  const char M365CfgScr8[] PROGMEM = {"Exit"};
  const char M365CfgScr7[] PROGMEM = {"Wheel Size:     "};
 
  const char l_85inch[] PROGMEM = {" 8,5\""};
  const char l_10inch[] PROGMEM = {"  10\""};
 
  const char l_Weak[] PROGMEM =   {"  WEAK"};
  const char l_Medium[] PROGMEM = {"MEDIUM"};
  const char l_Strong[] PROGMEM = {"STRONG"};
 
  const char l_Yes[] PROGMEM = {"YES"};
  const char l_No[] PROGMEM =  {" NO"};
  const char l_On[] PROGMEM =  {" ON"};
  const char l_Off[] PROGMEM = {"OFF"};
 
  const char l_km[] PROGMEM = {"km"};
  const char l_kmh[] PROGMEM = {"km/h"};
  const char l_mah[] PROGMEM = {"mAh"};
  const char l_v[] PROGMEM = {"V"};
  const char l_a[] PROGMEM = {"A"};
  const char l_c[] PROGMEM = {"C"};
  const char l_t[] PROGMEM = {"T"};
#endif

#ifdef LANG_ENG
  // #define defaultFont System5x7mod
 
  const char noBUS1[] PROGMEM = {"No"};
  const char noBUS2[] PROGMEM = {"connection"};
  const char noBUS3[] PROGMEM = {"No data to"};
  const char noBUS4[] PROGMEM = {"display!"};
 
  const char confScr1[] PROGMEM = {"Big speedometer: "};
  const char confScr2[] PROGMEM = {"Big speedo.: "};
  const char confScr2a[] PROGMEM = {"  SPEED"};
  const char confScr2b[] PROGMEM = {"CURRENT"};
  const char confScr3[] PROGMEM = {"Battery warning: "};
  const char confScr4[] PROGMEM = {"Big batt. warn.: "};
  const char confScr5[] PROGMEM = {"Battery info"};
  const char confScr6[] PROGMEM = {"Configure M365"};
  const char confScr7[] PROGMEM = {"Save and exit"};
 
  const char infoScr1[] PROGMEM = {"Total distance"};
  const char infoScr2[] PROGMEM = {"Power on time"};
 
  const char battScr[] PROGMEM = {">>> Brake to exit <<<"};
 
  const char M365CfgScr1[] PROGMEM = {"Cruise control: "};
  const char M365CfgScr2[] PROGMEM = {"Update Cruise"};
  const char M365CfgScr3[] PROGMEM = {"Tailight on:    "};
  const char M365CfgScr4[] PROGMEM = {"Update Tailight"};
  const char M365CfgScr5[] PROGMEM = {"KERS:        "};
  const char M365CfgScr6[] PROGMEM = {"Update KERS"};
  const char M365CfgScr8[] PROGMEM = {"Exit"};
  const char M365CfgScr7[] PROGMEM = {"Wheel Size:     "};
 
  const char l_85inch[] PROGMEM = {" 8,5\""};
  const char l_10inch[] PROGMEM = {"  10\""};
 
  const char l_Weak[] PROGMEM =   {"  WEAK"};
  const char l_Medium[] PROGMEM = {"MEDIUM"};
  const char l_Strong[] PROGMEM = {"STRONG"};
 
  const char l_Yes[] PROGMEM = {"YES"};
  const char l_No[] PROGMEM =  {" NO"};
  const char l_On[] PROGMEM =  {" ON"};
  const char l_Off[] PROGMEM = {"OFF"};
 
  const char l_km[] PROGMEM = {"km"};
  const char l_kmh[] PROGMEM = {"km/h"};
  const char l_mah[] PROGMEM = {"mAh"};
  const char l_v[] PROGMEM = {"V"};
  const char l_a[] PROGMEM = {"A"};
  const char l_c[] PROGMEM = {"C"};
  const char l_t[] PROGMEM = {"T"};
#endif

#ifdef LANG_IT
  #define defaultFont System5x7mod
 
  const char noBUS1[] PROGMEM = {"BUS non"};
  const char noBUS2[] PROGMEM = {"connesso!"};
  const char noBUS3[] PROGMEM = {"Nessun dato da"};
  const char noBUS4[] PROGMEM = {"visualizzare"};
 
  const char confScr1[] PROGMEM = {"Contakilometri: "};
  const char confScr2[] PROGMEM = {"Conta Km: "};
  const char confScr2a[] PROGMEM = {"  VEL"};
  const char confScr2b[] PROGMEM = {"CORRENTE"};
  const char confScr3[] PROGMEM = {"Messaggio Batteria: "};
  const char confScr4[] PROGMEM = {"Messaggio Batteria: "};
  const char confScr5[] PROGMEM = {"Info Batteria"};
  const char confScr6[] PROGMEM = {"Configura M365"};
  const char confScr7[] PROGMEM = {"Salva e esci"};
 
  const char infoScr1[] PROGMEM = {"Distance totale"};
  const char infoScr2[] PROGMEM = {"Tempo acceso"};
 
  const char battScr[] PROGMEM = {">>> Freno per uscire <<<"};
 
  const char M365CfgScr1[] PROGMEM = {"Cruise control: "};
  const char M365CfgScr2[] PROGMEM = {"Agg. Cruise"};
  const char M365CfgScr3[] PROGMEM = {"Fanale Post.:    "};
  const char M365CfgScr4[] PROGMEM = {"Agg. Fanale Post."};
  const char M365CfgScr5[] PROGMEM = {"Rec.En.Cinetica:        "};
  const char M365CfgScr6[] PROGMEM = {"Agg. Rec.En.Cinetica"};
  const char M365CfgScr8[] PROGMEM = {"Esci"};
  const char M365CfgScr7[] PROGMEM = {"Ruote:     "};
 
  const char l_85inch[] PROGMEM = {" 8,5\""};
  const char l_10inch[] PROGMEM = {"  10\""};
 
  const char l_Weak[] PROGMEM =   {"  DEBOLE"};
  const char l_Medium[] PROGMEM = {"MEDIO"};
  const char l_Strong[] PROGMEM = {"FORTE"};
 
  const char l_Yes[] PROGMEM = {"SI"};
  const char l_No[] PROGMEM =  {" NO"};
  const char l_On[] PROGMEM =  {" ON"};
  const char l_Off[] PROGMEM = {"OFF"};
 
  const char l_km[] PROGMEM = {"km"};
  const char l_kmh[] PROGMEM = {"km/h"};
  const char l_mah[] PROGMEM = {"mAh"};
  const char l_v[] PROGMEM = {"V"};
  const char l_a[] PROGMEM = {"A"};
  const char l_c[] PROGMEM = {"C"};
  const char l_t[] PROGMEM = {"T"};
#endif

#ifdef LANG_FRA
  #define defaultFont System5x7mod

  const char noBUS1[] PROGMEM = {"BUS non"};
  const char noBUS2[] PROGMEM = {"connecté!"};
  const char noBUS3[] PROGMEM = {"Pas de données"};
  const char noBUS4[] PROGMEM = {"à afficher!"};

  const char confScr1[] PROGMEM = {"Gros speedométre: "};
  const char confScr2[] PROGMEM = {"Gros speedo.: "};
  const char confScr2a[] PROGMEM = {" VITESSE"};
  const char confScr2b[] PROGMEM = {"ACTUELLE"};
  const char confScr3[] PROGMEM = {"Alerte Batterie: "};
  const char confScr4[] PROGMEM = {"Alerte Batt.: "};
  const char confScr5[] PROGMEM = {"Informations batterie"};
  const char confScr6[] PROGMEM = {"Configure M365"};
  const char confScr7[] PROGMEM = {"Enregistrer et quitter"};

  const char infoScr1[] PROGMEM = {"Distance Totale"};
  const char infoScr2[] PROGMEM = {"Allumée depuis :"};

  const char battScr[] PROGMEM = {">>> Freiner pour sortir <<<"};

  const char M365CfgScr1[] PROGMEM = {"Contrôle régulateur: "};
  const char M365CfgScr2[] PROGMEM = {"MAJ Régulateur"};
  const char M365CfgScr3[] PROGMEM = {"Allumer feu arrière:    "};
  const char M365CfgScr4[] PROGMEM = {"Maj feu arrière"};
  const char M365CfgScr5[] PROGMEM = {"KERS:        "};
  const char M365CfgScr6[] PROGMEM = {"Maj KERS"};
  const char M365CfgScr8[] PROGMEM = {"Sortir"};
  const char M365CfgScr7[] PROGMEM = {"Wheel Size:     "};

  const char l_85inch[] PROGMEM = {" 8,5\""};
  const char l_10inch[] PROGMEM = {"  10\""};

  const char l_Weak[] PROGMEM =   {"  LEGER"};
  const char l_Medium[] PROGMEM = {"  MOYEN"};
  const char l_Strong[] PROGMEM = {"  DUR"};

  const char l_Yes[] PROGMEM = {"   OUI"};
  const char l_No[] PROGMEM =  {"   NON"};
  const char l_On[] PROGMEM =  {"Allumé"};
  const char l_Off[] PROGMEM = {"Eteint"};

  const char l_km[] PROGMEM = {"km"};
  const char l_kmh[] PROGMEM = {"km/h"};
  const char l_mah[] PROGMEM = {"mAh"};
  const char l_v[] PROGMEM = {"V"};
  const char l_a[] PROGMEM = {"A"};
  const char l_c[] PROGMEM = {"C"};
  const char l_t[] PROGMEM = {"T"};
#endif
  
#ifdef LANG_RU
  #define defaultFont System5x7mod

  const char noBUS1[] PROGMEM = {"Ytn"};
  const char noBUS2[] PROGMEM = {"Cdzpb"};
  const char noBUS3[] PROGMEM = {"c"};
  const char noBUS4[] PROGMEM = {"cfvjrfnjv!"};
  
  const char confScr1[] PROGMEM = {"Cgbljvtnh: "};
  const char confScr2[] PROGMEM = {"Ht;.Cgbljv.:"};
  const char confScr2a[] PROGMEM = {"CRJHJCNM"};
  const char confScr2b[] PROGMEM = {"  NJR   "};
  const char confScr3[] PROGMEM = {"Ghtleght;ltybt:"};
  const char confScr4[] PROGMEM = {"Ghtl. ?fnfhtb: "};
  const char confScr5[] PROGMEM = {"Bya. J ?fnfhtb"};
  const char confScr6[] PROGMEM = {"Yfcnhjqrf"};
  const char confScr7[] PROGMEM = {"Cj[hfybnm B Dsqnb"};

  const char infoScr1[] PROGMEM = {"Ghj,tu"};
  const char infoScr2[] PROGMEM = {"Dhtvz hf,jns"};

  const char battScr[] PROGMEM = {">>Njhvjp lkz ds[jlf<<"};

  const char M365CfgScr1[] PROGMEM = {"Rhebp rjynhjkm: "};
  const char M365CfgScr2[] PROGMEM = {">>J,yjdbnm rhebp<<"};
  const char M365CfgScr3[] PROGMEM = {"Pflybq Ajyfhm: "};
  const char M365CfgScr4[] PROGMEM = {">>J,yjdbnm Ajyfhm<<"};
  const char M365CfgScr5[] PROGMEM = {"Htregthfwbz: "};
  const char M365CfgScr6[] PROGMEM = {">>J,yjdbnm htr.<<"};
  const char M365CfgScr8[] PROGMEM = {"--------Dsqnb-------"};
  const char M365CfgScr7[] PROGMEM = {"Hfpvth rjktcf:  "};
  
  const char l_85inch[] PROGMEM = {"8.5\""};
  const char l_10inch[] PROGMEM = {" 10\""};

  const char l_Weak[] PROGMEM =   {" CKF,J"};
  const char l_Medium[] PROGMEM = {"CHTLYT"};
  const char l_Strong[] PROGMEM = {"CBKMYJ"};

  const char l_Yes[] PROGMEM = {" LF"};
  const char l_No[] PROGMEM =  {"YTN"};
  const char l_On[] PROGMEM =  {" DRK"};
  const char l_Off[] PROGMEM = {"DSRK"};

  const char l_km[] PROGMEM = {"RV"};
  const char l_kmh[] PROGMEM = {"RV/X"};
  const char l_mah[] PROGMEM = {"vFx"};
  const char l_v[] PROGMEM = {"D"};
  const char l_a[] PROGMEM = {"F"};
  const char l_c[] PROGMEM = {"C"};
  const char l_t[] PROGMEM = {"N"};
#endif
  
#ifdef LANG_ES
  #define defaultFont System5x7mod

  const char noBUS1[] PROGMEM = {"BUS no"};
  const char noBUS2[] PROGMEM = {"conectado"};
  const char noBUS3[] PROGMEM = {"pantalla"};
  const char noBUS4[] PROGMEM = {"sin datos"};

  const char confScr1[] PROGMEM = {"Gran velocimet.: "};
  const char confScr2[] PROGMEM = {"Gran veloc.: "};
  const char confScr2a[] PROGMEM = {"    KMH"};
  const char confScr2b[] PROGMEM = {"ENERGIA"};
  const char confScr3[] PROGMEM = {"Alarma bateria : "};
  const char confScr4[] PROGMEM = {"Gran alar. bat.: "};
  const char confScr5[] PROGMEM = {"Informacion "};
  const char confScr6[] PROGMEM = {"Configurar M365"};
  const char confScr7[] PROGMEM = {"Grabar y salir"};

  const char infoScr1[] PROGMEM = {"Distancia total"};
  const char infoScr2[] PROGMEM = {"Tiempo encendido"};

  const char battScr[] PROGMEM = {">>> Freno para salir <<<"};

  const char M365CfgScr1[] PROGMEM = {"Control crucero: "};
  const char M365CfgScr2[] PROGMEM = {"Actualizar crucero"};
  const char M365CfgScr3[] PROGMEM = {"Luz trasera:    "};
  const char M365CfgScr4[] PROGMEM = {"Actual. luz tras."};
  const char M365CfgScr5[] PROGMEM = {"KERS:        "};
  const char M365CfgScr6[] PROGMEM = {"Actualizar KERS"};
  const char M365CfgScr8[] PROGMEM = {"Salir"};
  const char M365CfgScr7[] PROGMEM = {"Tipo de Rueda:  "};

  const char l_85inch[] PROGMEM = {" 8,5\""};
  const char l_10inch[] PROGMEM = {"  10\""};

  const char l_Weak[] PROGMEM =   {" DEBIL"};
  const char l_Medium[] PROGMEM = {" MEDIO"};
  const char l_Strong[] PROGMEM = {"FUERTE"};

  const char l_Yes[] PROGMEM = {" SI"};
  const char l_No[] PROGMEM =  {" NO"};
  const char l_On[] PROGMEM =  {" ON"};
  const char l_Off[] PROGMEM = {"OFF"};

  const char l_km[] PROGMEM = {"km"};
  const char l_kmh[] PROGMEM = {"km/h"};
  const char l_mah[] PROGMEM = {"mAh"};
  const char l_v[] PROGMEM = {"V"};
  const char l_a[] PROGMEM = {"A"};
  const char l_c[] PROGMEM = {"C"};
  const char l_t[] PROGMEM = {"T"};
  #endif

#ifdef LANG_CZ
  #define defaultFont System5x7mod

  const char noBUS1[] PROGMEM = {" Displej"};
  const char noBUS2[] PROGMEM = {"   neni   "};
  const char noBUS3[] PROGMEM = {"  spravne "};
  const char noBUS4[] PROGMEM = {" zapojen !"};

  const char confScr1[] PROGMEM = {"Velky rychlomer: "};
  const char confScr2[] PROGMEM = {"Velky rych.:"};          //Velky rychlomer
  const char confScr2a[] PROGMEM = {"RYCHLOST"};
  const char confScr2b[] PROGMEM = {"   PROUD"};
  const char confScr3[] PROGMEM = {"Varovani baterie:"};
  const char confScr4[] PROGMEM = {"Velke varo. bat.:"};    //Velke varovani baterie
  const char confScr5[] PROGMEM = {"Info o baterii >"};
  const char confScr6[] PROGMEM = {"Nastaveni M365 >"};
  const char confScr7[] PROGMEM = {"Ulozit a odejit"};

  const char infoScr1[] PROGMEM = {"Celkova vzdalenost"};
  const char infoScr2[] PROGMEM = {"Cas od zapnuti"};

  const char battScr[] PROGMEM = {">>>  Brzdou zpet  <<<"};

  const char M365CfgScr1[] PROGMEM = {"Tempomat:        "};
  const char M365CfgScr2[] PROGMEM = {"Uloz nast. tempomatu"};
  const char M365CfgScr3[] PROGMEM = {"Zadni svetlo ZAP:"};
  const char M365CfgScr4[] PROGMEM = {"Uloz nast. z.svetla"};
  const char M365CfgScr5[] PROGMEM = {"Rekuperace:  "};
  const char M365CfgScr6[] PROGMEM = {"Uloz nast. rekuper."};
  const char M365CfgScr8[] PROGMEM = {"< Zpet"};
  const char M365CfgScr7[] PROGMEM = {"Velikost kol:   "};

  const char l_85inch[] PROGMEM = {" 8,5\""};
  const char l_10inch[] PROGMEM = {"  10\""};

  const char l_Weak[] PROGMEM =   {"  SLABA"};
  const char l_Medium[] PROGMEM = {"STREDNI"};
  const char l_Strong[] PROGMEM = {"  SILNA"};

  const char l_Yes[] PROGMEM = {"ANO"};
  const char l_No[] PROGMEM =  {" NE"};
  const char l_On[] PROGMEM =  {"ZAP"};
  const char l_Off[] PROGMEM = {"VYP"};

  const char l_km[] PROGMEM = {"km"};
  const char l_kmh[] PROGMEM = {"km/h"};
  const char l_mah[] PROGMEM = {"mAh"};
  const char l_v[] PROGMEM = {"V"};
  const char l_a[] PROGMEM = {"A"};
  const char l_c[] PROGMEM = {"C"};
  const char l_t[] PROGMEM = {"T"};
  
#endif

#ifdef LANG_DE
  #define defaultFont System5x7mod
 
  const char noBUS1[] PROGMEM = {"BUS nicht"};
  const char noBUS2[] PROGMEM = {"verbunden!"};
  const char noBUS3[] PROGMEM = {"Keine Daten zur"};
  const char noBUS4[] PROGMEM = {"Anzeige!"};
 
  const char confScr1[] PROGMEM = {"Grosser Tacho: "};
  const char confScr2[] PROGMEM = {"Gr. Tacho: "};
  const char confScr2a[] PROGMEM = {" GESCHW"};
  const char confScr2b[] PROGMEM = {"AKTUELL"};
  const char confScr3[] PROGMEM = {"Batterie Warnung: "};
  const char confScr4[] PROGMEM = {"Gr. Batt. Warn.: "};
  const char confScr5[] PROGMEM = {"Batterie Info"};
  const char confScr6[] PROGMEM = {"M365 Konfigurieren"};
  const char confScr7[] PROGMEM = {"Speichern und beenden"};
 
  const char infoScr1[] PROGMEM = {"Total Entfernung"};
  const char infoScr2[] PROGMEM = {"Power on time"};
 
  const char battScr[] PROGMEM = {"> Bremsen zum verlassen <"};
 
  const char M365CfgScr1[] PROGMEM = {"Cruise control: "};
  const char M365CfgScr2[] PROGMEM = {"Update Cruise"};
  const char M365CfgScr3[] PROGMEM = {"Ruecklicht an:    "};
  const char M365CfgScr4[] PROGMEM = {"Update Ruecklicht"};
  const char M365CfgScr5[] PROGMEM = {"KERS:        "};
  const char M365CfgScr6[] PROGMEM = {"Update KERS"};
  const char M365CfgScr8[] PROGMEM = {"Beenden"};
  const char M365CfgScr7[] PROGMEM = {"Reifengroesse:     "};
 
  const char l_85inch[] PROGMEM = {" 8,5\""};
  const char l_10inch[] PROGMEM = {"  10\""};
 
  const char l_Weak[] PROGMEM =   {"SCHWACH"};
  const char l_Medium[] PROGMEM = {" MITTEL"};
  const char l_Strong[] PROGMEM = {"  STARK"};
 
  const char l_Yes[] PROGMEM = {"  JA"};
  const char l_No[] PROGMEM =  {"NEIN"};
  const char l_On[] PROGMEM =  {"  AN"};
  const char l_Off[] PROGMEM = {" AUS"};
 
  const char l_km[] PROGMEM = {"km"};
  const char l_kmh[] PROGMEM = {"km/h"};
  const char l_mah[] PROGMEM = {"mAh"};
  const char l_v[] PROGMEM = {"V"};
  const char l_a[] PROGMEM = {"A"};
  const char l_c[] PROGMEM = {"C"};
  const char l_t[] PROGMEM = {"T"};
#endif
