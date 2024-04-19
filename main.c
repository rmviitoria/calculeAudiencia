/******************************************************************************

Petrônio está com uma rádio online. 
Ele acredita que sua rádio está crescendo de audiência, mas ele não tem certeza. 
Você, então, deve ajudar Petrônio, analisando se os valores de audiência de sua rádio são sempre crescentes ou não.
Para isto, crie um programa que lê os valores de audiência de alguns meses e 
verifica se a audiência é sempre crescente ou não. Seu programa deve recebe um inteiro 
que corresponde a quantos valores de audiência serão digitados pelo usuário. Em seguida, 
o programa deve solicitar todos estes dados de audiência (que são valores com ponto flutuante) 
e imprimir na tela a mensagem "AUDIÊNCIA SEMPRE CRESCENTE" ou "AUDIÊNCIA NEM SEMPRE CRESCENTE". 
Também imprima a média de audiência dos meses informados (com apenas 1 casa depois da vírgula). 
Ao final de cada resultado, seu programa deve perguntar ao usuário se ele deseja continuar ou não, 
e se ele quiser continuar, faça uma nova análise. Caso ele não queira continuar, o programa termina. 


*******************************************************************************/
#include <stdio.h>


int main()
{
    char continua = 'S';
    while(continua == 'S'){
        int quant, ehCrescente = 1;
        float audienciaAtual, soma = 0, audienciaAnterior = 0;
        
        printf("Informe a quantidade de índices de audiência serão digitados: ");
        scanf("%d", &quant);
        
        for(int i=0; i<quant; i++){
            scanf("%f", &audienciaAtual);
            soma += audienciaAtual;
            if(audienciaAtual <= audienciaAnterior)
                ehCrescente = 0;
            audienciaAnterior = audienciaAtual;
        }
        if(ehCrescente) printf("AUDIÊNCIA SEMPRE CRESCENTE. ");
        else printf("AUDIÊNCIA NEM SEMPRE CRESCENTE. ");
        printf("Média de audiência: %.1f\n\n", (soma/quant));
        
        printf("Deseja continuar? (S ou N) ");
        scanf(" %c", &continua);
    }
    
    return 0;
}
