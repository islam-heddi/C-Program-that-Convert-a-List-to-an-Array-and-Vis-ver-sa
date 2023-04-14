#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *intializelinkedlist(struct node *h,int node){
	struct node *p=h;
		for(int i=0;i<node;i++){
			printf("enter a number : ");
			scanf("%d", &p->data);
			p->next=(struct node*)malloc(sizeof(struct node));
			if(i==node-1){
				p->next=NULL;			
			}else{
				p=p->next;
			}
		}
		return h;
}

void linklisttoarr(struct node *head,int n){
	int arr[n];
	struct node *ptr =head;
	int i=0;
	while(ptr!=NULL){
		arr[i]=ptr->data;
		ptr=ptr->next;
		i++;
	}
	printf("\ncheck point\n");
	printf("elements array\n");
	for(int g=0;g<i;g++){
		printf("%d \n", arr[g]);
	}
}

struct node *arrtolinkedlist(int arr[]){
	int length =5;
	struct node *head=(struct node*)malloc(sizeof(struct node));
	struct node *ptr=head;
	for(int i=0;i<length;i++){
		ptr->data=arr[i];
		ptr->next=(struct node*)malloc(sizeof(struct node));
		if(i==length-1){
			ptr->next=NULL;
		}else{
			ptr=ptr->next;
		}
	}
	return head;
}

void display(struct node *head){
	struct node *g=head;
	while(g!=NULL){
		printf("%d ",g->data);
		g=g->next;
	}
	return;
}

int main(){
	struct node *head=(struct node*)malloc(sizeof(struct node));
	int n;
	printf("enter the number of nodes : ");
	scanf("%d", &n);
	head=intializelinkedlist(head,n);
	linklisttoarr(head,n);
	printf("\nFROM ARRAY TO LINKED LIST\n");
	int arr1[5];
	for(int i=0;i<5;i++){
		printf("enter a element :");
		scanf("%d",&arr1[i]);
	}
	struct node *newhead = arrtolinkedlist(arr1);
	printf("\n----------------displaying the linked list---------\n");
	display(newhead);
	return 0;
}
