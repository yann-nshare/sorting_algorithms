/*
** EPITECH PROJECT, 2020
** sorting_algorithms
** File description:
** main.c
*/

#include "include.h"

void print_array(int *array, unsigned int size)
{
    if (size >= 1) {
        printf("%d%s", *array, (size == 1) ? ("\n") : (", "));
        print_array(++array, --size);
    }
}

int main(int argc, char const *argv[])
{
    int size = 1000000;
    int *byte_array_dec = generat_random_array(size, 100, 0);

    if (!byte_array_dec)
        return 84;
    bubble_sort(byte_array_dec, size);
    printf("start\n");
    print_array(byte_array_dec, size);
    return 0;
}
