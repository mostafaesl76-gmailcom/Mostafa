#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
    float a,b,c,delta,x1,x2;
    while(1){
	
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;
    delta=(b*b)-(4*a*c);
    if(delta>0)
        {
            x1=(sqrt(delta)-b)/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            cout<<x1<<endl<<x2<<endl;
        }else if (delta==0)
            {
                x1=(sqrt(delta)-b)/(2*a);
                cout<<x1<<endl;
            }else
                cout<<"risheh nadarad"<<endl;
 }   getch();
}