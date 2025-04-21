#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    if(b+c<=59){
        b=b+c;}
    else if(b+c>=60){
        if(a+(b+c)/60==24){
            a=0;
            b=(b+c)%60;
        }
    else if(a+(b+c)/60>=25){
        a=a+(b+c)/60-24;
        b=(b+c)%60; }
       else{         
        a=a+(b+c)/60;
        b=(b+c)%60;}
}
    printf("%d %d", a, b);
}

