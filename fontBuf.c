#include <stdio.h>
#include <string.h>
#include "globals.h"

char fontBuffer[MAXFONTSIZE];
char *cBannerLookup[MAXNUMCBANNERS];
int cBannerWidth;

/*
 * Reads the font file and copies the cBanner symbols into the fontBuffer
 * array, recording the starting location each cBanner in the cBannerLookup array.
 * Note that this array is indexed with an offset of -FIRSTCHAR
 * (i.e. char 'a' data will be in cBannerLookup['a' - FIRSTCHAR], etc.).
 * cBannerWidth can be obtained when the first cBanner is read (store its width).
 */
int readFontBuffer(const char *fontFile)
{
    FILE *fontFilePtr;
    char *fontLine;
    char *fontBufferPtr = fontBuffer;

    // Variable to index into cBannerLookup as cBanners are read from the font file
    int charIdx = 0;

    // This opens the file m and handles file IO errors
    if ((fontFilePtr = fopen(fontFile, "r")) == NULL)
    {
        return -1;
    }

    // We found it easier to handle the very first cBanner separately; feel free to change!
    cBannerLookup[charIdx] = fontBufferPtr;

    while ((fontLine = fgets(fontBufferPtr, MAXFONTLINESIZE, fontFilePtr)) != NULL)
    {

        // TODO:
        //   - here fontLine is one line of the font file, ending in a '\n' char
        //   - save the length of the first line read without the '\n' char into cBannerWidth
        //   - fgets copies fontLine to fontBufferPtr, so fontBufferPtr should be
        //     updated by the length of the copied line so the next line will not
        //     overwrite the current one
        //   - when seeing a FONTDELIM char followed by a newline, you should:
        //       - store the *next* char's cBanner's location into cBannerLookup
        //       - reset maxWidth for the next char
    }

    // The file is closed after use
    fclose(fontFilePtr);
    return 0;
}

/* Looks up the specified char's cBanner and prints it to stdout. */
void printCBanner(const char c)
{
    // TODO
}
