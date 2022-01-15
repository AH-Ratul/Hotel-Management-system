// BY StormBreaker

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>

int show()
{
      system("cls");
      printf("\n\t --------------------------------------------------------------------------");
      printf("\n\t|                                Welcome to                                |");
      printf("\n\t|                         !!! HOTEL SONARBANGLA !!!                        |");
}

void admin()            //********************** admin pannel *********************
{
      system("cls");
      printf("\n");
      int i;
      printf("\n\t _____________________________________________________________________________");
      printf("\n\t|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Admin <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|");
      printf("\n\t|****************************************************************************|");
      printf("\n\t|                              1. Registration                               |");
      printf("\n\t|                              2. Login                                      |");
      printf("\n\t|                              3. Menu                                       |");
      printf("\n\t|____________________________________________________________________________|");
     printf("\n\n\t Enter : ");
       scanf("%d",&i);
       if(i==1)
       {
             system("cls");
             a_reg();
       }
       else if(i==2)
       {
             system("cls");
             a_login();
       }
       else if(i==3)
       {
             system("cls");
             show();
              menu();
       }
}

//************************************** Login form *****************************
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
  //******************************************************************************

void a_reg()            // *********** admin registration ***********
    {
fgetc(stdin);

int a, x;
double y;
struct user us;

FILE *fp;
       printf("\n\t\t>>>>>>>   REGISTRATION  <<<<<<<<");
       printf("\n\t\t");

 printf("\n\t Enter your First name: ");
takeinput(us.fname);
printf("\n\t Enter your last name: ");
takeinput(us.lname);
printf("\n\t Enter your email: ");
takeinput(us.eml);
printf("\n\t Enter your username: ");
takeinput(us.username);
printf("\n\t Enter your password: ");
takepassword(us.password);
fp=fopen("Admin.txt","a");

fwrite(&us,sizeof(struct user),1,fp);
fclose(fp);

char text1[]=    (" \n\t>>>>>>>   CONGRATULATION YOUR REGISTRATION IS SUCCESSFUL!!!  <<<<<<<<");
    for(x=0; text1[x]!='\0'; x++)
   {
     printf("%c",text1[x]);
      for(y=0; y<=11111111; y++)

      {

      }
   }
     printf("\n\n\t");

printf("\n\t1. Login \n\t2. Go Back \n\t Please Choose Your Option\n\t");
scanf("%d",&a);
if(a==1)
{
    system("cls");
   a_login();
}
else if(a==2)
{
   system("cls");
  admin();
}
}

