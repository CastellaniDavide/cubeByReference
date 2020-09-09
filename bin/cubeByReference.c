/**
 * @file cubeByReference.cpp
 *
 * @version 01.01 2020-08-15
 *
 * @brief Create cube function with reference in c
 *
 * @ingroup cubeByReference
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */
#include <stdio.h>

void cube(int *nPtr);

int main()
{
	int n = 10;

	printf("%d^3 = ", n);

	cube(&n);

	printf("%d\n", n);

	return 0;
}

void cube(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}