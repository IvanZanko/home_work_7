#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, 10, sizeof(int), compare);

    int currentNum = arr[0];
    int count = 1;
    int maxCount = 1;
    int mostFrequentNum = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] == currentNum) {
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
                mostFrequentNum = currentNum;
            }
            currentNum = arr[i];
            count = 1;
        }
    }

    if (count > maxCount) {
        mostFrequentNum = currentNum;
    }

    printf("%d\n", mostFrequentNum);

    return 0;
}