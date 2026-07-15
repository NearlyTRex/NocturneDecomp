// Name: crt_stdio.c_fopen_FUN_10005560
// Address: 10005560
// Address Range: [[10005560, 10005574]]
// Convention: __cdecl
// Signature: FILE * __cdecl crt_stdio_c_fopen_FUN_10005560(char *filename,char *mode)

#include "nocturne.h"

FILE * __cdecl _fopen(char *filename,char *mode)

{
  FILE *pFVar1;
  
  pFVar1 = _fsopen(filename,mode,0x40);
  return pFVar1;
}
