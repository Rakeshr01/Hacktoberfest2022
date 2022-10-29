#include<iostream>

using namespace std;

bool search(int arr[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(k == arr[i])
        {
            return 1;
        }
        
    }
    return 0;
    
}
int main()
{
    int arr[] = { 1,4,6,3,0};
    int n = sizeof(arr)/sizeof(int);
    int k = 4;
    bool found = search(arr,n,k);

    cout<<found;
}
