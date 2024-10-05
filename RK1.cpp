#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
    double suma, a;
    suma = 0;
    for (int n = 1; n < 11; ++n)
    {
        a = 1 / pow(n, 1.5);
        suma += a;
    }
    cout << suma;
}
