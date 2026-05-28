#include<stdio.h>

void menu(void){
    printf("1 - Inserir dados\n");
    printf("2 - Visualizar status\n");
    printf("3 - Executar analise\n");
    printf("4 - Encerrar sistema\n");
    printf("Escolha uma opcao ");
}

int main(){

    int opcao=0;
    int porcentagem, comunicacao;
    float temperatura;



    while(opcao!=4){
        menu();
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf("-----Insira os dados da missao-----\n");
                printf("\nTemperatura da nave (em graus Celcius): ");
                scanf("%f", &temperatura);

                printf("\nEnergia da nave em porcentagem: ");
                scanf("%d", &porcentagem);
                while(porcentagem>100 || porcentagem<0){
                    printf("\nValor da energia invalido, digite novamente: ");
                    scanf("%d", &porcentagem);
                }

                printf("\nStatus da comunicacao (1 = normal, 0 = anormal): ");
                scanf("%d", &comunicacao);
                while(comunicacao<0 || comunicacao>1){
                    printf("\nValor inserido da comunicacao invalido, insara novamente (1 = normal, 0 = anormal): ");
                    scanf("%d", &comunicacao);
                }

                break;
            case 2:
                printf("-----Status da nave-----\n");
                printf("Temperatura da nave: %.2f C\n", temperatura);
                printf("Energia da nave: %d%%\n", porcentagem);
                printf("Comunicacao da nave: %d\n", comunicacao);
                break;
            case 3:
                printf("-----Analide dos status da nave-----\n");
                if(temperatura>80){
                    printf("!!Alerta!!");
                    printf("A nave esta superaquecendo!");
                }else{printf("Temperatura normal");}

                if(porcentagem<20){
                    printf("Porcetagem em baixo nivel");
                    printf("Acionando modo de economia de bateria...");
                }else{printf("Bateria com boa quantidade de energia");}
                
                if(comunicacao==0){
                    printf("Falha na comunicacao");
                    printf("Perda no contato com a ponte de controle");
                }else{printf("Comunicacao normal");}
                break;

            default:
            printf("Fim da simulacao");
        }



    }



    return 0;
}