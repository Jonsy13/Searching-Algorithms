#include<stdio.h>
#include<math.h>


int min(int step,int n){
    return step>n?n:step;
}

int JumpSearch(int a[] , int x , int n){
    
    int step = sqrt(n);
    int prev = 0;
    while(a[min(step,n)-1]<x){
        prev = step;
        step +=sqrt(n);
        if(prev>=n){
            return -1;
        } 
    }

    while(a[prev]<x){
        prev++;

        if(min(step,n)==prev){
            return -1;
        }
    }

    if(a[prev]==x){
        return 1;
    }

    return -1;

}

int main(){

    int a[] = {0,1,2,3,4,5};
    int x=2;
    int n = sizeof(a)/sizeof(a[0]);
    if(JumpSearch(a,x,n)==1){
        printf("Found");
    }
    else{
        printf("Not Found");
    }
    return 0;
}