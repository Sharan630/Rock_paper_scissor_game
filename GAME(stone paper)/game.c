#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int game(char man, char robot)
{
	if(man == robot)
	 return -1;
	 
	 if(man == 'r' && robot == 'p')
	  return 0;
	  
	  if(man == 'p' && robot == 'r')
	   return 1;
	   
	   if(man =='r' && robot == 's')
	    return 1;
	    
	    if(man == 's'  && robot == 'r')
	     return 0;
	     
	     if(man == 'p' && robot == 's')
	      return 0;
	      
	      if(man == 's' && robot == 'p')
	       return 1;
}

int main()
{
	int n;
	char man,robot,result;
	srand(time(NULL));
	n=rand() % 100;
	
	if(n<33)
	{
		robot = 'r';
	}
	
	else if (n>33 && n<66)
	{
		robot = 'p';
	}
	
	else 
	{
		robot = 's';
	}
	
	
	printf("\n\n\n\n\t\tEnter r for ROCK ,s for STONE, p for PAPER:\n\t\t\t\t\t\t\t");
	scanf("%c",&man);
	result = game(man,robot);
	
	if(result == -1)
	{
		printf("\n\n\t\t\t\tGame has been drawn between man and robot\n");
	}
	
	else if(result == 1)
	{
		printf("\n\n\t\t\t\tMan has won the game,Robot lost game\n");
	}
	
	else
	{
		printf("\n\n\t\t\t\tRobot won the game , Man lost\n Better luck next time\n ");
	}
	
	printf("\n\n\t\t\t\tEnter man choice : %c, Robot choice : %c\n",man,robot);
	
	return 0;
	
}
