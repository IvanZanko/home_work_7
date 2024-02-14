#include <stdio.h>

void shiftArrayRight(int arr[], int size, int shift) {
    int i, j;
    int temp;


    for (i = 0; i < shift; i++) {
        temp = arr[size - 1]; 
        for (j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1]; 
        }
        arr[0] = temp; 
    }
}

int main() {
    int arr[12];
    int i;

    for (i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }

    shiftArrayRight(arr, 12, 4);

    for (i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}