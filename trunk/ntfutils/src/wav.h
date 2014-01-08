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
 * Cabe�alho para arquivos .wav
 *
 */

#ifndef WAV_H_
#define WAV_H_

// Defini��es
#define MAX(a,b)	(((a) > (b)) ? (a) : (b))
#define MIN(a,b)	(((a) < (b)) ? (a) : (b))

#define FREQ2K	2000
#define	FREQ1K	1000

typedef struct SWaveCab {
	unsigned char  GroupID[4];		// RIFF
	unsigned int   GroupLength;
	unsigned char  TypeID[4];		// WAVE
	unsigned char  FormatID[4];		// fmt
	unsigned int   FormatLength;
	unsigned short wFormatTag;
	unsigned short NumChannels;
	unsigned int   SamplesPerSec;
	unsigned int   BytesPerSec;
	unsigned short nBlockAlign;
	unsigned short BitsPerSample;
	unsigned char  DataID[4];
	unsigned int   DataLength;
}__attribute__((__packed__)) TWaveCab, *PTWave;

#ifndef WAVE_FORMAT_PCM
# define WAVE_FORMAT_PCM                 0x0001 /* Microsoft Corporation */
#endif

#endif /* WAV_H_ */
