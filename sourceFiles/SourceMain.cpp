#include <iostream>
#include <string>

using namespace std;

struct Balloon
{
	string colour;
	float size;
	float pressure;
};

void printBalloon(Balloon *b);

int main()
{
	Balloon RedBalloon;
	RedBalloon.colour = "Red";
	RedBalloon.size = 11.5f;
	RedBalloon.pressure = 5.2f;
	
	Balloon BlueBalloon = {"Blue", 10.1f, 2.9f};

	Balloon *balloonPtr1, *balloonPtr2;
	balloonPtr1 = &RedBalloon;
	balloonPtr2 = &BlueBalloon;

	printBalloon(balloonPtr1);
	printBalloon(balloonPtr2);

	system("pause");

	return 0;
}

void printBalloon(Balloon *balloon)
{
	cout << "The current balloon:\n";
	cout << "Has a colour of " << balloon->colour << "." << endl;
	cout << "Has a size of " << balloon->size << " cm." << endl;
	cout << "Has a pressure of " << balloon->pressure << " Pascal.\n" << endl;
}