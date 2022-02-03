#include <iostream>
using namespace std;
int findSecondLargest(int arr[], int index, int largest, int secondLargest) {
    if(index == 5) {
        return secondLargest;
    }
    int element = arr[index];
    if(element > secondLargest) {
        if(element > largest) {
            return findSecondLargest(arr, index + 1, element, largest);
        } else {
            return findSecondLargest(arr, index + 1, largest, element);
        }
    }
    return findSecondLargest(arr, index + 1, largest, secondLargest);
}
int main()
{
    int arr[5]={1,7,3,4,5};
    int index=0;
    int largest=0;
    int secondLargest=0;
   cout<<findSecondLargest(arr,index,largest,secondLargest);
}