#include <Arduino.h>
#define pin13 13

// put function declarations here:
int myFunction(int, int);

void setup() 
{
  // put your setup code here, to run once:
  pinMode(pin13, OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(pin13, LOW);
  delay(1000);
  digitalWrite(pin13, HIGH);
  delay(1000);  

}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}