/*
** EPITECH PROJECT, 2020
** sorting_algorithms
** File description:
** bubble_sort.c
*/

void my_swap(int *a, int *b)
{
    int swp;

    swp = *b;
    *b = *a;
    *a = swp;
}

void my_swap2(int *a, int *b)
{
    if (*a > *b)
        my_swap(a, b);
}

void bubble_sort(int *array, unsigned int size)
{
    for (int index = 0; index < size; index++) {
        for (unsigned int i = 0; i < size - 1 - index; i++)
            if (array[i] > array[i + 1])
                my_swap2(&array[i], &array[i + 1]);
    }
}