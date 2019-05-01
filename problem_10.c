#include <stdio.h>

/**
 * @param {unsigned int} number
 * @return {char} is prime
 **/
char isPrime(unsigned int number) {
    return 0;
}

int main() {
	long acc = 1;
	for (int i = 1 ; i < 2000000 ; i += 2) {
		if (isPrime(i)) acc+=i;
	}

	printf("%li \n", acc);

	return 0;
}
