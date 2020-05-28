
#include <iostream>
#include "../include/pole.h"
#include "../include/objetosc.h"
using namespace std;

int main()
{
    pole wynik_p;
    objetosc wynik_o;
    double a;
    cout<<"Podaj dlugosc boku: a= ";
    cin>>a;
    wynik_p.oblicz_pole(a);
    wynik_o.oblicz_polec(a);
    wynik_o.oblicz_objetosc(a);
    return 0;
}
