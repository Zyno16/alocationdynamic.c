#include <stdio.h>
#include <stdlib.h>

int main()
{int *n = malloc(sizeof(int));
int *s = malloc(sizeof(int));

printf("enter de number n");
scanf("%d",n);
*s=0;
for(int i=1;i<=-*n;i+=2)
    *s=*s+i;
printf("the sum of number %d is %d",*n,*s);
  free(s);
  free(n);
    return 0;
}
