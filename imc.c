#include <stdio.h>
int main (){
    float imc,altura,peso;
    printf("informe seu peso \n");
    scanf("%f",&peso);
    printf("informe sua altura \n");
    scanf("%f",&altura);
    imc=peso/(altura*altura);
    printf ("Seu imc %2.f \n",imc);
      if (imc < 19) {
      printf ("VC esta magro \n");
      }
       else if ( imc >20 && imc < 26){
       printf ("VC tem peso ideal \n");
       }
        else if (imc > 26 && imc < 31){
        printf ("Vc esta acima do peso \n"); 
        }
          else if (imc > 31){
          printf ("VC esta obeso \n");
          }     

return 0;  
}  