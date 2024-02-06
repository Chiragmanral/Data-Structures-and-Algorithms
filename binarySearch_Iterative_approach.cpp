#include<iostream>
using namespace std;


int binary_search(int arr[],int n, int target) {
    int low = 0;
    int high = n-1; 

    while(low<=high) {
        //int mid = low + (high - low)/2;
        // int mid = (low + high)/2;
        // int mid = (low + high)>>2;
        int mid = low + ((high - low) >> 2);

        if(arr[mid] == target) {
            return mid;
        }
        else if (target > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main(void) {

    cout << "ONLY ENTER THE SORTED ARRAY(IN INCREASING ORDER)" <<endl;
    int m;
    cout << "Enter the size of the sorted array : ";
    cin >> m;

    int brr[m];

    for(int i = 0; i < m; i++) {
        cout << "Enter the " << i+1 << " element of the sorted array: ";
        cin >> brr[i];
    }

    int target1;
    cout << "Enter the target: ";
    cin >> target1;

    int answer = binary_search(brr, m , target1);

    // int brr[5] = {2,5,9,65,78}; 

    // int a = binary_search(brr, 5,9);
    if(answer!=-1) {
    cout <<"The index at which target is present is : " << answer;
    }
    else {
        cout << "Element is not present in the array";
    }
}