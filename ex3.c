#include <stdio.h>

int main(){
    int ns, uf, dv, umbarra, doisbarra, d1, d2, d3, d4, d5, d6, d7, d8, x;

    scanf("%d %d", &ns, &uf);
    if ((uf < 1) || (uf > 29)){
        printf("CODIGO DA UF INVALIDO!\n");
    }
    else{
        d1 = ns/10000000;
        d2 = (ns%10000000)/1000000;
        d3 = ((ns%10000000)%1000000)/100000;
        d4 = (((ns%10000000)%1000000)%100000)/10000;
        d5 = ((((ns%10000000)%1000000)%100000)%10000)/1000;
        d6 = (((((ns%10000000)%1000000)%100000)%10000)%1000)/100;
        d7 = ((((((ns%10000000)%1000000)%100000)%10000)%1000)%100)/10;
        d8 = ((((((ns%10000000)%1000000)%100000)%10000)%1000)%100)%10;

        dv = (d1*2) + (d2*3) + (d3*4) + (d4*5) + (d5*6) + (d6*7) + (d7*8) + (d8*9);
        dv = dv%11;
        if (dv > 9){
            umbarra = 0;
        }
        else{ 
            umbarra = dv;
        }
        d1 = uf/10;
        d2 = uf%10;
        x = (d1*7) + (d2*8) + (umbarra*9);
        x = x%11;
        if(x > 9){
            doisbarra = 0;
        }
        else{
            doisbarra = x;
        }
        printf("%d%02d/%d%d\n", ns, uf, umbarra, doisbarra);
    }

    return 0;
}