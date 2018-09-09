//
//  main.cpp
//  CSP9.9
//
//  Created by 李语尧 on 2018/9/9.
//  Copyright © 2018年 李语尧. All rights reserved.
//

#include <iostream>
//#include <stdio.h>
#include <algorithm>
//#include <vector>
//#include <queue>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,k;
    int b,c,d,e;
    cin>>n>>k;
    int a[n+1];
    for (int i=1;i<=n;i++)
        a[i]=i;
    for (int i=0;i<k;i++){
        cin>>b>>c;
        e=c;
        for(int j=1;j<=n;j++){
            if(a[j]==b){d=j;break;}
        }
        for (int m=0;m<abs(c);m++)
            swap(a[d+(c/abs(c))*m],a[d+(c/abs(c))*(m+1)]);
        
    }
    for (int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
