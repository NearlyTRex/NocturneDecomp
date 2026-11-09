// Name: crt_stdio.c_sscanf_FUN_005ba8cc
// Address: 005ba8cc
// Address Range: [[005ba8cc, 005ba8f0]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_sscanf_FUN_005ba8cc(char *str,char *format)

#include "nocturne.h"

int __cdecl sscanf(char *str,char *format)

{
  int iVar1;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = FUN_005ba890(str,format,&local_8);
  return iVar1;
}
