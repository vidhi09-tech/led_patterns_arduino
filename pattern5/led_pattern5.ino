//pin declartaion
//pin mode declaration
//pin data declaration
int led1 = 12;
int led2 = 11;
int led3 = 9;
int led4 = 6;
int led5 = 4;
int led6 = 2;

void setup()
{
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
    pinMode(led6, OUTPUT);
}
void loop()
{
    digitalWrite(led2, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led6, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led6, LOW);
    delay(1000);

    digitalWrite(led1, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led5, HIGH);
}