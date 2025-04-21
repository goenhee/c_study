#include <stdio.h>

int main() {
    int a, b, c, n;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b&&b==c)
        n=10000+a*1000;
    else if(a==b&&b!=c||a==c&&c!=b||b==c&&c!=a){
        if(a==b||a==c)
            n=1000+a*100;
        else if(b==c)
            n=1000+c*100;
    }
    else if(a!=b&&b!=c&&a!=c){
         if(a>b&&a>c)
            n=a*100;
         else if(b>a&&b>c)
            n=b*100;
         else if(c>a&&c>b)
            n=c*100;
    }
    printf("%d", n);
}

