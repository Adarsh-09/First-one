#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int i=1,player,computer;


while (1)
{
  if (i==1)
  {
    computer=rand()%3; // random number will be generated here which is between 0 to 2.
    printf("Enter your choice \n 0-Rock \n 1-paper \n 2-scissor \n");
    scanf("%d",&player);
    if (player>2)
    {
        printf("Invalid input \n");
    }
    else
    {
    printf("Computers choice %d \n",computer);
    printf("yours choice %d \n",player);

    if (player==computer)
    {
        printf("No one won this round \n");
    }
    else if (player==0 && computer==1)
    {
        printf("Computer won this round \n");
        
    }
    else if (player==0 && computer==2)
    {
        printf("You won this round \n");
    }
    else if (player==1 && computer==2)
    {
        printf("Computer won this round \n");
    }
    else if (player==1 && computer==0)
    {
        printf("you won this round \n");
    }
    else if (player==2 && computer==0)
    {
        printf("Computer won this round \n");
    }
    else if (player==2 && computer==1)
    {
        printf("You won this round \n");
    }
    }
    printf("Do you want to continue (1/0) \n");
    scanf("%d",&i);
  }
  else
  {
    break;
  }
}
    return 0;
}