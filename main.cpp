#include <Arduino.h>

#define pin13 13

// initiate function here:
void dot();
void dash();



// board code:
void setup() 
{
  // put your setup code here, to run once:
  pinMode(pin13, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  
  dot();
  dot();
  dot();//S

  dash();
  dash();
  dash();//O

  dot();
  dot();
  dot();//S
  
}

// define function here:
void dot()
{
  digitalWrite(pin13, HIGH);
  delay(250); //I'm letting 250ms be the 1 timing
  digitalWrite(pin13, LOW);
  delay(250); 
}

void dash()
{
  digitalWrite(pin13, HIGH);
  delay(750); //dashes lash 3x a dot
  digitalWrite(pin13, LOW);
  delay(250); 
}

