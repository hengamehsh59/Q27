#include<iostream>
using namespace std;
int main()
{
    int a,re;
    cin>>a;
    int d1=a%10;
    int d2=(a/10)%10;
    int d3=(a/100);
    re=(d1*100)+(d2*10)+d3;
        cout<<re;
        return 0;
    }
     