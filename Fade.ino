int led = 6; // Pino do LED
int brightness = 0; // Intensidade do brilho do LED
int fadeAmount = 5; // Em quantos pontos aplicar o fade no LED
void setup() {
// define o pino 6 como saida:
pinMode(led, OUTPUT);
}
// o loop roda em sequencia continuamente:
void loop() {
// define o brilho do pino 6:
analogWrite(led, brightness);
// muda o brilho para o proximo loop:
brightness = brightness + fadeAmount;
// inverte a direcao do fade
if (brightness == 0 || brightness == 255) {
 fadeAmount = -fadeAmount ;
}
// aguarda 25 milissegundos para ver o efeito dimer:
delay(25);
}
