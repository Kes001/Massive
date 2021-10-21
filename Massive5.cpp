#include "TXLib.h"
//#include  "AlgoPrint.h"

void FillArray (int data[], int size, int start, int step);
void PrintArray (const int data[], int size, const char title[]);

int main()
    {
    printf("\n");

    int data[24] = {};

    FillArray  (data, 24, 1, 3);
    PrintArray (data, 24, "5 exercise  1 2 3 7 8 9 ...  12 11 10 6 5 4");

    printf("\n");

    return 0;

    }

void FillArray (int data[], int size, int start, int step)
    {
    int k = 1;
    for (int i = 0; i < size/2; i++)
        {
        assert (0 <= i && i < size);

        data[i] = i + k;
        data[size - i - 1] = i + step + k;

        if (i % step == 2) k += 3;

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
