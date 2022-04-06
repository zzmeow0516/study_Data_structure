#include<stdio.h>
#include<stdlib.h>

#define maxsize 20
#define Done 1
#define Bad 0
#define True 1
#define False 0

typedef int ElemType;
typedef int Status;
typedef struct
{
    /* data */
    int length;
    ElemType data[maxsize];
}sqlist;

/* define method:InitList() */
Status InitList(sqlist *L){
    L->length=0;
    return Done;
}

/*define method:ListEmpty() */
Status ListEmpty(sqlist *L){
    if(L->length==0)
    return True;
    return False;
}

/*define method:ClearList() */
Status ClearList(sqlist *L){
    L->length=0;
    return Done;
}

/*define method:ListInsert() */
Status ListInsert(sqlist *L,int i,int tempdata){
    int a,b;
    for(a=i-1;a<L->length;a++){
        
    }
} 

int main(){
    
    return 0;
}