//--------------- complex.cpp ---------------
//Gabrielle Vays

#include <iostream>
#include "complex.h"

using namespace std;
Complex::Complex() //Setting both values to 0
{
    real = 0;
    imag = 0;
}
Complex::Complex(double a)//Setting only the real value to user
{
    real = a;
    imag = 0;
}
Complex::Complex(double a, double b)//Setting both real and imag values to user inputted values
{
    real = a;
    imag = b;
}
Complex Complex::operator+ (const Complex& c1) const //adding the real values and the imag values
{
    double total_real, total_imag;
    total_real = real + c1.real;
    total_imag = imag + c1.imag;
    return Complex(total_real, total_imag);
}
Complex Complex::operator- (const Complex& c1) const //subtracting the real values and the imag values
{
    double diff_real, diff_imag;
    diff_real = real - c1.real;
    diff_imag = imag - c1.imag;
    return Complex( diff_real, diff_imag);
}
Complex operator- (const Complex& complex) //performing the negation
{
    return Complex(-complex.real, -complex.imag);
}
Complex operator* (const Complex& a, const Complex& b)//multiplying the real numbers then the imag ones
{
    double total_real, total_imag;
    total_real = a.real * b.real;
    total_imag = a.imag * b.imag;
    return Complex(total_real, total_imag);
}
Complex Complex::complement() const//finding the complement of a complex number by multiplying the imag by -1
{
    return Complex(real, -imag);
}
ostream& operator<<(ostream& os, const Complex& c) //outputs the complex number in the form a + bi
{
    os << c.real << " + " << c.imag << "i";

    return os;
}
istream& operator>>(istream& is, Complex& c) //inputs the values
{
    is >> c.real;
    is >> c.imag;

    return is;
}
bool Complex::operator== (const Complex& c) const //checks if the values are the same
{
    if(real == c.real && imag == c.imag)
    {
        return true;
    }
    else
        return false;
}