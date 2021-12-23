// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "dynamic_array.h"

using namespace std;


int main()
{

//int size = 0;
//int* arr = new int[size];

//d_push_back(arr, size, 30);
//d_push_back(arr, size, 4);
//d_push_back(arr, size, 1);
//d_push_back(arr, size, 5);

//d_printArr(arr, size);

//d_clear_all(arr, size);

//d_push_back(arr, size, 9);
//d_push_back(arr, size, 7);
//d_printArr(arr, size);

//delete[] arr;


	int size2 = 0;

	string* arr2 = new string[size2];

	string h = "efefef";

	d_push_back(arr2, size2, "vvvvvvvvvv");
	d_push_back(arr2, size2, "1111111111vvvvvvvvvv");
	d_push_back(arr2, size2, "22211vvvvvvvvvv");
	d_push_back(arr2, size2, "11vvvvvvvvvv");
	d_push_back(arr2, size2, "2211vvvvvvvvvv");
	d_push_back(arr2, size2, "11vvvvvvvvvv");

	d_pop_back(arr2, size2);
	d_pop_back(arr2, size2);
	d_pop_back(arr2, size2);

	d_printArr(arr2, size2);

	delete[] arr2;


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
