#include <Arduino.h>
const int wire1 = A0;
const int wire2 = A1;
const int wire3 = A2;
const int wire4 = A3;
const int wire5 = A4;
const int wire6 = A5;






void setup() {
  Serial.begin(9600);







  
}

void loop() {
  const int wire1status = analogRead(wire1);
  const int wire2status = analogRead(wire2);
  const int wire3status = analogRead(wire3);
  const int wire4status = analogRead(wire4);
  const int wire5status = analogRead(wire5);
  const int wire6status = analogRead(wire6);
if (wire1status <= 300){
  Serial.print("wire1 is snipped");
}

if (wire2status <= 300){
  Serial.print("wire2 is snipped");
}

if (wire3status <= 300){
  Serial.print("wire3 is snipped");
}

if (wire4status <= 300){
  Serial.print("wire4 is snipped");
}

if (wire5status <= 300){
  Serial.print("wire5 is snipped");
}

if (wire6status <= 300){
  Serial.print("wire6 is snipped");
}
}
