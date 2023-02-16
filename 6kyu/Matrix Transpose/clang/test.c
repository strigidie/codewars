#include <stdio.h>

void transpose_matrix(
    size_t rows, size_t cols,
    const int32_t matrix[rows][cols],
    int32_t transpose[cols][rows]);

int main(void)
{
    int32_t transpose[5][3];
    transpose_matrix(5, 3, (int[5][3]){
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1},
        {0, 1, 0},
        {1, 0, 0},
    }, transpose);

    // for (size_t i = 0; i < 5; i++)
    // {
    //     for (size_t j = 0; j < 3; j++)
    //     {
    //         printf("%d ", transpose[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}