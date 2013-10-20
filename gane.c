/* gane - collects some symbols or symbol sets from the input stream.
	Some comment
*/
/* Maksim Mikhalchuk <maksim.mikhalchuk@gmail.com> */

// #include <config.h>
#include <stdio.h>
#include <sys/types.h>

#include "system.h"

#include "error.h"
#include "long-options.h"

/* The official name of this program (e.g., no 'g' prefix).  */
#define PROGRAM_NAME "gane"

#define AUTHORS proper_name ("Maksim Mikhalchuk")

void usage (int status)
{
  if (status != EXIT_SUCCESS)
    emit_try_help ();
  else
    {
      printf (_("\
				Usage: %s [STRING]...\n\
				or:  %s OPTION\n\
				"),
              program_name, program_name);

      fputs (_("\
				Repeatedly output a line with all specified STRING(s), \
				or 'y'.\n\
				\n\
			"), stdout);
      fputs (HELP_OPTION_DESCRIPTION, stdout);
      fputs (VERSION_OPTION_DESCRIPTION, stdout);
      emit_ancillary_info ();
    }
  exit (status);
}

int main(int argc, char const *argv[])
{
	printf("Hello\n");
	return 0;
}