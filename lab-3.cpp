#include <iostream>
#include "Functions.h"

int main() {
	SqPolynomial a(1, -5, 2);
	a.rootsCounter();
	a.findRoots();
	a.getValuesAtGivenPoint(15);
	a.findMinMax();
	return 0;
}
