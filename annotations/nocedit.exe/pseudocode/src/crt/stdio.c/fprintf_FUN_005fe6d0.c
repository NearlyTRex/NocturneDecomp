// Name: crt_stdio.c_fprintf_FUN_005fe6d0
// Address: 005fe6d0
// Address Range: [[005fe6d0, 005fe6f4]]
// Convention: __cdecl
// Signature: int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format, ...)

#include "nocturne.h"

int __cdecl crt_stdio_c_fprintf_FUN_005fe6d0(FILE *file,char *format,...)

{
  int iVar1;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = crt_stdio_c_vfprintf_FUN_00604850(file,format,(va_list_t)&local_8);
  return iVar1;
}
