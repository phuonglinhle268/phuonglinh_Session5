#include <stdio.h>

int ucln(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main() {
	int number1, number2;
	printf("Nhap so thu nhat: ");
	scanf("%d", &number1);
	printf("Nhap so thu hai: ");
	scanf("%d", &number2);
	
	if (number1 <= 0 || number2 <=0) {
		printf("Nhap 2 so nguyen duong\n");
		return 1;
	}
	int result = ucln(number1, number2);
	printf("UCLN cua %d va %d la: %d.\n", number1, number2, result);
	
	return 0;
}
