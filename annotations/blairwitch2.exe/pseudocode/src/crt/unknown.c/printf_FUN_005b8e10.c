// Name: crt_unknown.c_printf_FUN_005b8e10
// Address: 005b8e10
// Address Range: [[005b8e10, 005b8e32]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_printf_FUN_005b8e10(char *format)

#include "nocturne.h"

int __cdecl printf(char *format)

{
  int iVar1;
  byte *puStack_4;
  
  puStack_4 = &stack0x00000008;
  iVar1 = FUN_005bcd10(&DAT_0061ef6e,format,&puStack_4);
  return iVar1;
}
