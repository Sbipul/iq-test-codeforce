#include<stdio.h>
int main (){

    int n,i,ans;
    int k[105];
    int e_c =0,o_c =0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&k[i]);
    };
    for(i=1;i<=n;i++){
        if(k[i]%2==0){
            e_c++;
        }else{
            o_c++;
        };
    };

    if(e_c==1){
        for(i=1;i<=n;i++){
            if(k[i]%2==0){
                ans = i;
            };
        };
    }else{
        for(i=1;i<=n;i++){
            if(k[i]%2!=0){
                ans = i;
            };
        };
    };
    printf("%d",ans);

    return 0;
};
