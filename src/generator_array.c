/*
** EPITECH PROJECT, 2020
** sorting_algorithms
** File description:
** generator_array.c
*/

#include <stdio.h>
#include <stdlib.h>

int *generat_random_array(unsigned int size, unsigned int max, unsigned int min)
{
    int *array = malloc(sizeof(int) * size);

    if (max < min || max == 0) {
        free(array);
        return NULL;
    }
    for (unsigned int i = 0; i < size; i++)
        for (array[i] = (rand() % (int) max) + (int) min; array[i] < (int) min || array[i] > (int) max; array[i] = (rand() % (int) max) + (int) min);
    return array;
}
