#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include<time.h>

#define BCKSPC 8
#define TAB 9
#define ENTER 13

struct user
{
 char fname[100];
 char lname[100];
 char eml[100];
 char username[100];
 char password[100];
};

void takeinput(char ch[100])
{
    fgets(ch,100,stdin);
    ch[strlen(ch)-1]=0;
}

void takepassword(char pwd[100])
{
	int i=0;
	char ch;

	while(1)
    {
		ch = getch();
		if(ch == ENTER  || ch == TAB)
        {
			pwd[i] = '\0';
			break;
		}
        else if(ch == BCKSPC)
        {
			if(i>0){
				i--;
				printf("\b \b");
			}
		}else
        {
			pwd[i++] = ch;
			printf("* \b");
    	}
	}
 return 0;
 getch;
}

void admin_registration()
    {
fgetc(stdin);

int a, x;
double y;
struct user us;

FILE *fp;
       printf("\n\t\t<<<<<<<   REGISTRATION  <<<<<<<<");
       printf("\n\t\t");

 printf("\nenter your First name:");
takeinput(us.fname);
printf("enter your last name:");
takeinput(us.lname);
printf("enter your email:");
takeinput(us.eml);
printf("enter your username:");
takeinput(us.username);
printf("enter your password:");
takepassword(us.password);
fp=fopen("Admin.txt","a");

fwrite(&us,sizeof(struct user),1,fp);
fclose(fp);

system("cls");
char text1[]=    (" \n\t<<<<<<<   CONGRATULATION YOUR REGISTRATION IS SUCCESSFUL!!!  <<<<<<<<");
    for(x=0; text1[x]!='\0'; x++)
   {
     printf("%c",text1[x]);
      for(y=0; y<=33333333; y++)

      {

      }
   }
     printf("\n\n\t");

printf("\n\t1. Login \n\t2. Go Back \n\t Please Choose Your Option");
scanf("%d",&a);
if(a==1)
{
    system("cls");
   admin_login();
}
else if(a==2)
{
   system("cls");

}
}

void admin_login()
{
fgetc(stdin);
  FILE *fp;
char username[100],pword[100];
struct user usr;

           int usrFound=0;

        printf("\n\t\t<<<<<<<   LOGIN  <<<<<<<<");
        printf("\n\t\t");
        			printf("\nEnter your username:\t");
			takeinput(username);
			printf("Enter your password:\t");
			takepassword(pword);

			fp = fopen("Admin.txt","rb");
			while(fread(&usr,sizeof(struct user),1,fp))
            {
				if(!strcmp(usr.username,username))
                 {
					if(!strcmp(usr.password,pword))
                    {
printf("\n login is successfull");
getch();
}
else
{
    system("cls");
   
    Beep(800,300);
    printf("\n");

   printf("\n\t\tInvalid Password!!!\n\t");
  printf("\n\tPrass Any Key To Try Again.....");

   getch();
   system("cls");
   admin_login();
}
usrFound =1;
}

}
if (!usrFound)
{
     Beep(800,300);
      printf("\n");

    printf("\n\t\t Invalid Username!!!\n");
      printf("\n\tPrass Any Key To Try Again.....");

   getch();
   system("cls");
   admin_login(); 
}
fclose(fp);
}