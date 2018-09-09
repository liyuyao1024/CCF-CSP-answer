//
//  main.cpp
//  CSP0310
//
//  Created by 李语尧 on 2018/3/10.
//  Copyright © 2018年 李语尧. All rights reserved.
//
#include <iostream>
#include <stdio.h>
//#include <algorithm>
//#include <vector>
#include <queue>
using namespace std;
struct node {
    int num;
    int time;
    char op;
    bool operator < (node a)const{
        if(time!=a.time)
        return a.time < time;
        else if(op!=a.op)
            return a.op > op;
        else return a.num < num;
    }
};
const int N=1000;
int main(int argc, const char * argv[]) {
    int n,k,w,s,c;
    node t;
    priority_queue<node> q;
    cin>>n>>k;
    int hook[N+1];
    for (int i=1;i<=n;i++)
        hook[i]=i;
    /*printf("status: ");
    for(int i=1; i<=n; i++)
        printf("%d", hook[i]);
    printf("\n");*/

    
    for (int i=1;i<=k;i++){
        cin>>w>>s>>c;
        //cout<<w<<s<<c<<endl;
        t.num=w;
        t.time=s;
        t.op='G';
        q.push(t);
        
        t.time=s+c;
        t.op='R';
        q.push(t);
        //cout<<q.top().num<<endl;
    }
    //cout<<q.top().num<<endl;
    while(!q.empty())
    {
        t=q.top();
        q.pop();
        
        if(t.op=='G')
        {
            for (int i=1;i<=n;i++)
            if(t.num==hook[i])
            {
                hook[i]=0;break;
            }
        }
        else
        {
            for(int i=1;i<=n;i++)
            if(hook[i]==0)
            {
                hook[i]=t.num;break;
            }
        }
    }
    /*printf("status: ");
    for(int i=1; i<=n; i++)
        printf("%d", hook[i]);
    printf("\n");*/
    for (int i=1;i<n;i++)
        cout<<hook[i]<<" ";
    cout<<hook[n]<<endl;
    
    return 0;
}
