// Name: crt_stdio.c_fopen_FUN_005a43ec
// Address: 005a43ec
// Address Range: [[005a43ec, 005a4402]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c_fopen_FUN_005a43ec(char *filename,char *mode)

#include "nocturne.h"

_FILE * __cdecl _fopen(char *filename,char *mode)

{
  _FILE *p_Var1;
  
  p_Var1 = (_FILE *)FUN_005a4390(filename,mode,0);
  return p_Var1;
}
