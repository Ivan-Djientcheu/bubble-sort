#include<stdio.h>
int main()
{
  int array[100], n, c, d, sort;
  printf("Geben Sie die Anzahl der zu klassierfierende Elemente an: \n");
  scanf("%d", &n);

  printf("Geben Sie %d integers ein: \n", n);
  
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  for (c = 0 ; c < n - 1; c++)
  {
     for (d = 0 ; d < n - c - 1; d++)
	    {if (array[d] > array[d+1]) /* */
	        {
		         sort       = array[d];
		         array[d]   = array[d+1];
		         array[d+1] = sort;
		}
	    }
     }
   printf("Die Liste in aufsteigender Reihenfolge sortiert ist : \n");
   
   for (c = 0; c < n; c++)
     printf("%d\n", array[c]);

   return 0;
}

