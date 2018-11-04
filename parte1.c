#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#define MAX 10
#define raya "\n    =========================================================================================="

int main(){
      char continuar, letra;
      int jocker[MAX]={5,0,3,5,5,3,5,0,5,0};
      int voldemort[MAX]={3,3,2,4,4,4,3,2,3,0};
      int sindrome[MAX]={2,4,1,4,5,1,5,0,5,4};
      int magneto[MAX]={5,5,4,5,3,4,5,2,5,0};
      int hannibal[MAX]={4,0,3,4,5,2,5,2,4,0};
      int dv[MAX]={4,0,5,3,3,1,3,5,3,2};
      int kidbu[MAX]={5,5,5,4,0,3,0,0,0};
      int venom[MAX]={4,2,5,5,4,2,4,3,3,0};
      int burns[MAX]={1,0,0,3,2,5,5,1,5,5};
      int doomsday[MAX]={5,0,5,0,0,5,0,0,0,0};

      int i, op;
      printf("\n\n\n\n\n\n\n");
      printf("\t\tCREANDO AL MEJOR VILLANO\n");
      printf("\tPara continuar al menu principal oprime enter\n");
      scanf("%c",&continuar);
      printf("\n");
      system("clear");

      //Tabla menu principal//
      printf(raya);
      printf("\n   | Villanos |Nivelde| Vuelo | Fuerza|  Ego | Mono   |Triunfos|Ingenio|Poder |Audacia|Riqueza|");
      printf("\n   |          | Maldad|       |       |      | logar  |        |       |Mental|       |   $   |");
      printf(raya);
      printf("\n   |  Jocker  |");
      for(i=0;i<10;i++)
         printf("   %d   |",jocker[i]);
      printf(raya);
      printf("\n   | Voldemort|");
      for(i=0;i<10;i++)
          printf("   %d   |",voldemort[i]);
      printf(raya);
      printf("\n   | Sindrome |");
      for(i=0;i<10;i++)
         printf("   %d   |",sindrome[i]);
      printf(raya);
      printf("\n   |  Magneto |");
      for(i=0;i<10;i++)
          printf("   %d   |",magneto[i]);
      printf(raya);
      printf("\n   | Hannibal |");
      for(i=0;i<10;i++)
          printf("   %d   |",hannibal[i]);
      printf(raya);
      printf("\n   |DarthVader|");
      for(i=0;i<10;i++)
          printf("   %d   |",dv[i]);
      printf(raya);
      printf("\n   |  Kid Bu  |");
      for(i=0;i<10;i++)
          printf("   %d   |",kidbu[i]);
      printf(raya);
      printf("\n   |   Venom  |");
      for(i=0;i<10;i++)
          printf("   %d   |",venom[i]);
      printf(raya);
      printf("\n   | Mr Burns |");
      for(i=0;i<10;i++)
          printf("   %d   |",burns[i]);
      printf(raya);
      printf("\n   | Doomsday |");
      for(i=0;i<10;i++)
          printf("   %d   |",doomsday[i]);
      printf(raya);
      printf("\n");

      printf("Configuracion persona: [s/n]\n");

      while((letra!='s')&&(letra!='n')){
            scanf("%c",&letra);
            if((letra=='s')||(letra=='n'))
            printf("Opcion valida\n");
            else
            printf("Opcion no valida:");
            }
      printf("Continuamos\n");
      if(letra=='s'){
         printf("Elega al villano que quieres cambiar:\n")
         printf("Oprime:"\n);
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
         do{
         scanf("%c",&op)
         switch(op){
                   case 'a':
                   

                   printf(raya);


                   break;


      }



}
