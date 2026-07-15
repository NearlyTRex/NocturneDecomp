// Name: crt_stdio.c__fsopen_FUN_10005520
// Address: 10005520
// Address Range: [[10005520, 10005559]]
// Convention: __cdecl
// Signature: FILE * __cdecl crt_stdio_c__fsopen_FUN_10005520(char *filename,char *mode,int sh_flag)

#include "nocturne.h"

FILE * __cdecl _fsopen(char *filename,char *mode,int sh_flag)

{
  FILE *file;
  FILE *pFVar1;
  
  file = _getstream();
  if (file == (FILE *)0x0) {
    return (FILE *)0x0;
  }
  pFVar1 = _openfile(filename,mode,sh_flag,file);
  _unlock_file(file);
  return pFVar1;
}
