#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
using namespace std;

int main()
{
    srand(time(NULL));
int a=1,s=0;
for(int i=0;i<5;i=-(~i)){
    int x,y;
    setlocale(0,"");
    cout << "¬ведите координаты точки, куда вы целитесь(два неотрицательных числа не превосход€щих 5) "<<endl;
    cin>>x>>y;
    x+=rand()%10-5;
    y+=rand()%10-5;
    cout<<"¬ы попали в точку "<<x<<" "<<y<<endl;
    double l=sqrt(x*x+y*y);
    int k=(int)l;
    k=5-k;
    s+=k;
    cout<<"+ "<<k<<" баллов"<<endl;
}
string p=(s>=10)?"  ":"лузер";
cout<<"¬ы набрали "<<s<<"очков  "<<p<<endl;
return 0;
}
