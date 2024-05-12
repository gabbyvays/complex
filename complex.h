//--------------- complex.h ---------------
//Gabrielle Vays

#include <iostream>

using namespace std;

class Complex
{
public:
    Complex(); //Default
    Complex(double a); // conversion constructor from double to Complex
    Complex(double a, double b); // Parameterized constructor
    Complex operator+ (const Complex& c1) const; //+ operator member
    Complex operator- (const Complex& c1) const; // - operator member
    friend Complex operator-(const Complex& complex); //negation operator friend
    friend Complex operator*(const Complex& a, const Complex& b); //* operator friend
    Complex complement() const; //Complement member
    friend ostream& operator<<(ostream& os, const Complex& c); // output friend
    friend istream& operator>>(istream& is, Complex& c); //input friend
    bool operator== (const Complex& c) const; //equality operator member

private:
    double real;
    double imag;

};