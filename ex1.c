#include <stdio.h>

int main(){
    int a,b,c,d,e,temp,f,g,h,i,j;

    scanf("%d %d %d %d %d", &f, &g, &h, &i, &j);
    a = f;
    b = g;
    c = h;
    d = i;
    e = j;

    if (a > b){
        temp = b;
        b = a;
        a = temp; 
    }
    if (a > c){
        temp = c;
        c = a;
        a = temp; 
    }
    if (a > d){
        temp = d;
        d = a;
        a = temp; 
    }
    if (a > e){
        temp = e;
        e = a;
        a = temp; 
    }
    if (b > c){
        temp = c;
        c = b;
        b = temp; 
    }
    if (b > d){
        temp = d;
        d = b;
        b = temp; 
    }
    if (b > e){
        temp = e;
        e = b;
        b = temp; 
    }
    if (c > d){
        temp = d;
        d = c;
        c = temp; 
    }
    if (c > e){
        temp = e;
        e = c;
        c = temp; 
    }
    if (d > e){
        temp = e;
        e = d;
        d = temp; 
    }
    if ((f != g) && (f != h)  && (f != i)  && (f != j)  && (g != h)  && (g != i)  && (g != j) && (h != i) && (h != j) && (i != j)){
        if((a == f) && (b == g)  && (c == h)  && (d == i)  && (e == j)){    
            printf("MENOR: %d, MAIOR: %d\n", a, e);
            printf("ORDENADO CRESCENTE\n");
        }
        else if((a == j) && (b == i)  && (c == h)  && (d == g)  && (e == f)){
            printf("MENOR: %d, MAIOR: %d\n", a, e);
            printf("ORDENADO DECRESCENTE\n");
        }
    }
    else{
        printf("MENOR: %d, MAIOR: %d\n", a, e);
        printf("DESORDENADO\n");
    }
    return 0;
}