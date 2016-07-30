/* Nite Lite
 *  Tylor and Rick Lesinszki 
 *  7/3/2016
 *  
 *  TODO
 *  analogWrite(ledPin, brightness); // Set the brightness of the LED
 */

#define ledPin 7
#define photoCell A0

int photoCellValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Welcome to NiteLite project v1.1");
}

void loop() {
  photoCellValue = analogRead(photoCell);
  Serial.println(photoCellValue);
  
  if (photoCellValue > 700) {
    digitalWrite(ledPin, HIGH);
  }

  if (photoCellValue < 400) {
    digitalWrite(ledPin, LOW);
  }
  delay(50);
}
