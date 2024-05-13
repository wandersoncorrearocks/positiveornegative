#include <stdio.h>


int number_verifier (int n){
  int result;

  if (n < 0)
	{
	  result = 0;
	}
  else
	result = 1;
  return result;
}



int main (){
  int a, result;
  printf ("Type a number to be verified. Zero will be considered neutral.\n"); //advising the user not to type zero
  scanf ("%d", &a);
  
  int result2 = number_verifier (a); //calling the function

  if (result2 == 1)
	  return 1;
 
  else
	return 0;
}
