#include "objetosc.h"
#include <math.h>
#include <iostream>

using namespace std;

void objetosc::oblicz_polec(double a){
    double wynik=6*pow(a,2);
    cout << "Pole calkowite szescianu wynosi = "<<wynik<<endl;
}

void objetosc::oblicz_objetosc(double a){
    double wynik=pow(a,3);
    cout << "Objetosc szescianu wynosi = "<<wynik<<endl;
}


