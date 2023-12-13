#include <iostream>
#include "algorithm"
#include "chrono"
using namespace std;
using namespace std::chrono;

void insertionSort(int arr[], int n){
    int i, key, j;
    for ( i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;


        while(j >= 0 && arr[j] > key )
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    
}

// a utility function to print an array
// of size n
void printArray(int arr[], int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}


//Driver code
int main(){
    
    //Dynamic Array 
    int N = 0;
    cout << "Pleae enter number of elements." << endl;
    cin >> N;

    int *arr = new int[N - 1];

    //random generator fill
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 30;
    }

    auto start = high_resolution_clock::now();
    



/*  int arr[]  = { 12, 11, 13, 5, 6};
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << "N: " << N << endl;
    cout << "Size of array : " << sizeof(arr) << endl;
    cout << "Size of first element: " << sizeof(arr[0]) << endl;
*/
    

    cout << "Unsorted Array: \n";
    printArray(arr, N - 1);

    cout << "Sorted Array: \n";
    insertionSort(arr, N - 1);
    printArray(arr, N - 1);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << endl << "Time taken by function: " << duration.count() << " microseconds" << endl;




    return 0;
}