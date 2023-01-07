#include<stdio.h>
int main(){
	char name[15]="Onion";
	char size;
	int no;
	float rate;
	printf("Generating a message:\n");
	
	printf("\n--------------------Order pizza\n");
	
	printf("\nChoose Pizza:");
	
	printf("%s\n",name);
	
	printf("\nchoose size:");
	scanf("%s", &size);
	
	printf("\nnoof pizza`s*:");
	scanf("%d", &no);
	
	printf("\ntotal__amount_:");
	scanf("%f", &rate);
	
	printf("\n**********SMS**********");
	printf("\nYour order of %s pizza of size %c.Total number of pizza's are %d the total amount is %.1f",name,size,no,rate);
	return 0;
}


