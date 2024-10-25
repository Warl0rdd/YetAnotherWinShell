#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./utils/ascii_art.h"

void startup(void)
{
	ascii_art();
}

void print_prompt(void)
{
	char* username = getenv("USERNAME");
	char* hostname = getenv("COMPUTERNAME");

	printf("%s@%s ~", username, hostname);
}

void main_loop(void)
{
	print_prompt();
}

int main(int argc, char** argv)
{

	// TODO config

	startup();

	main_loop();

	// TODO cleanup

	return EXIT_SUCCESS;
}
