#include <Arduino.h>

int sensorValue;
int digitalValue;

void setup()
{
  Serial.begin(9600); // sets the serial port to 9600
  pinMode(D7, OUTPUT);
  pinMode(A0, INPUT); // use A0 for analog input
}

void loop()
{
  sensorValue = analogRead(A0); // read analog input pin A0 (pin 36)
  digitalValue = digitalRead(D7); // read digital input pin 2
  
  // Debugging information
  Serial.print("Analog Value: ");
  Serial.println(sensorValue); // prints the analog value read
  Serial.print("Digital Value: ");
  Serial.println(digitalValue); // prints the digital value read
  
  // Adjust the threshold value if necessary
  if (sensorValue > 150) // Adjusted threshold value
  {
    digitalWrite(D7, HIGH); // set pin D7 high
  }
  else
  {
    digitalWrite(D7, LOW); // set pin D7 low
  }
  
  delay(1000); // wait 1000ms for next reading
}