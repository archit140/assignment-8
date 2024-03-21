#include <stdio.h>

void swap(int m, int *arr[], int x, int y) {
    
    for (int i = 0; i < x; i++) {
        for (int j = i + 1; j < y; j++) {
            int temp = *(*(arr + i) + j);
            *(*(arr + i) + j) = *(*(arr + j) + i);
            *(*(arr + j) + i) = temp;
        }
    }

    
    for (int i = 0; i < x; i++) {
        int j = 0;
        int k = y - 1;
        while (j < k) {
            int temp = *(*(arr + i) + j);
            *(*(arr + i) + j) = *(*(arr + i) + k);
            *(*(arr + i) + k) = temp;
            j++;
            k--;
        }
    }
}

int main() {
    int rotate, m, n;
    printf("Enter the size of m matrix row: ");
    scanf("%d", &m);
    printf("Enter the size of m matrix column: ");
    scanf("%d", &n);

    int arr1[m][n];

    printf("Enter the elements of array1:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the number of times matrix to be rotated: ");
    scanf("%d", &rotate);

    

    
    swap(rotate, (int **)arr1, m, n);

    printf("Matrix after rotation:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
