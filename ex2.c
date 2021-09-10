#include <stdio.h>

int main(){
    double a, b, c, resultadocerto;
    char o, i;
    scanf("%lf%c%lf%*c%lf", &a, &o, &b, &c);
    if( o == '+'){
        resultadocerto = a + b;
        if(resultadocerto == c){
            printf("CORRETO\n");
        }
        else{ 
            printf("ERRADO! O resultado deveria ser: %.6lf\n", resultadocerto);
        }
    }
    if( o == '-'){
        resultadocerto = a - b;
        if(resultadocerto == c){
            printf("CORRETO\n");
        }
        else{ 
            printf("ERRADO! O resultado deveria ser: %.6lf\n", resultadocerto);
        }
    }
    if( o == '*'){
        resultadocerto = a * b;
        if(resultadocerto == c){
            printf("CORRETO\n");
        }
        else{ 
            printf("ERRADO! O resultado deveria ser: %.6lf\n", resultadocerto);
        }
    }
    if( o == '/'){
        resultadocerto = a / b;
        if(resultadocerto == c){
            printf("CORRETO\n");
        }
        else{ 
            printf("ERRADO! O resultado deveria ser: %.6lf\n", resultadocerto);
        }
    }
    return 0;
}