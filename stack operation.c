#include<stdio.h>
int stack[10],choice,n,top,x,i;
int main()
{
	top=-1;
	printf("\nEnter The Size Of Stack:");
	scanf("%d",&n);
	printf("\nSTACK IMPLEMENTATION USING ARRAYS\n");
	do
	{
		printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
		printf("\nEnter The Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			default:
			{
				printf("\nInvalid Choice\n");
			}	
		}
	}
	while(choice!=4);
	return 0;
}

void push()
{
	if(top>= n-1)
	{
	printf("\nSTACK OVERFLOW\n");
	}
	else 
	{
		printf("Enter A Value To Be Pushed:");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("\nSTACK UNDERFLOW\n");
	}
	else
	{
	printf("\nThe Popped Element Is %d",stack[top]);
	top--;	
	}
}
void display()
{
	if(top>=0)
	{
	printf("\nELEMENTS IN THE STACK");
	for(i=top;i>=0;i--)
	printf("\n%d",stack[i]);
	}
	else
	{
		printf("\nEMPTY STACK\n");
	}
}
