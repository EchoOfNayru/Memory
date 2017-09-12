#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void printInts(int * arr, int size) 
{
	for (int i = 0; i < size; i++) 
	{
		cout << *(arr + i) << endl;
		//cout << arr[i] << endl;
	}
}

void printFloats(float * arr, int size) 
{
	for (int i = 0; i < size; i++) 
	{
		cout << *(arr + i) << endl;
	}
}

void SumofInts(int * arr, int size) 
{
	int total = 0;
	for (int i = 0; i < size; i++) 
	{
		total = total + *(arr + i);
	}
	cout << total << endl;
}

void AvgOfInts(int * arr, int size) 
{
	int total = 0;
	for (int i = 0; i < size; i++) 
	{
		total = total + *(arr + i);
	}
	total = total / size;
	cout << total << endl;
}

void findCount(int target, int *arr, int size) 
{
	int total = 0;
	for (int i = 0; i < size; i++) 
	{
		if (*(arr + i) == target) 
		{
			total++;
		}
	}
	cout << total << endl;
}

void arrCopy(int * srcArr, int srcSize, int *dstArr, int dstSize) 
{
	for (int i = 0; i < srcSize; i++) 
	{
		*(dstArr + i) = *(srcArr + i);
	}
}

void reverseArr(int * arr, int size) 
{
	for (int i = 0; i < size; i++) 
	{
		int placeholder = 0;

	}
}

int main() 
{
	//int * nums = new int[100];
	//for (int i = 0; i < 100; i++) 
	//{
	//	*(nums+i) = i + 1;
	//}
	//printInts(nums, 100);

	//closed 1
	float * nums = new float[100];
	for (int i = 0; i < 100; i++) 
	{
		*(nums + i) = i + 1.53f;
	}
	printFloats(nums, 100);

	//closed 2
	int * adds = new int[100];
	for (int i = 0; i < 100; i++) 
	{
		*(adds + i) = i + i - 4;
	}
	SumofInts(adds, 100);

	//closed 3
	srand(time(NULL));
	int * arrAvg = new int[5];
	for (int i = 0; i < 100; i++) 
	{
		*(arrAvg + i) = rand() % 4;
	}
	AvgOfInts(arrAvg, 5);

	//open 2
	int * arr1 = new int[5];
	int * arr2 = new int[5];
	for (int i = 0; i < 5; i++) 
	{
		*(arr1 + i) = i * 25;
	}
	arrCopy(arr1, 5, arr2, 5);
	printInts(arr2, 5);

	while (true) {}
	delete[] nums;
	delete[] adds;
	delete[] arrAvg;
	delete[] arr1;
	delete[] arr2;
}