

#include <stdio.h>
#include <string.h>

#define SIZE 40

int x = 0;
int y = 0;
int flag = 0;

void printReverse (char *);
int isPalindrome (char *);
int isPalindromeRecur (char *);

int main ()
{   
   int result;  char c; int i;  int count=0;
   char arr[SIZE];
  
   fgets(arr,SIZE,stdin);
   while (strcmp(arr, "quit\n") != 0)
   {
      arr[strlen(arr)-1] = '\0'; // remove the trailing \n
      // print backward
      printReverse(arr);
   
      if (isPalindrome (arr)) 
         printf ("\nIs a palindrome.\n");
      else 
         printf ("\nNot a palindrome.\n");
 

      x = 0;
      y = strlen(arr)-1;

      if (isPalindromeRecur (arr))
           printf ("\nIs a palindrome by recursive.");
      else
           printf ("\nNot a palindrome by recursive.");
      	   printf("\n------------------------------------------------\n");

      fgets(arr,SIZE,stdin);
    }
    return 0;
}


int isPalindrome (char * str)
{
	char *ptr = str;
	int i=0, j=0;
	int k = strlen(str)-1;
	int flag =0;
	for( i = k; i >= k/2; i--){
		if(*(ptr+i) == *(ptr+j))
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
		j++;
	}
	return flag;
}

int isPalindromeRecur (char * str)
{
	if(y == strlen(str) / 2) {
		return flag;
	}
	if(*(str+x) != *(str+y)){
		return 0;
	}
	flag = 1 ;
	x++;
	y--;
	isPalindromeRecur(str);
}

// assume the \n was already removed manually
void printReverse(char * str)
{
	int i =0;
	for( i = strlen(str) - 1; i >= 0; i--){
		printf("%c", *(str + i));
	}
}

