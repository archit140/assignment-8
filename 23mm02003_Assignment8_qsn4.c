#include <stdio.h>

void twice(int *arr, int end) {
    for (int i = 0; i < end; i++) {
        int count = 1; 
        for (int j = i + 1; j < end; j++) {
            if (*(arr + i) == *(arr + j)) {
                count++;
            }
        }
        if (count == 2) {
            printf("\n%d is repeated .", *(arr + i));
        }
    }
}

int main() {
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    twice(arr, n);

    return 0;
}
