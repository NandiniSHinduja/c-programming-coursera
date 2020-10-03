#include<stdio.h>
#include<math.h>
int main(void)
{
double x;
int result;
printf("Enter a value between 0 and 1");
scanf("%lf", &x);
result=sine(x);
printf("The result is %lf", result);
return 0;
}