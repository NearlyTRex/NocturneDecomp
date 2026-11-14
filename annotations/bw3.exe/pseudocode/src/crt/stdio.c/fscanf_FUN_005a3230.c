// Name: crt_stdio.c_fscanf_FUN_005a3230
// Address: 005a3230
// Address Range: [[005a3230, 005a3254]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fscanf_FUN_005a3230(_FILE *file,char *format)

#include "nocturne.h"

int __cdecl _fscanf(_FILE *file,char *format)

{
  int iVar1;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = FUN_005a31a8(file,format,&local_8);
  return iVar1;
}
