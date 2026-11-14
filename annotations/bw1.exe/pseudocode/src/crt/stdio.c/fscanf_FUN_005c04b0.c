// Name: crt_stdio.c_fscanf_FUN_005c04b0
// Address: 005c04b0
// Address Range: [[005c04b0, 005c04d4]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fscanf_FUN_005c04b0(_FILE *file,char *format)

#include "nocturne.h"

int __cdecl _fscanf(_FILE *file,char *format)

{
  int iVar1;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = FUN_005c0428(file,format,&local_8);
  return iVar1;
}
