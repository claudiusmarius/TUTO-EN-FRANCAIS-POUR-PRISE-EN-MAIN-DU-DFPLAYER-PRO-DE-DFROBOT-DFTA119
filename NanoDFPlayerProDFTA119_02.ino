  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // Ce code fonctionne sur Arduino Nano il est destiné à découvir le DFPlayer PRO particulièrement en utilisant plusieurs dossiers
  // Il a pour but de tester quelques fonctions essentielles des commandes de la librairie DFRobot_DF1201S
  // Ici un dossier wife et un dossier men, la femme (Louise) énonce les heures paires etl'homme(Claude) les heures impaires
  // Ce code est opensource, si vous le partagez soyez sympa de me citer
  // Point important : Le DFPlayer PRO délivrant son signal audio via un amplificateur intégré, je conseille de l'alimenter spécifiquement en reliant les masses
  // Les voix sont les voix personnelles de l'auteur et de son épouse, n'ayant pas été enregistrés dans les mêmes conditions, le volume est personnalisé
  // www.youtube.com/@ClaudeDufourmont n'hésitez pas à m'encourager à poursuivre en likant, paratageant, commentant, et en vous abonnant
  // github.com/claudiusmarius
  // https://www.facebook.com/claude.dufourmont
  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  #include <DFRobot_DF1201S.h>
  #include <SoftwareSerial.h>
  SoftwareSerial DF1201SSerial(5, 6);
  DFRobot_DF1201S DF1201S;

  void setup(void)
  {
  Serial.begin(115200);
  DF1201SSerial.begin(115200);
  while(!DF1201S.begin(DF1201SSerial))
  {
  delay(100);
  }
  
  DF1201S.switchFunction(DF1201S.MUSIC);
  delay(3000);
  }

  void loop()
  {
  DF1201S.start();
  delay(50);
  DF1201S.setVol(26);
  DF1201S.playSpecFile("/wife/001F.mp3");                         
  delay(3000);
  DF1201S.pause();

  DF1201S.start();
  delay(50);
  DF1201S.setVol(20);
  DF1201S.playSpecFile("/men/002H.mp3");                         
  delay(3000);
  DF1201S.pause();

  DF1201S.start();
  delay(50);
  DF1201S.setVol(26);
  DF1201S.playSpecFile("/wife/003F.mp3");                         
  delay(3000);
  DF1201S.pause();

  DF1201S.start();
  delay(50);
  DF1201S.setVol(20);
  DF1201S.playSpecFile("/men/004H.mp3");                         
  delay(2000);
  DF1201S.pause();

  DF1201S.start();
  delay(50);
  DF1201S.setVol(26);
  DF1201S.playSpecFile("/wife/005F.mp3");                         
  delay(3000);
  DF1201S.pause();
  
  DF1201S.start();
  delay(50);
  DF1201S.setVol(20);
  DF1201S.playSpecFile("/men/006H.mp3");                         
  delay(3000);
  DF1201S.pause();

  DF1201S.start();
  delay(50);
  DF1201S.setVol(26);
  DF1201S.playSpecFile("/wife/007F.mp3");                         
  delay(3000);
  DF1201S.pause();

  DF1201S.start();
  delay(50);
  DF1201S.setVol(20);
  DF1201S.playSpecFile("/men/008H.mp3");                         
  delay(3000);
  DF1201S.pause();

  DF1201S.start();
  delay(50);
  DF1201S.setVol(26);
  DF1201S.playSpecFile("/wife/009F.mp3");                         
  delay(3000);
  DF1201S.pause();
  
  DF1201S.start();
  delay(50);
  DF1201S.setVol(20);
  DF1201S.playSpecFile("/men/010H.mp3");                   
  delay(3000);
  DF1201S.pause();
 
  DF1201S.start();
  delay(50);
  DF1201S.setVol(26);
  DF1201S.playSpecFile("/wife/011F.mp3");                        
  delay(3000);
  DF1201S.pause();

  DF1201S.start();
  delay(50);
  DF1201S.setVol(20);
  DF1201S.playSpecFile("/men/012H.mp3");                         
  delay(3000);
  DF1201S.pause();

  DF1201S.start();
  delay(50);
  DF1201S.setVol(26);
  DF1201S.playSpecFile("/wife/013F.mp3");                         
  delay(3000);
  DF1201S.pause();
  
  DF1201S.start();
  delay(50);
  DF1201S.setVol(20);
  DF1201S.playSpecFile("/men/014H.mp3");                   
  delay(3000);
  DF1201S.pause();

  DF1201S.start();
  delay(50);
  DF1201S.setVol(26);
  DF1201S.playSpecFile("/wife/015F.mp3");                         
  delay(3000);
  DF1201S.pause();

  DF1201S.start();
  delay(50);
  DF1201S.setVol(20);
  DF1201S.playSpecFile("/men/016H.mp3");                         
  delay(3000);
  DF1201S.pause();
  
  DF1201S.start();
  delay(50);
  DF1201S.setVol(26);
  DF1201S.playSpecFile("/wife/017F.mp3");                   
  delay(3000);
  DF1201S.pause();

  DF1201S.start();
  delay(50);
  DF1201S.setVol(20);
  DF1201S.playSpecFile("/men/018H.mp3");                         
  delay(3000);
  DF1201S.pause();
  
  DF1201S.start();
  delay(50);
  DF1201S.setVol(26);
  DF1201S.playSpecFile("/wife/019F.mp3");                   
  delay(3000);
  DF1201S.pause();

  DF1201S.start();
  delay(50);
  DF1201S.setVol(20);
  DF1201S.playSpecFile("/men/020H.mp3");                         
  delay(3000);
  DF1201S.pause();

  DF1201S.start();
  delay(50);
  DF1201S.setVol(26);
  DF1201S.playSpecFile("/wife/021F.mp3");                         
  delay(3000);
  DF1201S.pause();
  
  DF1201S.start();
  delay(50);
  DF1201S.setVol(20);
  DF1201S.playSpecFile("/men/022H.mp3");                   
  delay(3000);
  DF1201S.pause();

  DF1201S.start();
  delay(50);
  DF1201S.setVol(26);
  DF1201S.playSpecFile("/wife/023F.mp3");                         
  delay(3000);
  DF1201S.pause();
  
  DF1201S.start();
  delay(50);
  DF1201S.setVol(20);
  DF1201S.playSpecFile("/men/024H.mp3");                   
  delay(3000);
  DF1201S.pause();
  }
  
  
