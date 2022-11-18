#include <stdio.h>
	int main() {
		int a, b, c, d;
		printf("Enter first side length: ");
		scanf("%i", &a);
		printf("Enter second side length: ");
		scanf("%i", &b);
		printf("Enter third side length: ");
		scanf("%i", &c);
		printf("Enter fourth side length: ");
		scanf("%i", &d);
		printf(". %i\n", a+b+c+d);
		return 0;
	}
