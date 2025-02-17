#include <Servo.h>
Servo Servo1;
void setup() {

pinMode(13,OUTPUT);
pinMode(2,INPUT);
Servo1.attach(9);
}
void loop() {
  Servo1.write(0);
  delay(1000);
  Servo1.write(90);
  delay(1000);
  Servo1.write(180);
  delay(1000);
  Servo1.write(90);
  delay(1000);
int botton=digitalRead(2);
if (botton==LOW) {  //read the botton state
digitalWrite(13,HIGH);
int dial = analogRead(0);
tone(9,440);
delay(1000);
} else{//botton is not pressed
digitalWrite(13,LOW);
noTone(9);

//delay(dial);
}
}