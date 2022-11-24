#include<stdio.h>
#include<string.h>
void admin_login(void);
void offers(void);
void start(void);
void Admin_menu(void);
int main()
{
	printf("\t\t\t\t\t***WELCOME TO DSA TRAVELS***\n");
	start();
	Admin_menu();
	offers();
	return 0;
}

void start(void)
{
	int choice, choice2;
	do
	{
   
	printf("1.Admin Portal.\n2.User portal.\n3.Exit.\n");
	scanf("%d", &choice);
	system("CLS");
	switch(choice)
	{
	
	case 1:
	admin_login();
	break;
	
	case 2:
    //userlogin.
    break;
    
    case 3:
    printf("Are you sure you want to exit?\n1.Yes.\n2.No.\n");
    scanf("%d", &choice2);
    if(choice2==1)
    exit(0);
    else if(choice2==2)
    system("CLS");
    start();
    break;
    
    default:
    	printf("Select appropriate option i.e 1/2/3.\n");
	}
	system("CLS");
}while(choice!=1&&choice!=2&&choice!=3);
		}

void admin_login(void)
{
	
	char username[20];
	char password[20];
	
	
	for(int i=3; i>0; i--)
	{
		printf("Enter Admin Username: \n");
	scanf("%s", username);
	
		if(strcmp(username,"saad")==0||strcmp(username, "amna")==0||strcmp(username, "dani")==0)
	{
		printf("Enter Password(MAX ATTEMPTS: 3): \n");
	scanf("%s", password);
		if(strcmp(password, "abc")==0)
		{
		printf("***Access Granted***\n");
		sleep(2);
		system("CLS");
		break;
	    }
	    else
	    {
	    printf("Incorrect password, %d attempt(s) left\n", i-1);
	    sleep(2);
		system("CLS");
	}
	    if(i==0)
	    {
	    printf("***Access Denied***\n");
	    sleep(2);
		
	    exit(0);
	}
	}
	else
	{
		printf("Invalid Username, %d attempt(s) left \n",i-1);
		sleep(2);
		system("CLS");
		if(i==0)
		{
			printf("***Access Denied***\n");
	    sleep(2);
		exit(0);
	}
	}
	}
}

void Admin_menu(void)
{
	int choice;
	do{
		
	printf("1.Offers.\n2.Edit Offers.\n2.Add Offers.\n3.Exit");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			offers();
			break;
		
		case 2:
			//filing
			break;
			
		case 3: 
		    //filing
		    break;
		
		case 4:
			exit(0);
			break;
		
		default:
			printf("Invalid choice");
			
	}
}while(choice!=1&&choice!=2&&choice!=3&&choice!=4);
}
void offers(void)
{
	char offers[10][100]={"hunzavalley", "gilgit", "narankaghan", "swatvalley", "mazarequaid", "minarepakistan", "saifulmalook", "balakot", "murree", "shalimargardens" };
	int prices[10]={50000,50000,50000,50000,50000,50000,50000,50000,50000,50000};
	
	for(int i=0; i<10;i++)
	{
		printf("%s --- Rs.%d\n",offers[i], prices[i]);
	}
	edit_offers(prices);
	printf("\n");
	int choice;
	do
	{
	printf("1.Go back.\n2.Exit.\n");
	
	scanf("%d", &choice);
	system("CLS");
	switch(choice)
	{
		case 1:
			Admin_menu();
			break;
			
		case 2:
			exit(0);
			break;
			
		default:
			printf("Invlaid choice.\n");
			
	}
}while(choice!=1&&choice!=2);
}
void edit_offers( int *array)
{
	int choice;
	printf("Which offer do you want to edit, select the code i.e 1,2,3....");
	scanf("%d", &choice);
    array=array+choice-1;
	printf("Enter offer price: ");
	scanf("%d", *array);
}