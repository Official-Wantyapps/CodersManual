// Welcome to Coder's Manual.
// Copyright (©) Uri Arev 2021
// Source Code by Uri Arev written: 12/Dec 2020

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("clear");
	printf("Welcome to the Coder's Manual.\n");
	printf("\n╔══════════════════╗\n");
	printf("║1. ASCII Table    ║\n");
	printf("╚══════════════════╝\n");
	
	char in[1000];
	fgets(in, 1000, stdin);
	if ( strcmp(in, "1\n") == 0 ) {
		printf("ASCII\n");
	} else {
		printf("Null");
	};
	return 0;
}
