#include "TXLib.h"
//#include  "AlgoPrint.h"

void FillArray (int data[], int size, int start, int step);
void PrintArray (const int data[], int size, const char title[]);

int main()
    {
    printf("\n");

    int data[20] = {};

    FillArray  (data, 20, 1, 3);
    PrintArray (data, 20, "2 exercise 1 2 3 3 2 1 1 2 3 3 2 1");

    printf("\n");

    return 0;

    }

void FillArray (int data[], int size, int start, int step)
    {
    int k = start;
    for (int i = 0; i < size; i++)
        {
        assert (0 <= i && i < size);

        data[i] = k;
        if (i + 1 < size) data[i + 1] = k;
        if (i % step == 1)
            {
            data[i] = 2;
            k = (k + 2) % (step + 1);
            }

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
