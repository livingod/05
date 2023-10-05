#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n;
    
    printf("input an integer: ");
    scanf("%d",&n);
     
    if (n>0)
       printf("positive\n"); 
    else if (n<0)
         printf("negative\n");
    else printf("zero\n"); 
     
  
  system("PAUSE");	
  return 0;
}
