// Name: crt_stdio.c_vsprintf_FUN_00563a08
// Address: 00563a08
// Address Range: [[00563a08, 00563a2e]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_vsprintf_FUN_00563a08(char *buffer,char *format,va_list_t args)

#include "nocturne.h"

int __cdecl _vsprintf(char *buffer,char *format,va_list_t args)

{
  int iVar1;
  
  iVar1 = FUN_00569040
                    (buffer,format,args.value[0],StringBufferCallback);
  buffer[iVar1] = '\0';
  return iVar1;
}
