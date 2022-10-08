#include<stdio.h>
int main(){
	int s[100],n,top,m,i,ans = 1,choice;
	printf("Enter the size of the Stack : ");
	if(!(scanf("%d",&n)) || n < 0){
		printf("Invalid Input!!!");
	}
	else{
		top = -1;
		printf("Operations\n1.Push\n2.Pop\n3.Peek\n");
		while(ans){
			printf("\nEnter you Choice : ");
			scanf("%d",&choice);
			if(choice == 1){
				if(top >= n - 1){
					printf("Overflows\n");
				}
				else{
					printf("Enter the Element : ");
					scanf("%d",&m);
					top++;
					s[top] = m;
				}
				printf("\n");
			}
			else if(choice == 2){
				if(top <= -1){
					printf("The Stack is Empty!!\n");
				}
				else{
					printf("%d is popped \n",s[top]);
					top--;
				}
			}
			else if(choice == 3){
				printf("\n");
				if(top >= 0){
					printf("%d\n",s[top]);
				}
				else{
					printf("The Stack is Empty!!\n");
				}
			}
			else{
				printf("Invalid choice!!\n");
			}
			printf("Do you want to Continue ? ");
			scanf("%d",&ans);
			printf("\n");
		}
	}
	return 0;
}
