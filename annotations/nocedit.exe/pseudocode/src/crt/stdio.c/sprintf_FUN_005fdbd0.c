// Name: crt_stdio.c_sprintf_FUN_005fdbd0
// Address: 005fdbd0
// Address Range: [[005fdbd0, 005fdbf4]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_sprintf_FUN_005fdbd0(char *buffer,char *format,...)

#include "nocturne.h"

int __cdecl sprintf(char *buffer,char *format,...)

{
  int iVar1;
  va_list_t args;
  
  args.value[0] = (char * [1])&stack0x0000000c;
  iVar1 = vsprintf(buffer,format,(va_list_t)&args);
  return iVar1;
}
