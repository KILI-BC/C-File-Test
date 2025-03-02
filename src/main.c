#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f_ptr;
	char s[20]= "";
	/*read from testfile*/
	printf("READ:\n");
	f_ptr = fopen("readtest.txt", "r");
	while(fgets(s, 100, f_ptr) != NULL)
  		printf("%s", s);
	fclose(f_ptr);

	printf("\n\nWRITE:");
	f_ptr = fopen("writetest.txt", "w");
	fprintf(f_ptr, "placeholder-text");
	fclose(f_ptr);

	printf("\n\nDONE!");
	return EXIT_SUCCESS;
}