#include<stdio.h>
int jiecheng(int i) {
	int n = 1;
	int sum = 0;
	while (n <= i) {
		sum = sum + n;
		n++;
	}
	return sum;

}
int main() {
	int count = 0;
	int num;
	scanf_s("%d",&num);
	int result = 0;
	do{
		result = jiecheng(count);
		count++;
		
	} while (result < num);
		count--;
		result = jiecheng(count);

	int surplus = num - result;
	int fengzi;
	int fengmu;
	if (count % 2 == 0) {
		fengmu = surplus;
		fengzi = count + 1;
	}
	else {
		fengmu = count + 2 - surplus;
		fengzi = surplus;
	}
	printf("%d/%d", fengzi, fengmu);
	return 0;

}