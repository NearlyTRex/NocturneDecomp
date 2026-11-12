// Name: crt_stdio.c_fopen_FUN_005b910c
// Address: 005b910c
// Address Range: [[005b910c, 005b9122]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c_fopen_FUN_005b910c(char *filename,char *mode)

#include "nocturne.h"

_FILE * __cdecl _fopen(char *filename,char *mode)

{
  _FILE *p_Var1;
  
  p_Var1 = (_FILE *)FUN_005b90b0(filename,mode,0);
  return p_Var1;
}
