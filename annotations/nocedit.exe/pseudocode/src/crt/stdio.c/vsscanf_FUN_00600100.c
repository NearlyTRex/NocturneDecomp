// Name: crt_stdio.c_vsscanf_FUN_00600100
// Address: 00600100
// Address Range: [[00600100, 0060013b]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_vsscanf_FUN_00600100(char *str,char *format,va_list_t args)

#include "nocturne.h"

int __cdecl vsscanf(char *str,char *format,va_list_t args)

{
  int iVar1;
  code *local_1c;
  code *local_18;
  char *local_14;
  
  local_14 = str;
  local_1c = string_getc;
  local_18 = string_ungetc;
  iVar1 = doscan
                    ((scanf_state_t *)&local_1c,(char **)format,(va_list_t *)args);
  return iVar1;
}
