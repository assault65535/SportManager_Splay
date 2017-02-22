#include "main.h"

int main() {
    int op,n,pos,key;
    inf tmpA[MAXN];
    initSplay();
    for(;;){
        prtMainUI();
        scanf("%d",&op);
        if (op == out)break;

        switch (op){
            case 1:
                prtInsert(&n,&pos,tmpA);
                Insert(pos,tmpA,n);
                break;
            case 2:
                prtDelete(&n,&pos);
                Delete(pos,n);
                break;
            case 3:
                prtUpdatec(&n,&pos,&key);
                update(pos,n,key,updatec);
                break;
            case 4:
                prtUpdateg(&n,&pos,&key);
                update(pos,n,key,updateg);
                break;
            case 5:
                prtAthlete();
                break;
            default:
                return 0;
        }
    }

    return 0;
}