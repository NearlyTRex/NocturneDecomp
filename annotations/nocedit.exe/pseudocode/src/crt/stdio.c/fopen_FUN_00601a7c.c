// Name: crt_stdio.c_fopen_FUN_00601a7c
// Address: 00601a7c
// Address Range: [[00601a7c, 00601a92]]
// Convention: __cdecl
// Signature: FILE * __cdecl crt_stdio_c_fopen_FUN_00601a7c(char *filename,char *mode)

#include "nocturne.h"

FILE * __cdecl crt_stdio_c_fopen_FUN_00601a7c(char *filename,char *mode)

{
  FILE *pFVar1;
  
  pFVar1 = crt_stdio_c_fopenWithFlags_FUN_00601a20(filename,mode,0);
  return pFVar1;
}
