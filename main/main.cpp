#include "Arduino.h"

// Bring in setup() and loop() from your converted .cpp (former .ino)
extern void setup(void);
extern void loop(void);

extern "C" void app_main(void)
{
    // Initialize Arduino core inside ESP-IDF
    initArduino();

    // Run setup() once
    setup();

    // Keep calling loop()
    while (true)
    {
        loop();
        delay(10); // give FreeRTOS some breathing room
    }
}
