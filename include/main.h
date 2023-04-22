
/******************************************************************************
 * main.h
 * Header for main.cpp
 *****************************************************************************/
#ifndef __MAIN_H__
#define __MAIN_H__

#include <Arduino.h>
//Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        // will store last time LED was updated
// constants won't change. Used here to set a pin number :
const int ledPin =  5;      // the number of the LED pin

// Variables will change :
int ledState = LOW;
// constants won't change :
const long interval = 500;           // interval at which to blink (milliseconds)
#endif