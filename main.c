#include <stdio.h>

int main() {
	int a;
	int b;
	int c;
	
	if (((scanf("%d" "%d" "%d", &a, &b, &c)) == 3)) {
		printf("%d",a*b);   
	}
	else {
		printf("Error");
		
	}
	return 0;
}