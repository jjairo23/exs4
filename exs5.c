#include <stdio.h>
main(){
    int ax2, bx, c, delta;
    scanf("%d%d%d", &ax2, &bx, &c);
    delta= (bx*bx)-4*ax2*c;
    printf("O VALOR DE DELTA E = %.2f\n", truncf(delta*100)/100);
}    
    
    
