// Cool little things done in c that are syntactically very nice.
// Maybe they aren't all that cool, but I'm ignorant and therefore
// easily impressed.

//the classic
void strcpy(char *a, char *b)
{
	while (*a++ = *b++);
}


//Echo out all of the command line args
int main(int argc, char *argv[])
{
	while (--argc > 0)
		printf(argc > 1 ? "%s " : "%s", *++argv);

	putchar('\n');
	return 0;
}



/* If op_except is NULL (0), print all lines not containing the 
 * string x. If it is 1, print all the lines containing x.
 */
for (int i = 0; i < numlines; ++i)
{
	if ((strstr(lines[i], x) == NULL) == op_except)
		printf("%s\n", lines[i]);
}
/* Pseudo-code:
 * if ((the existence of the substring) == I want the substring)
 		print the line in question

 	The "if" could be alternatively written:
 	if ((strstr(lines[i], x) != NULL) != op_except)
 */



/* Type checking with the ternary operator.
 * The types of pointers within the ternary operator must be the same.
 * I'm not sure why the C standard mandates it in this specific place
 * when it doesn't require such checks anywhere else to my knowledge.
 * It isn't that useful when just doing assignment, because most compilers
 * catch this and throw a warning anyways. But it can be used in other
 * places. Check common.h in the data structures library.
 */
#define typesafe_assign(a, b) (a) = (1 ? (b) : (a))

// For example the following code would throw an error
int a;
char b;

int *a_ptr;
typesafe_assign(a_ptr, &b);

