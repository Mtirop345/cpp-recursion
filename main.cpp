#include <iostream>
using namespace std;

int recursion(int m,int n){
    if (m==n)
        return  m;
    else
       return  m+ recursion(m+1,n);

}
int main() {
 int m,n;
    if(typeid(m & n) ==typeid(int))
    {
        cout<<"enter the initial range number m  :";
        cin>>m;
        cout<<"Enter the last range number n  :";
        cin>>n;
    }else
        cout<<"the  value you entered is not supported"<<endl;
cout<<recursion(m,n);


    return 0;
}
