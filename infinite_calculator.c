#include<stdio.h>
#include<conio.h>
int main()
{
	double num;
   int ch;
   printf("*************************\n");
   printf("WELCOME TO THE CALCULATOR\n");
   printf("*************************\n");
   printf("Enter your choice:\n");
   printf("1.Addition\n");
   printf("2.Subtraction\n");
   printf("3.Multiplication\n");
   printf("4.Division\n");
   printf("5.Modulus\n");
   scanf("%d",&ch);
   printf("*************************\n");

   double res=0;
   switch(ch)
   {
     case 1:printf("Enter numbers (enter 'q' to stop):\n");
     			while(scanf("%lf",&num)==1)
            {
            	res=res+num;
            }
            printf("addition=%.2lf",res);
            break;

     case 2:printf("Enter numbers (enter 'q' to stop):\n");
     			if(scanf("%lf",&res)!=1)
            {
            	printf("subtraction=%.2lf",res);
            }
            while(scanf("%lf",&num)==1)
            {
            	res=res-num;
            }
            printf("subtraction=%.2lf",res);
            break;

     case 3:printf("Enter numbers (enter 'q' to stop):\n");
     			res=1;
     			while(scanf("%lf",&num)==1)
            {
            	res=res*num;
            }
            printf("product=%.2lf",res);
            break;

     case 4:printf("Enter at least two numbers (enter 'q' to stop):\n");
            scanf("%lf",&num);
            res=num;
            while(scanf("%lf",&num)==1)
            {
            if(num==0)
              {
             	printf("division by zero not allowed");
              }
              else
              {
            	res=res/num;
              }
              }
            printf("division=%.2lf",res);
            break;

     case 5:printf("Enter at least two numbers (enter 'q' to stop):\n");
     			scanf("%lf",&num);
            res=num;
            while(scanf("%lf",&num)==1)
            {
            if(num==0)
              {
             	printf("division by zero not allowed");
              }
              else
              {
            	res=(int)res%(int)num;
              }
            }
            printf("modulus=%.2lf",res);
            break;

     default:printf("Wrong choice!!");
             break;
   }
getch();
return 0;
}
