int SensorPin=A0;
int tiempoEspera=1000;
void setup() {
  // put your setup code here, to run once:
   pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
   pinMode(13, OUTPUT);
   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int humedad=analogRead(SensorPin);
   Serial.println(humedad);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  if (humedad > 900) {
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  } else {
    if (humedad > 700) {
      digitalWrite(11, HIGH);
    } else {
      if (humedad > 500) {
        digitalWrite(10, HIGH);
      } else {
        if (humedad > 400) {
          digitalWrite(9, HIGH);
        } else {
          digitalWrite(8, HIGH);
          
        }
      }
    }
  }
 
  delay(100); 
    }
