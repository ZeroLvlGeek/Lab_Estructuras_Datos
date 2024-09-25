#include <iostream>
using namespace std;

void machaca1(int x, int* y)
{
    *y = x;
    return;
}

void machaca2(int x, int& y)
{
    y = x;
    return;
}

int main(int argc, char** argv)
{
    int a, b;
    cout << "Escribe dos datos enteros: " << endl;
    cin >> a >> b;

    int copia = b;

    cout << "Antes de machaca1: " << "a = " << a << " y b = " << b << endl;
    machaca1(a, &b);

    cout << "Después de machaca1: " << "a = " << a << " y b = " << b << endl;
    b = copia; // restauramos b para probar el segundo método

    cout << "Antes de machaca2: " << "a = " << a << " y b = " << b << endl;
    machaca2(a, b);

    cout << "Después de machaca2: " << "a = " << a << " y b = " << b << endl;

    return 0;
}
