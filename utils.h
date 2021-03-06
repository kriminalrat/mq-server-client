/**
 * SO, 2016
 * Lab #5, Lucrul cu memoria
 *
 * Useful structures/macros
 */

#ifndef LIN_UTILS_H_
#define LIN_UTILS_H_	1

#define MAX_SIZE    1024

#include <stdio.h>
#include <stdlib.h>

/* useful macro for handling error codes */
#define DIE(assertion, call_description)				\
	do {								\
		if (assertion) {					\
			fprintf(stderr, "(%s, %d): ",			\
					__FILE__, __LINE__);		\
			perror(call_description);			\
			exit(EXIT_FAILURE);				\
		}							\
	} while (0)

#endif
