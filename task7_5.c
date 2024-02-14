#include <stdio.h>
#include <stdlib.h>

int isSecondDigitZero(int num) {
    num = abs(num);

    int digit; 
    for (int i = 0; i < 2; i++) {
        digit = num % 10;
        num /= 10;
    }

    if (digit == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int result[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        if (isSecondDigitZero(arr[i])) {
            result[count] = arr[i];
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}