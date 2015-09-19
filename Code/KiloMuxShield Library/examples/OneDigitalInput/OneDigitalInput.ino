#include <KiloMux.h>              // Import class declaration
#include <KiloMuxDefs.h>          // Import KiloMux defines

KiloMux KMShield;                 // KiloMux Shield  

unsigned int buttonInput = 1;     // Shield input where we connected a button or a sensor (1-16). 
                                  // Remember to add a 10K pull-up resistor (from the button input to 5V), 
                                  // or the internal pullup at the setup

void setup() {
  Serial.begin(115200);           // Initialize serial
}

void loop() {
  unsigned int buttonState = 0;                                 // Variable to store analog values
  buttonState = KMShield.digitalReadKM(MUX_A, buttonInput);     // Read digital value from MUX_A and channel 'buttonInput' (1-16)   
  
  Serial.print("Button state: "); Serial.println(buttonState);  // print value at the serial monitor
}

