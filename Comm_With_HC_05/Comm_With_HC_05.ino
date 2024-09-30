/*======================================================*
                      Setup Block
  ======================================================*/
void setup() 
{
  // Initialize Serial for USB communication (Serial Monitor)
  Serial.begin(9600);
  while (!Serial) 
  {
    // Wait for Serial monitor to connect
  }
  Serial.println("Teensy 4.0 - AT Command Mode for HC-05");
  
  // Initialize Serial1 for communication with HC-05
  Serial1.begin(9600); // Set baud rate to 9600 for AT mode
}

/*======================================================*
                   Forever Loop Block
  ======================================================*/
void loop() 
{
  // Forward commands from Serial Monitor to HC-05 (via Serial1)
  if (Serial.available()) 
  {
    String command = Serial.readStringUntil('\n');  // Read command from Serial Monitor
    Serial1.println(command);                       // Send command to HC-05 via Serial1
    Serial.print("Sent to HC-05: ");
    Serial.println(command);
  }

  // Read the response from HC-05 and print it to the Serial Monitor
  if (Serial1.available()) 
  {
    String response = Serial1.readStringUntil('\n'); // Read response from HC-05
    Serial.print("Received from HC-05: ");
    Serial.println(response);                        // Print response to Serial Monitor
  }
}
