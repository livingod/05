#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int input;
    
    printf("input an integer: ");
    scanf("%d",&input);
    
    if (input>=0)
       printf("%d\n",input);
    else printf("%d\n",-input);
    
     
  
  system("PAUSE");	
  return 0;
}
