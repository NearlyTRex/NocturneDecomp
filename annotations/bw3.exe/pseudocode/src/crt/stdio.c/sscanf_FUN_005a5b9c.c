// Name: crt_stdio.c_sscanf_FUN_005a5b9c
// Address: 005a5b9c
// Address Range: [[005a5b9c, 005a5bc0]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_sscanf_FUN_005a5b9c(char *str,char *format)

#include "nocturne.h"

int __cdecl sscanf(char *str,char *format)

{
  int iVar1;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = FUN_005a5b60(str,format,&local_8);
  return iVar1;
}
