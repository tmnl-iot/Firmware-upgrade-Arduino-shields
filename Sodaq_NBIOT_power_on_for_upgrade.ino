#include "Arduino.h"

#define DEBUG_STREAM SerialUSB
#define powerPin 7 

#define rxPin 0
#define txPin 1


void setup() 
{
  // Turn the nb-iot module on
  pinMode(powerPin, OUTPUT); 
  digitalWrite(powerPin, HIGH);

  pinMode(rxPin, INPUT); 
  pinMode(txPin, INPUT); 

  // Start communication
  DEBUG_STREAM.begin(9600);
  DEBUG_STREAM.write("Dummy sketch for upgrade");
  
}

void loop()
{
  delay(5000);
}  


