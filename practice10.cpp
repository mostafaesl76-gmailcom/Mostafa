#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int x;
    cout<<"shomare mah ra vared konid: ";
    cin>>x;
    if(x>=1&&x<=6)
        cout<<"in mah 31 roozeh ast.";
        else if(x>6&&x<=11)
            cout<<"in mah 30 roozeh ast.";
            else if(x==12)
            cout<<"in mah 29 roozeh ast va har char sal yek bar 30 roozeh mishavad.";
                else 
                cout<<"shomareh mah ra eshtebah vared kardid ";
    getch();
}