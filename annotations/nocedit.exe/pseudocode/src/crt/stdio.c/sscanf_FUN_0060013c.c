// Name: crt_stdio.c_sscanf_FUN_0060013c
// Address: 0060013c
// Address Range: [[0060013c, 00600160]]
// Convention: __cdecl
// Signature: int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format, ...)

#include "nocturne.h"

int __cdecl crt_stdio_c_sscanf_FUN_0060013c(char *str,char *format,...)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = crt_stdio_c_vsscanf_FUN_00600100(str,format,(va_list_t)&local_8);
  return iVar1;
}
