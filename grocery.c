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
	int itemDiscount;
	float itemCgst; // central gst percentage
	float itemSgst; // state gst percentage
}s[1000],temp;
int main()
{
	int i,j,i_id;
	int flag=0;
int counter=4;  //-1  no element in list
int choice;
char uname[100];
char password[100];
s[0]=(struct GroceryStore){111,"SANTOOR",34,100,10,15,12};
s[1]=(struct GroceryStore){112,"DIAMOND",23,100,10,23,12};
s[2]=(struct GroceryStore){113,"ALOVERA",45,100,15,13,14};
s[3]=(struct GroceryStore){114,"DOVE",56,100,16,18,20};
s[4]=(struct GroceryStore){115,"LIRIL",67,100,16,28,34};

system("color F4");
printf("\n\n\n\n\n\t\t\t\t\t\t\tWELCOME TO VIGNESHWARA GROCESOR STORE");
printf("\n\t\t\t\t\t\t\t*************************************");
printf("\n\n\n\n\n\t\t\t\t\t\t\tEnter User Name : ");
scanf("%s",uname);
printf("\n\n\t\t\t\t\t\t\tEnter Password : ");
scanf("%s",password);

if(strcmp(uname,"m")==0  &&  strcmp(password,"m123")==0)
{
	system("cls");
	//printf("\n LOGIN SUCCESSFUL");
	
	while(1)
	{
		system("cls");
	
		printf("\n\n\n\n\n\t\t\t\t\t\t\tWELCOME TO VIGNESHWARA GROCESOR STORE");
	    printf("\n\t\t\t\t\t\t\t*************************************");
		printf("\n 1.Add item\n 2.Get all item details\n 3.Get selected item details\n 4.Get item details according to price\n 5.Updating item details(cost)\n 9.exit");
		printf("\n Select your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
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
			
			break;
			case 2:
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
	            
			break;
			case 3:printf("\n Get selected item details:");
				scanf("%d",&i_id);
				system("cls");
				printf("\n\n\n\n\n\t\t\t\t\t\t\tWELCOME TO VIGNESHWARA GROCESOR STORE");
	            printf("\n\t\t\t\t\t\t\t*************************************\n\n\n\n\n\n");
	            printf("\n\n\t\t-----------------------------------------------------------------------------------------------------------------------");
				printf("\n\n\t\t ITEM ID\tITEM NAME\t\tITEM COST\tITEMS COUNT\tITEMS DISCOUNT\t\tCGST\t\tSGST");
	   			printf("\n\n\t\t-----------------------------------------------------------------------------------------------------------------------");
				
				 flag=0;  
				for(i=0;i<=counter;i++)
				{
					if(i_id==s[i].itemId)
					{
						flag=1;
						printf("\n\n\t\t %5d\t\t %-15s\t %5d\t\t %5d\t\t %-5d\t\t\t %5.2f\t\t %5.2f",s[i].itemId,s[i].itemName,s[i].itemCost,s[i].itemsCount,s[i].itemDiscount,s[i].itemCgst,s[i].itemSgst);  	
						break;
					}
				}
				if(flag==0)
				{
					printf("\n\n\n\t\t\t\t\t\t\t\t\tNO RECORDS FOUND\n\n");
				}
				printf("\n\n\t\t-----------------------------------------------------------------------------------------------------------------------");
				
	            	printf("\n\n\n press anything to continue......");
				getch();
	            
			break;
			case 4:
				for(i=0;i<=counter;i++)
				{
					for(j=i+1;j<=counter;j++)
					{
						if(s[i].itemCost>s[j].itemCost)
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
	            
			break;
			case 5:
				flag=0;
				printf("\n Get selected item details:");
				scanf("%d",&i_id);
				for(i=0;i<=counter;i++)
				{
					if(s[i].itemId==i_id)
					{
						flag=1;
						printf("\n Enter new cost");
						scanf("%d",&s[i].itemCost);
					}
				}
				if(flag==0)
				{
					printf("\n Item not found");
				}
				
				
							
				system("cls");
				printf("\n\n\n\n\n\t\t\t\t\t\t\tWELCOME TO VIGNESHWARA GROCESOR STORE");
	            printf("\n\t\t\t\t\t\t\t*************************************\n\n\n\n\n\n");
	            printf("\n\n\t\t-----------------------------------------------------------------------------------------------------------------------");
				printf("\n\n\t\t ITEM ID\tITEM NAME\t\tITEM COST\tITEMS COUNT\tITEMS DISCOUNT\t\tCGST\t\tSGST");
	   			printf("\n\n\t\t-----------------------------------------------------------------------------------------------------------------------");
				
				 flag=0;  
				for(i=0;i<=counter;i++)
				{
					if(i_id==s[i].itemId)
					{
						flag=1;
						
						printf("\n\n\t\t %5d\t\t %-15s\t %5d\t\t %5d\t\t %-5d\t\t\t %5.2f\t\t %5.2f",s[i].itemId,s[i].itemName,s[i].itemCost,s[i].itemsCount,s[i].itemDiscount,s[i].itemCgst,s[i].itemSgst);  	
						break;
					}
				}
				if(flag==0)
				{
					printf("\n\n\n\t\t\t\t\t\t\t\t\tNO RECORDS FOUND\n\n");
				}
				printf("\n\n\t\t-----------------------------------------------------------------------------------------------------------------------");
				
	            	printf("\n\n\n press anything to continue......");
				getch();
	            
			break;
			case 9:goto end;
			break;
		}
	}
end:printf("\n THANK YOU FOR USING SERVICES");	
}

else
{
	printf("\n Invalid Credentials");
}

	
	
	return 0;
}
