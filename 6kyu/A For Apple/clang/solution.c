#include <stdlib.h>
#include <string.h>
#include <stdint.h>

char* a(uint32_t nlines)
{
    if (nlines < 4)
      return calloc(1, 1);

    if (nlines % 2)
        nlines--;

    size_t rows = nlines;
    size_t cols = 2 * nlines - 1;
    size_t pos = cols / 2 + 1;
    
    size_t length = rows * (cols + 1);
    char* result = (char*)malloc(sizeof(char) * length);
    memset(result, ' ', sizeof(char) * length);

    for (size_t i = 0; i < rows; i++)
    {
        result[i * (cols + 1) + pos - 1] = 'A';
        result[i * (cols + 1) + (cols - pos)] = 'A';
        if (i == rows / 2)
            for (size_t j = pos - 1; j < cols - pos; j++)
                if (j % 2 != i % 2)
                    result[i * (cols + 1) + j] = 'A';
        if (i + 1 != rows)
            result[i * (cols + 1) + cols] = '\n';
        pos--;
    }
    result[length - 1] = '\0';

	return result;
}