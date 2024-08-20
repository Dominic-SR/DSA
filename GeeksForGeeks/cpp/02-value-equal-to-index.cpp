// C++ program to check fixed point
// in an array using linear search
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == i)
            return i;
    }

    /* If no fixed point present then return -1 */
    return -1;
}

/* Driver code */
int main()
{

int arrsize;
  cout<<"Please enter the Array size :";
  cin>> arrsize;

int array[arrsize];

for(int i = 0; i < arrsize; i++){
cout<<"Enter No of Array# "<< i+1 <<": ";
cin >> array[i];
}
   // int arr[] = { -10, -1, 0, 3, 10, 11, 30, 50, 100 };
   // int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Fixed Point is " << linearSearch(array, arrsize);
    return 0;
}

// This is code is contributed by rathbhupendra


