//Nolan Thoms
//Data Structures Spring 2020
//Due: 2/28/2020
//Lab 3 Stacks

#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	Stack stack;

	cout << "isEmpty: " << stack.isEmpty() << endl;
	cout << "isFull: " << stack.isFull() << endl;

	stack.push(1);
	stack.push(2);
	stack.push(3);

	while (stack.isEmpty() == false)
	{
		cout << "top item: " << stack.Top() << endl;
		stack.pop();
	}

	cout << "isEmpty: " << stack.isEmpty() << endl;
	cout << "isFull: " << stack.isFull() << endl;

	stack.Top();
	stack.~Stack();

	return 0;
}