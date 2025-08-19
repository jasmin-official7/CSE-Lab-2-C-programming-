#include <stdio.h>
int main()
{
float c1, c2, f1, f2;
printf("Enter farenheit temperature:");
scanf("%f", &f1);
c1=(f1-32)*5/9;
printf ("The celcius temperature is:%.2f",c1);
printf("\nEnter celsius temperature:");
scanf("%f", &c2);
f2=(c2*9/5)+32;
printf("The farenheit temperature is:%.2f", f2); 
return 0;
}