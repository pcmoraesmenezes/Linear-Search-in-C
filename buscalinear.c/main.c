#include <stdio.h>
#include <string.h>
int main()
{
    int n = 0;
    int num = 0;
    printf("Digite o tamanho do banco de dados para a pesquisa linear\n");
    scanf("%d",&n);
    int b[n];
    for(int i = 0; i <= n - 1; i++)
    {
        printf("Digite o valor para ser colocado na posição %d\n", i);
        scanf("%d", &b[i]);
    }   
    printf("Informe o numero que deseja buscar:\n");
    scanf("%d", &num);
    for(int i = 0; i <= n - 1 ; i++)
    {
      if (b[i] == num)
      {
        printf("Encontrou!!!");
        return 0;
      }
    }
    printf("Não encontrado\n");
    return 1;

}