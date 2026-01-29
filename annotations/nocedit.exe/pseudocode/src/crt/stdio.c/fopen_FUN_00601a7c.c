// Name: crt_stdio.c_fopen_FUN_00601a7c
// Address: 00601a7c
// Address Range: [[00601a7c, 00601a92]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c_fopen_FUN_00601a7c(char *filename,char *mode)

#include "nocturne.h"

_FILE * __cdecl fopen(char *filename,char *mode)

{
  _FILE *p_Var1;
  
  p_Var1 = fopenWithFlags(filename,mode,0);
  return p_Var1;
}
