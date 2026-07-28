// Name: crt_stdio.c_fopen_FUN_0056568c
// Address: 0056568c
// Address Range: [[0056568c, 005656a2]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c_fopen_FUN_0056568c(char *filename,char *mode)

#include "nocturne.h"

_FILE * __cdecl _fopen(char *filename,char *mode)

{
  _FILE *p_Var1;
  
  p_Var1 = fopenWithFlags(filename,mode,0);
  return p_Var1;
}
