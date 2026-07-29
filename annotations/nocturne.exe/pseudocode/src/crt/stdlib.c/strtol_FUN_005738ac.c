// Name: crt_stdlib.c_strtol_FUN_005738ac
// Address: 005738ac
// Address Range: [[005738ac, 005738c7]]
// Convention: __cdecl
// Signature: long __cdecl crt_stdlib_c_strtol_FUN_005738ac(char *str,char **endptr,int base)

#include "nocturne.h"

long __cdecl strtol(char *str,char **endptr,int base)

{
  long lVar1;
  
  lVar1 = strtol_internal(str,endptr,base,1);
  return lVar1;
}
