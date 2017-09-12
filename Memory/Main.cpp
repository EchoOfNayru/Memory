#include <iostream>
#include <string>

using namespace std;

int sumTwoIntPtrs(int* a, int* b) 
{
	return *a + *b;
}

int difTwoIntPtrs(int* a, int* b) 
{
	return *a + *b;
}

void PrintArray(int *a, int size) 
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << endl;
	}
}

int main() 
{
	int* numAPtr = new int(10);
	int* numBPtr = new int(15);

	cout << "numA: " << *numAPtr << endl;
	cout << "numB: " << *numBPtr << endl;

	int res = sumTwoIntPtrs(numAPtr, numBPtr);
	cout << "sum: " << res << endl;


	//closed 1
	int* superPtr = new int(15);
	int* lamePtr = new int(25);

	float* floatPtr = new float(10.0f);
	bool* boolPtr = new bool(true);
	int* intArrayPtr = new int[5];
	float* floatArrayPtr = new float[5];
	bool* boolArrayPtr = new bool[5];

	//closed 2
	int res1 = difTwoIntPtrs(superPtr, lamePtr);
	cout << "sum: " << res1 << endl;

	//closed 3 
	int* hundred = new int[100];
	for (int i = 0; i < 100; i++) 
	{
		hundred[i] = i + 1;
	}

	

	//Open 1 
	int* byThrees = new int[100];

	for (int i = 0; i < 100; i++) 
	{
		byThrees[i] = (i + 1) * 3;
		//cout << byThrees[i] << endl;
	}
	
	//Open 2
	//PrintArray(byThrees, 100);

	//Open 3
	int userInput = 0;
	int even = 0;
	int odd = 0;
	cout << "How many numbers would you like to provide?" << endl;
	cin >> userInput;
	int* userArray = new int[userInput];
	for (int i = 0; i < userInput; i++) 
	{
		int placeholder = 0;
		cout << "What is number " << i + 1 << endl;
		cin >> placeholder;
		userArray[i] = placeholder;
		if (userArray[i] % 2 == 1)
		{
			odd++;
		}
		else
		{
			even++;
		}
	}
	if (even == odd) 
	{
		cout << "the greatest wall!" << endl;
	}
	else if (even > odd) 
	{
		cout << "Wow! you really do like Even numbers!" << endl;
	}
	else 
	{
		cout << "Wow! you really do like Odd numbers!" << endl;
	}

	//open 4
	bool is21 = false;
	int counter = 0;
	cout << "Lets try to add to 21~!\n";
	cout << "How many numbers do you think you need?\n";
	cin >> userInput;
	int* array21 = new int[userInput];
	for (int i = 0; i < userInput; i++) 
	{
		int placeholder = 0;
		cout << "What is number " << i + 1 << endl;
		cin >> placeholder;
		array21[i] = placeholder;
		counter = counter + array21[i];
	}
	if (counter == 21) 
	{
		cout << "GJ\n";
	}
	else 
	{
		cout << "not true\n";
	}

	cout << "how many favorite games do you have?\n";
	cin >> userInput;
	char* favGames = new char[userInput];
	for (int i = 0; i < userInput; i++) 
	{
		cout << "Whats the name of game " << i + 1 << endl;
		string test;
		getline(cin, test);
	}

	while (true) {}
	delete numAPtr;
	delete numBPtr;
	delete superPtr;
	delete lamePtr;
	delete floatPtr;
	delete boolPtr;
	delete[] intArrayPtr;
	delete[] floatArrayPtr;
	delete[] boolArrayPtr;
	delete[] hundred;
	delete[] byThrees;
	delete[] userArray;
}