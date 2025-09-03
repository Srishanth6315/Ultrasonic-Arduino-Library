#ifndef Ultrasonic_h
#define Ultrasonic_h

#include "Arduino.h"

class Ultrasonic {
  private:
    int trigPin;
    int echoPin;

  public:
    Ultrasonic(int trig, int echo); 
    float measure();               
};

#endif
