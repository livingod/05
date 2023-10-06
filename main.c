#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int answer = 59;
    int number;
    int trial = 0;
    
    do
    {
        printf("Guess a number: ");
        scanf("%d", &number);
    
        if (number > answer)
           printf("high!\n");
        else if (number < answer)
           printf("low!\n");
       
       trial++;
    
    
    }
    while (number != answer);
    
    printf("congratulation! trial number: %d\n",trial);
    
  system("PAUSE");	
  return 0;
}
