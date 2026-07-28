// Name: crt_unknown.c_vsscanf_FUN_00566b20
// Address: 00566b20
// Address Range: [[00566b20, 00566b5b]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_vsscanf_FUN_00566b20(char *str,char *format,va_list_t args)

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
  iVar1 = FUN_00567560(&local_1c,format,args.value[0]);
  return iVar1;
}
