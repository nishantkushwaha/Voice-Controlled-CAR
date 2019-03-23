#include <SoftwareSerial.h>

SoftwareSerial BT(0, 1); //TX, RX respetively
String readvoice;

void setup() {
 BT.begin(9600);
 Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

}
void light(){
    digitalWrite(13,HIGH);
    delay(50);
    digitalWrite(12,HIGH);
    delay(50);
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    delay(50);
    digitalWrite(13,HIGH);
    delay(50);
    digitalWrite(12,HIGH);
    delay(50);
    }
//-----------------------------------------------------------------------// 
void loop() {
  while (BT.available()){  //Check if there is an available byte to read
  delay(10); //Delay added to make thing stable
  char c = BT.read(); //Conduct a serial read
  readvoice += c; //build the string- "forward", "reverse", "left" and "right"
  } 
  if (readvoice.length() > 0) {
    Serial.println(readvoice);

  if(readvoice == "forward")
  {
    digitalWrite(13,HIGH);
    digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(100);
  }
  else if(readvoice == "on headlights")
  {
    digitalWrite(13,HIGH);
    delay(100);
  }
  else if(readvoice == "of headlights")
  {
    digitalWrite(13,LOW);
    delay(100);
  }
  else if(readvoice == "show me Disco")
  {
    for(int i=0;i<=15;i++)
    {digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite (3, LOW);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
    }
  }


  else if(readvoice == "back")
  {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(12, HIGH);
    delay(100);
  }

  else if (readvoice == "right")
  {
    digitalWrite (3,HIGH);
    digitalWrite (4,LOW);
    digitalWrite (5,LOW);
    digitalWrite (6,LOW);
   delay (800);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(100);
  
  }
  else if (readvoice == "Walk Like snake")
  {
    for(int i=0;i<=10;i++){
    digitalWrite (3,HIGH);
    digitalWrite (4,LOW);
    digitalWrite (5,LOW);
    digitalWrite (6,LOW);
    light();
    delay(100);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   light();
   delay(100);
    }
  }
  else if ( readvoice == "show me dance")
 {
  for(int i=0;i<=5;i++){
   digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   light();
   delay(500);
    digitalWrite (3, HIGH);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay(100);
   digitalWrite (3,HIGH);
    digitalWrite (4,LOW);
    digitalWrite (5,LOW);
    digitalWrite (6,LOW);
   delay(300);
   digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6,HIGH);
    delay(100);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay(500);
  }
 }

 else if ( readvoice == "left")
 {
   digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (800);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(100);
 }

 else if (readvoice == "stop")
 {
   digitalWrite (3, LOW);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   digitalWrite(13,LOW);
    digitalWrite(12,LOW);
   delay (100);
 }
 else if (readvoice == "keep watch in all direction")
 {
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (100);
 }
  else if (readvoice == "show me garba")
 {
 digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);

digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);
 }

 
 


 readvoice="";}} //Reset the variable
