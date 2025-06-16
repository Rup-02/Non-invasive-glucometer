#define PHOTO_DIODE A0  // Photodiode connected to A0

void setup() {
    Serial.begin(9600);  // Start Serial Communication
}

void loop() {
    int lightValue = analogRead(PHOTO_DIODE); 
    int mgdl = lightValue + 60;// Read the analog value
    Serial.print("VALUE IN mg/dl: ");
    Serial.println(mgdl);  // Print the value to Serial Monitor

    delay(500);  // Wait for 500ms before the next reading
}