#ifndef Ultrasonic_h
#define Ultrasonic_h

#include "Arduino.h"

class Ultrasonic {
  private:
    int trigPin;
    int echoPin;

  public:
    Ultrasonic(int trig, int echo); // constructor
    float measure();                // return distance in cm (float)
};

#endif
