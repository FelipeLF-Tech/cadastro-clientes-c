#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void cadastro();
void exibir_cadastro();
void gravar_arquivo();
void carrega_arquivo();
struct _referencia{

    char nome[100];
    char CPF[100];
    char ende[100];
    char tele[100];
    char marca[100];
    char cod[100];
    char preço[100];
  };

  typedef struct _referencia Referencia;

  Referencia cadastro_cliente[1000];
  int num_cliente= 0;
  

int main()  {
  FILE *arquivo = NULL;
  int opcao;
  int opcao1;
  int opcao2;
  int opcao3;
  int opcao4;
  int i;
  int quant;
  
  char nome7[100];

  printf("Nome do Atendente: ");
  fflush(stdin);
  scanf("%[^\n]s",nome7);
  printf("Digite 1 para entrar no modo demonstracao: ");
  scanf("%d",&opcao3);

  if(opcao3 == 1){
    while(opcao!=6){
      while(opcao2!=1){
       

         printf("\t\t\t\tLoja Marisa\n");
         printf("\t\t\tSeja Bem Vindo, Atendente %s\n",nome7);
         printf("1-Cadastrar\n");
         printf("2-Exibir Dados\n");
         printf("3-Alterar\n");
         printf("4-Excluir\n");
         printf("5-Informaçoes do Sistema\n");
         printf("6-Sair\n");
         printf("\nQual Opcao Voce Deseja acessar?\n");
         scanf("%d",&opcao);
         
        switch(opcao){
          int alterna;
           case 1:
              printf("\n\nQuantos Cadastros Voce Deseja Realizar? ");
              scanf(" %d",&quant);
              cadastro(quant);
              gravar_arquivo(quant);
             
           break;
              
           case 2:     
           printf("1- Exibir do sistema ");
           printf("\n2- Exibir de arquivo ");
           printf("\nselecione = ");
           scanf(" %d",&alterna);
              if(alterna == 1){
              exibir_cadastro(quant);
              }else if (alterna == 2){
                carrega_arquivo(quant);
                exibir_cadastro(quant);
              }
           break;
              case 3:
              
              for(i=1;i<=quant;i++){
                printf("\n\n\t\t\t Alterar Cadastro\n");
                printf("\t\t\t ----------------------\n\n");
                printf("1- Nome do Comprador");
                printf("\n2- CPF do Comprador");
                printf("\n3- Endereço do Comprador");
                printf("\n4- Telefone do Comprador");
                printf("\n5- Marca do Produto");
                printf("\n6- Codigo do Produto");
                printf("\n7- Preço do Produto\n\n");
                printf("Qual Opcao Voce Deseja Acessar? \n");
                scanf("%d", &opcao1);
              }
              
  switch(opcao1){
                  case 1:
                  for(i=1;i<=quant;i++){
                    
                    printf("\n\n Cadastro %d\n",i);
                    printf("\n Alterar Nome do Comprador: ");
                    fflush(stdin);
                    scanf("%s", cadastro_cliente [i].nome);
                    printf("\n Novo Nome do Comprador : %s\n\n\t\t" ,cadastro_cliente [i].nome);
                    gravar_arquivo(quant);
                    
                    
                    
                   }
                  break;
                  case 2:
                  for(i=1;i<=quant;i++){
                    
                    printf("\n\n Cadastro %d\n",i);
                    printf("\n Alterar o CPF do Comprador: ");
                    fflush(stdin);
                    scanf("%s", cadastro_cliente [i].CPF);
                    printf("\n Novo CPF do Comprador: %s\n\n\t\t", cadastro_cliente [i].CPF);
                    gravar_arquivo(quant);
                   
                    
                  }
                  break;
                  case 3:
                  for(i=1;i<=quant;i++){
                    
                    printf("\n\n Cadastro %d\n",i);
                    printf("\n Alterar Endereço do Comprador: ");
                    fflush(stdin);
                    scanf("%s", cadastro_cliente [i].ende);
                    printf("\n Novo Endereço do Comprador : %s\n\n\t\t", cadastro_cliente [i].ende);
                    gravar_arquivo(quant);
                    
                    
                   }
                  break;
                  case 4:
                  for(i=1;i<=quant;i++){
                    
                    printf("\n\n Cadastro %d\n",i);
                    printf("\n Alterar Telefone do Comprador: ");
                    fflush(stdin);
                    scanf("%s", cadastro_cliente [i].tele);
                    printf("\n Novo Telefone do Comprador : %s\n\n\t\t", cadastro_cliente [i].tele);
                    gravar_arquivo(quant);
                   
                    
                    
                  }
                  break;
                  case 5:
                  for(i=1;i<=quant;i++){
                    
                    printf("\n\n Cadastro %d\n", i);
                    printf("\n Alterar Marca do Produto: ");
                    fflush(stdin);
                    scanf("%s", cadastro_cliente [i].marca);
                    printf("\n Nova Marca do Produto: %s\n\n\t\t", cadastro_cliente [i].marca);
                    gravar_arquivo(quant);
                    
                    
                  }

                  case 6:
                  for(i=1;i<=quant;i++){
                  
                    printf("\n\n Cadastro %d\n",i);
                    printf("\n Alterar Codigo do Produto :");
                    fflush(stdin);
                    scanf("%s",cadastro_cliente [i].cod);
                    printf("\n Novo Codigo do Produto : %s\n\n\t\t", cadastro_cliente [i].cod);
                    gravar_arquivo(quant);
                    
                    

                    }
                  break;
                  case 7:
                  for (i=1;i<=quant;i++){
                
                     printf("\n\n Cadastro %d\n",i);
                     printf("\n Alterar Preço do Produto :");
                     fflush(stdin);
                     scanf("%s",cadastro_cliente [i].preço);
                     printf("\n Novo Preço do Produto : %s\n\n\t\t",cadastro_cliente [i].preço);
                     gravar_arquivo(quant);
                     
                     
                }
                break;
              }
            break;
              

                case 4:
                
                for(i=1;i<=quant;i++){
                printf("\n\n\t\t\t Excluir Cadastro");
                printf("\t\t\t --------------------------\n\n");
                printf("1- Nome do Comprador");
                printf("\n2- CPF do Comprador");
                printf("\n3- Endereço do Comprador");
                printf("\n4- Telefone do Comprador");
                printf("\n5- Marca do Produto");
                printf("\n6- Codigo do Produto");
                printf("\n7- Preco do Produto\n\n");
                printf("\n8- Excluir Todos os Dados\n\n");
                printf("Qual Opcao Voce Deseja Acessar: ");
                scanf("%d",&opcao4);
                }
                switch(opcao4){
                  case 1:;
                  for(i=1;i<=quant;i++){
               
                    memset(&cadastro_cliente [i].nome,0,sizeof(cadastro_cliente [i].nome));
                    printf("Nome do Comprador Excluido!\n\n");
                    
                                      
                  }
                  break;
                  case 2:
                  for(i=1;i<=quant;i++){
                    system("clear");
                    memset(&cadastro_cliente [i].CPF,0,sizeof(cadastro_cliente [i].CPF));
                    printf("CPF do Comprador Excluido!\n\n");
                    
                  
                  }
                  break;
                  case 3:
                  for(i=1;i<=quant;i++){
               
                    memset(&cadastro_cliente [i].ende,0,sizeof(cadastro_cliente [i].ende));
                    printf("Endereço do Comprador Excluido!\n\n");
                    
                    
                  }
                  break;
                  case 4:
                  for(i=1;i<=quant;i++){
                
                    memset(&cadastro_cliente [i].tele,0,sizeof(cadastro_cliente [i].tele));
                    printf("Telefone do Comprador Excluido!\n\n");
                    
                   
                  }
                  break;
                  case 5:
                  for(i=1;i<=quant;i++){
                  
                    memset(&cadastro_cliente [i].tele,0,sizeof(cadastro_cliente [i].tele));
                    printf("Marca do Protudo Excluido!\n\n");
                  
                    
                  }
                  break;
                  case 6:
                  for(i=1;i<=quant;i++){
                   
                    memset(&cadastro_cliente [i].cod,0,sizeof(cadastro_cliente [i].cod));
                    printf("Codigo do Produto Excluido!\n\n");
                  
                    
                  }
                  break;
                  case 7:
                  for(i=1;i<=quant;i++);{
                   
                    memset(&cadastro_cliente [i].preço,0,sizeof(cadastro_cliente [i].preço));
                    printf("Preço do Produto Excluido!\n\n");
                    
                    
                  }
                  break;
                  case 8:
                  for(i=1;i<=quant;i++){
                  
                  memset(&cadastro_cliente [i].nome,0,sizeof(cadastro_cliente [i].nome));
                  memset(&cadastro_cliente [i].CPF,0,sizeof(cadastro_cliente [i].CPF));
                  memset(&cadastro_cliente [i].ende,0,sizeof(cadastro_cliente [i].ende));
                  memset(&cadastro_cliente [i].tele,0,sizeof(cadastro_cliente [i].tele));
                  memset(&cadastro_cliente [i].marca,0,sizeof(cadastro_cliente [i].marca));
                  memset(&cadastro_cliente [i].cod,0,sizeof(cadastro_cliente [i].cod));
                  memset(&cadastro_cliente [i].preço,0,sizeof(cadastro_cliente [i].preço));
                  printf("Todos os Dados foram Excluidos:\n\n");
                  
                 
                }
               break;
        }
       break;
                
       case 5:
       
       printf("Componentes: \n\n");
       printf("Felipe Lemos Fonseca\n");
       printf("Iron Ruan Cintra\n\n");
       
       
       break;
     
       case 6:
      
       printf("\n Voce Realmente Deseja Sair do Sistema Da Loja Marisa?\n\n");
       printf("1- Sim\n2- Nao");
       printf("\n\n");
       scanf("%d", &opcao2);
       
       switch(opcao2){
         case 1:
         
         printf("\n\n Volte Sempre a loja Marisa!!\n\n\n\t\t");
         
         return 0;
         break;
       }
       }
       }
       }
       }else{
     printf("Erro senha incorreta");
     return 0;
     }
  }



