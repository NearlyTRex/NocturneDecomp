// Name: crt_stdio.c_vsprintf_FUN_005bfb18
// Address: 005bfb18
// Address Range: [[005bfb18, 005bfb3e]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_vsprintf_FUN_005bfb18(char *buffer,char *format,va_list_t args)

#include "nocturne.h"

int __cdecl _vsprintf(char *buffer,char *format,va_list_t args)

{
  int iVar1;
  
  iVar1 = FUN_005c3320(buffer,format,args.value[0],FUN_005bfb00);
  buffer[iVar1] = '\0';
  return iVar1;
}
