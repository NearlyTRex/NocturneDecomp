// Name: crt_stdio.c_fscanf_FUN_005fe7c0
// Address: 005fe7c0
// Address Range: [[005fe7c0, 005fe7e4]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fscanf_FUN_005fe7c0(_FILE *file,char *format,...)

#include "nocturne.h"

int __cdecl _fscanf(_FILE *file,char *format,...)

{
  int iVar1;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = vfscanf(file,format,(va_list_t)&local_8);
  return iVar1;
}
