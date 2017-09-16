#include "SolarTracker.h"

// Declare tracker object
SolarTracker solar();

/**
 * Setup
 */
void setup() { 
    // Initialize object
    solar.begin();
    // Give it a chance to boot up
    delay(2000);
}

void loop() {
    // Set it and forget it...
    solar.calculatePosition(true);
}
