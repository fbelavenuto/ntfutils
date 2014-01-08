/*
 *  by F�bio Belavenuto - Copyright 2013
 *
 *  Vers�o 0.1beta
 *
 *  Este arquivo � distribuido pela Licen�a P�blica Geral GNU.
 *  Veja o arquivo "Licenca.txt" distribuido com este software.
 *
 *  ESTE SOFTWARE N�O OFERECE NENHUMA GARANTIA
 * 
 * Header das fun��es comuns
 *
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

char *trim(char *s);
char *extractFileName(char *s);
char *cleanFN(char *s);
int testaHexa(char *value);
int _httoi(char *value);
void dec2hex(unsigned short hex, char *txt);

#endif /* FUNCTIONS_H_ */
