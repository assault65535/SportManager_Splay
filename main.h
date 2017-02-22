//
// Created by Henry on 17/2/21.
//

#ifndef SPORTMANAGER_MAIN_H
#define SPORTMANAGER_MAIN_H

#endif //SPORTMANAGER_MAIN_H

#include "stdio.h"


#define lson l,mid-1,A
#define rson mid+1,r,A

const int CUTOFF = 9;


//SplayTree

struct inf{
    char name[20];
    int cls,grade;
};

const int MAXN = 10000;
const int INF = 0x3f3f3f3f;

int MaxGrade(int l,int r);
void update(int pos, int n,int key,void (*updater)(int root,int key));
void updatec(int rt,int v);
void updateg(int rt,int v);
void prtTree();
void Delete(int pos,int n);
void Insert(int pos, inf A[],int size);
void Erase(int rt);
int getKth(int k,int rt);
int Build(inf A[],int l,int r,int fa);
void initSplay();
int newNode(int fa,inf * tmp);

//Algorithm

void Sort(inf A[],int size);
int max(int a,int b);
int min(int a,int b);
int Mid(int a,int b);
void swap(int * a,int  * b);


//UI
const int out = 6;

void prtMainUI();
void prtInsert(int * n,int * pos,inf A[]);
void prtDelete(int * n,int * pos);
void prtUpdatec(int * n,int * pos,int * key);
void prtUpdateg(int * n,int * pos,int * key);
void prtAthlete();