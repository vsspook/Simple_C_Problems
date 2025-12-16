#include <stdio.h>

void reverseSubarray(int* start, int n) {
    int* left = start;
    int* right = start + n - 1;

    while (left < right) {

        int temp = *left;
        *left = *right;
        *right = temp;


        left++;
        right--;
    }
}

int main() {
    int arr[10];


    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }


    int start, n;
    scanf("%d %d", &start, &n);


    int startIndex = start - 1;
    reverseSubarray(&arr[startIndex], n);

    for (int i = 0; i < 10; i++) {
        printf("%d", arr[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}