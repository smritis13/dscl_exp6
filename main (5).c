/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void push(int);
void pop();
void display();
int stk[10];
int top=-1;
int data;
int main()
{
	int choice;
	do
	{
		printf("\n 1. Push \n 2. Pop \n 3. Display \n");
		scanf("%d",&choice);
		if(choice==1)
		{
			scanf("%d",&data);
			push(data);
		}
		else if(choice==2)
		{
			pop();
		}
		else if(choice==3)
		{
			display();
		}
		else
		{
			printf("Invalid input");
		}
		
	}while(choice!=0);
}

void push(int data)
{
	if(top==9)
	{
		printf("overflow");
	}
	else
	{
		top=top+1;
		stk[top]=data;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("underflow");
	}
	else
	{
		top=top-1;
	}
}

void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\n %d",stk[i]);
		}
	}
}
