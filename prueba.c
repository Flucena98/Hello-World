#include <stdio.h>
#include <time.h>

int main(){
  char corcho = 'd';
  int opcion = 0;

  printf ("David");
  printf ("\nQue?");
  printf ("\nElige una opción");
  printf ("\n¿QUE PREFIERES QUE PASE?");
  printf ("\n1. LO DE SIEMPRE");
  printf ("\n2. QUE SEA UN BUEN DIA");
  printf ("\n3. QUIERES REIRTE");
  printf ("\n4. GANAR EL WORDLE");
  printf ("\n5. GANAR EL NERDLE");
  printf ("\n6. DEJAR DE HACER EL SUBNORMAL\n");
  printf ("\n7. O PUEDES ELEGIR COMEMERME LOS HUEVOS POR DEBAJO DEL CULO");
  scanf("%d", &opcion);

  switch (opcion){
    case 1:{
      printf ("\nComeme los hueeevosss, Fernado comeme los huEEEEvOOOOsss");
      break;
    }
    case 2:{
      printf ("\nTE QUEREMOS FERNANDO <3");
      break;
    }
    case 3:{
      printf ("\nMira el corcho");
      //sleep (5000);
      printf ("\n¿Lo ves? \n Pon s(SI) o n(NO)");
      scanf("%c", &corcho);

      if(corcho == 's'){
        printf("\nEs buenísimo eee");
      }else if (corcho == 'n'){
        printf ("\nTiooo, EL RATONCIO \n JAJAJAJAJ");
      }else{
        printf("\nYa lo has roto");
      }
      break;
    }
    case 4:{
      printf ("\nLeete el diccionario mamón. \n Aqui tienes un enlace que te puede ayudar:\nPON EN GOOGLE: DICCIONARIOS AMAZON\n No se pueden poner urls porque los porcentajes no los recoge bien pero te puedes imaginar lo que habia");
      break;
    }
    case 5:{
      printf ("\nComprate una calculadora chaval");
      break;
    }
    case 6:{
      printf ("\nPues deja de leer esto");
      break;
    }
       case 7:{
      printf ("\nDebes hacerlo cual racimo de uvas para que esta opción sea correcta");
      printf("\n Toma una enlace en el que vas a encontrar una imagen bastante representativa");
      printf("\n https://es.dreamstime.com/viticultor-con-boca-abierta-come-racimo-de-uvas-hombre-barba-sostiene-rosadas-oscuras-aisladas-en-fondo-blanco-granjero-presenta-image207222611");
      break;
       }
    default:{
      printf("\nNi elegir una opcion sabes macho");
      break;
    }

  }
  return 0;
}
