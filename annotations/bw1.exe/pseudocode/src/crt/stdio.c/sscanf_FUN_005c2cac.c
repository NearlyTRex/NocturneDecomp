// Name: crt_stdio.c_sscanf_FUN_005c2cac
// Address: 005c2cac
// Address Range: [[005c2cac, 005c2cd0]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_sscanf_FUN_005c2cac(char *str,char *format)

#include "nocturne.h"

int __cdecl sscanf(char *str,char *format)

{
  int iVar1;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = FUN_005c2c70(str,format,&local_8);
  return iVar1;
}
