// Name: crt_stdio.c_vsprintf_FUN_005fdba8
// Address: 005fdba8
// Address Range: [[005fdba8, 005fdbce]]
// Convention: __cdecl
// Signature: int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args)

#include "nocturne.h"

int __cdecl crt_stdio_c_vsprintf_FUN_005fdba8(char *buffer,char *format,va_list_t *args)

{
  int iVar1;
  
  iVar1 = crt_stdio_c_FormatEngine_FUN_00602950
                    (buffer,format,(va_list_t)args,crt_stdio_c_StringBufferCallback_FUN_005fdb90);
  format[iVar1] = '\0';
  return iVar1;
}
