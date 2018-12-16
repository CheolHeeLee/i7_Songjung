#include "pch.h"
#include "stack1.h"
#include <iostream>
#include <complex>
#include <array>

using namespace std;

int main()
{
	array<string, 3>  myArray = { "Hi", "There!", "Hello" };
	int a;
	Stack<int> intStack;
	Stack<string> stringStack;

	
	for (int i =0 ; i<10; i++)
		intStack.push(i);

	for (int i = 0; i < 10; i++)
	{ 
		a = intStack.pop();
		cout << a << endl;
	}
	
	//cout << myArray.size() << endl;

	for (int i = 0; i < myArray.size(); i++)
		stringStack.push(myArray[i]);

	stringStack.top();

	for (int i = 0; i < myArray.size(); i++)
		cout << stringStack.pop() << endl;	
	
}
