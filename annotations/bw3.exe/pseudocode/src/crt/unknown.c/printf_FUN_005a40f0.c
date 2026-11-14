// Name: crt_unknown.c_printf_FUN_005a40f0
// Address: 005a40f0
// Address Range: [[005a40f0, 005a4112]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_printf_FUN_005a40f0(char *format)

#include "nocturne.h"

int __cdecl printf(char *format)

{
  int iVar1;
  byte *puStack_4;
  
  puStack_4 = &stack0x00000008;
  iVar1 = FUN_005a7e50(&DAT_00607692,format,&puStack_4);
  return iVar1;
}
