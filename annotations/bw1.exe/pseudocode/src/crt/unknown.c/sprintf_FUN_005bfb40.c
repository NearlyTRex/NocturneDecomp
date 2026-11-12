// Name: crt_unknown.c_sprintf_FUN_005bfb40
// Address: 005bfb40
// Address Range: [[005bfb40, 005bfb64]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_sprintf_FUN_005bfb40(char *buffer,char *format)

#include "nocturne.h"

int __cdecl _sprintf(char *buffer,char *format)

{
  int iVar1;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = _vsprintf(buffer,format,(va_list_t)&local_8);
  return iVar1;
}
