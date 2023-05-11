#define LED_VERMELHO 13
#define POTENCIOMETRO A0

void setup(){
    pinMode(LED_VERMELHO, OUTPUT);
    pinMode(POTENCIOMETRO, INPUT);
}

void loop(){
    int potValue = analogRead(POTENCIOMETRO);
    int tempo = map(potValue, 0, 1023, 0, 255);
    digitalWrite(LED_VERMELHO, HIGH);
    delay(tempo);
    digitalWrite(LED_VERMELHO, LOW);
    delay(tempo);
}