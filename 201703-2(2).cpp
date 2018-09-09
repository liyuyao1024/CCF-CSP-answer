//
//  main.cpp
//  CSP0316
//
//  Created by 李语尧 on 2018/3/16.
//  Copyright © 2018年 李语尧. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
using namespace std;int v[1024],mpos[1024];
void move(int num,int val,int stp){
    int len=val;
   
    int temp=v[num];
    while (len) {
        v[num]=v[num+stp];
        mpos[v[num]]=num;
        num+=stp;
        len--;
    }
    v[num]=temp;
    mpos[temp]=num;
}
int main(int argc, const char * argv[]) {
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        v[i]=i;
        mpos[i]=i;
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        int pos=mpos[a];
        b<0?move(pos,-b,-1):move(pos,b,1);
    }
    
    
    
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
