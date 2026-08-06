// Name: crt_stdio.c_printf_FUN_00564c30
// Address: 00564c30
// Address Range: [[00564c30, 00564c52]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_printf_FUN_00564c30(char *format,...)

#include "nocturne.h"

int __cdecl printf(char *format,...)

{
  int iVar1;
  byte *local_4;
  
  local_4 = &stack0x00000008;
  iVar1 = FUN_0056ae10(&DAT_005c18ae,format,&local_4);
  return iVar1;
}
