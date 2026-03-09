// Name: crt_stdio.c__sprintf_FUN_005fdbd0
// Address: 005fdbd0
// Address Range: [[005fdbd0, 005fdbf4]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c__sprintf_FUN_005fdbd0(char *buffer,char *format,...)

#include "nocturne.h"

int __cdecl _sprintf(char *buffer,char *format,...)

{
  int iVar1;
  va_list_t args;
  
  VA_START_T(args, format);
  iVar1 = _vsprintf(buffer,format,args);
  return iVar1;
}
