const int NO_BUTTON_PRESSED = 9999999;

const int BTN1 = A0;
const int BTN2 = A1;
const int BTN3 = A2;

const int BUZZER = A5;

const int A = 13;
const int B = 12;
const int C = 11;
const int D = 10;
const int E = 9;
const int F = 8;
const int G = 7;
const int H = 6;
const int I = 5;
const int J = 4;
const int K = 3;
const int L = 2;
const int M = A3;
const int N = A4;

void setup()
{
  clearNotes();
  Serial.begin(9600);
}

void loop()
{
  Serial.println("BTN1: " + ((String) analogRead(BTN1)));
  Serial.println("BTN2: " + ((String) analogRead(BTN2)));
  Serial.println("BTN3: " + ((String) analogRead(BTN3)));
  Serial.println();
  delay(300);
}

void aloop()
{
  switch (getActiveButton())
    {
    default: clearNotes(); break;   
    case 0: killAllBut(A, B); break;
    case 1: killAllBut(B, C); break;
    case 2: killAllBut(C, D); break;
    case 3: killAllBut(E, F); break;
    case 4: killAllBut(G, H); break;
    case 5: killAllBut(I, J); break;
    case 6: killAllBut(A, C); break;
    case 7: killAllBut(A, F); break;
    case 8: killAllBut(A, H); break;
    case 9: killAllBut(A,K); break;
    case 10: killAllBut(A, L); break;
    case 11: killAllBut(A, M); break;
    case 12: killAllBut(A, N); break;
    case 13: killAllBut(N, A); break;
    }
}

void clearNotes()
{
  killPin(A); killPin(B); killPin(C); killPin(D);
  killPin(E); killPin(F); killPin(G); killPin(H);
  killPin(I); killPin(J); killPin(K); killPin(L);
  killPin(M); killPin(N);
}

void nDo()
{
  killAllBut(M, A);
}

void nRe()
{

}

void nMi()
{

}

void nFa()
{

}

void nSol()
{

}

void nLa()
{

}

void nSi()
{

}

void nDo2()
{

}

void sendPin(int pin)
{
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
}

void receivePin(int pin)
{
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
}

void killPin(int pin)
{
  pinMode(pin, INPUT);
  digitalWrite(pin, LOW);
}

void killAllBut(int pinHigh, int pinLow)
{
  clearNotes();
  sendPin(pinHigh);
  receivePin(pinLow);
}

int getActiveButton()
{
  int activeButton;

  activeButton = readButton(BTN1);
  if (activeButton == NO_BUTTON_PRESSED) activeButton = readButton(BTN2);
  if (activeButton == NO_BUTTON_PRESSED) activeButton = readButton(BTN3);

  return activeButton;
}

int readButton(int analogPin)
{
  int aRead = analogRead(analogPin);

  if (aRead > 200 && aRead < 210) return 0;
  else if (aRead > 250 && aRead < 260) return 1;
  else if (aRead > 335 && aRead < 345) return 2;
  else if (aRead > 370 && aRead < 380) return 3;
  else if (aRead > 430 && aRead < 440) return 4;
  else if (aRead > 460 && aRead < 470) return 5;
  else if (aRead > 500 && aRead < 520) return 6;
  else if (aRead > 522 && aRead < 540) return 7;
  else if (aRead > 560 && aRead < 575) return 8;
  else if (aRead > 575 && aRead < 590) return 9;
  else if (aRead > 600 && aRead < 630) return 10;
  else if (aRead > 640 && aRead < 657) return 11;
  else if (aRead > 657 && aRead < 680) return 12;
  else if (aRead > 700 && aRead < 760) return 13;

  return NO_BUTTON_PRESSED;
}

void testLoop()
{
  killAllBut(C, A);
  delay(100);
  killAllBut(D, A);
  delay(100);
  killAllBut(E, A);
  delay(100);
  killAllBut(F, A);
  delay(100);
  killAllBut(G, A);
  delay(100);
  killAllBut(H, A);
  delay(100);
  killAllBut(I, A);
  delay(100);
  killAllBut(J, A);
  delay(100);
  killAllBut(K, A);
  delay(100);
  killAllBut(L, A);
  delay(100);
  killAllBut(M, A);
  delay(100);
  killAllBut(N, A);
  delay(100);

  killAllBut(A, C);
  delay(100);
  killAllBut(A, D);
  delay(100);
  killAllBut(A, E);
  delay(100);
  killAllBut(A, F);
  delay(100);
  killAllBut(A, G);
  delay(100);
  killAllBut(A, H);
  delay(100);
  killAllBut(A, I);
  delay(100);
  killAllBut(A, J);
  delay(100);
  killAllBut(A, K);
  delay(100);
  killAllBut(A, L);
  delay(100);
  killAllBut(A, M);
  delay(100);
  killAllBut(A, N);
  delay(100);

  killAllBut(A, B);
  delay(100);
  killAllBut(B, A);
  delay(100);
  killAllBut(B, C);
  delay(100);
  killAllBut(C, B);
  delay(100);
  killAllBut(C, D);
  delay(100);
  killAllBut(D, C);
  delay(100);
  killAllBut(D, E);
  delay(100);
  killAllBut(E, D);
  delay(100);
  killAllBut(E, F);
  delay(100);
  killAllBut(F, E);
  delay(100);
  killAllBut(F, G);
  delay(100);
  killAllBut(G, F);
  delay(100);
  killAllBut(G, H);
  delay(100);
  killAllBut(H, G);
  delay(100);
  killAllBut(H, I);
  delay(100);
  killAllBut(I, H);
  delay(100);
  killAllBut(I, J);
  delay(100);
  killAllBut(J, I);
  delay(100);
  killAllBut(J, K);
  delay(100);
  killAllBut(K, J);
  delay(100);
  killAllBut(K, L);
  delay(100);
  killAllBut(L, K);
  delay(100);
  killAllBut(L, M);
  delay(100);
  killAllBut(M, L);
  delay(100);
  killAllBut(M, N);
  delay(100);
  killAllBut(N, M);
  delay(100);
}

