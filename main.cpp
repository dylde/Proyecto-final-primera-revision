#include<stdio.h>
#include<string.h>
#include<string>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(){
    char palabraIngles[5][25];
    char palabraEspanol[5][25];
    char funcionalidad[1000][1000];
    char bpalabra[25];
    char mpalabra[25];
    char epalabra[25];
    int o, j, salvarj=-1, salvari, ni=0;
    
    do{
        system("cls");
        printf("Menu---\n");
        printf("1. Agregar palabra\n");
        printf("2. Mostrar palabras\n");
        printf("3. Buscar palabra\n");
        printf("4. Modificar palabra\n");
        printf("5. Eliminar palabra\n");
        printf("6. Salir\n");
        printf("Seleccion: ");
        scanf("%d",&o);
        system("cls");

        switch(o){
            case 1:
                j=salvarj;
                j=j+1;
                ni=ni+1;
                printf("Agregar palabra---\n\n");
                printf("Introduzca palabra en Ingles: ");
                scanf("%s",palabraIngles[j]);
                printf("Introduzca palabra en Español: ");
                scanf("%s",palabraEspanol[j]);
                cout<< "Introduzca la Funcionalidad: ";
    			scanf("%s",funcionalidad[j]);
                salvarj=j;
                break;
            case 2:
                printf("Todas las palabras\n\n");
                for(j=0;j<ni;j++){
                    printf("Palabra en Ingles: %s\n",palabraIngles[j]);
                    printf("Palabra en Español: %s\n\n",palabraEspanol[j]);
                    printf("Significado: %s\n\n",funcionalidad[j]);
                }
                getchar();
                break;
            case 3:
                printf("Buscar palabra---\n\n");
                printf("Introduzca la palabra: ");
                scanf("%s",bpalabra);
                for(j=0;j<ni;j++){
                    if((strcmp(palabraIngles[j],bpalabra))==0){
                        printf("Palabra en Ingles: %s\n",palabraIngles[j]);
                        printf("Palabra en Español: %s\n",palabraEspanol[j]);
                        printf("Significado: %s\n",funcionalidad[j]);
                        getchar();
                    }
                }
                break;
            case 4:
                printf("Modificar palabra\n\n");
                printf("Introduzca la palabra: ");
                scanf("%s",mpalabra);
                for(j=0;j<ni;j++){
                    if((strcmp(palabraIngles[j],mpalabra))==0){
                        printf("Introduzca nuevo significado: ");
                        scanf("%s",funcionalidad[j]);
                    }
                }
                break;
            case 5:
                printf("Eliminar palabra---\n\n");
                printf("Introduzca palabra: ");
                scanf("%s",epalabra);
                for(j=0;j<ni;j++){
                    if((strcmp(palabraIngles[j],epalabra))==0){
                        salvari=j;
                        for(j=salvari;j<ni;j++){
                            strcpy(palabraIngles[j],palabraIngles[j+1]);
                            strcpy(palabraEspanol[j],palabraEspanol[j+1]);
                        }
                        ni=ni-1;
                        salvarj=j-2;
                    }
                }
                break;
                case 6:
                	exit(0);
        }getchar();
    }while(1);

    getchar();
    return 0;
}


