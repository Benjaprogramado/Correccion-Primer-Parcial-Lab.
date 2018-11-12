#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////
//CARGA DE DATOS//
//////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
float getFloat(char mensaje[])
    {
    float numero;
    printf("%s",mensaje);
    scanf("%f",&numero);
    return numero;
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/**
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/**
 * \brief Genera un número aleatorio
 * \param desde Número aleatorio mínimo
 * \param hasta Número aleatorio máximo
 * \param iniciar Indica si se trata del primer número solicitado 1 indica que si
 * \return retorna el número aleatorio generado
 *
 */
char getNumeroAleatorio(int desde , int hasta, int iniciar)
{
    if(iniciar)
        srand (time(NULL));
    return desde + (rand() % (hasta + 1 - desde)) ;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return void
 */
void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf("%s",input);
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////
//OBTENER DATOS VALIDADOS//
///////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumeros(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////
//VALIDACIONES//
////////////////



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

int esNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ')&& (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           return 0;
       i++;
   }
   return 1;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



/**
 * \brief Verifica si el valor recibido contiene solo letras y números
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y números, y 0 si no lo es
 *
 */
int esAlfaNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9')&&(str[i]!='ñ')&&(str[i]!='Ñ'))
           return 0;
       i++;
   }
   return 1;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



/**
 * \brief Verifica si el valor recibido contiene solo números, + y -
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo numeros, espacios y un guion.
 *
 */
int esTelefono(char str[])
{
   int i=0;
   int contadorGuiones=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] != '-') && (str[i] < '0' || str[i] > '9'))
           return 0;
       if(str[i] == '-')
            contadorGuiones++;
       i++;
   }
   if(contadorGuiones==1) // debe tener un guion
        return 1;

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////
//OPERACIONES//
///////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * \brief Suma dos variables del tipo float y devuelve el resultado
 * \param A y B son los operando
 * \return El resultado de la suma
 */
float suma (float A, float B){

return A + B;

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * \brief Resta dos variables del tipo float y devuelve el resultado
 * \param A y B son los operando
 * \return El resultado de la resta
 */
float resta (float A, float B){

return A - B;

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



/**
 * \brief Multiplica dos variables del tipo float y devuelve el resultado
 * \param A y B son los operando
 * \return El resultado de la multiplicación
 */

float multiplicacion (float A, float B){

return A * B;

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



/**
 * \brief Divide dos variables del tipo float y devuelve el resultado
 * \param A y B son los operando
 * \return El resultado de la división
 */

float division (float A, float B)
{


    if(B==0){

        float resultado=0;
        return resultado;

    }
    else{
        float resultado=0;
        resultado=A/B;
        return resultado;
    }



}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



/**
 *  \brief Calcula el factorial de un número y devuelve el resultado
 *  \param A es el numero cuyo factorial se debe calcular
 *  \return El factorial de A
 */

 float factorial(float A){

     float i,resultado=1;
     if(A==0){
        resultado=1;
     }
     else{

       for(i=A;i>0;i--){
          resultado=resultado*i;

          }
     }
     return resultado;

 }

 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////
//ORDENAMIENTO//
////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////
//MOSTRAR IFORMACION//
//////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

