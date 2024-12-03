#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int a = 0;
    int b = 0;
    int pow = 1;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    for(int i = 1; i <= b; i++){
        pow = pow * a;
    }
    printf("%d", a);
}