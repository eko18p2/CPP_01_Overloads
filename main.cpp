#include "Vector.h"
#include <iostream>

using namespace std;

int main() {
	Vector a(2, 1, 4);
	Vector b(1, 1, 3);

	Vector c = a + b;
	
	c.show();
	++c;
	c++;
	c.show();

	cout << a * b << endl;;
	cout << (double)a << endl;
	cout << (a == b) << endl;


	getchar();
	return 0;
}