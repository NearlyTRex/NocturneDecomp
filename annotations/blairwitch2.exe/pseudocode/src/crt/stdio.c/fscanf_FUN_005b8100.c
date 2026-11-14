// Name: crt_stdio.c_fscanf_FUN_005b8100
// Address: 005b8100
// Address Range: [[005b8100, 005b8124]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fscanf_FUN_005b8100(_FILE *file,char *format)

#include "nocturne.h"

int __cdecl _fscanf(_FILE *file,char *format)

{
  int iVar1;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = FUN_005b8078(file,format,&local_8);
  return iVar1;
}
