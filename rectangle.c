#include <stdio.h>

int main() {
	int x, y;
	printf("Enter the length of the rectangle: ");
	scanf("%i", &x);
	printf("Enter the width of the rectangle: ");
	scanf("%i", &y);
	printf("The area of your rectangle is %i\n", x*y);
	return 0;
}
