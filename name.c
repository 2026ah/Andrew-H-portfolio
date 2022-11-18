#include <stdio.h>

int main() {
	char name[30];
	printf("Enter the name of your character: ");
	scanf("%s", &name);
	printf("%s\n has died due to the consumption of 5kg of raw asbestos", name);
	return 0;
}
