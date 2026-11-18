// Name: crt_stdio.c_fprintf_FUN_005c03c0
// Address: 005c03c0
// Address Range: [[005c03c0, 005c03e4]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fprintf_FUN_005c03c0(_FILE *file,char *format)

#include "nocturne.h"

int __cdecl _fprintf(_FILE *file,char *format)

{
  int iVar1;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = FUN_005c4fe0(file,format,&local_8);
  return iVar1;
}
