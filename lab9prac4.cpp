#include<iostream>
using namespace std;
int reverseArray()
{
    int n,i,arr[n];
    cout<<"range of array: ";
    cin>>n;
    cout<<"enter the elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    reverseArray();
}
