// Name: crt_stdio.c_fopen_FUN_005c157c
// Address: 005c157c
// Address Range: [[005c157c, 005c1592]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c_fopen_FUN_005c157c(char *filename,char *mode)

#include "nocturne.h"

_FILE * __cdecl _fopen(char *filename,char *mode)

{
  _FILE *p_Var1;
  
  p_Var1 = (_FILE *)FUN_005c1520(filename,mode,0);
  return p_Var1;
}
