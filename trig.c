#include<stdio.h>
#include<math.h>
int main(void)
{
double value;
double result1, result2;
for(value=0;value<=1;value=value+0.2)
{
result1=sin(value);
result2=cos(value);
printf("value:%lf sine:%lf cosine:%lf", value, result1, result2);
return 0;
}
