#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct GroceryStore
{
	int itemId;
	char itemName[100];
	int itemCost;
	int itemsCount;
	int itemsweight;
	int itemDiscount;
	float itemCgst; // central gst percentage
	float itemSgst; 
// state gst percentage
};

int additem();
int getitem();
FILE *fptr;


int i,j,i_id,n;
int flag=0;
int counter=4;  //-1  no element in list
int choice;
char uname[100];
char password[100];
char s[1000],temp[50];

int additem()
{
	printf("\n enter the details of the item:");
	for(i=0;i<n;i++)
     {
				system("cls");
				printf("\n\n\n\n\n\t\t\t\t\t\t\tWELCOME TO VIGNESHWARA GROCESOR STORE");
	            printf("\n\t\t\t\t\t\t\t*************************************");
				counter=counter+1;
				printf("\n Enter item Id:");
				scanf("%d",&s[counter].itemId);
				printf("\n Enter item name:");
				scanf("%s",s[counter].itemName);
				printf("\n Enter item cost:");
				scanf("%d",&s[counter].itemCost);
				printf("\n Enter items count:");
				scanf("%d",&s[counter].itemsCount);
				printf("\n Enter item discount:");
				scanf("%d",&s[counter].itemDiscount);
				printf("\n Enter cgst:");
				scanf("%f",&s[counter].itemCgst);
				printf("\n Enter sgst:");
				scanf("%f",&s[counter].itemSgst);
				printf("\n Record inserted successfully");
				
				printf("\n press anything to continue......");
				getch();
	
}
int getitem()
{
		for(i=0;i<=counter;i++)
				{
					for(j=i+1;j<=counter;j++)
					{
						if(s[i].itemId>s[j].itemId)
						{
							temp=s[i];
							s[i]=s[j];
							s[j]=temp;
						}
					}
				}
				system("cls");
				printf("\n\n\n\n\n\t\t\t\t\t\t\tWELCOME TO VIGNESHWARA GROCESOR STORE");
	            printf("\n\t\t\t\t\t\t\t*************************************\n\n\n\n\n\n");
	            printf("\n\n\t\t-----------------------------------------------------------------------------------------------------------------------");
				printf("\n\n\t\t ITEM ID\tITEM NAME\t\tITEM COST\tITEMS COUNT\tITEMS DISCOUNT\t\tCGST\t\tSGST");
	   			printf("\n\n\t\t-----------------------------------------------------------------------------------------------------------------------");
				
				   
				for(i=0;i<=counter;i++)
				{
					printf("\n\n\t\t %5d\t\t %-15s\t %5d\t\t %5d\t\t %-5d\t\t\t %5.2f\t\t %5.2f",s[i].itemId,s[i].itemName,s[i].itemCost,s[i].itemsCount,s[i].itemDiscount,s[i].itemCgst,s[i].itemSgst);  	
				}
				printf("\n\n\t\t-----------------------------------------------------------------------------------------------------------------------");
				
	            	printf("\n\n\n press anything to continue......");
				getch();
	            
}
