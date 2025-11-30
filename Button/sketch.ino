int button = 2;

void setup()
{
  pinMode(button, INPUT);
}

void loop()
{
  int button_state = digitalRead(button);
}
