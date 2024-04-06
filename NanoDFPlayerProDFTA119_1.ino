  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // Ce code fonctionne sur arduino UNO et NANO il est destiné à découvir le DFPlayer PRO
  // Il a pour but de tester quelques fonctions essentielles des commandes de la librairie DFRobot_DF1201S
  // Il utilise entre autre la laiaison avec le moniteur série, 
  // il est donc IMPERATIF pour une bonne compréhension d'activer celui ci dés que le téleversement est terminé
  // Penser à mettre en cohérence le nombre de bauds entre Serial.begin et la sélection sur le moniteur série
  // Ce code est opensource, si vous le partagez soyez sympa de me citer
  // Point important : Le DFPlayer PRO délivrant son signal audio via un amplificateur intégré, je conseille de l'alimenter spécifiquement en reliant les masses
  // La musique est extraite de la bibliothèque Audio gratuite YouTube
  // www.youtube.com/@ClaudeDufourmont n'hésitez pas à m'encourager à poursuivre en likant, paratageant, commentant, et en vous abonnant
  // github.com/claudiusmarius
  // https://www.facebook.com/claude.dufourmont
  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  
  #include <DFRobot_DF1201S.h>
  #include <SoftwareSerial.h>
  SoftwareSerial MonDFPLayerProSerial(5, 6);  //RX  TX -------> ATTENTION RX Nano va sur TX DFPLAYER PRO et TX Nano va sur RX DFPLAYER PRO
  DFRobot_DF1201S MonDFPLayerPro;

  void setup(void)
  {
  //Serial.begin(9600);
  Serial.begin(115200);
  MonDFPLayerProSerial.begin(115200);
  while(!MonDFPLayerPro.begin(MonDFPLayerProSerial))
  {
  Serial.println("Patientez en attente de la connection SVP");
  delay(1000);
  }
  
  MonDFPLayerPro.setVol(18);
  MonDFPLayerPro.switchFunction(MonDFPLayerPro.MUSIC);
  delay(2000);
  MonDFPLayerPro.setPlayMode(MonDFPLayerPro.FOLDER);
  MonDFPLayerPro.setPrompt(false);
  delay(1000);
  }

  void loop() 
  {
  Demo01();  
  Demo02();
  Demo03();
  Demo04();
  }
  
  void Demo01() 
  { 
  Serial.println("----------------------------------------DEMO1-----------------------------------------------");
  MonDFPLayerPro.setVol(18);
  Serial.print("VOL:");
  Serial.println(MonDFPLayerPro.getVol());
  Serial.println("PREMIER MORCEAU DU DOSSIER");
  MonDFPLayerPro.playFileNum(1);
  MonDFPLayerPro.setPlayTime(0);
  delay(7000);
  
  MonDFPLayerPro.next();
  Serial.println("MORCEAU SUIVANT:");
  MonDFPLayerPro.setVol(20);
  Serial.print("VOL:");
  Serial.println(MonDFPLayerPro.getVol());
  delay(7000);
  
  MonDFPLayerPro.next();
  Serial.println("ENCHAINEMENT EN DIMINUANT NOTABLEMENT LE VOLUME:");
  MonDFPLayerPro.setVol(8);
  Serial.print("VOL:");
  Serial.println(MonDFPLayerPro.getVol());
  delay(7000);
  
  Serial.println("ENCHAINEMENT DEUX FOIS AVEC MORCEAUX SUIVANTS ET EN MODIFIANT ET AFFICHANT VOLUME");
  
  for (int i=0; i<=3; i++)
  {
  Serial.println("");
  }
  delay(8000);
  }

  void Demo02() 
  { 
  Serial.println("----------------------------------------DEMO2-----------------------------------------------");
  MonDFPLayerPro.setVol(18);
  Serial.print("VOL:");
  Serial.println(MonDFPLayerPro.getVol());
  Serial.println("QUATRIEME MORCEAU DU DOSSIER EN COMMENçANT A LA 10èME SECONDE");
  MonDFPLayerPro.playFileNum(4);
  MonDFPLayerPro.setPlayTime(10);
  delay(7000);
  Serial.println("COUPURE AMPLI PENDANT 5 SECONDES");
  MonDFPLayerPro.disableAMP();
  delay(5000);
  Serial.println("RETABLISSEMENT AMPLI");
  MonDFPLayerPro.enableAMP();
  delay(5000);
  Serial.println("GESTION COUPURE AMPLI PUIS REACTIVATION");
  
  for (int i=0; i<=3; i++)
  {
  Serial.println("");
  }
  delay(8000);
  }

  void Demo03() 
  { 
  Serial.println("----------------------------------------DEMO3-----------------------------------------------");
  
  Serial.print("DOSSIER CONSTITUE DE : ");
  Serial.print (MonDFPLayerPro.getTotalFile());
  Serial.println(" PISTES");
  
  MonDFPLayerPro.setVol(25);
  Serial.print("VOL: ");
  Serial.println(MonDFPLayerPro.getVol());
  Serial.println("DEUXIEME MORCEAU DU DOSSIER");
  MonDFPLayerPro.playFileNum(2);
  MonDFPLayerPro.setPlayTime(0);
  Serial.print("TITRE DU MORCEAU: ");
  Serial.println (MonDFPLayerPro.getFileName());
  Serial.print("DUREE TOTALE DU MORCEAU: ");
  Serial.print(MonDFPLayerPro.getTotalTime());
  Serial.println(" SECONDES");

  delay(7000);
  
  for (int i=0; i<=3; i++)
  {
  Serial.println("");
  }
  delay(8000);
  }

  void Demo04() 
  { 
  Serial.println("----------------------------------------DEMO4-----------------------------------------------");
 
  MonDFPLayerPro.setVol(15);
  Serial.print("VOL: ");
  Serial.println(MonDFPLayerPro.getVol());
  Serial.println("PREMIER MORCEAU DU DOSSIER");
  MonDFPLayerPro.playFileNum(1);
  MonDFPLayerPro.setPlayTime(0);
  Serial.print("TITRE DU MORCEAU: ");
  Serial.println (MonDFPLayerPro.getFileName());;
 
  delay(7000);
  
  MonDFPLayerPro.pause();
  Serial.println("PREMIERE PAUSE AU BOUT DE 7 SECONDES DE MUSIQUE ");
  
  delay(7000);
  MonDFPLayerPro.start();
  Serial.println("REDEMARRAGE APRES 7 SECONDES DE PAUSE ");
  
  delay(7000);
  MonDFPLayerPro.pause();
  Serial.println("DEUXIEME PAUSE AU BOUT DE 7 SECONDES DE NOUVEAU ");
  
  delay(5000);
  MonDFPLayerPro.start();
  Serial.println("REDEMARRAGE APRES 5 SECONDES DE PAUSE ");
  
  delay(15000);
 
  Serial.println("GESTION PAUSES ET REDEMARRAGE");
  
  for (int i=0; i<=3; i++)
  {
  Serial.println("");
  }
  delay(8000);
  }
