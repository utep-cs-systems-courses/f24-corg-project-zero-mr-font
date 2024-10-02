#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

//Start of test idea for project zero
//print picket fence post: Simple function to first invoke print_triangle, then invoke print_squre
//to draw a picket fence post like image
void print_picket_fence_post(int leftCol,int size)
{
  print_triangle(leftCol, size);
  print_square(leftCol, size);
  putchar('\n');
}

//Idea: if this works we can next add a 'mask' that will change half of the elements in the left and right side of the square to be a blank element.
//This isn't efficient, but will draw an upward pointing arrow
