
void setup()
{
	Serial1.begin(115200);
    video();
    keyboard_begin();
    sei();
}

void loop()
{
    run();
}
