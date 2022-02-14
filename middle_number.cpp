#include<iostream>
using namespace std;

int findElement(int arr[], int size)
{
    int right_sum = 0, left_sum = 0;
 
    for (int i = 1; i < size; i++)
        right_sum += arr[i];
 
    for (int i = 0, j = 1; j < size; i++, j++) {
        right_sum -= arr[j];
        left_sum += arr[i];
 
        if (left_sum == right_sum)
                  return arr[i + 1];
    }
 
    return -1;
}
 
 int main()
 {
 	 int arr[] = { 3, 2, 5, 4, 1, 1,1,1,1,3,2 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << findElement(arr, size);
    return 0;
 }