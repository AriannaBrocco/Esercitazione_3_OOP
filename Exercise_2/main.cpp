#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>

using namespace std;
using namespace ComplexNumberLibrary;

int main()
{
    // Operatore di associazione: scrive nel teminale il numero complesso in base al segno della parte reale e di quella immaginaria
    ComplexNumber c(1.5,-7);

    cout << "Questo e' il numero complesso: "<< c << endl;

    // Operatore somma
    ComplexNumber c1(1.8,-2);
    ComplexNumber c2(-1,-3.4);
    ComplexNumber sum = c1 + c2;

    cout << "La somma di "<< c1 << " e " << c2 << " e': " << sum << endl;

    // Operatore di uguaglianza
    ComplexNumber s = c1 == c2;
    uguali(std::cout, s);

    // Creazione del coniugato a partire da un numero complesso
    ComplexNumber coniugato = creaConiugato(c1);

    cout << "Il coniugato di " << c1 << " e': " << coniugato << endl;

    return 0;
}



