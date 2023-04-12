#include "Functions.h"
#include <iostream>

SqPolynomial::SqPolynomial(double a, double b, double c) {
	if (a == 0) {
		std::cout << "The polynomial is entered incorrectly";
		throw IncorrectPolynomialException();
	}

	this->a = a;
	this->b = b;
	this->c = c;

	d = b * b - (4 * a * c);
}

SqPolynomial::SqPolynomial(const SqPolynomial &p) {
	a = p.a;
	b = p.b;
	c = p.c;
}

void SqPolynomial::getValuesAtGivenPoint(double x) {
	std::cout << "The value of the polynomial at the point " << x << ": " << a * x * x + b * x + c << '\n';
}

void SqPolynomial::rootsCounter() {
	if (d < 0)
		std::cout << "There are no roots" << '\n';
	else if (d == 0)
		std::cout << "One root" << '\n';
	else
		std::cout << "Two roots" << '\n';
}

void SqPolynomial::findRoots() {
	if (d < 0)
		std::cout << "There are no real roots in this square polynomial" << '\n';
	else if (d == 0)
		std::cout << "The root of a square polynomial: " << -b / (2 * a) << '\n';
	else {
		double x1 = (-b - sqrt(d)) / (2 * a), x2 = (-b + sqrt(d)) / (2 * a);
		std::cout << "The first root of the square polynomial: " << x1 << "\nThe second root of the square polynomial: " << x2 << '\n';
	}
}

void SqPolynomial::findMinMax() {
	double x = -b / (2 * a);
	double y = a * x * x + b * x + c;
	if (a > 0)
		std::cout << "Minimum of a square polynomial: " << y << '\n';
	else
		std::cout << "Maximum of a square polynomial:: " << y << '\n';
}

void SqPolynomial::polynomialOutput() {
	std::cout << a;
	//Setting the output flag that outputs the '+' sign for positive numbers
	std::cout.setf(std::ios::showpos);
	std::cout << "x^2" << b << "x" << c << '\n';
	//Removing the output flag
	std::cout.unsetf(std::ios::showpos);
}
