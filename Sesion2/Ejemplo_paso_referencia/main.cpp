#include <iostream>
using namespace std;

/* a se pasa por valor; se copia el valor y se pasa
 &b es una referencia; se pasa la variable original
 por tanto, los cambios en a no aplican y los cambios en b si*/
void ejemplo(int a, int& b);

int main(int argc, char** argv)
{
	int x = 2, y = 4;
	cout << "1. x = " << x << " y = " << y << endl;
	ejemplo(x, y);
	cout << "2. x = " << x << " y = " << y << endl;
	return 0;
}

void ejemplo(int a, int& b)
{
	a = 5;
	b = 8;
}