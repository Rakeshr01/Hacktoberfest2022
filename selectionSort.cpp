#include<iostream>
// #include<vector>
using namespace std;


void selectionSort(int arr[], int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        int min = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[min]) 
                min = j;
            
        }
        swap(arr[min], arr[i]);
    }
}

int printArray(int arr[],int n)
{
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}


int main()
{
     
    int  arr[8] = {4,2,6,7,1,8,9,3};

    int n = sizeof(arr)/sizeof(int);

    printArray(arr,n);

    selectionSort(arr,n);

    printArray(arr,n);
    
}
