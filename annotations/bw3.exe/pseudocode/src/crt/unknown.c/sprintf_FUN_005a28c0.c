// Name: crt_unknown.c_sprintf_FUN_005a28c0
// Address: 005a28c0
// Address Range: [[005a28c0, 005a28e4]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_sprintf_FUN_005a28c0(char *buffer,char *format)

#include "nocturne.h"

int __cdecl _sprintf(char *buffer,char *format)

{
  int iVar1;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = _vsprintf(buffer,format,(va_list_t)&local_8);
  return iVar1;
}
