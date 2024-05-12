//--------------- main.cpp ---------------
//Gabrielle Vays

#include <iostream>
#include "complex.h"

using namespace std;
int main()
{
    Complex c1, c2(4), c3(1, 7), c4(12, 5);
    cout << "c1 = " << c1 << '\n';
    cout << "c2 = " << c2 << '\n';
    cout << "c3 = " << c3 << '\n';
    cout << "c4 = " << c4 << '\n';

    cout << "Enter the first complex number in this format: (real) (imag): ";
    cin >> c1;

    cout << "Enter the second complex number in this format: (real) (imag): ";
    cin >> c2;

    cout << "\n\n";
    cout << c1 << " + " << c2 << " = " << c1 + c2 << '\n';
    cout << c1 << " - " << c2 << " = " << c1 - c2 << "\n";
    cout << c1 << " * " << c2 << " = " << c1 * c2 << '\n';

    cout << "The negation of c3 is: " << -c3 << '\n';
    cout << "The complement of c4 is:  " << c4.complement() << '\n';

    if (c1 == c2) 	cout << c1 << " == " << c2 << " is TRUE\n";
}