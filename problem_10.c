#include <stdio.h>

/**
 * @param {unsigned int} number
 * @return {char} is prime
 **/
char isPrime(unsigned int number) {
	// taken from https://forgetcode.com/c/386-prime-number-using-function
	int c;
	for ( c = 2 ; c <= number - 1 ; c++ ) { 
	   if ( number%c == 0 )
	  return 0;
	}
	return 1;
}

int main() {
	long acc = 1;
	for (int i = 1 ; i < 2000000 ; i += 2) {
		if (isPrime(i)) acc+=i;
	}

	printf("%li \n", acc);

	return 0;
}
