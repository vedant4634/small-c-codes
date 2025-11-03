#include<stdio.h>
#include<conio.h>
void main()
{
  
   
    int x,c,y=1;
    while(1)
    {
    printf("\n Enter any number:");
    scanf("%d",&x);
    printf("Which of the following process you want to do:\n1-even/odd cheaking \n2-cheaking number positive negative or zero\n3-multiple table\n4-all three\n5-Exite\n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
      if (x%2==0)
      {
        printf("\n%d is a even number",x);
      }
      else
      {
        printf("\n%d is a odd Number",x);
      }
      break;
    case 2:
        if (x>>0)
       {
        printf("\n%d is a Positive Number",x);
    } 
         else if (x==0)
    {
        printf("\n%d is Zero",x);
    }
    else
    {
        printf("\n%d is a Negative Number",x);
    }
    break;
    case 3:
    while (y<=10)
    {
      printf("\n%d*%d = %d",x,y,x*y);
      y++;
    }
    break;
    case 4:
     if (x%2==0)
      {
        printf("\n%d is a Even number",x);
      }
      else
      {
        printf("\n%d is a Odd Number",x);
      }

       if (x>>0)
       {
        printf("\n%d is a Positive Number",x);
    } 
         else if (x==0)
    {
        printf("\n%d is Zero",x);
    }
    else
    {
        printf("\n%d is a Negative Number",x);
    }

    while (y<=10)
    {
      printf("\n%d*%d = %d",x,y,x*y);
      y++;
    }
    break;
    default:
    printf("Enter correct choice");
        break;
    }
  
  }
}