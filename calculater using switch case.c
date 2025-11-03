#include<stdio.h>
#include<stdio.h>
void main()

{
    int x,y,c;
    
   do
   {
    
    printf("\nEnter any two number:");
    scanf("%d%d",&x,&y);
    printf("\n Which of the following function U want to do: \n 1- Addition \n 2-Subtraction \n 3-Multiplication \n 4-Division \n 5-to all \n 6- to exit:\n");
    scanf("%d",&c);
   
   switch (c)
   {
    case 1:
        printf("\n the adition of %d + %d = %d",x,y,x+y);
        break;
    case 2:
        printf("\n the subtraction of %d - %d = %d",x,y,x-y);
        break;
    case 3:
        printf("\n The multiplication of %d * %d = %d",x,y,x*y);
        break;
    case 4:
        if( y!=0)
        {
      printf("\n The division of %d / %d = %d",x,y,x/y);
        }
        else
        printf("One number is Zero so divion will be zero ");
        break;
    case 5:
       printf("\n the adition of %d + %d = %d \n the subtraction of %d - %d = %d \n The multiplication of %d * %d = %d \n The division of %d / %d = %d",x,y,x+y,x,y,x-y,x,y,x*y,x,y,x/y);
       break;
    case 6:
       printf("Exit");
       break;
    default:
       printf("Entere correct choice number:");

        break;
    }
       } while (c!=6);
    
    
     
}
