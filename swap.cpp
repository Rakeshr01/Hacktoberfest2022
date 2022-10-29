#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<"\n";
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    int n = sizeof(arr)/sizeof(int);


    printArray(arr,n);

    for(int i=0;i<n;i+=2)
    {
        if((i+1)<n)
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
             arr[i+1] = temp;

            //i = i+2;
        }
    }

   printArray(arr,n);
}
