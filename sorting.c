

#include <stdio.h>
#include <string.h>

#define SIZE 30

void sortArray (char *);

int main()
{
	char c;
	char arr[SIZE];

	fgets(arr,SIZE,stdin);
	   while (strcmp(arr, "quit\n") != 0)
	   {
	      arr[strlen(arr)-1] = '\0';

	      sortArray(arr);

	      printf("%s\n\n", arr);
	      fgets(arr,SIZE,stdin);
	   }
	   return 0;
}


void sortArray(char * c)
{
	int i = 0;
	int k = strlen(c)-1;

	for(i = 0; i < k; i++)
	{
		int minposition = i;
		int j;
		for( j = i+1; j < k+1; j++)
		{
			if(*(c + j) < *(c + minposition))
			{
				minposition = j;
			}
		}
		char temp = *(c + i);
		*(c + i) = *(c + minposition);
		*(c + minposition) = temp;
	}
}
