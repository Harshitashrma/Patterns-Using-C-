#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter number of rows you want to print : "<<endl;
    cin>>r;

    cout<<"Enter number of columns you want to print : "<<endl;
    cin>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(j==0 || i==0 || i==(r-1) || j==(c-1))
            cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}