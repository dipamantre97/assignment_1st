#include <stdio.h>
int main()
{ 
//arithmatic operator
    int a = 9,b = 4, c;
    
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;                    // % cant be used with float and double
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}
