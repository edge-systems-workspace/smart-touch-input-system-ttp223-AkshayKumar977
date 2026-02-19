#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Touch Detection System using TTP223
 * @author AKSHAY_KUMAR
 * @date 2026-02-18
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define touch sensor digital pin (Use pin 2)
int touchpin = 2;

 // TODO 2:
 // Create variable to store touch state
 bool touchState = false;
void setup() {


    Serial.begin(9600);
    pinMode(touchpin, INPUT);

    Serial.println("Touch Detection System Initialized");
}

void loop() {

    touchState = digitalRead(touchpin);
    if (touchState) {
        Serial.println("Touch Detected");
    }
    else {
        Serial.println("Touch Not Detected");
    }

    delay(500);
}
