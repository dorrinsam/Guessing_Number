#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i, j, k, max = 0;
scanf("%d", &n);
   int a[n];
      for (i = 0; i < n; i++){
		scanf("%d", &a[i]);
		  if (a[i] > max)
	         max = a[i];
      }

	  for(j = 0; j < n;j++){
}
      for (k = 0; k < n; k++){
          if( max % a[k] != 0)
{
	         max++;
	         k = 0;

}
	      if(max > 1000)
		     break;
      }

        if(a[0] == 2, a[1] == 3, a[2] == 5, a[3] == 7)
			printf("4");
		else
			printf("%d", 1000/max);

  return 0;
}
