#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int x)
{

    int i,p=0;
    //Write your code here
    for(i=0;i<n;i++){
        if(arr[i]==x){
            p=1;
            break;
        }
    }
    if(i<n){
        return i;

    }
    if(p==0 || n==0){
        return -1;
    }
}
int main(void) {
    int brr[5] = {454 , 34 , 56 , 13 , 96};

    int answer = linearSearch(brr , 5 , 9);

    if(answer!=-1) {
    cout <<"The index at which target element is present is : " << answer;
    }
    else {
        cout << "Element is not present in the array";
    }
    return 0;
}