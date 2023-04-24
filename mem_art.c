#include "main.h"
/**
 * Frees a pointer and nulls the adress
 * return 1 if freed, otherwise, 0.
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

