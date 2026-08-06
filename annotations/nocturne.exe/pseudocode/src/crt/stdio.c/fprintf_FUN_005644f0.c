// Name: crt_stdio.c_fprintf_FUN_005644f0
// Address: 005644f0
// Address Range: [[005644f0, 00564514]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fprintf_FUN_005644f0(_FILE *file,char *format,...)

#include "nocturne.h"

int __cdecl _fprintf(_FILE *file,char *format,...)

{
  int iVar1;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = FUN_0056ae10(file,format,&local_8);
  return iVar1;
}
