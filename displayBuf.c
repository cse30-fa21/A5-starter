#include <stdio.h>
#include <string.h>
#include "globals.h"

char displayBuffer[MAXHEIGHT][MAXWIDTH];
int displayHeight = MAXHEIGHT;
int displayWidth = MAXWIDTH;

/*
 * Looks up the specified char's cBanner in fontBuffer, then copies the
 * cBanner into the displayBuffer starting at column xPos. Returns the
 * column where the next cBanner should start.
 */
int copyCBanner(const char c, int xPos)
{

    // TODO:
    //   - how can you get char c's cBanner?
    //   - how can you copy the cBanner into the displayBuffer?
    //   - is there anything to be careful about when copying?
    //   - this should return the xPos (column) of the next cBanner;
    //     what are the inter-cBanner spacing rules?

    return -1;
}

/* Fills every byte of displayBuffer with the specified char */
void fillDisplayBuffer(const char c)
{
    // TODO
}

/* Prints the entire displayBuffer to stdout */
void printDisplayBuffer()
{
    // TODO
}
