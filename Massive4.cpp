#include "TXLib.h"
//#include  "AlgoPrint.h"

void FillArray (int data[], int size, int start, int step);
void PrintArray (const int data[], int size, const char title[]);

int main()
    {
    printf("\n");

    int data[20] = {};

    FillArray  (data, 20, 1, 1);
    PrintArray (data, 20, "4 exercise  1 3 5 7 9 ... 10 8 6 4 2");

    printf("\n");

    return 0;

    }

void FillArray (int data[], int size, int start, int step)
    {
    int k = 1;
    for (int i = 0; i < size/2; i++)
        {
        assert (0 <= i && i < size);

        data[i] = k;
        k += 1;
        data[size - i - 1] = k;
        k += 1;
        }
    if (size % 2 == 1) data[size/2] = k;
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
