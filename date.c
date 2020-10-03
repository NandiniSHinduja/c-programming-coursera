#include<stdio.h>
int main(void)
{
int d;
int result;
typedef enum month{ jan, feb, mar, apr, may, jun, jul, aug, sept, oct, nov, dec} ;
typedef struct date{ month m; int d};
printf("Enter the month");
printf("Enter the date");
scanf("%d", &date);
scanf("%c", &month);
result=d+1;
printf(" Next date is %c %d", month, result);
return 0;
}