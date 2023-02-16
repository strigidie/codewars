#include <stddef.h>
#include <stdint.h>

void transpose_matrix(
    size_t rows, size_t cols,
    const int32_t matrix[rows][cols],
    int32_t transpose[cols][rows])
{
    for (size_t i = 0; i < cols; i++)
        for (size_t j = 0; j < rows; j++)
            transpose[i][j] = matrix[j][i];
}
