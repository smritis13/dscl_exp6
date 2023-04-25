# dscl_exp6
STACKS
A stack is a linear data structure in which the insertion of a new element and removal of an existing element takes place at the same end represented as the top of the stack.
Basic Operations on Stack
In order to make manipulations in a stack, there are certain operations provided to us.

push() to insert an element into the stack
pop() to remove an element from the stack
top() Returns the top element of the stack.
isEmpty() returns true if stack is empty else false.
size() returns the size of stack.

![image](https://user-images.githubusercontent.com/124857385/234316572-3467b949-bbe0-4dff-a98a-0c7a555bbe62.png)


Applications of the stack:
Infix to Postfix /Prefix conversion
Redo-undo features at many places like editors, photoshop.
Forward and backward features in web browsers
Used in many algorithms like Tower of Hanoi, tree traversals, stock span problems, and histogram problems.
In Memory management, any modern computer uses a stack as the primary management for a running purpose. Each program that is running in a computer system has its own memory allocations
String reversal is also another application of stack. Here one by one each character gets inserted into the stack. So the first character of the string is on the bottom of the stack and the last element of a string is on the top of the stack. After Performing the pop operations on the stack we get a string in reverse order.


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
<img width="367" alt="Screenshot 2023-04-07 195354" src="https://user-images.githubusercontent.com/124857385/231528758-5bbad4e0-1d2e-44c5-b053-504d59f99553.png">
<img width="333" alt="Screenshot 2023-04-07 195442" src="https://user-images.githubusercontent.com/124857385/231528770-17454f99-8d3d-463b-a2b6-9a644cace481.png">
