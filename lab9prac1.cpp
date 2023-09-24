#include<iostream>
using namespace std;
int al(int n1,int n2)
{
    int sum;
    sum=n1+n2;
    return sum;
}
int am(int n1,int n2)
{
    int sub;
    sub=n1-n2;
    return sub;
}
int in(int n1,int n2)
{
    int mul;
    mul=n1*n2;
    return mul;
}
int ho(int n1,int n2)
{
    int div;
    div=n1/n2;
    return div;
}
int main()
{
   int a,b,result;
   char c;
   cout<<"Enter two number = ";
   cin>>a>>b;
   cout<<"what do you want to do(+,-,*,/)  " ;
   cin>>c;
   if(c=='+')
   {
   al(a,b);
    result=al(a,b);
   cout<<"Output= "<<result;
   }
   else if(c=='-')
   {
       am(a,b);
        result=am(a,b);
   cout<<"Output= "<<result;
   }
   else if(c=='*')
   {
       in(a,b);
        result=in(a,b);
   cout<<"Output= "<<result;
   }
   else if(c=='/')
   {
       ho(a,b);
        result=ho(a,b);
   cout<<"Output= "<<result;
   }
   return 0;

}
