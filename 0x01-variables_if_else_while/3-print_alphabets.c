#include <stdio.h>

int main(void)
{

	char upper, lower;
	for(upper='A'; upper<='Z';upper++)
	{
	
		putchar(upper);
	}
	for(lower='a'; lower<='z';lower++)
	{
	
		putchar(lower);
	}
	putchar('\n');

	return (0);
}
