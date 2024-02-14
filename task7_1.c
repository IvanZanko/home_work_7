#include <stdio.h>

int main() {
    int arr[5];
    int i;
    float sum = 0;
   
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float average = sum / 5;
    printf("%.3f\n", average);

    return 0;
}