/*
 * Ejercicio4.h
 *
 *  Created on: 11/03/2012
 *      Author: sebastian
 */

#ifndef EJERCICIO4_H_
#define EJERCICIO4_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <memory.h>
#include "Collections/queue.h"
typedef struct
{
	char* informacionCodificada;
	int longitudInformacionCodificada;
}__attribute__((packed)) t_mision;


typedef struct
{
	char* apodo;
	int edad;
	bool daVueltas;
}__attribute__((packed)) t_mascota ;

typedef struct
{
	char nombre[25];
	int edad;

}__attribute__((packed))  t_Villano;


typedef struct
{
	char* nombre;
	int edad;
	t_list* listaDeVillanos;
	t_mascota* mascota;
	t_mision* mision;
}__attribute__((packed)) t_Spock;

void ChequearVillanos(void* villano);

t_Spock* t_Spock_CrearSpock();

void t_Spock_EnviarAMision(t_Spock* spock);

void t_Spock_CompararSpocks(t_Spock* spockEnviado,t_Spock* spockRecibido);

void t_Villano_Destroyer(void* villano);

#endif /* EJERCICIO4_H_ */
