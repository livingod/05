#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char c;
    int number=0;
  
    printf("input a string: ");
    //scanf("%s",&c);   �̰� �� �� ����? 
    
    while ((c = getchar())!= '\n')
    {
          if (c>='0' && c<='9')
             number++;
             }
    
    printf("digit is %d.\n",number);
  
  system("PAUSE");	
  return 0;
}
