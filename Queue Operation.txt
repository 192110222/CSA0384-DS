#include <stdio.h>
#include<stdlib.h>
#define max 100
int q[max];
int end = - 1;
int start = - 1;
void insert() {
	int item;
	if(end == max - 1)
		printf("Queue Overflow \n");
	else {
		if(start == - 1)
			start = 0;
		printf("Inset the element in queue : ");
		scanf("%d", &item);
		end = end + 1;
		q[end] = item;
	}
	printf("\n");
}
void delete() {
	if(start == - 1 || start > end) {
		printf("Queue Underflow\n");
		return;
	} else {
		printf("Element deleted from queue is : %d\n", q[start]);
		start = start + 1;
	}
}
void display() {
	int i;
	if(start == - 1)
		printf("Queue is empty \n");
	else {
		printf("Queue is : \n");
		for(i = start ; i <= end; i++)
			printf("%d ", q[i]);
		printf("\n");
	}
}
int main() {
	int choice;
	printf("1.Insert\n2.Delete\n3.Display\n");
	while (1) {
		printf("Enter your choice : ");
		scanf("%d", &choice);
		if(choice == 1){
			insert();
		}
		else if(choice == 2){
			delete();
		}
		else if(choice == 3){
			display();
		}
		else{
			printf("Invalid Choice!!\n");
		}
	}
	return 0;
}
