#include "Ultrasonic.h"

Ultrasonic::Ultrasonic(int trig, int echo) {
  trigPin = trig;
  echoPin = echo;
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

float Ultrasonic::measure() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH); 
  if (duration == 0) return -1; 

  return (duration * 0.0343) / 2.0; 
}
