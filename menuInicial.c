#include<stdio.h>
#include<stdlib.h>

void IniciarNovoJogo();
void ContinuarJogo();
void Ranking_de_Pontuacao();
void ListarIntegrantes();

int main(){
    
    int opcao;

    while(1){
        printf("=================================\n");
        printf("            MENU INICIAL         \n");
        printf("=================================\n");
        printf("1.Iniciar Jogo\n");
        printf("2.Continuar Jogo\n");
        printf("3.Ranking de Pontuacao\n");
        printf("4.Listar Integrantes do Grupo\n");
        printf("5.Sair\n ");
        printf("Escolha uma opcao: ");

        scanf("%d" , &opcao);

        switch(opcao){
            case 1:
                IniciarNovoJogo();
                break; 
            case 2: 
                ContinuarJogo();    
                break;
            case 3:
                Ranking_de_Pontuacao();
                break;
            case 4:
                ListarIntegrantes();
                break;
            case 5:
                printf("Saindo do jogo...\n");
                exit(0);
            default:
            printf("Opcao Invalida! Tente Novamente.\n");    
        }

        return 0;
    }
}

void IniciarNovoJogo(){
    printf("Iniciando um novo jogo...\n");

}

void ContinuarJogo(){
    printf("Continuando um jogo gravado...\n");

}

void Ranking_de_Pontuacao(){
    printf("Exibindo ranking de pontuações...\n");

}

void ListarIntegrantes(){
    printf("Listando integrantes do grupo...\n");

}