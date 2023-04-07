//karena algoritma dapat memecahkan masalah secara sistematis dan bisa mengoptimalkan waktu dalam memecakan masalah 
//array dan link list
//sepeed of the machine, complier, operating system, programming language, size of the input
//quicksort
//bubble sort, insertion sort, selesction sort merupakan (quadratic), Quick sort, marge sort, shell sort (logliner)

#include <iostream>;
using namespace std;
 
const int max = 64 + 20 - 2 * 15 + 10 + 20; // jumlah maksimum data

int Dhafa[84];
int temp[84];

void merge(int low, int mid, int high) {
    int i = low;
    int MD = mid + 1;
    int k = low;

    while (i <= mid && MD <= high) {
        if (Dhafa[i] <= Dhafa[MD]) {
            temp[k] = Dhafa[i];
            i++;
        }
        else {
            temp[k] = Dhafa[MD];
            MD++;
        }
        k++;
    }

    while (MD <= high) {
        temp[k] = Dhafa[MD];
        MD++;
        k++;
    }

    while (i <= mid) {
        temp[k] = Dhafa[i];
        i++;
        k++;
    }
    for (int i = low; i <= high; i++) {
        Dhafa[i] = temp[i];
    }
}


void mergeSort(int low, int high) {
    if (low >= high) {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(low, mid);
    mergeSort(mid + 1, high);
    merge(low, mid, high);
}