void a_login()               //************* admin Login ************
{
fgetc(stdin);
  FILE *fp;
char username[100],pword[100];
struct user usr;

           int usrFound=0;

        printf("\n\t\t<<<<<<<   LOGIN  <<<<<<<<");
        printf("\n\t\t");
        			printf("\n\t Enter your username: ");
			takeinput(username);
			printf("\n\t Enter your password: ");
			takepassword(pword);

			fp = fopen("Admin.txt","rb");
			while(fread(&usr,sizeof(struct user),1,fp))
            {
				if(!strcmp(usr.username,username))
                 {
					if(!strcmp(usr.password,pword))
                    {
       system("cls");
printf("\n\t login is successfull....");
a_dboard();
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
   a_login();
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
   a_login(); 
}
fclose(fp);
}

void a_dboard()      //***************** admin dashboard *********************
{
      system("cls");
      int a;
    printf("\n\t ____________________________________________________________");
    printf("\n\t|>>>>>>>>>>>>>>>>>>>>>>>>> DashBoard <<<<<<<<<<<<<<<<<<<<<<<<|");
    printf("\n\t|************************************************************|");
    printf("\n\t|                                                            |");
    printf("\n\t|                       1. Customer Details                  |");
    printf("\n\t|                       2. Delete Customer                   |");
    printf("\n\t|                       3. LogOut                            |");
    printf("\n\t|                                                            |");
    printf("\n\t|____________________________________________________________|");
    printf("\n\n\t Enter: ");
      scanf("%d",&a);
      if(a==1)
      {
            system("cls");
            printf("\n\n\t\t\t >>>>>>>> Customer detail <<<<<<<\n");
            cudt1();
            printf("\n\t1. Back\n\t");
            scanf("%d",&a);
            if(a==1)
            {
                  system("cls");
                  a_dboard();
            }
      }
      else if(a==2)
      {
            system("cls");
            delete();
      }
      else if(a==3)
      {
            system("cls");
            show();
            menu();
      }
}

void cudt1()       
{
    char ch;
    FILE *room;
    room = fopen("room.txt","r");
    if(room==NULL)
    {
printf("NO FILE FOUND");
    }       
       else
       {
while( !feof(room))
{
    ch=getc(room);
    printf("%c",ch);
}
fclose(room);
       }      
}

void user()                // ********************** user pannel *********************
{
       system("cls");
      printf("\n");
      int i;
      printf("\n\t ___________________________________________________________________");
      printf("\n\t|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> User <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|");
      printf("\n\t|-------------------------------------------------------------------|");
      printf("\n\t|                                                                   |");
      printf("\n\t|                           1. Registration                         |");
      printf("\n\t|                           2. Login                                |");
      printf("\n\t|                           3. Back                                 |");
      printf("\n\t|                                                                   |");
      printf("\n\t|___________________________________________________________________|");
      printf("\n\n\t Enter : ");
       scanf("%d",&i);
       if(i==1)
       {
             system("cls");
             u_reg();
       }
       else if(i==2)
       {
             system("cls");
             u_login();
       }
       else if(i==3)
       {
             system("cls");
             show();
              menu();
       }
}

void u_reg()          // *********** user registration **********
    {
fgetc(stdin);

int a, x;
double y;
struct user us;

FILE *fp;
       printf("\n\t\t>>>>>>>>>>   REGISTRATION  <<<<<<<<<<<<<");
       printf("\n\t\t");

 printf("\n\t Enter your First name: ");
takeinput(us.fname);
printf("\n\t Enter your last name: ");
takeinput(us.lname);
printf("\n\t Enter your email: ");
takeinput(us.eml);
printf("\n\t Enter your username: ");
takeinput(us.username);
printf("\n\t Enter your password: ");
takepassword(us.password);
fp=fopen("user.txt","a");

fwrite(&us,sizeof(struct user),1,fp);
fclose(fp);

char text1[]=    (" \n\t>>>>>>>>   CONGRATULATION YOUR REGISTRATION IS SUCCESSFUL!!!  <<<<<<<<");
    for(x=0; text1[x]!='\0'; x++)
   {
     printf("%c",text1[x]);
      for(y=0; y<=11111111; y++)

      {

      }
   }
     printf("\n\n\t");

printf("\n\t1. Login \n\t2. Go Back \n\t Please Choose Your Option\n\t");
scanf("%d",&a);
if(a==1)
{
    system("cls");
   u_login();
}
else if(a==2)
{
   system("cls");
   user();
}
}

void u_login()     // ***************** user login ***************
{
fgetc(stdin);
  FILE *fp;
char username[100],pword[100];
struct user usr;

           int usrFound=0;

        printf("\n\t\t>>>>>>>   LOGIN  <<<<<<<<");
        printf("\n\t\t");
        			printf("\n\t Enter username: ");
			takeinput(username);
			printf("\n\t Enter password: ");
			takepassword(pword);

			fp = fopen("user.txt","rb");
			while(fread(&usr,sizeof(struct user),1,fp))
            {
				if(!strcmp(usr.username,username))
                 {
					if(!strcmp(usr.password,pword))
                    {
                      system("cls");
u_dboard();
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
   u_login();
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
   u_login(); 
}
fclose(fp);
}

void u_dboard()            //************** user dashboard ************
{
    int a;
    printf("\n\t __________________________________________________________________");
    printf("\n\t|>>>>>>>>>>>>>>>>>>>>>>>>>>>>> DashBoard <<<<<<<<<<<<<<<<<<<<<<<<<<|");
    printf("\n\t|******************************************************************|");
    printf("\n\t|                                                                  |");
    printf("\n\t|                           1. General Room                        |");
    printf("\n\t|                           2. Special Room                        |");
    printf("\n\t|                           3. LogOut                              |");
    printf("\n\t|                                                                  |");
    printf("\n\t|__________________________________________________________________|");
    printf("\n\n\t Enter: ");
    scanf("%d",&a);
    if(a==1)
    {
          system("cls");
          roomnum();
    }
    else if(a==2)
    {
          system("cls");
          special_room();
    }
    else if(a==3)
    {
         system("cls");
         show();
         menu();
    }
}

void color()          // *************color***************
{
      printf("\033[0;32m");
}

void roomnum()                  // ********** room Number ***************
{
      system("cls");
      int a;
      printf("\n\t ______________________________________________________________________");
      printf("\n\t|              >>>>>>>>>>> Choose Your Room <<<<<<<<<<<                |");
      printf("\n\t|**********************************************************************|");
      printf("\n\t|        1. Single (101) --------------------------- 700 tk.           |");
      printf("\n\t|        2. Double (102) --------------------------- 1400 tk.          |");
      printf("\n\t|        3. Tripple (103) -------------------------- 2000 tk           |");
      printf("\n\t|        4. Single With AC (111) ------------------- 3000 tk.          |");
      printf("\n\t|        5. Double with AC (112) ------------------- 3800 tk.          |");
      printf("\n\t|        6. Tripple With AC (113) ------------------ 4300 tk.          |");
      printf("\n\t|        7. Back                                                       |");
      printf("\n\t|______________________________________________________________________|");
      printf("\n\n\t Enter: ");
      scanf("%d",&a);
      switch(a)
      {
            case 1:
                system("cls");
                printf("\n\t This Room assigned to one person. May have one or more.");
                printf("\n\t It has one attached bathroom. One window, one door. Its well decorated.");
                printf("\n\n\t Do you like this room?\n\t Book if you like or see the others..\n\t");
                printf("\n\t 1. Book\n\t 2. Back\n\t");
                scanf("%d",&a);
                if(a==1)
                {
                      system("cls");
                      room();
                }
                else if(a==2)
                {
                      system("cls");
                      roomnum();
                }
            case 2:
                system("cls");
                printf("\n\t This Room assigned to two person. May have one or more. ");
                printf("\n\t It has one attached bathroom. two window, one door. Its well decorated.");
                printf("\n\n\t Do you like this room?\n\t Book if you like or see the others..\n\t");
                printf("\n\t 1. Book\n\t 2. Back\n\t");
                scanf("%d",&a);
                if(a==1)
                {
                      system("cls");
                      room();
                }
                else if(a==2)
                {
                      system("cls");
                      roomnum();
                }
            case 3:
                system("cls");
                printf("\n\t This Room assigned to three person. May have one or more. ");
                printf("\n\t It has one attached bathroom. three window, one door. Its well decorated.");
                printf("\n\n\t Do you like this room?\n\t Book if you like or see the others..\n\t");
                printf("\n\t 1. Book\n\t 2. Back\n\t");
                scanf("%d",&a);
                if(a==1)
                {
                      system("cls");
                      room();
                }
                else if(a==2)
                {
                      system("cls");
                      roomnum();
                }
            case 4:
                system("cls");
                printf("\n\t This Room assigned to one person. May have one or more. There is one AC.");
                printf("\n\t It has one attached bathroom. two window, one door. Its well decorated.");
                printf("\n\n\t Do you like this room?\n\t Book if you like or see the others..\n\t");
                printf("\n\t 1. Book\n\t 2. Back\n\t");
                scanf("%d",&a);
                if(a==1)
                {
                      system("cls");
                      room();
                }
                else if(a==2)
                {
                      system("cls");
                      roomnum();
                }
            case 5:
                system("cls");
                printf("\n\t This Room assigned to two person. May have one or more. There is one AC.");
                printf("\n\t It has one attached bathroom. two window, one door. Its well decorated.");
                printf("\n\n\t Do you like this room?\n\t Book if you like or see the others..\n\t");
                printf("\n\t 1. Book\n\t 2. Back\n\t");
                scanf("%d",&a);
                if(a==1)
                {
                      system("cls");
                      room();
                }
                else if(a==2)
                {
                      system("cls");
                      roomnum();
                }
            case 6:
                system("cls");
                printf("\n\t This Room assigned to three person. May have one or more. There is two AC.");
                printf("\n\t It has one attached bathroom. three window, one door. Its well decorated.");
                printf("\n\n\t Do you like this room?\n\t Book if you like or see the others..\n\t");
                printf("\n\t 1. Book\n\t 2. Back\n\t");
                scanf("%d",&a);
                if(a==1)
                {
                      system("cls");
                      room();
                }
                else if(a==2)
                {
                      system("cls");
                      roomnum();
                }    

            case 7:
                 system("cls");
                 u_dboard();

      }
}

void special_room()         //*********** Special room ******************************************
{
     system("cls");
     int s;
     printf("\n\t _______________________________________________________________________ ");
     printf("\n\t|      >>>>>>>>>>>>>>>>>>>>>> Luxuries Suits <<<<<<<<<<<<<<<<<<<<<      |");
     printf("\n\t|***********************************************************************|");
     printf("\n\t|                                                                       |");
     printf("\n\t|                           1. President Suit                           |");
     printf("\n\t|                           2. Superior Deluxe                          |");
     printf("\n\t|                           3. Junior Suit                              |");
     printf("\n\t|                           4. Creative Studio                          |");
     printf("\n\t|                           5. Back                                     |");
     printf("\n\t|_______________________________________________________________________|");
     printf("\n\n\t Enter: ");
     scanf("%d",&s);

     switch(s)
     {
            case 1:
                  system("cls");
                  printf("\n\t ___________________________________________________________________________");
                  printf("\n\t|           >>>>>>>>>>>>>>>>>>>> President Suit <<<<<<<<<<<<<<<<<<          |");
                  printf("\n\t|***************************************************************************|");
                  printf("\n\t|                                  Room: 201                                |");
                  printf("\n\t|        Description:                                                       |");
                  printf("\n\t|        The Room size is 1,300 sft with 01 living room 01 dining.          |");
                  printf("\n\t|        1 Office room and 2 bedroom with well amenities and interior       |"); 
                  printf("\n\t|                                                                           |");
                  printf("\n\t|        * 32 inch LED TV     * Car Parking      * High speed WiFi          |");
                  printf("\n\t|        * Air Conditioning   * Dressing Mirror  * Intercom                 |");
                  printf("\n\t|        * King size bed      * Bathtub          * Safety Locker            |");
                  printf("\n\t|        * Breakfast          * Mineral water 500ml 2 bottle                |");
                  printf("\n\t|---------------------------------------------------------------------------|");
                  printf("\n\t|                              BDT 70000/Night                              |");
                  printf("\n\t|             1. Book                                   2. Back             |");
                  printf("\n\t|___________________________________________________________________________|");
                  printf("\n\n\t Enter: ");
                  scanf("%d",&s);

                  if(s==1)
                  {
                        system("cls");
                        room();
                  }
                  else if(s==2)
                  {
                        system("cls");
                        special_room();
                  }
            case 2:
                  system("cls");
                  printf("\n\t ____________________________________________________________________________");
                  printf("\n\t|          >>>>>>>>>>>>>>>>>>>> Superior Deluxe <<<<<<<<<<<<<<<<<<           |");
                  printf("\n\t|****************************************************************************|");
                  printf("\n\t|                                 Room: 202                                  |");
                  printf("\n\t|        Description:                                                        |");
                  printf("\n\t|        The Room size is 390 With well amenities and interior.              |");
                  printf("\n\t|        Double Bed, Bathtub in washroom and a Belcony.                      |"); 
                  printf("\n\t|                                                                            |");
                  printf("\n\t|        * 32 inch LED TV     * Car Parking      * High speed WiFi           |");
                  printf("\n\t|        * Air Conditioning   * Dressing Mirror  * Intercom                  |");
                  printf("\n\t|        * King size bed      * Minibar          * Safety Locker             |");
                  printf("\n\t|        * Breakfast          * Mineral water 500ml 2 bottle                 |");
                  printf("\n\t|----------------------------------------------------------------------------|");
                  printf("\n\t|                              BDT 12000/Night                               |");
                  printf("\n\t|              1. Book                                   2. Back             |");
                  printf("\n\t|____________________________________________________________________________|");
                  printf("\n\n\t Enter: ");
                  scanf("%d",&s);

                  if(s==1)
                  {
                        system("cls");
                        room();
                  }
                  else if(s==2)
                  {
                        system("cls");
                        special_room();
                  }
            case 3:
                  system("cls");
                  printf("\n\t _____________________________________________________________________________");
                  printf("\n\t|           >>>>>>>>>>>>>>>>>>>> Junior Suit <<<<<<<<<<<<<<<<<<<<<            |");
                  printf("\n\t|*****************************************************************************|");
                  printf("\n\t|                                 Room: 203                                   |");
                  printf("\n\t|          Description:                                                       |");
                  printf("\n\t|          The Room size is 550 sft with well amenities and interior.         |");
                  printf("\n\t|          Bathtub in washroom and the city is visible from balcony.          |"); 
                  printf("\n\t|                                                                             |");
                  printf("\n\t|          * 32 inch LED TV     * Car Parking      * High speed WiFi          |");
                  printf("\n\t|          * Air Conditioning   * Dressing Mirror  * Intercom                 |");
                  printf("\n\t|          * King size bed      * Bathtab          * Safety Locker            |");
                  printf("\n\t|          * Breakfast          * Mineral water 500ml 2 bottle                |");
                  printf("\n\t|-----------------------------------------------------------------------------|");
                  printf("\n\t|                                BDT 15000/Night                              |");
                  printf("\n\t|              1. Book                                   2. Back              |");
                  printf("\n\t|_____________________________________________________________________________|");
                  printf("\n\n\t Enter: ");
                  scanf("%d",&s);

                  if(s==1)
                  {
                        system("cls");
                        room();
                  }
                  else if(s==2)
                  {
                        system("cls");
                        special_room();
                  }
            case 4:
                  system("cls");
                  printf("\n\t ___________________________________________________________________________");
                  printf("\n\t|          >>>>>>>>>>>>>>>>>> Creative Studio <<<<<<<<<<<<<<<<<<            |");
                  printf("\n\t|***************************************************************************|");
                  printf("\n\t|                               Room: 204                                   |");
                  printf("\n\t|        Description:                                                       |");
                  printf("\n\t|        The Room size is 650 sft with well amenities and interior.         |");
                  printf("\n\t|        Bathtub in washroom and the city is visible from balcony.          |");
                  printf("\n\t|        Handicraft Furnitures in room.                                     |"); 
                  printf("\n\t|                                                                           |");
                  printf("\n\t|        * 32 inch LED TV     * Car Parking      * High speed WiFi          |");
                  printf("\n\t|        * Air Conditioning   * Dressing Mirror  * Intercom                 |");
                  printf("\n\t|        * King size bed      * Bathtab          * Safety Locker            |");
                  printf("\n\t|        * Breakfast          * Mineral water 500ml 2 bottle                |");
                  printf("\n\t|---------------------------------------------------------------------------|");
                  printf("\n\t|                              BDT 35000/Night                              |");
                  printf("\n\t|              1. Book                                   2. Back            |");
                  printf("\n\t|___________________________________________________________________________|");
                  printf("\n\n\t Enter: ");
                  scanf("%d",&s);

                  if(s==1)
                  {
                        system("cls");
                        room();
                  }
                  else if(s==2)
                  {
                        system("cls");
                        special_room();
                  }
            case 5:
                  system("cls");
                  u_dboard();
                  
     }

}

struct customer_d             // structure declartion
{
     char roomnumber[10];
        char name[20];
        char age[10];
        char phnum[20];
        char period[20];
        char in[20];
        char out[20];
        char time[20];
}S;

void delete()
{
      FILE *f,*t;
	int i=1;
	char roomnumber[20];
	if((t=fopen("temp.txt","w"))==NULL)
	exit(0);
	if((f=fopen("room.txt","r"))==NULL)
	exit(0);
	system("cls");
	printf("\n\t Enter the Room Number of the hotel to be deleted from the database: ");
	fflush(stdin);
	scanf("%s",roomnumber);
	while(fread(&S,sizeof(S),1,f)==1)
	{
		if(strcmp(S.roomnumber,roomnumber)==0)
		{       i=0;
			continue;
		}
		else
			fwrite(&S,sizeof(S),1,t);
	}
	if(i==1)
	{
		printf("\n\n\t Records of Customer in this  Room number is not found!!");
		
		getch();
		fclose(f);
		fclose(t);
		main();
	}
	fclose(f);
	fclose(t);
	remove("room.txt");
	rename("temp.txt","room.txt");
	printf("\n\n\tThe Customer is successfully removed....");
      printf("\n\t 1. Back\n");
      scanf("%d",&i);
      if(i==1)
      {
            system("cls");
            a_dboard();
      }
	fclose(f);
	fclose(t);
	getch();
}

int room()           // ******************Room booking**********************
{
    FILE *room;
    room = fopen("room.txt","w");
   
        int a;
        
        printf("\n\n\t\t>>>>>>>>>>>> Room Booking <<<<<<<<<<<");
        printf("\n\n\t Enter Room number: ");
        scanf("%s",&S.roomnumber);
        fflush(stdin);
        printf("\n\t Enter Name: ");
        scanf("%s",&S.name);
        printf("\n\t Enter Age: ");
        scanf("%s",&S.age);
        printf("\n\t Enter phone number: ");
        scanf("%s",&S.phnum);
        printf("\n\t Enter period: ");
        scanf("%s",&S.period);
        printf("\n\t Check in: ");
        scanf("%s",&S.in);
        printf("\n\t In Time: ");
        scanf("%s%s",&S.time,&S.time);
        printf("\n\t Check Out: ");
        scanf("%s",&S.out);
        printf("\n\t Out Time: ");
        scanf("%s%s",&S.time,&S.time);
        fwrite(&S,sizeof(S),1,room);
		fflush(stdin);
        printf("\n\n\t Now make payment for confirmation");

        fprintf(room,"\n\n\t %s  %s  %s  %s  %s  %s  %s  %s  %s",S.roomnumber,S.name,S.age,S.phnum,S.period,S.in,S.time,S.out,S.time);
        fclose(room);

        printf("\n\n\t1. Make Payment\n\t2. Back\n\t");
        scanf("%d",&a);
        if(a==1)
        {
              system("cls");
              payment();
        }
        else if(a==2)
        {
              system("cls");
              u_dboard();
        }
}

void payment()                  // ******** payment ************
{
      system("cls");
      int s;
      char num[20],c=' ';
      char pin[20],ch;
      printf("\n\t Enter Amount: ");
      scanf("%d",&s);
      printf("\n\t\t  Payment By");
      printf("\n\t--------------------------");
      printf("\n\t | 1. Bkash \t2. Card |\n\t");
      printf("--------------------------\n\t");
      scanf("%d",&s);
      switch(s)
      {
            case 1:               
                printf("\n\t Enter Bkash number: ");
                scanf("%d",&num[s]);
                printf("\n\t Enter Pin: ");
                while(s<20)
               {
                 pin[s]=getch();
                 c=pin[s];
                 if(c==13)break;
                 else printf("*");
                 s++;
               }
               printf("\n\n\t Your payment is complete.....");
               printf("\n\t Your Room Booking is successfull...");
               printf("\n\t Thank You..");
               printf("\n\n\t1. DashBoard\n\t");
               scanf("%d",&s);
               if(s==1)
               {
                     system("cls");
                     u_dboard();
               }
            case 2:
                printf("\n\t Enter Card number: ");
                scanf("%d",&num[s]);
                printf("\n\t Enter Pin: ");
                while(s<20)
               {
                 pin[s]=getch();
                 c=pin[s];
                 if(c==13)break;
                 else printf("*");
                 s++;
               }
               printf("\n\n\t Your payment is complete.....");
               printf("\n\t Your Room Booking is successfull...");
               printf("\n\t Thank You..");
               printf("\n\n\t1. DashBoard\n\t");
               scanf("%d",&s);
               if(s==1)
               {
                     system("cls");
                     u_dboard();
               }
      }
}

void menu()                    //******************** menu *******************
{
      int i;
      char choise;
      printf("\n\t --------------------------------------------------------------------------");
      printf("\n\t|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> MENU  <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|");
      printf("\n\t|--------------------------------------------------------------------------|");
      printf("\n\t|                                                                          |");
      printf("\n\t|                                1. Admin                                  |");
      printf("\n\t|                                2. User                                   |");
      printf("\n\t|                                3. Exit                                   |");
      printf("\n\t|                                                                          |");
      printf("\n\t|__________________________________________________________________________|"); 
      printf("\n\n\t Enter : ");
       scanf("%d",&i);
       if(i==1)
       {
             system("cls");
             admin();
       }
       else if(i==2)
       {
             system("cls");
              user();
       }
       else 
       {
             system("cls");
             exit(0);
       }  
}

int main()            //******************** main function ***************************
{
      color();
      show();
      menu();  
      getch();  
      return 0;
}