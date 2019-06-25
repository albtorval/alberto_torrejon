﻿#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "gol.h"

int main(){

	int i = 0;
	struct world w;

	if (!gol_alloc(&w,X,Y)){
        fprintf(stderr, "Error couldn't allocate memory\n");
        return EXIT_FAILURE;
    }

	gol_init(&w);
	
	do {
		printf("\033cIteration %d\n", i++);
		gol_print(&w);
		gol_step(&w);
	} while (getchar() != 'q');

	gol_free(&w);
	return EXIT_SUCCESS;
}


