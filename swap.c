#include<stdio.h>  
void swap(int x, int y);  
int main()  
{  
    int a, b;  
  
    printf("Enter values for a and b\n");  
    scanf("%d%d", &a, &b);  
  
    printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);  
  
    swap(a, b);  
  
    return 0;  
}  
void swap(int x, int y)  
{  
    x = x + y;
    y = x - y; 
    x = x - y;
    printf("\nAfter swapping: a = %d and b = %d\n", x, y);  
}   
