#include <stdio.h>
#include <math.h>
main(){
    float m2=100, raio, altura, pi=3.14159, areatotal, valorcusto;
    scanf("%f%f", &raio, &altura);
    areatotal= 2*pi*(raio*raio)+2*pi*raio*altura;
    valorcusto= areatotal*m2;
    printf("O VALOR DO CUSTO E = %.2f\n", truncf(valorcusto*100)/100);
    
    
    
    
    
    
}
