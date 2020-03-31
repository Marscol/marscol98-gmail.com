#include<stdio.h>
#include<stdlib.h>
 
int main() {
    float P, H, imc;
    
    printf("Digite o seu peso:\n");
    scanf("%f", &P);
    
    printf("Digite a sua altura:\n");
    scanf("%f", &H);
    
    imc = P / (H*H);
	
	if(imc<16){
		printf(" Subpeso severo \n");
	}
	else
		if((imc>=16)&&(imc<=19.9)){
		printf(" Subpeso \n");
		}
		else
			if((imc>20)&&(imc<=24.9)){
			printf(" Normal \n");
			}
			else
				if((imc>=25)&&(imc<=29.9)){
				printf(" Sobrepeso \n");
				}
				else
					if((imc>=30)&&(imc<=39.9)){
					printf(" Obeso \n");
					}
					else
						if(imc>=40){
						printf(" Obeso Morbido \n");
						}       
	system("pause");  
    }
