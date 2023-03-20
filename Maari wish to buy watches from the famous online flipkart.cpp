#include <iostream>
using namespace std;
int main()
{
int p,d,m,s,x,y;
cin>>p>>d>>m>>s;
y=p;
x=0;
while(p<=s)
{
 y=y-d;
 if(y<m)
 y=m;
 s=s-y;
 x++;
}cout<<x;
return 0;
}
