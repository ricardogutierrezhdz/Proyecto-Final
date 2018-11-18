#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define raya "    ==========================================================================================="
#define menu1 "   | Villanos  |Nivelde| Vuelo | Fuerza|  Ego  | Mono  | logros|Ingenio| Poder |Audacia|Riqueza|\n"
#define menu2 "   |           | Maldad|       |       |       | logar |       |       | Mental|       |   $   |\n"
#define TOP 10
#define MAX 500

int i,j;
char villanos[MAX][MAX]={
" Jocker    "," Voldemort "," Sindrome  ",
" Magneto   "," Hannibal  ","Darth Vader",
" Kid Bu    "," Venom     "," Mr Burns  ",
" Doomsday  "};
int datos[MAX][MAX]={
{5,0,3,5,5,3,5,0,5,0},
{3,3,2,4,4,4,3,2,3,0},
{2,4,1,4,5,1,5,0,5,0},
{5,5,4,5,3,4,5,2,5,0},
{4,0,3,4,5,2,5,2,4,0},
{4,0,5,3,3,1,3,5,3,2},
{5,5,5,4,0,3,0,0,0,0},
{4,2,5,5,4,2,4,3,3,0},
{1,0,0,3,2,5,5,1,5,5},
{5,0,5,0,0,5,0,0,0,0}};

//declaration prototypes
void menu();
int imprimirtabla();
int *nuevovillano();
int nuevohibrido(int x);
int *villano_1;
int *villano_2;
int villano[10];
int hibrido[MAX];
//programa principal
int main(){
    int x;
    char continuar;
    srand(time(NULL));
    imprimirtabla();
    printf("Presiona enter para continuar\n");
    scanf("%c",&continuar);

    villano_1=nuevovillano();
    x=rand()%10;
    for(i=0;i<x;i++)
        hibrido[i]=villano_1[i];
    villano_2=nuevovillano();
    for(i=x;i<TOP;i++)
        hibrido[i]=villano_2[i];
    nuevohibrido(x);

}

//SOLO ES FORMATO
void menu(){
    printf(raya);
    printf("\n");
    printf(menu1);
    printf(menu2);
}

//IMPRIME LA TABLA ORIGINAL
int imprimirtabla(){
               menu();
                  for(i=0;i<TOP;i++){
                      printf(raya);
                      printf("\n");
                      printf("   |");
                      printf("%s", villanos[i]);
                      printf("|");
                      for(j=0;j<TOP;j++)
                          printf("   %d   |", datos[i][j]);
                          printf("\n");
                  }
                  printf(raya);
                  printf("\n");
}

int *nuevovillano(){
    char nombre[200];
    int random;

                   printf("\tVamos a crear un nuevo villano\n");
                   printf("\tSe va a seleccionar un villano aleatoriamente\n");
                   printf("\tPor cada villano, se tomara la habilidad sucesiva hasta tener 10\n");
                   printf("\tElige el nombre de tu nuevo villano: ");
                   scanf("%s",nombre);
                   printf("\n\n");
                   menu();
                   printf(raya);
                   printf("\n    El nuevo villano es: \n    %s", nombre);
                   printf("\n");
                   printf("   |");
                   printf("        ");
                   printf("   |");
                   for(i=0;i<TOP;i++){
                       random=rand()%6;
                       villano[i]=datos[random][i];
                       printf("   %d   |", villano[i]);
                       }
                       printf("\n");
                       printf(raya);
                       printf("\n");

                return villano;

}

int nuevohibrido(int x){
          char nombre[MAX];
          printf("\tCreando a un hibrido -> ingresar nombre:");
          scanf("%s", nombre);
          printf("\tSe tomaran las hablidades hasta el %d del villano1\n", x-1);
          printf("\tSe tomaran las habilidades del %d hasta el 9 del villano2\n",x);

          menu();
          printf(raya);
          printf("\n");
          printf("    El hibrido es: %s\n", nombre);
          printf("   |");
          printf("Hibrido");
          printf("   |");
          for(i=0;i<TOP;i++)
              printf("   %d   |", hibrido[i]);
              printf("\n");
              printf(raya);
              printf("\n");
}
