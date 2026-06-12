#include <Arduino.h>
const int wire1 = A0;
const int wire2 = A1;
const int wire3 = A2;
int x = 0;





void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  Serial.println("To save the city, look closely at the choices before you. ");
  delay(1000);
  Serial.println("The red wire is a trick; touching it triggers the blast."); 
  delay(1000);
  Serial.println("The correct choice is left, but do not touch the blue wire.");

}

void loop() {
  const int wire1status = analogRead(wire1);
  const int wire2status = analogRead(wire2);
  const int wire3status = analogRead(wire3);
  if (wire1status >= 1)
  {
  Serial.println("safe");
  delay(5000);
  exit(0);
  }
  if (wire2status >= 1)
  {
  Serial.print("boom");
  delay(5000);
  }
  if (wire3status >= 1)
  {
  Serial.print("boom");
  delay(5000);
  }
 if(x>10){
  digitalWrite(7,LOW);
  Serial.print("you took too long ");
 }else{
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(7,LOW);
  delay(500);
  x = x + 1;

  }
}