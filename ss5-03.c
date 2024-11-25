#include <stdio.h>

int main() {
	int n, tong = 0;
	printf("Nhap so nguyen duong : ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("Nhap lai so nguyen duong.\n");
	} else {
		for (int i = 1; i <= n; i++) {
			sum += 1;
		}
		printf("Tong cac so tu 1 den %d la: %d\n", tong);
	}
	return 0;
}
