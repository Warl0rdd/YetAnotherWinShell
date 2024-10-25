#include <stdio.h>
#include <stdlib.h>
#include "./utils/ascii_art.h"

void startup(void)
{
	ascii_art();
}

int main(int argc, char** argv)
{

	// TODO config

	startup();

	// TODO cleanup

	return EXIT_SUCCESS;
}
