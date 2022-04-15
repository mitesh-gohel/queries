//To make linked list and print it

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *next;
	struct node *prev;
};

struct node *add(struct node*);
void display(struct node *);

int main()
{
	struct node *head = NULL;
	while(1)
	{
		char op = 0;
		printf("1 for add element in linked list or create a link-list :\n");
		printf("2 for displaying linked list :\n");
		printf("3 for quit :\n");
		printf("Brfore scanf head = %p\n", head);
		scanf("%d", &op);  //due to this scanf, head value is being change, becasue we try to take number input from user, and store it in char variable
		printf("After scanf head = %p\n", head);
		switch(op)
		{
			case 1:
				head = add(head);
				break;
			case 2 :
				display(head);
				break;
			case 3 :
				printf("Quiting...\n");
				exit(0);
			default :
				printf("Invalid option\nPlease try again\n");
		}
		printf("\n");
	}
	return 0;
}

struct node *add(struct node *head)
{
	struct node *new_node = malloc(sizeof(struct node));
	printf("Enter a number :");
	scanf("%d", &(new_node->info));
	new_node->next = NULL;
	if(head)
	{
		struct node *cur_node = head;
		while(cur_node->next)
			cur_node = cur_node->next;
		new_node->prev = cur_node;
		cur_node->next = new_node;
	}
	else
	{
		new_node->prev = NULL;
		head = new_node;
	}
	return head;
}


void display(struct node *head)
{
	while(head)
	{
		printf("%d ", head->info);
		head = head->next;
	}
	printf("\n");
}


/*  ===== Output =====
mitesh@mitesh-IdeaPad-3i:~/mitesh_workspace/practice/c_practice$ ./a.out 
1 for add element in linked list or create a link-list :
2 for displaying linked list :
3 for quit :
Brfore scanf head = (nil)
1
After scanf head = (nil)
Enter a number :45

1 for add element in linked list or create a link-list :
2 for displaying linked list :
3 for quit :
Brfore scanf head = 0x5609bcd5cac0
2
After scanf head = 0x5609bc000000
Segmentation fault (core dumped)
mitesh@mitesh-IdeaPad-3i:
*/
