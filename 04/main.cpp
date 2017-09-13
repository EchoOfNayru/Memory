#include <iostream>
#include "globals.h"
#include "incdec.h"

using namespace std;

static int halfloveCounter = 0;
static int fizzBuzz = 0;

void FizzBuzzing(int& counter, int times) 
{
	for (int i = 0; i < times; i++) 
	{
		counter++;
		if (counter % 3 == 0 && counter % 5 == 0)
		{
			cout << "Fizzbuzz" << endl;
		}
		else if (counter % 3 == 0)
		{
			cout << "Fizz" << endl;
		}
		else if (counter % 5 == 0)
		{
			cout << "Buzz" << endl;
		}
		else
		{
			cout << counter << endl;
		}
	}
}

void releaseHalfLove(int& counter)
{
	counter++;
	if (counter > 2) 
	{
		counter = 1;
	}
	cout << "The game, Half-Love " << halfloveCounter << ", was released!" << endl;
}

void divide(float lhs, float rhs) 
{
	if (rhs == 0) 
	{
		cout << "FATAL ERROR -- DIV BY ZERO\n";
	}
	else 
	{
		cout << lhs / rhs << endl;
	}
}

int main() 
{
	int i = 0;
	while (i < 15)
	{
		i++;
		releaseHalfLove(halfloveCounter);
	}

	while (true) {}
}