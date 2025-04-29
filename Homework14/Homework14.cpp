// Homework14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void ob(int* x,int*y) {
	int a = 0;
	for (; a < *x; a++) {
		a++;
	}
	int b = 0;
	for (; b < *y; b++) {
		b++;
	}
	*x = b;
	*y = a;


	


}
int main()
{

	int x = 18;
	int y = 8;
	cout << "Before:\n" << "x - " << x<<"\n" << "y - " << y << "\n";
	ob(&x,&y);
	cout << "After:\n" << "x - " << x << "\n" << "y - " << y << "\n";

	


}


