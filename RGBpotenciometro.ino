/*
Esta practica consiste en el control de un RGB a partir
de un potenciometro conectado a una entrada analogica del 
arduino
*/


#define ROJO 11
#define AZUL 10
#define VERDE 9
#define POTENCIOMETRO A0

void digitalWriteRGB(byte red, byte blue, byte green)
{
  digitalWrite(ROJO, red);
  digitalWrite(AZUL, blue);
  digitalWrite(VERDE, green);
}

void setup()
{
  pinMode(ROJO, OUTPUT);
  pinMode(AZUL, OUTPUT);
  pinMode(VERDE, OUTPUT);
}

void loop()
{
  int Valorpotenciometro = analogRead(POTENCIOMETRO);
  int mode = map(Valorpotenciometro, 0, 1023, 0, 6);
  
  switch (mode) {
    case 0:
      digitalWriteRGB(HIGH, LOW, LOW);
      break;
    case 1:
      digitalWriteRGB(LOW, HIGH, LOW);
      break;
    case 2:
      digitalWriteRGB(LOW, LOW, HIGH);
      break;
    case 3:
      digitalWriteRGB(HIGH, HIGH, LOW);
      break;
    case 4:
      digitalWriteRGB(HIGH, LOW, HIGH);
      break;
    case 5:
      digitalWriteRGB(LOW, HIGH, HIGH);
      break;
    case 6:
      digitalWriteRGB(HIGH, HIGH, HIGH);
      break;
    default:
      digitalWriteRGB(LOW, LOW, LOW);
      break;
  }
}
