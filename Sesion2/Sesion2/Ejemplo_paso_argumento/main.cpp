#include <iostream>
using namespace std;

// is there a need to put returns? I think they are procs
int cuadPorValor(int a)
{
    return a = a * a;
}

void cuadPorInd(int* b)
{
    *b = (*b) * (*b);
}

void cuadPorRef(int& c)
{
    c = c * c;
}

int main(int argc, char** argv)
{
    int a = 5, b = 6, c = 7;
    cuadPorValor(a);
    cuadPorInd(&b);
    cuadPorRef(c);
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    return 0;
}
