#include <Arduino.h>

int sensorValue;
int digitalValue;

void setup()
{
  Serial.begin(9600); // sets the serial port to 9600
  pinMode(13, OUTPUT);
  pinMode(36, INPUT);
}

void loop()
{
  sensorValue = analogRead(36); // read analog input pin 0
  digitalValue = digitalRead(13);
  if (sensorValue > 400)
  {
    digitalWrite(13, HIGH);
  }
  else
    digitalWrite(13, LOW);
  Serial.println(sensorValue, DEC); // prints the value read
  Serial.println(digitalValue, DEC);
  delay(1000); // wait 100ms for next reading
}