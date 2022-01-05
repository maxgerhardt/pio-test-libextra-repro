#include <Arduino.h>
#include <my_lib1.h>

void setup() {
   Serial.begin(115200);
}

void loop() {
   cool_library_function(); //from my_lib1.h
}
