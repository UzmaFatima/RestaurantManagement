#include<stdio.h>
#include <conio.h>

#define ABOVE(a) (a*0.05) + a
#define BELOW(a) (a*0.02) + a
char username[20][20]={"ali","uzma","sara","ahmed","hassan","faiza","ahmed","amber","fatima","iqra","javed","fizza","saira","laraib","hira"};
char passwordrec[20][20]={"12345","abcd","5432","67990","123abc","45252","faaggz","79bvhkb","vjb, ","fibln79","6ynmcrm","fyfubkmlm","cghfu77","bbbnig6","nknin7gc"};
int compare=1;


int amount=0;


void main()

{
    mainmenu();
}
void mainmenu()
{

    int choice;
    printf(" (^.^) Welcome to FoodPanda (^.^) ");
    printf("\n\nSelect one of the options below");
    printf("\n\n 1-Sign In ");
    printf("\n\n 2- Exit");

    printf("\nChoice=\t");
    scanf("%d",&choice);

switch(choice)
{
case 1:
signin();
break;
case 2:
Exit();
break;
default:
printf("Please Enter A Valid Number!");
mainmenu();
break;
}
}

void signin()
{
int x=1;
char user[30];
char pass[30];
int i=0, j=0, done=1;
printf("\n\nEnter user name\n\n Username:\t");
scanf("%s",&user);
while(x!=0 && i<13)
{
   x= strcmpi(username[i],user);
i++;
}
if (x!=0)
{
    printf("\n\nUser not found\n\n");
}
   else if(x==0)
   {
       password:
           j=0;
       printf("\n\nEnter password\n\n Password:\t");
       scanf("%s",&pass);
       while(done!=0 && j<13)
       {
  done= strcmpi(passwordrec[j],pass);
j++;
}
if(done!=0)
{
    printf("\n\nIncorrect Password\n\n");
    sleep(1);
    system("cls");
    goto password;


}

 else if(done==0)
    {
    printf("\n\n LOG IN SUCCESSFUL\n\n ");
    sleep(1);
    system("cls");
    restaurants();

}
   }
}




void restaurants()
{

int choice;
printf("\nSelect a restaurant\n\n");
printf("\n 1-Desi Tarka\n");
printf("\n 2-Burger House\n");
printf("\n 3-Delizia\n");



printf("\nChoice=\t");
    scanf("%d",&choice);
    system("cls");

        switch(choice)
        {

    case 1:
        res1();
    break;

    case 2:
        res2();
    break;
    case 3:
        res3();
    break;

    default:
        printf("Please Enter A Valid Number!");
       restaurants();
    break;
}
}
void res1()
{
    int a;

int choice=1;
amount=0;
printf("1-Chicken Biryani                  =/300\n");
printf("2-Beef Biryani                     =/300\n");
printf("3-Mutton changazi                 =/400\n");

while(choice!=0)
{
printf("\n\nEnter your choice\n\nChoice:\t");
scanf("%d",&choice);
switch(choice)
{

case 1:
printf("\n\nHow many plates?\n\nPlates:");
scanf("%d",&a);
    amount=amount+(300*a);
    break;

case 2:
printf("\n\nHow many plates?\n\nPlates:\t");
scanf("%d",&a);
    amount=amount+(300*a);
    break;
case 3:
printf("\n\nHow many plates?\n\nPlates:\t");
scanf("%d",&a);
    amount=amount+(400*a);
    break;
default:
        printf("Enter a valid number");
        res1();
}
printf("\n\nDo you want to order any other item?\n\n 1-Yes\t\t0-No\n\nChoice:\t");
scanf("%d",&choice);

}
system("cls");
billing(amount);
}
void res2()
{

int choice=9;
int a;
printf("1-Chicken burger                   =/250\n");
printf("2-Zinger Burger                    =/499\n");
printf("3-Chicken Cheese Burger            =/425\n");

while(choice!=0)
{
printf("\nEnter your choice\n\nChoice:\t");
scanf("%d",&choice);
switch(choice)
{

case 1:
printf("\n\nHow many?\n\nQuantity:");
scanf("%d",&a);
    amount=amount+(250*a);
    break;

    case 2:
printf("\n\nHow many?\n\nQuantity:");
scanf("%d",&a);
    amount=amount+(499*a);
    break;
    case 3:
printf("\n\n\nHow many?\n\n\nQuantity:\t");
scanf("%d",&a);
    amount=amount+(425*a);
    break;
    default:
        printf("\n\nEnter a valid number\n\n");
        res2();
}
printf("\n\nDo you want to order any other item?\n\n 1-Yes\t\t0-No\nChoice:\t");
scanf("%d",&choice);

}
system("cls");

billing(amount);
}
void res3()
{
int choice=9;
int a;

printf("\n1-Chocolate Brownie                  =/80\n");
printf("2-Malt Brownie                      =/120\n");
printf("3-Cadbury Brownie                  =/150\n");
while(choice!=0)
{
printf("\n\nEnter your choice\nChoice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\n\nHow many?\n\nQuantity:");
scanf("%d",&a);
    amount=amount+(80*a);
    break;

    case 2:
printf("\n\nHow many?\n\nQuantity:");
scanf("%d",&a);
    amount=amount+(120*a);
    break;
    case 3:
printf("\n\nHow many?\n\nQuantity:");
scanf("%d",&a);
    amount=amount+(150*a);
    break;
    default:
        printf("\nEnter a valid number");
        res3();
}
printf("\n\nDo you want to order any other item?\n\n 1-Yes\t\t0-No\nChoice:");
scanf("%d",&choice);

}
system("cls");
billing(amount);
}
void billing(amount)
{
    int n=8;
    int x=8;
    if(amount>1000)
    {
        printf("Your bill after 5 percent tax is %.2f\t",ABOVE (amount));
    }
    else if (amount <=1000)
    {

        printf("Your bill after 2 percent tax is %.2f\t",BELOW (amount));
    }
   printf("\n\nPlease press 1 to confirm your order\nNumber:");
   scanf("%d",&n);
   if(n==1)
   {
       printf("\n\nDo you want to order from any other restaurant?\n1-Yes\t0-No\nChoice:\t");
       scanf("%d",&x);
       if(x==1)
       {
           restaurants();
       }
       else

    printf("\n\n*******Your order has been confirmed*******\n\n******Thank you for ordering******\n\n******Have a great meal******\n\n");
   }
    else
     printf("\n\n******Thank you******\n\n");
}

void Exit(void)
{

printf("\n******Thank You******\n\n");
}

























