#include<iostream>
#include<math.h>
#include <matplotlib-cpp/matplotlib.h>
using namespace std;
int main()
{
    float m,x1,x2,y1,y2,delta_X,delta_Y,xi,yi;
    cout<<"X1 & Y1: ";
    cin>>x1>>y1;
    cout<<"X2 & Y2: ";
    cin>>x2>>y2;
    delta_X=x2-x1;
    delta_Y=y2-y1;
    cout<<"Delta-X is: "<<delta_X<<"\nDelta-Y is: "<<delta_Y<<endl;
    m=(delta_Y/delta_X);
    cout<<"Slope is: "<<m<<endl;
    xi=x1,yi=y1;
    while(xi!=x2 && yi!=y2){
    if(delta_X>=delta_Y)
    {
        cout<<"("<<round(xi)<<","<<round(yi)<<")    ";
        // delta_X=1;
        xi=xi+1;
        yi=yi+m;
        // if(xi==x2 && yi==y2){
        // cout<<"     ("<<x1<<","<<y1<<")";
        // }
    }
    else
    {
        cout<<"("<<round(xi)<<","<<round(yi)<<")    ";
        // delta_Y=1;
        yi=yi+1;
        xi=xi+(1/m);
        // if(xi==x2 && yi==y2){
        // cout<<"     ("<<x1<<","<<y1<<")";
        // }
    }}
}