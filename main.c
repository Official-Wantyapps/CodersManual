// Welcome to Coder's Manual.
// Copyright (©) Uri Arev 2021
// Source Code by Uri Arev written: 12/Dec 2020

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	while ( 0 == 0 ) {	
		system("clear");
		printf("Welcome to the Coder's Manual.\n");
		printf("\n╔══════════════════╗\n");
		printf("║1. ASCII Table    ║\n");
		printf("║99. Exit          ║\n");
		printf("╚══════════════════╝\n");
		
		char in[1000];
		fgets(in, 1000, stdin);
		if ( strcmp(in, "1\n") == 0 ) {
			printf("ASCII\n");
			printf("Press <ENTER> to continue");
			char enter[100];
			fgets(enter, 100, stdin);
		} else if ( strcmp(in, "99\n") == 0 ) {
			system("clear");
			return 0;
		} else {
			printf("Please make sure you entered a valid number. Press <ENTER> to continue");
			char enter[100];
			fgets(enter, 100, stdin);
		};
	};
	return 0;
}
