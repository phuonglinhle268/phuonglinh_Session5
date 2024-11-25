#include <stdio.h>

int main() {
//In bang cuu chuong tu 1 den 9 
	for (int a = 1; a  <= 9, a++) {
		printf("Bang cuu chuong cua %d la: \n", a);
//Tinh tung bang cuu chuong 
		for (int i = 1; i <= 10; i++) {
			printf("%d * %d = %d\n", a, i, a * i);
		}
//Dong phan biet cac bang cuu chuong  
		printf("\n"); 
	} 
	return 0; 
} 
