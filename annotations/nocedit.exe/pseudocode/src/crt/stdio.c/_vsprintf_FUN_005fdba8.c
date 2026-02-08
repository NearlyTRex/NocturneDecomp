// Name: crt_stdio.c__vsprintf_FUN_005fdba8
// Address: 005fdba8
// Address Range: [[005fdba8, 005fdbce]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c__vsprintf_FUN_005fdba8(char *buffer,char *format,va_list_t args)

#include "nocturne.h"

int __cdecl _vsprintf(char *buffer,char *format,va_list_t args)

{
  int iVar1;
  
  iVar1 = FormatEngine
                    (buffer,format,args,StringBufferCallback);
  buffer[iVar1] = '\0';
  return iVar1;
}
