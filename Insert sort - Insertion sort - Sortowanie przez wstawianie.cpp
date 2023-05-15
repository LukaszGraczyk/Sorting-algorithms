#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void InsertSort (int tabablica[], int rozmiar)

{
    for(int i=1; i<rozmiar; i++)
    {
        int temp=tabablica[i];
        int j=i-1;
        while(j>=0 && tabablica[j]>temp)
        {
            tabablica[j+1]=tabablica[j];
            j--;
        }
        tabablica[j+1]=temp;
    }
}

int main()
{
    int rozmiar = 100;
    int *tablica = new int[rozmiar];

    for (int i=0; i<rozmiar; i++)
    {
        tablica[i]=rand()%rozmiar;
    }

    InsertSort(tablica, rozmiar);

    for (int i=1; i<rozmiar; i++)
    {
        cout<<tablica[i]<<endl;
    }

    return 0;
}
