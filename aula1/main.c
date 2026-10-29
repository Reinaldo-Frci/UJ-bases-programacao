// Dontpad das aulas segue o padrão dontpad.com/EC/Aula_{datadaaula}

// Dontpad da aula de hoje https://dontpad.com/EC/Aula_28102026

// isso é um comentário, serve somente para identificar partes do código para o ser humano, não é lido pela máquina
/*
Também posso fazer comentários assim
*/

#include <stdio.h> //Incluindo bibliotecas

//Primeiro método, "int" significa que o método precisa retornar um inteiro
int inteiro()
{
    printf("Salve salve família");
    
    return 0;
}

// Métodos do tipo void não exigem return
void voidMethod()
{
    printf("vai tomando filho");
}




void crescente(){
    // Loop FOR, o primeiro parâmetro é a declaração de uma variável
    // Depois declaramos qual a condição para continuar o Loop
    // Depois definimos o que vai acontecer com a variável a cada run do loop
    // O loop se repete até que a condição enquanto a condição for cumprida

    for(int i=1; i<11; i++){
        printf("%d\n", i); //"%d" significa que vou usar uma vatiável do tipo INT
    };
}

/*
----Referencias de print
%d para int
%c para character
%s para charactes com mais de um caracter
*/

void decrescente(){
    for(int i=10; i>0; i--){
        printf("%d\n", i);
    };
}

//------

void paresZeroaDez(){
    for(int i=0; i<=10; i++) { // poderia ser feito apenas usando i+=2 ao invés de usar um if
        if (i%2==0 && i!=0){
            printf("%d\n", i);
        };
    };
}

//------

void imparesZeroaDez(){
    for (int i = 0; i<=10; i++) {
        if (i%2!=0 && i!=0){
            printf("%d\n", i);
        };
    };
}

//------

void multiplosDecinquenta(){
    for (int i=0; i<=1000; i+=50){
        printf("%d\n", i);
    };
}

//------

void pgDedez(){
    for (int i=1; i<=1000; i*=10){
        printf("%d\n", i);
    };
}

//------
// 1, 11, 111, 1111
void vezesDezmaisUm(){
    for (int i =1; i<=1111; i*=10, i+=1){
        printf("%d\n", i);
    };
}

//------
//1, 22, 333, 4444
void vezesDezvezesX(){
    for (int i=1, x=1; i<=4444; i*=10, i+=1, x+=1){
        printf("%d\n", i*x);
    };
}


//------
// 1, -2, 4, -8, 16, -32
void vezesMenosdois(){
    for (int i =1; i<=32; i*=-2){
        
        printf("%d\n", i);
    };
}



//------
//1, 10, 2, 9, 3, 8, 4, 7, 5, 6, 6, 5, 7, 4, 8, 3, 9, 2, 10, 1
//1, 1+9 ou 1*10, 10-8 ou 10/5, 2+7 ou 2*4.5,   

void sequenciaDuasvariaveis(){
    for (int i=10, a=1; i>0; i--, a++ ){
        printf("%d, %d, ", a,i);
    }
}

//------------------------
//Refazer todos os for loops usando WHILE

void whilecrescente(){
    int x=1;
    while(x<11){
        printf("%d\n", x);
        x++;
    }
}

//------

void whiledecrescente(){
    int x=10;
    while(x>0){
        printf("%d \n", x);
        x--;
    }
}

//------

void whileparesZeroaDez(){
    int x=0;
    while(x<=10){
        if(x%2==0){
            printf("%d \n", x);
            x++;
        };
    }
}

//------
// Descobrir se um número é primo

void main(){
    int n, cd=0, i=1;
    printf("Digite um número: ");
    scanf("%d",&n); // O scanf é um input de terminal usado pelo usuário, "&n" serve para colocar o valor de input na variável "n"
    while(i<=n){
        if(n%i==0){
            cd++;
        };
    }
    printf("%d tem %d divisores", n, cd);
    if (cd==2){
        printf("%d É um número primo.", n);
    } else {
        printf("%d Nâo é primo", n);
    };
}

/*
void guess(){
    int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
    int midle = sizeof(numbers)/2-1;
    int start = 0;
    it end = sizeof(numbers);
    number = 4;

    while (True)){
        if (midle==number){
            printf("Seu número é %d", i);
            return 0;
        };
        if (midle>number){
            midle = end+start;
            midle = midle/2;
        }

    }
}
*/