#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,8,2,10,7,15,13,11,20,18};
    int temp=0;
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        if(arr[i]>arr[j])
        {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    for(int k=0;k<10;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}