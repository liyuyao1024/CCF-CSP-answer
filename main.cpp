#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n,num=0;
    cin>>n;
    int a[n],b[n],c[n],d[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i]>>d[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]<d[j]&&b[i]>c[j]) num+=min(b[i],d[j])-max(a[i],c[j]);
        }
    }
    cout<<num<<endl;
    return 0;
}
