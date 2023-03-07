# 1 "/var/folders/zn/qfydky4n2x1f_k85gzcpvmdh0000gn/T/tmpxbt_dowq"
#include <Arduino.h>
# 1 "/Users/kakers/Desktop/WLED-0.14.0-b1/wled00/wled00.ino"
# 13 "/Users/kakers/Desktop/WLED-0.14.0-b1/wled00/wled00.ino"
#include "wled.h"
void setup();
void loop();
#line 15 "/Users/kakers/Desktop/WLED-0.14.0-b1/wled00/wled00.ino"
void setup() {
  WLED::instance().setup();
}

void loop() {
  WLED::instance().loop();
}