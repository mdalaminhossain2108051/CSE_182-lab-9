#include<iostream>
using namespace std;
int alamin()
{

     int i,j,r,c,a[10][10],b[10][10],add[10][10];
    cout<<"enter the number of row and column: ";
    cin>>r>>c;
    cout<<"enter the element of matrix: ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\n1st matrix is:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"enter the number of row and column: ";
    cin>>r>>c;
    cout<<"enter the element of matrix: ";

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }
     cout<<"\n2nd matrix is:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";

    }
   cout<<"Output:\n";
   for ( i = 0;i<r;i++ ) {
      for (j = 0;j<c;j++ ) {
        add[i][j]=a[i][j]+b[i][j];
        cout<<add[i][j]<<" ";
      }
      cout<<"\n";
   }
   return 0;
}
int main()
{
    alamin();

}
