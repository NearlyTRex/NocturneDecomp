// Name: crt_stdio.c_fopen_FUN_10005560
// Address: 10005560
// Address Range: [[10005560, 10005574]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c_fopen_FUN_10005560(char *filename,char *mode)

#include "nocturne.h"

_FILE * __cdecl _fopen(char *filename,char *mode)

{
  _FILE *p_Var1;
  
  p_Var1 = _fsopen(filename,mode,0x40);
  return p_Var1;
}
