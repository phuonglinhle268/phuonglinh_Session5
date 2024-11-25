#include <stdio.h>
 
 int main() {
 	int a;
	 printf("Nhap so nguyen duong bat ki: ");
	 scanf("%d", &a);
	 
	 if (a < 1 || a > 10) {
	 	printf("Nhap lai so trong khoang 1 den 10.\n"); 
	 } else {
	 	printf("Bang cuu chuong tu so %d: \n", a);
		 for (int i = 1; i <= 10; i++) {
		 	printf("%d * %d = %d\n", a, i, n * i); 
		 }
	 } 
	 return 0; 
	 
 } 
