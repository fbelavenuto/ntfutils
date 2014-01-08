/*
 *  by Fábio Belavenuto - Copyright 2013
 *
 *  Versão 0.1beta
 *
 *  Este arquivo é distribuido pela Licença Pública Geral GNU.
 *  Veja o arquivo "Licenca.txt" distribuido com este software.
 *
 *  ESTE SOFTWARE NÃO OFERECE NENHUMA GARANTIA
 * 
 * Header das funções comuns
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
