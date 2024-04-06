#ifndef __COMPLEXNUMBER_H
#define __COMPLEXNUMBER_H

#include <iostream>
#include <cmath>

using namespace std;

namespace ComplexNumberLibrary{

struct ComplexNumber
{
    double parteReale;
    double parteImmaginaria;
    ComplexNumber(double a, double b)
    {
        parteReale = a;
        parteImmaginaria = b;
    }


};

// Definizione di operatori e funzioni
ostream& operator<<(ostream& os, const ComplexNumber &c);

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2);

ComplexNumber operator==(const ComplexNumber &c1, const ComplexNumber &c2);

ComplexNumber creaConiugato(const ComplexNumber &c);

ostream& uguali(ostream& ug, const ComplexNumber &c);

}

#endif
