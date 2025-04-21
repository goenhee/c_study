#include <stdio.h>
int main(){
    int n; 
    1<=n && n<=4000;
    scanf("%d", &n);
    if (n%4==0 && n%100!=0)
        printf("1");
    else if (n%400==0)
        printf("1");
    else printf("0");
}
