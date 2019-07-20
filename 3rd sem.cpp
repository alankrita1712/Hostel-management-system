#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <process.h>
void add();
void search();
void del();
void total();
struct hostel
{
    int usn;
    char name[100];
    char fathersname[100];
    char bloodgroup[15];
    int age;
    long int mobile[50];
    int gender;

};

struct hostel s[100];
void add()
{
    int i,n,sh;
    system("cls");
	printf("ENTER THE NUMBER OF RECORDS\t\t");
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("\t\t\t\tENTER DETAILS FOR\n\t\t1.BOYS HOSTEL STUDENT\n\t\t2.GIRLS HOSTEL STUDENT\n");
    	printf("\n\n\t\t\t\tENTER YOUR CHOICE:\t");
    	scanf("%d",&sh);
    	switch(sh)
    	{
    	case 1:
        printf("\tENTER  DETAILS OF %d STUDENT\n\n",i+1);
        printf("\tENTER STUDENT'S USN:\t");
        scanf("%d",&s[i].usn);
        printf("\tENTER STUDENT'S NAME:\t");
        scanf("%s",&s[i].name);
        printf("\tENTER FATHER'S NAME:\t");
        scanf("%s",&s[i].fathersname);
        printf("\tENTER BLOOD GROUP:\t");
        scanf("%s",&s[i].bloodgroup);
        printf("\tENTER AGE:\t");
        scanf("%d",&s[i].age);
        printf("\tENTER mobile NO.:\t");
        scanf("%s",&s[i].mobile);
        s[i].gender=1;
        break;
        case 2:
        printf("\tENTER  DETAILS OF %d STUDENT\n",i+1);
        printf("\tENTER STUDENT'S USN:\t");
        scanf("%d",&s[i].usn);
        printf("\tENTER STUDENT'S NAME:\t");
        scanf("%s",&s[i].name);
        printf("\tENTER FATHER'S NAME:\t");
        scanf("%s",&s[i].fathersname);
        printf("\tENTER BLOOD GROUP:\t");
        scanf("%s",&s[i].bloodgroup);
        printf("\tENTER AGE:\t");
        scanf("%d",&s[i].age);
        printf("\tENTER mobile NO.:\t");
        scanf("%s",&s[i].mobile);
        s[i].gender=2;
        break;
        default:
		printf("\t\t\tWRONG SELECTION!!!!!!!!!!!!!!!!!!!!!!!!");
		
   }}
    	printf("\t DETAILS  OF STUDENT\t\t\n");
        for(i=0;i<n;i++)
        printf("\nUSN:%d\tNAME:%s\tFATHER'SNAME:%s\tBLOOD GROUP:%s\tAGE:%d\tMOBILE NO.:%s\t\n",s[i].usn,s[i].name,s[i].fathersname,s[i].bloodgroup,s[i].age,s[i].mobile);
}

void search()
{
	int i,n;
	int regno;
	int usn;
    char name[100];
    char fathersname[100];
    char bloodgroup[15];
    int age;
    long int mobile[50];
    system("cls");
    n=50; 
	printf("ENTER THE REGISTRATION NO.\n");
	scanf("%d",&regno);
	for(i=0;i<n;i++)
	{
		if(s[i].usn==regno)
		{
		
			printf("\n\t\t!!!!!!!RECORD FOUND!!!!!!!\n");
			printf("\n\t\tSTUDENT NAME:");
			printf(s[i].name);
			printf("\n\t\tFATHERS NAME:");
			printf(s[i].fathersname);
			printf("\n\t\tBLOOD GROUP:");
			printf("%s",s[i].bloodgroup);
			printf("\n\t\tAGE:");
			printf("%d",s[i].age);
			printf("\n\t\tMOBILE NUMBER:");
		    printf("%s",s[i].mobile);		    
		    break;
		}
		else
		printf("REGISTRATION NUMBER NOT FOUND\n");
	}
}
void del()
{
		int i,n,ch;
		int regno;
		int usn;
    	char name[100];
    	char fathersname[100];
    	char bloodgroup[15];
    	int age;
    	long int mobile[50];
    	int position;
    	system("cls");
    	n=50;
    	printf("ENTER THE REGISTRATION NO.\n");
		scanf("%d",&regno);
		for(i=0;i<n;i++)
		{
			if(s[i].usn==regno)
	    	{
		    	position=i+1;
		    	printf("DELETE RECORD ?  \n1.YES\n2.NO");
		    	scanf("%d",&ch);
		    	if(ch==1)
		    	{
		    	printf("\n YOUR RECORD IS DELETED\n");
		        }
		        if(ch==2)
		    	{
		    	printf("\n YOUR RECORD IS NOT DELETED\n");
		        }
		        
		        
			}
			//if(s[i].usn!=regno)
		        //printf("REGISTRATION NUMBER NOT FOUND\n");
			
		}
		printf("NOW RECORD IS :\n");
		for(i=position-1;i<n-1;i++)
		{
			s[i]=s[i+1];
		}
		
}

void total()
{
	int i,n=50;
	int count=0,count_boy=0,count_girl=0;
	system("cls");
			    for(i=0;i<n;i++)
				{
					if(s[i].usn!='\0')
						count++;
					if(s[i].gender==1)
						count_boy++;
					if(s[i].gender==2)
						count_girl++;
				}
				printf("TOTAL NUMBER OF RECORDS ARE %d\n",count);
				printf("TOTAL NUMBER OF BOYS ARE %d\n",count_boy);
				printf("TOTAL NUMBER OF GIRLS ARE %d\n",count_girl);
}
int main()
{
	int choice;
	system("cls");
	while(choice!=5)
	{
		printf(" \n\n\n\n                                                                        *********************************************\n");
		printf(" \n\n\n\n                                                                               WELCOME TO HOSTEL MANAGEMENT SYSTEM\n");
		printf(" \n\n\n\n                                                                         *********************************************\n");
		printf("\t\t\t1.ADD NEW STUDENT\n\n\t\t\t2.SEARCH STUDENT\n\n\t\t\t3.REMOVE STUDENT\n\n\t\t\t4.TOTAL\n\n\t\t\t5.EXIT\n\n");
		printf("\n\nENTER YOUR CHOICE:\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:add();
				break;
				case 2:search();
				break;
				case 3:del();
				break;
				case 4:total();
				break;
				case 5:break;
				default:
				printf("WRONG SELECTION");
		 	}
	 	}
}
