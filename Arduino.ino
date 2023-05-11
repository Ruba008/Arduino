#define LED_VERMELHO 13

void setup(){
    pinMode(LED_VERMELHO, OUTPUT);
}

void loop(){
    digitalWrite(LED_VERMELHO, HIGH);
    delay(100);
    digitalWrite(LED_VERMELHO, LOW);
    delay(1000);
}