#include<stdio.h>

int main()
{
	puts("This is my first program on C language");   /*Puts function can insert String */
	puts("I am on third chapter of this book and learning I/O"); // This is second type to insert commets in the program "//" 

	// Today i am goiung to learn about PRINTF function and escape characters

	printf("Printf function needs escaping character at the end of line to start with new line");
	printf("Line number 10 and 11 will print as one string because there is no escaping character"); /* so these 2 lines will print together as one string*/

	// Now we will use escaping character to print two different strings

	printf("\nNow i am going to use escaping character \n");
	printf("See it works :\n)");

	return 4;
}