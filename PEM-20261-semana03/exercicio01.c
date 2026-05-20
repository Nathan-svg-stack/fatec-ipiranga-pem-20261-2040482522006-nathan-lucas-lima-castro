#include <stdio.h>
void trocarValores(int *p, int *pb)
    {
        int temp;
        temp = *p;
        *p = *pb;
        *pb = temp; 
    }
int main()
{
    int inteiro = 10;
    float floatzin = 0.00;
    char charzin = 'c';
    int *ptr_inteiro = &inteiro;
    float *ptr_float = &floatzin;
    char *ptr_charzin = &charzin;
    int x, z;
    int *p = &x;
    int *pb = &z;


    // pa mostra o valor dento da memoria
    printf("%d\n", *ptr_inteiro);
    // agora o endereço
    printf("%p\n", ptr_inteiro);
    // o valor de novo soq agora ele vai pega direto a variavel
    printf("%d\n", inteiro);

    // pa mostra o valor dento da memoria
    printf("%f\n", *ptr_float);
    // agora o endereço
    printf("%p\n", ptr_float);
    // o valor de novo soq agora ele vai pega direto a variavel
    printf("%f\n", floatzin);

    // pa mostra o valor dento da memoria
    printf("%c\n", *ptr_charzin);
    // agora o endereço
    printf("%p\n", ptr_charzin);
    // o valor de novo soq agora ele vai pega direto a variavel
    printf("%c\n", charzin);
    int **pp = 
    // ver o tamanho do arquivo
    printf("%zu\n", sizeof(*ptr_inteiro));
    printf("%zu\n", sizeof(*ptr_float));
    printf("%zu\n", sizeof(*ptr_charzin));
    return 0;
}