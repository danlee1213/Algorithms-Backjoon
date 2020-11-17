#include <stdio.h>

int main(){
 int a;
 int b;
 /*
 a = 472;
 b = 385;
    */
 scanf("%d",&a);
 scanf("%d",&b);

 printf("%d\n", a*(b%10));
 printf("%d\n", a*((b/10)%10));
 printf("%d\n", a*(b/100));
 printf("%d\n", a*b);

 return 0;
}