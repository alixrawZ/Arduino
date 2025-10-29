#include <Arduino.h>

int button = 2;

void setup()
{
  pinMode(2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int buttonstate = digitalRead(2);
  
  
  if(buttonstate == 1){
  	Serial.println("ON");
    digitalWrite(LED_BUILTIN, 1);
  }else{
    Serial.println("OFF");
    digitalWrite(LED_BUILTIN, 0);
  }
}

