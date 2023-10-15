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
    cout << "Введите координаты точки куда вы целитесь(2 целых числа по модулю не превосходящих 5) "<<endl;
    cin>>x>>y;
    x+=rand()%10-5;
    y+=rand()%10-5;
    cout<<"Вы попали в точку "<<x<<" "<<y<<endl;
    double l=sqrt(x*x+y*y);
    int k=(int)l;
    k=(k<6)?(5-k):0;
    s+=k;
    cout<<"+ "<<k<<" баллов"<<endl;
}
string p=(s>=10)?"  ":"лузер";
cout<<"Вы набрали "<<s<<" баллов  "<<p<<endl;
return 0;
}
