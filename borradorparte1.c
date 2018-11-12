#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

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
int cambiartabla();

//programa principal
int main(){
    srand(time(NULL));
    imprimirtabla();
    cambiartabla();
    nuevovillano();








}
void menu(){
    printf(raya);
    printf("\n");
    printf(menu1);
    printf(menu2);
}

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
              }

int cambiartabla(){
              char opcion,opcion2,opcion3;
              int dato;
              printf("\n\nCambiar datos:\n");
              printf("a -> aleatoriamente\n");
              printf("b -> configuracion personal\n");
              scanf("%c",&opcion);
              setbuf(stdout,NULL);
              if(opcion=='a'){
                 printf("Choose:\n");
                 printf("b -> whole\n");
                 printf("c -> supervillian\n");
                 setbuf(stdin,NULL);
                 scanf("%c",&opcion2);
                 scanf("%d",&dato);
                 switch(opcion2){
                        case 'b':
                        menu();
                        for(i=0;i<TOP;i++){
                        printf(raya);
                        printf("\n");
                        printf("   |");
                        printf("%s", villanos[i]);
                        printf("|");
                            for(j=0;j<TOP;j++){
                               datos[i][j]=rand()%6;
                               printf("   %d   |", datos[i][j]);
                               }
                               printf("\n");

                        }
                        break;
                        case'c':
                        printf("Elige al villano que quieres cambiar:\n");
                        printf("Oprime:\n");
                        printf("a -> Jocker\n");
                        printf("b -> Voldemort\n");
                        printf("c -> Sindrome\n");
                        printf("d -> Magneto\n");
                        printf("e -> Hannibal\n");
                        printf("f -> Darth Vader\n");
                        printf("g -> Kid Bu\n");
                        printf("h -> Venom\n");
                        printf("i -> Mr Burns\n");
                        printf("j -> Doomsday\n");

                        scanf("%c",&opcion3);
                             switch(opcion3){
                                   case 'a':
                                   printf(raya);
                                   printf("\n");
                                   printf("   |");
                                   printf("%s", villanos[0]);
                                   printf("|");
                                   for(j=0;j<TOP;j++){
                                      datos[1][j]=rand()%6;
                                      printf("   %d   |", datos[0][j]);
                                      }
                                      printf("\n");
                                      printf(raya);
                                      printf("\n");
                                   break;
                                   default:
                                   printf("Opcion no valida\n");
                                   break;
                                   }
                          break;
                          default:
                          printf("Opcion no valid\n");
                          break;
                        }
                }
          }


nuevovillano()
