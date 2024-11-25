#include <stdio.h>

int main() {
	int number = 13;
	int num;
	
	do {
		printf("Nhap mot so bat ki : ");
		scanf("%d", &num); 
	} while (num != number);
	
	printf("Ban da nhap dung : %d.\n", number); 
	
	return 0;
} 
