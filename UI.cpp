//
// Created by Henry on 17/2/21.
//

#include "main.h"

const char mainSurface[][100] = {
        "输个数字来操作",
        "增加运动员",
        "删除运动员",
        "更新班级数据",
        "更新成绩数据",
        "打印运动员信息",
        "退出",
        "\0"
};


void prtMainUI(){
    int i = 0;
    while (i != out) printf("%d.%s\n",i,mainSurface[i++]);
}

void prtInsert(int * n,int * pos,inf A[]){
    prtTree();
    printf("输入插入数据个数,以及插入位置\n");
    scanf("%d%d",n,pos);
    printf("依次输入运动员姓名,班级,成绩,用空格分开\n");
    for (int i = 0; i < *n; ++i) {
        scanf("%s %d %d",A[i].name,&A[i].cls,&A[i].grade);
    }
}

void prtDelete(int * n,int * pos){
    prtTree();
    printf("输入删除数据个数,以及位置\n");
    scanf("%d%d",n,pos);
}

void prtUpdatec(int * n,int * pos,int * key){
    prtTree();
    printf("输入更新数据个数,位置,以及班级\n");
    scanf("%d%d%d",n,pos,key);
}


void prtUpdateg(int * n,int * pos,int * key){
    prtTree();
    printf("输入更新数据个数,位置,以及成绩\n");
    scanf("%d%d%d",n,pos,key);
}

void prtAthlete(){
    prtTree();
}