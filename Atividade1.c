#include <stdio.h>
int main(){

    float valor, quantidade;
    int v100 = 0, v50 = 0, v20 = 0, v10 = 0, v5 = 0, v2 = 0, v1 = 0, v050 = 0, v025 = 0, v010 = 0, v05 = 0, v01 = 0;  

    printf("informe o valor");
    scanf("%f",&valor);
   

     while(valor >= 100){
       valor -= 100;
     
       v100++;
        /* contador das notas de 100 */
      
     }
      while(valor >= 50){
       valor -= 50;
     
       v50++;
        /* contador das notas de 50 */
      
     }
     while(valor >= 20){
       valor -= 20;
     
       v20++;
        /* contador das notas de 20 */
      
     }
      while(valor >= 10){
       valor -= 10;
     
       v50++;
        /* contador das notas de 10 */
      
     }
     while(valor >= 5){
       valor -= 5;
     
       v5++;
        /* contador das notas de 5 */
      
     }
      while(valor >= 2){
       valor -= 2;
     
       v2++;
        /* contador das notas de 2 */
      
     }
     while(valor >= 1){
       valor -= 1;
     
       v1++;
        /* contador das moedas de 1 */
      
     }
      while(valor >= 0.5){
       valor -= 0.5;
     
       v050++;
        /* contador das moedas de 0.5 */
      
     }
     while(valor >= 0.25){
       valor -= 0.25;
     
       v025++;
        /* contador das moedas de 0.25 */
      
     }
      while(valor >= 0.10){
       valor -= 0.10;
     
       v010++;
        /* contador das moedas de 0.10 */
      
     }
     while(valor >= 0.5){
       valor -= 0.5;
     
       v05++;
        /* contador das moedas de 0.5 */
      
     }
      while(valor >= 0.1){
       valor -= 0.1;
     
       v01++;
        /* contador das moedas de 0.1 */
      
     }
    printf("%d notas de 100",v100 ); 
    printf("\n %d notas de 50",v50 ); 
    printf("\n %d notas de 20",v20 ); 
    printf("\n %d notas de 10",v10 ); 
    printf("\n %d notas de 5",v5 ); 
    printf("\n %d notas de 2",v2 ); 
    printf("\n %d moedas de 1",v1 ); 
    printf("\n %d moedas de 0.5",v050 ); 
    printf("\n %d moedas de 0.25",v025 ); 
    printf("\n %d moedas de 0.10",v010 ); 
    printf("\n %d moedas de 0.5",v05 ); 
    printf("\n %d moedas de 0.1",v01 ); 

    return 0;
}