// SOS на азбуке Морзе

const int led = 13;
int note = 440; // Тональность сигнала

// Функция для генерации 3-х точек
void threeDots()
{
  // Конструкция для приращения и завершения цикла
  for (int i=0; i<3; i++) // 
  {
    // Генерация звукового сигнала, включение светодиода,
    // длительность 0,1 сек.
    tone(led, note, 100);
    delay(200);
    // Завершение генерации сигнала и выключение светодиода
    noTone(led);
  }
  delay(300); //
}

//
void threeDashes()
{
  // Конструкция для приращения и завершения цикла
  for (int i=0; i<3; i++) //
  {
    // Генерация звукового сигнала, включение светодиода,
    // длительность 0,3 сек.
    tone(led, note, 300);
    delay(500);
    // Завершение генерации сигнала и выключение светодиода
    noTone(led); 
  }
  delay(300); //
}

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  // Циклично повторяем функции генерации сигнала с задержкой
  threeDots();
  threeDashes();
  threeDots();
  delay(1500);
}
