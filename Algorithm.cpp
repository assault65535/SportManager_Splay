//
// Created by Henry on 17/2/21.
//

#include "main.h"

int Mid(int a,int b){
    return (a + b)>> 1;
}
int max(int a,int b){
    return a > b ? a:b;
}

int min(int a,int b){
    return a < b ? a:b;
}

void swap(inf * a,inf  * b){
    inf tmp = *a;
    *a = *b;
    *b = tmp;
}

int median3(int l,int r,inf A[]){
    int mid = Mid(l,r);
    if(A[l].grade > A[mid].grade) swap(&A[l],&A[mid]);
    if(A[mid].grade > A[r].grade) swap(&A[mid],&A[r]);
    if(A[l].grade > A[mid].grade) swap(&A[l],&A[mid]);
    swap(&A[mid],&A[r-1]);
    return A[r-1].grade;
}

void Insert_Sort(int l,int r,inf A[]){

    for (int i = l + 1; i <= r; ++i) {
        inf tmp = A[i];
        int j;
        for (j = i ; j > l && A[j].grade < A[j-1].grade ; ++j) A[j] = A[j-1];
        A[j] = tmp;
    }
}

void Q_sort(int l,int r,inf A[]){
    if(r - l + 1 >= CUTOFF){
        int pivot = median3(l,r,A);

        int j = r-1,i = l;
        for (;;) {
            while (A[++i].grade < pivot);
            while (A[--j].grade > pivot);

            if(i < j){
                swap(&A[i],&A[j]);
            } else{
                break;
            }
        }
        int mid = j;
        swap(&A[mid],&A[r-1]);
        Q_sort(lson);
        Q_sort(rson);
    } else{
        Insert_Sort(l,r,A);
    }
}

void Sort(inf A[],int size){
    Q_sort(0,size-1,A);
}

int upperBound(int A[],int l,int r,int key){
    while (l<=r){
        int mid = Mid(l,r);
        if(A[mid] <= key) l = mid+1;
        else r = mid-1;
    }
    return l;
}