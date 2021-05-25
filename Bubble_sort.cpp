#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void bubble_Sort(int arr[], int n)
{
    for(int i=0; i< n-1; i++)
    {
        for(int j=0; j < n-i-1; j++) {
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
int main()
{
    int arr[] = {6,7,8,3,2,1,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_Sort(arr, n);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}