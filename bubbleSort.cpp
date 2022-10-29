#include<iostream>
using namespace std;

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
    int arr[6] = {2,5,8,9,1,3};
    int n = sizeof(arr)/sizeof(int);
    int counter = 1;
    
    printArray(arr,n);
    
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }


    printArray(arr,n);

    return 0;

    
}
