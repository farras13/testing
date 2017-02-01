// latihan 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


void main()
{
int a,b,c;
	for (int a=0; a<=9;a++)
	{
		for (int b=0; b<=9;b++)
		{
			for (int c=0; c<=9;c++)
			{
				if (49*a+7*b+c==286)
				{
					cout << "hasil ";
					cout << a+b+c;
					cout << "\n nilai a";
					cout << a;
					cout << "\n nilai b";
					cout << b;
					cout << "\n nilai c";
					cout << c;
					
				}
			}
		}
	}
	
}
