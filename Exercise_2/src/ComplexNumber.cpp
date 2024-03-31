#include "ComplexNumber.hpp"

namespace ComplexNumberLibrary{


// Funzione che permette di vedere se un numero è uguale a zero a meno di una certa tolleranza
bool circaUgualeZero(double n, double tol)
{
    return fabs(n) < tol;
}

ostream& operator<<(ostream& os, const ComplexNumber &c)
{
    if(circaUgualeZero(c.parteReale,1e-6) && circaUgualeZero(c.parteImmaginaria,1e-6))
        os << 0;
    else if(circaUgualeZero(c.parteImmaginaria,1e-6))
        os << c.parteReale;
    else if(circaUgualeZero(c.parteReale,1e-6))
        os << c.parteImmaginaria << "i";
    else if(c.parteImmaginaria < 0)
        os << c.parteReale << c.parteImmaginaria << "i";
    else
        (os << c.parteReale << "+" << c.parteImmaginaria << "i");
    return os;
}


ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2)
{
    ComplexNumber c(c1.parteReale + c2.parteReale, c1.parteImmaginaria + c2.parteImmaginaria);
    return c;
}

ComplexNumber operator==(const ComplexNumber &c1, const ComplexNumber &c2)
{
    ComplexNumber d(fabs(c1.parteReale - c2.parteReale), fabs(c1.parteImmaginaria - c2.parteImmaginaria));
    return d;
}

ComplexNumber creaConiugato(const ComplexNumber &c)
{
    ComplexNumber coniugato(c.parteReale,-c.parteImmaginaria);
    return coniugato;
}

ostream& uguali(ostream& ug, const ComplexNumber &c)
{
    if (c.parteReale < 1e-6 && c.parteImmaginaria < 1e-6)
        ug << "I numeri sono uguali" << endl;
    else
        ug <<  "I numeri sono diversi a meno di una costante" << endl;
    return ug;
}

}
