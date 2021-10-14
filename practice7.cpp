#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;
    if(a==b&&b==c)
        cout<<"motesavi azla";
        else if(a==b||b==c||a==c)
             cout<<"motesavi sogheyn";
             else
                cout<<"mokhtalef asla";
    return 0;
}
