#include<stdio.h>
#include<string.h>

int main() {
    char str1[100], str2[100];
    
    printf("Enter a string 1:\n");
    gets(str1);
    int a = strlen(str1);
    printf("The length of string 1 is %d\n", a);
    
    printf("Enter a string 2:\n");
    gets(str2);
    int b = strlen(str2);
    printf("The length of string 2 is %d\n", b);
    
    char final[200]; 
    
    
    strcpy(final, str1);
    
    
    strcat(final, str2);
    
    printf("The final string after concatenation is %s\n", final);

    return 0;
}
