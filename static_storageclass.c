#include<stdio.h>
void fun(void);
int main()
{
        fun();
        fun();
        fun();
        return 0;
}
void fun(void)
{
   static  int x=2,y=5;
        printf("x=%d,y=%d\n",x,y);
        x++;
        y++;
}
/*output
 x=2,y=5
 x=3,y=6
 x=4,y=7
 */

