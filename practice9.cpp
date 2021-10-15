#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    float x,y,z,h;
    cin>>h;
    cout<<"enter x:";
    cin>>x;
    cout<<"enter y:";
    cin>>y;
    cout<<"enter z:";
    cin>>z;
    if(x>y&&x>z)
        cout<<x;
        else if(y>x&&y>z)
            cout<<y;
            else
                cout<<z;
    getch();
}