/*
    Project name : ESP32 LDR photo resistor module
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-ldr-photo-resistor-module
*/

const int ldrPin = 34; // Analog pin connected to the LDR
const int threshold = 2000; // Threshold value to detect light (adjust based on your setup)

void setup() {
  Serial.begin(115200); // Initialize serial communication at 115200 baud rate
}

void loop() {
  // Read the analog value from the LDR
  int ldrValue = analogRead(ldrPin);

  // Print the LDR value to the Serial Monitor
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Check if light is detected based on the threshold
  if (ldrValue > threshold) {
    Serial.println("Light is present.");
  } else {
    Serial.println("No light detected.");
  }

  // Add a delay before the next reading
  delay(1000);
}
