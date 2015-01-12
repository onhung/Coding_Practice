#include <stdio.h>
#include <string.h>

#define MAX_STRING 256

void reverse( char* str )
{
	char temp;

	char *str_start = str;
	char *str_end = strlen(str) - 1;

	// Approach #1
	while( str_start < str_end )
	{
		temp = *str_start;
		*(str_start++) = *str_end;
		*(str_end--) = temp;
	}

	// Approach #1.1 w/ comments: THIS IS ONLY AN EXAMPLE
	while( str_start < str_end )
	{
		temp = *str_start; 		//Dereferences and gets value of str_start
		*str_start = *str_end; 	//Assigns VALUE of end to start 
		str_start++;			//Increment pointer to next address
		*str_end = temp; 		//Assigns VALUE of temp to end (This is the swamp)
		str_end--; 				//Decrement pointer to previous address 
	}

	return;
}
 
int main( int argc, char * argv[])
{
	//Error checking, argc will always be +1 the argument 
	if(argc != 2)
	{
		printf("No string arguement");
		return 1;
	} 

	char str[ MAX_STRING ];

	//Adding a null terminator 
	str[ MAX_STRING - 1 ] = '/0';
	strcpy( str, argv[1], (MAX_STRING - 1) );
	reverse( str );

	return 0;
}