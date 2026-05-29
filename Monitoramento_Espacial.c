#include<stdio.h>

// FUNCAO PARA O MENU
void menu(void){
    printf("================================================\n");
    printf("    Monitoramento do funcionamento da nave\n");
    printf("================================================\n");
    printf("1 - Inserir dados\n");
    printf("2 - Visualizar status\n");
    printf("3 - Executar analise\n");
    printf("4 - Encerrar sistema\n");
    printf("Escolha uma opcao ");
}

// FUNCAO PARA FECHAR
void close(int fechar){
    printf("Para voltar ao menu digite 0\n");
    scanf("%d", &fechar);
        while(fechar != 0){
            printf("Para voltar ao menu digite 0\n");
            scanf("%d", &fechar);
            switch(fechar){
                case 0:
                    break;}
                }
            }

// CODIGO PRINCIPAL
int main(){

    int fechar=1;
    int opcao=0;
    int porcentagem=0;
    int comunicacao=0;
    float temperatura=0.0;



    while(opcao!=4){
        menu();
        scanf("%d", &opcao);
        switch(opcao){

            // INSERIR DADOS
            case 1: 
                printf("\n-----Insira os dados da missao-----");
                // TEMPERATURA
                printf("\nTemperatura da nave (em graus Celcius): ");
                scanf("%f", &temperatura);

                // ENERGIA
                printf("\nEnergia da nave em porcentagem: ");
                scanf("%d", &porcentagem);
                while(porcentagem>100 || porcentagem<0){
                    printf("\nValor da energia invalido, digite novamente: ");
                    scanf("%d", &porcentagem);
                }

                // COMUNICACAO
                printf("\nStatus da comunicacao (1 = normal, 0 = anormal): ");
                scanf("%d", &comunicacao);
                while(comunicacao<0 || comunicacao>1){
                    printf("\nValor inserido da comunicacao invalido, insara novamente (1 = normal, 0 = anormal): ");
                    scanf("%d", &comunicacao);
                }
                break;

            // MINI RELATORIO COM O QUE FOI COLOCADO NOS DADOS
            case 2:
                printf("-----Status da nave-----\n");
                printf("Temperatura da nave: %.2f C\n", temperatura);
                printf("Energia da nave: %d%%\n", porcentagem);
                printf("Comunicacao da nave: %d\n\n", comunicacao);
                close(fechar);
                break;

            // ANALISE GERAL DOS DADOS COM ALERTAS
            case 3:
                printf("===================================\n");
                printf("Analide dos status da nave\n");
                printf("===================================\n\n");
                
                // ANALISE DA TEMPERATURA
                printf("-----Status da Temperatura-----\n");
                if(temperatura>80){
                    printf("!!Alerta!!\n");
                    printf("A nave esta superaquecendo!\n\n");
                }else{printf("Temperatura normal\n\n");}

                // ANALISE DA BATERIA
                printf("-----Status da Bateria-----\n");
                if(porcentagem<20){
                    printf("Porcetagem em baixo nivel\n");
                    printf("Acionando modo de economia de bateria...\n\n");
                }else{printf("Bateria com boa quantidade de energia\n\n");}
                
                // ANALISE DA COMUNICACAO
                printf("-----Status da comunicacao-----\n");
                if(comunicacao==0){
                    printf("Falha na comunicacao\n");
                    printf("Perda no contato com a ponte de controle\n\n");
                }else{printf("Comunicacao normal\n\n");}
                close(fechar);
                break;

            // TERMINAR A SIMULACAO
            case 4:
                printf("Fim da simulacao");
                break;
            default:  
        }
    }
    return 0;
}