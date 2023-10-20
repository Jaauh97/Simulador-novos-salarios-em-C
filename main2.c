int main(int argc, char *argv[]) {
	
	int n;

    
    printf("---------------------------------------------------------\n");
    printf("Ola, Bem Vindo ao Simulador de Novos Salarios da Empresa X\n");
    printf("---------------------------------------------------------\n");
    printf("\n");
    printf("Veja a Baixo a Funcoes Disponiveis Na Empresa.\n");
    printf("\n");
    printf("1. Ajudante de Obras / 2. Encarregado de Obras\n");
    printf("3. Mestre de Obras / 4. Engenheiro Civil\n");
    printf("5. Engenheiro Master / 6. Gerente De Projetos\n");
    printf("\n");
    printf("Informe o Numero da Sua Funcao Na Empresa:\n");
    scanf("%d", &n);
    printf("---------------------------------------------------------\n");

   switch (n)
   {
   case 1:
   printf("Voce Selecionou: Ajudante de Obras (Aumento Salarial de 9%%)\n");
    break;
   
   case 2:
   printf("Voce Selecionou: Encarregado de Obras (Aumento Salarial de 11%%)\n");
   break;

   case 3:
   printf("Voce Selecionou: Mestre de Obras (Aumento Salarial de 14%%)\n");
   break;

   case 4:
   printf("Voce Selecionou: Engenheiro Civil (Aumento Salarial de 14%%)\n");
   break;

   case 5:
   printf("Voce Selecionou: Engenheiro Mestre (Aumento Salarial de 16%%)\n");
   break;

   case 6:
   printf("Voce Selecionou: Gerente de Projetos (Aumento Salarial de 18%%)\n");
   break;

   default :
  printf("Vaga Inavalida\n");
    break;
   }
   
    

   float sal ,porcen ,aumento, novo_salario;
   
   printf("\n");
   printf("Agora Informe Seu ATUAL Salario:  (Ultilize Apenas um Ponto entre as casas. Ex: 1.000) \n");
   scanf("%f", &sal);
   
   printf("\n");
   
   printf("Informe a Portentagem de seu Aumento: (Sem o Simbolo de %% , Somente o numero. Ex: 14 para aumentos de 14%%)\n");
   scanf("%f",&porcen);
   
   
   aumento = sal * porcen/100;
   novo_salario = sal + aumento;
   
   printf("\n");
   printf("---------------------------------------------------------\n");
   printf("\n");
   printf("Seu Salario Ira Para: %.3f.\n", novo_salario);

 
  
   

    system("pause");
    
    
    
    
    
    return 0;
}
    
    
    
    
    
    
    
    
