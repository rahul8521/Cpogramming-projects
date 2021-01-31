#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	printf("\n\n\t\t\t**********Welcome to first minor project **********");
	printf("\n");
	int i=1;
	char opt;
	while(i)
	{
		options();
		printf("\n\n\t\t\t");
		opt=getch();
		switch(opt)
		{
			case '+':
				addition();
				break;
			case '-':
				substraction();
				break;
			case '*':
				multiplication();
				break;
			case '/':
				division();
				break;
			case 'r':
			case 'R':
				modulus();
				break;
			case'^':
				power();
				break;
			case 's':
			case 'S':
				squareroot();
				break;
			case '!':
				fact();
				break;
			case 'Q':
			case 'q': 
			   exit(1);		
				break;
			case 'D':
			case 'd':
				break;
			default:
				printf("\n\t\t\tunavailable option");

		}
	}
	return 0;
}
void options()
{
	printf("\n\n\t\t\tEnter your options: ");
	printf("\n\n\t\t\tEnter + for addition");
	printf("\n\t\t\tEnter - for subtraction");
	printf("\n\t\t\tEnter * for multiplication");
	printf("\n\t\t\tEnter / for division");
	printf("\n\t\t\tEnter r for modulus");
	printf("\n\t\t\tEnter ^ for power");
	printf("\n\t\t\tEnter s for square root");
	printf("\n\t\t\tEnter ! for factorial");
	printf("\n\t\t\tEnter q to quit");
	printf("\n\t\t\tEnter d to return to main menu");
}
void addition()
{
	int a,b,sum;
	printf("\n\t\t\tEnter two integers: ");
	scanf("%d %d", &a, &b);
	sum=a+b;
	printf("\n\t\t\tSum= %d", sum);
}
void substraction()
{
	int a,b,res;
	printf("\n\t\t\tEnter two integers: ");
	scanf("%d %d", &a, &b);
	res=a-b;
	printf("\n\t\t\tSubtraction result= %d", res);
}
void multiplication()
{
	int a,b,res;
	printf("\n\t\t\tEnter two integers: ");
	scanf("%d %d", &a, &b);
	res=a*b;
	printf("\n\t\t\tMultiplication result= %d", res);
}
void division()
{
	int a,b;
	float res;
	printf("\n\t\t\tEnter two integers: ");
	scanf("%d %f", &a, &b);
	res=a/b;
	printf("\n\t\t\tResult of division= %.3f", res);
}
void modulus()
{
	int a,b,res;
	printf("\n\t\t\tEnter two integers: ");
	scanf("%d %d", &a, &b);
	res=a%b;
	printf("\n\t\t\tRemainder= %d", res);
}
void power()
{
	int a,b;
	double res;
	printf("\n\t\t\tEnter the base and power: ");
	scanf("%d %d", &a, &b);
	res=pow(a,b);
	printf("\n\t\t\tResult= %.2lf", res);
}
void squareroot()
{
	int a;
	float res;
	printf("\n\t\t\tEnter the integer: ");
	scanf("%d", &a);
	res=sqrt(a);
	printf("\n\t\t\tResult of square root= %.2f", res);
}
void fact()
{
	int a,i;
	double res=1;
	printf("\n\t\t\tEnter the integer: ");
	scanf("%d", &a);
	for(i=a;i>=1;i--)
		res*=i;
	printf("\n\t\t\tResult of factorial= %.2lf", res);
}
