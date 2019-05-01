#include <stdio.h>

/**
 * @param {unsigned int} number
 * @return {char} is prime
 **/
char isPrime(unsigned int number) {
    if (number <= 1) return 0;
    if (number % 2 == 0 && number > 2) return 0;
    for(int i = 3; i < number / 2; i+= 2)
    {
        if (number % i == 0)
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
