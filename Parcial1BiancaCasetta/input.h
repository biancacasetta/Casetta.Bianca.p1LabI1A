#ifndef INPUT_H_INCLUDED
#define INPUT_H_INCLUDED
#endif // INPUT_H_INCLUDED

#include "bicicleta.h"

/** \brief Muestra un men� inicial de opciones para seleccionar
 * \return char La opci�n seleccionada por el usuario, para luego usar de criterio en un switch
 */
char menu();

/** \brief Muestra un submen� cuando se selecciona la opci�n Modificar con las opciones de datos que se pueden cambiar
 * \return char La opci�n seleccionada por el usuario, para luego usar de criterio en un switch
 */
char subMenuModificar();

/** \brief Muestra un submen� cuando se selecciona la opci�n Informes de Bicicletas con las opciones de informes que se pueden mostrar
 * \return char La opci�n seleccionada por el usuario, para luego usar de criterio en un switch
 */
char subMenuInformesBicicletas();

/** \brief Muestra un submen� cuando se selecciona la opci�n Informes de Trabajos con las opciones de informes que se pueden mostrar
 * \return char La opci�n seleccionada por el usuario, para luego usar de criterio en un switch
 */
char subMenuInformesTrabajos();

/** \brief Valida que la cadena de caracteres ingresada contenga letras �nicamente, sin permitir n�meros ni s�mbolos
 * \param cadena[] char La cadena de caracteres a validar
 * \return int 1 si hubo error, 0 si no hubo error
 */
int soloLetras(char cadena[]);

/** \brief Formatea una cadena de caracteres de manera que la(s) inicial(es) sea(n) may�scula y el resto, min�sculas
 * \param cadena[] char La cadena de caracteres a formatear
 * \return 1 si hubo error, 0 si no hubo error
 */
int inicialMayuscula(char cadena[]);

/** \brief Valida que una cadena de caracteres no supere la cantidad m�xima de caracteres permitidos, ni que no ingrese nada
 * \param cadena[] char La cadena de caracteres a validar
 * \param mensaje[] char El mensaje a mostrar como prompt para que el usuario ingrese la cadena de caracteres
 * \param mensajeError[] char El mensaje de error en caso de que la cadena supere el l�mite de caracteres o no ingrese nada
 * \param min int El m�nimo de caracteres a ingresar (al menos 1)
 * \param max int El m�ximo de caracteres a ingresar (seg�n corresponda)
 * \return 1 si hubo error, 0 si no hubo error
 */
int validarCadena(char cadena[], char mensaje[], char mensajeError[], int min, int max);

/** \brief Valida que un caracter est� dentro de las opciones v�lidas (generalmente usado para prompts de SI o NO O S/N)
 * \param caracter char* Puntero a caracter del caracter ingresado por el usuario
 * \param mensaje[] char El mensaje a mostrar como prompt para que el usuario ingrese el caracter
 * \param mensajeError[] char El mensaje de error en caso de que el caracter no sea ninguno de los v�lidos
 * \param caracterValido1 char Una de las opciones v�lidas de caracter ingresado
 * \param caracterValido2 char Otra de las opciones v�lidas de caracter ingresado
 * \return 1 si hubo error, 0 si no hubo error
 */
int validarCaracter(char* caracter, char mensaje[], char mensajeError[], char caracterValido1, char caracterValido2);

/** \brief Valida que un n�mero flotante est� dentro de un rango espec�fico y que no se ingresen letras o s�mbolos antes del flotante
 * \param numero float* Puntero a flotante del n�mero flotante ingresado por el usuario
 * \param mensaje[] char El mensaje a mostrar como prompt para que el usuario ingrese el n�mero flotante
 * \param mensajeError[] char El mensaje de error en caso de que el n�mero flotante se encuentre fuera del rango v�lido
 * \param min float El m�nimo n�mero flotante v�lido
 * \param max float El m�ximo n�mero flotante v�lido
 * \return 1 si hubo error, 0 si no hubo error
 */
int validarFlotante(float* numero, char mensaje[], char mensajeError[], float min, float max);

/** \brief Valida que un n�mero entero est� dentro de un rango espec�fico y que no se ingresen letras o s�mbolos antes del entero
 * \param numero int* Puntero a entero del n�mero entero ingresado por el usuario
 * \param mensaje[] char El mensaje a mostrar como prompt para que el usuario ingrese el n�mero entero
 * \param mensajeError[] char El mensaje de error en caso de que el n�mero entero se encuentre fuera del rango v�lido
 * \param min float El m�nimo n�mero entero v�lido
 * \param max float El m�ximo n�mero entero v�lido
 * \return 1 si hubo error, 0 si no hubo error
 */
int validarEntero(int* numero, char mensaje[], char mensajeError[], int min, int max);
