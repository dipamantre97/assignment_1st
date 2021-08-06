#include<stdio.h>
 
int main()
 {
 
   int rad;
   float PI = 3.14, area, ci;
 
   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);
 
   area = PI * rad * rad;
   printf("\nArea of circle : %f ", area);
 
   ci = 2 * PI * rad;
   printf("\nCircumference : %f ", ci);
 
   return (0);
}

/*output*/

Enter radius of circle: 1

Area of circle : 3.140000
Circumference : 6.280000 
