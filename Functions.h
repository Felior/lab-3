#pragma once

class SqPolynomial {
private:
	double a = 1, b = 0, c = 0, d = 0;
public:
	class IncorrectPolynomialException {
	};
	SqPolynomial() {}
	SqPolynomial(double a, double b, double c);
	SqPolynomial(const SqPolynomial &p);
	void getValuesAtGivenPoint(double x);
	void rootsCounter();
	void findRoots();
	void findMinMax();
	void polynomialOutput();
};