void cadastro(int x){
  int i;
  for(i=1;i<=x;i++){
  
  printf("\n\n\t\t\t  Iniciando Cadastro %d\n",i);
  printf("\t\t\t -----------------------\n\n");
  printf("\n Nome Do Comprador: ");
  scanf(" %[^\n]", cadastro_cliente[i].nome);
  printf("\n CPF Do Comprador: ");
  scanf(" %[^\n]", cadastro_cliente [i].CPF);
  printf("\n Endereço do Comprador: ");
  scanf(" %[^\n]", cadastro_cliente [i].ende);
  printf("\n Telefone do Comprador: ");
  scanf(" %[^\n]", cadastro_cliente [i].tele);
  printf("\n Marca do produto: ");
  scanf(" %[^\n]", cadastro_cliente [i].marca);
  printf("\n Codigo Do Produto: ");
  scanf(" %[^\n]", cadastro_cliente [i].cod);
  printf("\n Preço Do Produto: ");
  scanf(" %[^\n]", cadastro_cliente [i].preço);
  printf("\n\n\t\t");
 

  }
}

void exibir_cadastro(int x){
  int i;
   
              for(i=1;i<=x;i++){
              printf("\n\n\t\t\t Exibindo Cadastro %d\n",i); 
              printf("\t\t\t ----------------------\n\n");
              printf(" Nome do Comprador : %s\n", cadastro_cliente [i].nome);
              printf("\n CPF do Comprador : %s\n",cadastro_cliente [i].CPF);
              printf("\n Endereço do Comprador : %s\n",cadastro_cliente [i].ende);
              printf("\n Telefone do Comprador : %s\n",cadastro_cliente [i].tele);
              printf("\n Marca do Produto : %s\n",cadastro_cliente [i].marca);
              printf("\n Codigo do Produto : %s\n",cadastro_cliente [i].cod);
              printf("\n Preço do Produto : %s\n",cadastro_cliente [i].preço);
             
}
}
void gravar_arquivo(int num_clientes) {
  FILE* arquivo = fopen("clientes.dat", "w");

  fprintf(arquivo, "%d \n", num_clientes);

  int i;
  for (i = 1; i <= num_clientes; i++) {
    fprintf(arquivo, "%s\n", cadastro_cliente [i].nome);
    fprintf(arquivo, "%s\n", cadastro_cliente [i].CPF);
    fprintf(arquivo, "%s\n", cadastro_cliente [i].ende);
    fprintf(arquivo, "%s\n", cadastro_cliente [i].tele);
    fprintf(arquivo, "%s\n", cadastro_cliente [i].marca);
    fprintf(arquivo, "%s\n", cadastro_cliente [i].cod);
    fprintf(arquivo, "%s\n", cadastro_cliente [i].preço);
    
  }
  fclose(arquivo);
}
void carrega_arquivo(int num_clientes) {
  
  FILE* arquivo = fopen("clientes.dat", "r");

  fscanf(arquivo, "%d ", &num_clientes);

  int i;
  for (i = 1; i <= num_clientes; i++) {
    fscanf(arquivo, "%[^\n]\n", cadastro_cliente [i].nome);
    fscanf(arquivo, "%[^\n]\n", cadastro_cliente [i].CPF);
    fscanf(arquivo, "%[^\n]\n", cadastro_cliente [i].ende);
    fscanf(arquivo, "%[^\n]\n", cadastro_cliente [i].tele);
    fscanf(arquivo, "%[^\n]\n", cadastro_cliente [i].marca);
    fscanf(arquivo, "%[^\n]\n", cadastro_cliente [i].cod);
    fscanf(arquivo, "%[^\n]\n", cadastro_cliente [i].preço);
  }
  fclose(arquivo);
}