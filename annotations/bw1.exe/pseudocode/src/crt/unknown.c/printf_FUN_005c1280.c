// Name: crt_unknown.c_printf_FUN_005c1280
// Address: 005c1280
// Address Range: [[005c1280, 005c12a2]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_printf_FUN_005c1280(char *format)

#include "nocturne.h"

int __cdecl printf(char *format)

{
  int iVar1;
  byte *puStack_4;
  
  puStack_4 = &stack0x00000008;
  iVar1 = FUN_005c4fe0(&DAT_006262ee,format,&puStack_4);
  return iVar1;
}
