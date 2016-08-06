/* Nite Lite
 *  Tylor and Rick Lesinszki
 *  8/6/2016 - Changed to Analogwrite to control brightness
 *  8/6/2016 - Changed HW to bright soft white LED 3.6V@35mA
 *  7/30/2016
 *  
 *  TODO
 *  analogWrite(ledPin, brightness); // Set the brightness of the LED
 */

#define ledPin 6
#define photoCell A0

int photoCellValue = 0;
byte brightness = 75;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Welcome to NiteLite project v2.1");
}

void loop() {
  photoCellValue = analogRead(photoCell);
  Serial.println(photoCellValue);
  
  if (photoCellValue > 800) {
    // digitalWrite(ledPin, HIGH);
    analogWrite(ledPin, brightness);
  }

  if (photoCellValue < 450) {
    // digitalWrite(ledPin, LOW);
    analogWrite(ledPin, 0);
  }
  delay(50);
}
