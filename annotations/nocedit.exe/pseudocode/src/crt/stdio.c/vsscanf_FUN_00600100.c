// Name: crt_stdio.c_vsscanf_FUN_00600100
// Address: 00600100
// Address Range: [[00600100, 0060013b]]
// Convention: __cdecl
// Signature: int crt_stdio.c_vsscanf_FUN_00600100(char * str, char * format, va_list_t args)

#include "nocturne.h"

int __cdecl crt_stdio_c_vsscanf_FUN_00600100(char *str,char *format,va_list_t args)

{
  int iVar1;
  code *local_1c;
  code *local_18;
  char *local_14;
  
  local_14 = str;
  local_1c = crt_stdio_c_string_getc_FUN_006000d0;
  local_18 = crt_stdio_c_string_ungetc_FUN_006000f8;
  iVar1 = crt_stdio_c_doscan_FUN_00604950
                    ((scanf_state_t *)&local_1c,(char **)format,(va_list_t *)args);
  return iVar1;
}
