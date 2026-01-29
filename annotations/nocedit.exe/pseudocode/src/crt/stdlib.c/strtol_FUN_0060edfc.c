// Name: crt_stdlib.c_strtol_FUN_0060edfc
// Address: 0060edfc
// Address Range: [[0060edfc, 0060ee17]]
// Convention: __cdecl
// Signature: long __cdecl crt_stdlib_c_strtol_FUN_0060edfc(char *str,char **endptr,int base)

#include "nocturne.h"

long __cdecl strtol(char *str,char **endptr,int base)

{
  long lVar1;
  
  lVar1 = strtol_internal(str,endptr,base,1);
  return lVar1;
}
