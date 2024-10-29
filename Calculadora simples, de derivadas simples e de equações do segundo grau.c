#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define max 100



void RaizesSegundoGrau();
void DerivadasBasicas();
void CalculadoraSimples();
double CalcularDerivada(double coeficiente, int expoente);
void MostrarDerivada(double coeficiente, int expoente);

int main(){
	int opcao1;
	do{

	printf("-----------------------Menu-------------------------\n");

	printf("1- Calcular raizes de uma equacao do segundo grau\n");
	printf("2- Calcular derivadas basicas de polinomios\n");
	printf("3- Calculadora simples\n");
	printf("4- Sair\n\n");
	printf("Digite a opcao desejada: ");
	scanf("%d",&opcao1);
	switch (opcao1){
		
		case 1: 
		RaizesSegundoGrau();
		break;
		case 2: 
		DerivadasBasicas();
		break;
		case 3: 
		CalculadoraSimples();
		break;
		case 4:
		printf("Operacao finalizada.");
		break;
		default:
		printf("A opcao digitada e invalida!");
		break;
	}
}while(opcao1 != 4);

	return 0;
}


void RaizesSegundoGrau() {
    printf("\n------------------Calculadora de raizes de equacoes do segundo grau-----------------------\n\n");
    printf("Uma equacao polinomial do segundo grau eh caracterizada pela forma: ax^2 + bx + c \n\n");
    printf("Para calcular suas raizes: \n\n");
    float a, b, c;
    printf("Digite o coeficiente A: ");
    scanf("%f", &a);
    printf("\nDigite o coeficiente B: ");
    scanf("%f", &b);
    printf("\nDigite o coeficiente C: ");
    scanf("%f", &c);
    printf("\n");
    if (a == 0) {
        printf("Erro: Nao eh equacao do segundo grau!\n");
        return;
    }
    double delta = pow(b, 2) - 4 * a * c;
    if (delta > 0) {
        double raiz1 = ((-b) + sqrt(delta)) / (2 * a);
        double raiz2 = ((-b) - sqrt(delta)) / (2 * a);
        printf("A primeira raiz eh: %.2lf\n", raiz1);
        printf("A segunda raiz eh: %.2lf\n", raiz2);
    } else if (delta < 0) {
        printf("A raiz nao existe!\n");
    } else {
        double raiz1 = (-b) / (2 * a);
        printf("Raiz 1 e Raiz 2 sao iguais, o valor eh: %.2lf\n", raiz1);
    }
    printf("\n");
}


void CalculadoraSimples(){

     double num1, num2;
     int opcao;     
     do{

     printf("-----------------------Menu-----------------------\n\n");
     printf("1- Soma\n");
     printf("2- Subtracao\n");
     printf("3- Multiplicacao\n");
     printf("4- Divisao\n");
     printf("5- Elevar a x\n");
     printf("6- Raiz quadrada\n");
     printf("7- Sair\n\n");

    printf("Digite a opcao desejada: ");
    scanf("%d",&opcao);
    printf("\n\n");
    
     	
    	
    switch (opcao){
    	
    	case 1:
    	printf("-----------------------Soma-----------------------\n\n");
    	
    	printf("Digite o primeiro numero: ");
		scanf("%lf",&num1);	
		printf("\n");
    	printf("Digite o segundo numero: ");
		scanf("%lf",&num2);
		printf("\n");
    	double soma = num1+num2;
    	printf("Resultado: %.2lf\n",soma);
    	break;
    	
    	case 2: 
    	printf("-----------------------Subtracao-----------------------\n\n");

    	printf("Digite o primeiro numero: ");
		scanf("%lf",&num1);	
		printf("\n");
    	printf("Digite o segundo numero: ");
		scanf("%lf",&num2);
		printf("\n");
    	double subtracao = num1 - num2;
    	printf("Resultado: %.2lf\n",subtracao);
    	break;
    	
    	case 3: 
    	printf("-----------------------Multiplicacao-----------------------\n\n");
    	
    	printf("Digite o primeiro numero: ");
		scanf("%lf",&num1);	
		printf("\n");
    	printf("Digite o segundo numero: ");
		scanf("%lf",&num2);
		printf("\n");
    	double multiplicacao = num1 * num2;
    	printf("Resultado: %.2lf\n",multiplicacao);
    	break;
		case 4: 
    	printf("-----------------------Divisao-----------------------\n\n");
    	
    	printf("Digite o primeiro numero: ");
		scanf("%lf",&num1);	
		printf("\n");
    	printf("Digite o segundo numero: ");
		scanf("%lf",&num2);
		printf("\n");
		if(num2 == 0){
			printf("Erro: Divisao por 0!\n");
			break;
		}else{
			double divisao = num1 / num2;
    	printf("Resultado: %.2lf\n",divisao);
		}
    	
    	break;		


		case 5: 
		printf("-----------------------Elevar a x-----------------------\n\n");
		int expoente;
		printf("Digite a base: ");
		scanf("%lf",&num1);
		printf("\n");
		printf("Digite o expoente: ");
		scanf("%d",&expoente);
		printf("\n");
		double elevado = pow(num1, expoente);
		printf("\n");
		printf("Resultado: %.2lf\n",elevado);
		break;
		case 6: 
		printf("-----------------------Raiz quadrada-----------------------\n\n");
		printf("Digite um numero: ");
		scanf("%lf",&num1);
		printf("\n");
		if (num1 < 0) {
     printf("Erro: Raiz quadrada de numero negativo!\n");
    } else {
    double raiz = sqrt(num1);
    printf("Resultado: %.2lf\n", raiz);
   }
		break;
		case 7:
		break;
		default:
		printf("Opcao invalida\n");
		break;

	} //fim switch case	


}while(opcao!=7);

}



double CalcularDerivada(double coeficiente, int expoente){
		if(expoente == 0){
			printf("0");// derivada de constante é sempre 0!!!!!!
		}
		return coeficiente * expoente;
}

   
void MostrarDerivada(double coeficiente, int expoente){
   	  double derivada = CalcularDerivada(coeficiente, expoente);
   	  int ExpoenteNovo = expoente - 1;
   	
   	  if(ExpoenteNovo >= 0 ){
   	  	printf("%.2lf x^%d", derivada, ExpoenteNovo);
		 }
}


void DerivadasBasicas(){

	printf("-----------------------Derivadas basicas-----------------------\n\n");
	int qntd;
    
    printf("Digite o numero de termos do polinomio: ");
    scanf("%d", &qntd);
    
	double coeficiente;
	int  expoente;
	for(int i = 0; i<qntd; i++){
		printf("Digite o coeficiente e o expoente (na mesma linha): ");
		scanf("%lf %d",&coeficiente, &expoente);
		MostrarDerivada(coeficiente, expoente);
		printf("\n");		
	}
	printf("\n");

}
