// Name: crt_stdio.c_printf_FUN_005ff0d0
// Address: 005ff0d0
// Address Range: [[005ff0d0, 005ff0f2]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_printf_FUN_005ff0d0(char *format,...)

#include "nocturne.h"

int __cdecl printf(char *format,...)

{
  int iVar1;
  byte *local_4;
  
  local_4 = &stack0x00000008;
  iVar1 = func_0x00604850(&g_StdoutLogFile,format,&local_4);
  return iVar1;
}
