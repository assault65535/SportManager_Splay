#include "main.h"

int main() {
    int op,n,pos,key;
    //op:操作 n:数据量 pos:更新位置 key:更新值
    inf tmpA[MAXN];
    //inf:用户信息
    initSplay();
    //初始化数据库
    for(;;){
        prtMainUI();
        //打印主界面
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
            case 6:
                toArray(tmpA,1,3);
                //将pos1-3号人的信息放进数组
                for (int i = 0; i < 3; ++i) {
                    printf("%s\n",tmpA[i].name);
                }
                break;
            default:
                return 0;
        }
    }

    return 0;
}