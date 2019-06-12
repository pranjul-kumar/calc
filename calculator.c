#include<stdio.h>
#include<conio.h>
void main()
{
double a, b, result;
char choice;
clrscr();
result = 0;
printf("Enter two nubers");
scanf("%lf%lf", &a,&b);
printf("Enter your choice: \n + for adition\n - for subtraction\n * for multiplication");
scanf("%d", &choice);
switch(choice){
case +: result = a+b;
	printf("The sum of %lf and %lf is: %lf",a,b,result);
	break;
case -: result = a-b; 
	printf("The difference of %lf and %lf is: %lf",a,b,result);
	break;
case *: break;
default:"invalid choice";
}
getch();
}

