#include <Arduino.h>



void setup() {
pinMode(13,OUTPUT);
pinMode(1, INPUT);
Serial.begin(9600);
}

void loop() {

delayMicroseconds(analogRead(1));
digitalWrite(13, HIGH);
delayMicroseconds(analogRead(1));
digitalWrite(13, LOW);
//Serial.println(analogRead(1));

  // put your main code here, to run repeatedly:
}

