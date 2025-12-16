#include<stdio.h>
void print(char *a) {
	int i = 0;
	while (*(a+i) != '\0') {
		printf("%c", a[i]);
		i++;
	}
	printf("\n");
}
int main() {
	char c[10] = "Hello";
	print(c);
	return 0;

}