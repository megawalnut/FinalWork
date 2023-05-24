
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void inputArray(int* array, int size);
void outputArray(int* array, int size);
double processArray(int* array, int size);
void outputResult(double result);

int main() //hehe
{
    setlocale(LC_ALL, "Russian");

    int m[10];
    double res;

    inputArray(m, 10);
    outputArray(m, 10);
    res = processArray(m, 10);
    outputResult(res);

    return 0;
}

void inputArray(int* array, int size)
{
    srand(time(NULL));
    for (int il = 0; il < size; il++)
    {
        *array = rand();
        array++;
    }
}

void outputArray(int* array, int size)
{
    printf("Массив случайных чисел: \n");
    for (int il = 0; il < size; il++)
    {
        printf("%d\n", *array);
        array++;
    }
}

double processArray(int* array, int size)
{
    double g = 1;

    //eсли число положительное
    if (g > 0)
        printf("Число положительное\n");
    else
        printf("Число отрицательное\n");

        for (int il = 0; il < size; il++)
        {
            g = g * (*array);
            array++;
        }
    g = pow(g, 0.1);
    return g;
}

void outputResult(double result)
{
    printf("Среднее геометрическое массива: \n");
    printf("%lf\n", result);
}