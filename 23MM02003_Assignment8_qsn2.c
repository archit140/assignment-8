#include <stdio.h>

int main() {
    int m, n, a, b;

    
    printf("Enter the size of m matrix rows: ");
    scanf("%d", &m);
    printf("Enter the size of m matrix columns: ");
    scanf("%d", &n);
    
    printf("Enter the size of n matrix rows: ");
    scanf("%d", &a);
    printf("Enter the size of n matrix columns: ");
    scanf("%d", &b);

    if (n != a) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    
    int arr1[m][n];
    printf("Enter the elements of array1:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &*(*(arr1 + i) + j));
        }
    }

    
    int arr2[a][b];
    printf("Enter the elements of array2:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &*(*(arr2 + i) + j));
        }
    }

    
    int resultMatrix[m][b];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < b; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < n; k++) {
                resultMatrix[i][j] += *(*(arr1 + i) + k) * *(*(arr2 + k) + j);
            }
        }
    }

    
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
