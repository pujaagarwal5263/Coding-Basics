#include <iostream>

using namespace std;

int main()
{
    int a[50],i,pos,n;
    cout << "Enter the size of an array" << endl;
    cin>>n;
    cout<<"Enter the elements of an array";
    for(i=0;i<n;i++)
        cin>>a[i];

    cout<<"Array before insertion";
    for(i=0;i<n;i++)
        cout<<a[i]<<endl;

    cout<<"Enter the position where element is to be inserted";
    cin>>pos;
    for(i=n;i>=pos-1;i--)
        a[i+1]=a[i];
    cout<<"Enter your element";
    cin>>a[pos-1];

    cout<<"Array after insertion";
    for(i=0;i<n+1;i++)
        cout<<a[i]<<endl;
    return 0;
}
