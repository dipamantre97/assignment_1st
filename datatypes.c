#include<stdio.h>
int main()
{
   // datatypes
   int a = 10;
   signed int b=5;
   unsigned int c =9;
   unsigned long int d =50;
   
   char e = 'S';
   signed char f ='c';
   unsigned char g='p';
   
   float h= 2.88;
   double i = 28.888;
   
   
   
   printf("Integer datatype : %d\n",sizeof(a));
   printf("signed int datatype : %d\n",sizeof(b));
   printf("unsigned int datatype : %d\n",sizeof(c));
   printf("unsigned long int datatype : %d\n",sizeof(d));
   printf("char datatype : %d\n",sizeof(e));
   printf("signed char datatype : %d\n",sizeof(f));
   printf("unsigned char datatype : %d\n",sizeof(g));
   printf("float datatype : %d\n",sizeof(h));
   printf("double datatype : %d\n",sizeof(i));
   
   
   
   return 0;
   }
   
   /*output
   Integer datatype : 4
signed int datatype : 4
unsigned int datatype : 4
unsigned long int datatype : 4
char datatype : 1
signed char datatype : 1
unsigned char datatype : 1
float datatype : 4
double datatype : 8
*/
