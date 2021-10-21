#include "TXLib.h"
//#include  "AlgoPrint.h"

void FillArray (int data[], int size, int start, int step);
void PrintArray (const int data[], int size, const char title[]);

int main()
    {
    printf("\n");

    int data[20] = {};

    FillArray  (data, 20, 1, 3);
    PrintArray (data, 20, "1 exercise 1 2 3 1 2 3 1 2 3");

    printf("\n");

    return 0;

    }

void FillArray (int data[], int size, int start, int step)
    {
    for (int i = 0; i < size; i++)
        {
        assert (0 <= i && i < size);

        data[i] = i % step + start;
        }

    }

void PrintArray (const int data[], int size, const char title[])
    {
    $y; printf ("\n%s:", title);

    for (int i = 0; i < size; i++)
        {
        if (i % 10 == 0) printf ("\n");

        $c; printf ("[%2d] = ", i);
        $g; printf ("%2d", data[i]);
        $c; printf (", ");
        }
    }
