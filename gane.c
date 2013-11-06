/* gane - collects some symbols or symbol sets from the input stream.
	Some comment
*/
/* Maksim Mikhalchuk <maksim.mikhalchuk@gmail.com> */

// #include <config.h>
#include <stdio.h>
#include <string.h>

/* The official name of this program (e.g., no 'g' prefix).  */
#define PROGRAM_NAME "gane"

#define AUTHORS proper_name ("Maksim Mikhalchuk")



int main(int argc, char const *argv[])
{
	char* str = "Some string with symbols";
	printf("[i] Initial string: %s\n", str);
	
	return 0;
}
