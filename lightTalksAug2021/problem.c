#include <stdio.h>
#include <stdlib.h>
int main(){
    int a = 1, b = 3;
    if(a == 0) {
        b += "3";
    }
    else b += 3;
    printf("%d", b);
    return 0;
}
