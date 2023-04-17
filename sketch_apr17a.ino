#define sensor 5
#define atuador 6
#define ledVerm 2
#define ledAma 3
#define ledVerde 4
void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(atuador, OUTPUT);
  pinMode(ledVerm, OUTPUT);
  pinMode(ledAma, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}
void loop() {
  if ( digitalRead(sensor) ) //seco
  {
    digitalWrite(ledVerm, HIGH);
    digitalWrite(ledAma, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(atuador, LOW); //liga em baixa
  } else {//umido
    digitalWrite(ledVerm, LOW);
    digitalWrite(ledAma, LOW);
    digitalWrite(ledVerde, HIGH);
    digitalWrite(atuador, HIGH); //desliga em alta
  }
}
