#include "ComplexNumber.hpp"

namespace ComplexNumberLibrary{


// Operatore che consente di visualizzare il numero complesso scritto correttamente specificando parte reale e immaginaria
ostream& operator<<(ostream& os, const ComplexNumber &c)
{
    if (c.parteImmaginaria < 0)
        os << c.parteReale << c.parteImmaginaria << "i";
    else
        (os << c.parteReale << "+" << c.parteImmaginaria << "i");
    return os;
}

// Operatore somma
ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2)
{
    ComplexNumber c(c1.parteReale + c2.parteReale, c1.parteImmaginaria + c2.parteImmaginaria);
    return c;
}

// Operatore di uguaglianza e funzione che permette di stampare una stringa che specifichi se due numeri complessi sono uguali o meno
ComplexNumber operator==(const ComplexNumber &c1, const ComplexNumber &c2)
{
    ComplexNumber d(fabs(c1.parteReale - c2.parteReale), fabs(c1.parteImmaginaria - c2.parteImmaginaria));
    return d;
}

ostream& uguali(ostream& ug, const ComplexNumber &c)
{
    if (c.parteReale < 2.2e-16 && c.parteImmaginaria < 2.2e-16)
        ug << "I numeri sono uguali" << endl;
    else
        ug <<  "I numeri sono diversi a meno di una costante" << endl;
    return ug;
}

// Funzione che permette di creare il coniugato di un numero complesso
ComplexNumber creaConiugato(const ComplexNumber &c)
{
    double x;
    if (c.parteImmaginaria > 0)
        x = - c.parteImmaginaria;
    else
        (x = fabs(c.parteImmaginaria));

    ComplexNumber coniugato(c.parteReale,x);
    return coniugato;
}

}
