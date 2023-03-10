#include <stdio.h>
int main()
{
    int n;

    printf("Enter the positive integers: ");
    scanf("%d", &n);

   printf("Factorial of %d = %d", n, fact(n));
   return 0;
}
int fact(int n){
    if(n>=1)
    
    
    return n*fact(n-1);
    else
        return 1;
}
