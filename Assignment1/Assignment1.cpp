// Assignment1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "Multiplication Table" << endl
		<< "   1\t2\t3\t4\t5\t6\t7\t8\t9\t10" << endl
		<< "_________________________________________________"
		<< "_________________________" << endl;
	for (int i = 1; i < 11; i++)
	{
		cout << i << " |";
		for (int j = 1; j < 11; j++)
		{
			cout << j * i << '\t';
		}
		cout << endl;
	}
	
    return 0;
}

