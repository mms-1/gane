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



int iscool(int symbol)
{
	/* // TODO a nice comparison with symbols from argument string
	switch (symbol)
	{
		case 'o':
		case ' ':
			return 1;
		default:
			return 0;
	}
	//*/
	return 1;
}


int main(int argc, char const *argv[])
{
	char* str = "Some string with symbols";
	int c, ganed =0;
	
	// TODO test-file
	//printf("[i] Initial string: %s\n", str);
		
	
	do
	{
		c = fgetc(stdin);
		if (c == 32)
		{
			fputc('.',stdout);
		} else {
			if ( (c != EOF) && (iscool(c)) )
			{
				fputc(c, stdout);
				ganed++;
			}
		}
	} while (c != EOF);	
	printf("[i] Symbols gained totaly: %d\n", ganed); // TODO always print to stdout only
	return 0;
	/*<< 00 OO >>*/
}
