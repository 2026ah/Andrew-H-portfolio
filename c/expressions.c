#include <stdio.h> 
int main() {
	int a, b;
	char c;

	a = 10;
	b = 20;
	scanf("%c", &c);
	if(a > b) {
		printf("a > b = %i\n", a > b);
	}

	if(c >= 65 && c <= 90) {
		c = c + 32;
	}
	else if(c < 65 || c > 122)
	{
		printf("you entered something dumb\n");
		return 0;
	}
		printf("lowercase = %c\n", c);
	return 0;
}
