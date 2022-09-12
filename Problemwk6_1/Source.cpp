#include <stdio.h>

int Combination(int n, int r);
int Factorial(int n);
int main() {
	int n;
	printf("N = ");
	scanf_s("%d", &n, sizeof(n));
	int handshake = Combination(n, 2);
	printf("Handshake = %d", handshake);
	return 0;
}

int Factorial(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * Factorial(n - 1);
	}
	
}

int Combination(int n, int r) {
	int result = Factorial(n) / (Factorial(r) * Factorial(n - r));
	return result;
}
