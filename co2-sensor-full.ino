int led = 13;
int sensor = A0;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = analogRead(sensor);

  Serial.println(sensorValue);
  
  if (sensorValue <= 40) {
    digitalWrite(led, LOW);
  }

  else if (sensorValue > 40 && sensorValue < 50) {
    digitalWrite(led, HIGH);
    delay (500);
    digitalWrite(led, LOW);
    delay (500);
  }

  else {
    digitalWrite(led, HIGH);
    delay (100);
    digitalWrite(led, LOW);
    delay(100);
  }
}
