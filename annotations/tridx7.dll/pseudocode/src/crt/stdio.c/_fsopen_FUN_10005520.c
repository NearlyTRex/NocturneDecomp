// Name: crt_stdio.c__fsopen_FUN_10005520
// Address: 10005520
// Address Range: [[10005520, 10005559]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c__fsopen_FUN_10005520(char *filename,char *mode,int sh_flag)

#include "nocturne.h"

_FILE * __cdecl _fsopen(char *filename,char *mode,int sh_flag)

{
  _FILE *file;
  _FILE *p_Var1;
  
  file = _getstream();
  if (file == (_FILE *)0x0) {
    return (_FILE *)0x0;
  }
  p_Var1 = _openfile(filename,mode,sh_flag,file);
  _unlock_file(file);
  return p_Var1;
}
