#include <stdio.h>

void shift(int *a, int *b, int *c) {
    int temp = *c;  
    
    *c = *b; 
    *b = *a;  
    *a = temp;
}

int main() {
    int x, y, z;
    printf("Enter the values of num1, num2, num3: ");
    scanf("%d%d%d", &x, &y, &z);
    
    int arr[3];
    shift(&x, &y, &z);
    
    printf("Values after shifting: ");
    printf("%d %d %d",x,y,z);
    printf("\n");

    return 0;
}
