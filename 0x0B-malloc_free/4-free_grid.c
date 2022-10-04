#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free space in alloc_grid
 *@grid: pointer to the grid pointer
 *@height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
