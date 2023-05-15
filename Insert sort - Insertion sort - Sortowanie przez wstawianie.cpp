#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void InsertSort (int tab[], int rozm)

{
    for(int i=1; i<rozm; i++)
    {
        int temp=tab[i];
        int j=i-1;
        while(j>=0 && tab[j]>temp)
        {
            tab[j+1]=tab[j];
            j--;
        }
        tab[j+1]=temp;
    }
}

int main()
{
    int rozm = 100;
    int *tab = new int[rozm];

    for (int i=0; i<rozm; i++)
    {
        tab[i]=rand()%rozm;
    }

    InsertSort(tab, rozm);

    for (int i=1; i<rozm; i++)
    {
        cout<<tab[i]<<endl;
    }

    return 0;
}
