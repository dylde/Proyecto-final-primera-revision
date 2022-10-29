/*#include<stdio.h>
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

*/
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout; using std::vector;
using std::endl; using std::string;
using std::copy; using std::cin;

int main(){
    string s1;
    cout << "ingrese el Texto: " << endl;
	cin >> s1;
	cout << "Resultado:  " << endl;
	cout << " " << endl;
	cout << " " << endl;


    const char *s3 = "Entero principal (){\n\
caracter palabraIngles[5][25];\n\
caracter palabraEspanol[5][25];\n\
caracter funcionalidad[1000][1000];\n\
caracter bpalabra[25];\n\
caracter mpalabra[25];\n\
Entero o, j, salvarj=-1, salvari, ni=0;\n\
Hacer{\n\
Sistema(""cls"");\n\
Imprimir(""Menu---"");\n\
Imprimir(""1. Agregar palabra"");\n\
Imprimir(""2. Mostrar palabras)"";\n\
Imprimir(""3. Buscar palabra"");\n\
Imprimir(""4. Modificar palabra"");\n\
Imprimir(""5. Eliminar palabra"");\n\
Imprimir(""6. Salir"");\n\
Imprimir(""Seleccion: "");\n\
Escanear(""%d,""&0);\n\
Sistema(""cls"");\n\
	Seleccion(o){\n\
            Caso 1:\n\
                j=salvarj;\n\
                j=j+1;\n\
                ni=ni+1;\n\
                Imprimir(""Agregar palabra---"");\n\
                Imprimir(""Introduzca palabra en Ingles: )"";\n\
                Escanear(""%s,""palabraIngles[j]);\n\
                Imprimir(""Introduzca palabra en Español: )"";\n\
                Escanear(""%s,""palabraEspañol[j]);\n""\
                Imprimir << ""Introduzca la Funcionalidad: ;"" \n\
    			Escanear(""%s,""funcionalidad[j]);\n\
                salvarj=j;\n\
                Finalizar;\n\
            Caso 2:\n\
                Imprimir(""Todas las palabras)"";\n\
                Repetir(j=0;j<ni;j++){\n\
                Imprimir(""Palabra en Ingles: %s,palabraIngles[j]);\n\
                Imprimir(""Palabra en Español: %s,palabraEspanol[j]);\n\
                Imprimir(""Significado: %s,funcionalidad[j]);\n\
                }\n\
                Caracter_desde_teclado();\n\
                Finalizar;\n\
            Caso 3:\n\
                Imprimir(""Buscar palabra---"");\n\
                Imprimir(""Introduzca la palabra:"");\n\
                Escanear(""%s"",bpalabra);\n\
                Repetir(j=0;j<ni;j++){\n\
                    SI ((Comparar cadena(palabraIngles[j],bpalabra))==0){\n\
                        Imprimir(""Palabra en Ingles: %s"",palabraIngles[j]);\n\
                        Imprimir(""Palabra en Español: %s"",palabraEspanol[j]);\n\
                        Imprimir(""Significado: %s"",funcionalidad[j]);\n\
                        Caracter desde teclado();\n\
                    }\n\
                }\n\
                Finalizar;\n\
            case 4:\n\
                Imprimir(""Modificar palabra"");\n\
                Imprimir(""Introduzca la palabra: "");\n\
                Escanear(""%s"",mpalabra);\n\
                Repetir(j=0;j<ni;j++){\n\
                    SI ((comparar cadena(palabraIngles[j],mpalabra))==0){\n\
                        Imprimir(""Introduzca nuevo significado: "");\n\
                        Escanear(""%s"",funcionalidad[j]);\n\
                    }\n\
                }\n\
                Finalizar;\n\
           	Caso 5:\n\
                Imprimir(""Eliminar palabra---"");\n\
                Imprimir(""Introduzca palabra: "");\n\
                Escanear(""%s"",epalabra);""\n\
                Repetir(j=0;j<ni;j++){\n\
                    SI ((strcmp(palabraIngles[j],epalabra))==0){\n\
                        salvari=j;\n\
                        Repetir (j=salvari;j<ni;j++){\n\
                            Copia de cadena(palabraIngles[j],palabraIngles[j+1]); \n\
                            Copia de cadena(palabraEspanol[j],palabraEspanol[j+1]);\n\
                        }\n\
                        ni=ni-1;\n\
                        salvarj=j-2;\n\
                    }\n\
                }\n\
                Finalizar;\n\
            Caso 6:\n\
                	Salir(0);\n\
        }Caracter desde teclado();\n\
    }Mientras (1);\n\
    Caracter desde teclado();\n\
    Retornar 0;\n\
};\n\"";


    printf("%s\n", s3);

    return EXIT_SUCCESS;
}