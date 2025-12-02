#include<stdio.h>
int main(){
	int a[10] = { 10,7,8,2,6,5,4,3,9,1 };
	int i, j, t;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9 - i; j++) {
			if (a[j] > a[j + 1]) {
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;

			}
		}
	}
	for (int x = 0; x < 10; x++) {
		printf("%d", a[x]);
	}
	return 0;
}

