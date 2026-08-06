// Name: crt_stdio.c_sprintf_FUN_00563c90
// Address: 00563c90
// Address Range: [[00563c90, 00563cb4]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_sprintf_FUN_00563c90(char *buffer,char *format,...)

#include "nocturne.h"

int __cdecl _sprintf(char *buffer,char *format,...)

{
  int iVar1;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = _vsprintf(buffer,format,(va_list_t)&local_8);
  return iVar1;
}
