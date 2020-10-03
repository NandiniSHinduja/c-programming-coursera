#include<stdio.h>
#include<math.h>
int main(void)
{
int arr[5];
int a;
int sum;
double avg;
arr=[234, 343, 543, 654, 236];
for(a=0;a<=4;a++)
{
sum=sum+arr[a];
}
avg=sum/5;
printf("the avg weight of elephants is %lf", avg);
return 0;
}