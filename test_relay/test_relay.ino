int relayPin = 3;// define pin for relay

void setup() {
  // Robojax.com relay tutorial 20181012
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600);// initialize serial monitor
  Serial.println("Robojax.com Relay Module");
  digitalWrite(relayPin, HIGH);// turn relay ON
  delay(2000);// wait for boot
}

void loop() {
  // Robojax.com relay tutorial 20181012
  digitalWrite(relayPin, HIGH);// turn relay ON
    Serial.println("Relay ON");
  delay(300);// wait for 5 seconds
   
  
  digitalWrite(relayPin, LOW);// turn relay OFF
       Serial.println("Relay OFF");
  delay(1000);// wait for 3 secons

}
