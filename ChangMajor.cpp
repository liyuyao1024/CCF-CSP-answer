//
//  main.cpp
//  转专业
//
//  Created by 李语尧 on 2018/3/22.
//  Copyright © 2018年 李语尧. All rights reserved.
//
#include <iostream>
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int light[21];//灯刚开始状态为全灭，设为-1
    for(int i=0;i<=20;i++){
        light[i]=-1;
    }
    for(int i=1;i<=n;i++)//i代表第几个人
    {
        for(int j=1;j<=20;j++)//j代表每轮的灯的号码
        {
            if((j%i)==0)light[j]=-light[j];
        }
    }
    for(int i=1;i<=20;i++){
        if(light[i]>0)printf("第%d盏灯亮着\n",i);
    }
    return 0;
}
