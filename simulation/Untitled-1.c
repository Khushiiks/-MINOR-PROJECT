#include<stdio.h>
int main (){
    int n;
    int m[];
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        scanf("%d",m[i]);
        for(int j=0;j<=n;j++){
            if(n%m){
                printf("Yes");
            }
            else{
                printf("No");
            }
        }
    }
    
}