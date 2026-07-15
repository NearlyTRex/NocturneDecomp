// Name: crt_stdio.c_fprintf_FUN_100054d0
// Address: 100054d0
// Address Range: [[100054d0, 10005518]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fprintf_FUN_100054d0(FILE *file,char *format,...)

#include "nocturne.h"

int __cdecl _fprintf(FILE *file,char *format,...)

{
  int flag;
  int iVar1;
  
  _lock_file(file);
  flag = _stbuf(file);
  iVar1 = _output(file,format,&stack0x0000000c);
  _ftbuf(flag,file);
  _unlock_file(file);
  return iVar1;
}
