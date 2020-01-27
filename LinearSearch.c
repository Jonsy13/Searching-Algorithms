#include<stdio.h>

int LinearSearch(int a[],int x , int n){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return 1;
        }
    }
    return -1;
}
int main(){
    int a[] = {1,2,3,4,5,6};
    int x = 2;
    int n = sizeof(a)/sizeof(a[0]);
    if(LinearSearch(a,x,n)==1){
        printf("Found");
    }
    else{
        printf("Not Found");
    }
    return 0;
}