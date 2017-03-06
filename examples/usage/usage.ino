
#ifndef AM2302_GUARD
  #define AM2302_GUARD
  #include "AM2302.h"
#endif

#define SAMPLE_TIMEOUT 300000
#define DATA_PIN D6

unsigned long lastSample = SAMPLE_TIMEOUT;

AM2302* sensor;
double temp;
double humidity;

void setup() {
  Particle.variable("temperature", temp);
  Particle.variable("humidity", humidity);
  sensor = new AM2302(DATA_PIN);
}

void loop() {
  if (millis() - lastSample > SAMPLE_TIMEOUT){
    if (sensor->sample()){
      lastSample = millis();
      temp = sensor->getTemp();
      humidity = sensor->getHumidity();
    } else {
      temp = 999;
      humidity = 999;
    }
  }
}
