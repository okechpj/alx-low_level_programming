#include "main.h"

void print_alphabet(void)
{
	char alphabet;
	for(alphabet='a'; alphabet<='z'; alphabet++)
	{
	
		putchar(alphabet);
	}
	putchar('\n');
}

int main(void)
{

	print_alphabet();

	return (0);
}
