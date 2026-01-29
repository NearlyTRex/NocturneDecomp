// Name: crt_stdlib.c_strtoul_FUN_0060ede0
// Address: 0060ede0
// Address Range: [[0060ede0, 0060edfb]]
// Convention: __cdecl
// Signature: ulong __cdecl crt_stdlib_c_strtoul_FUN_0060ede0(char *str,char **endptr,int base)

#include "nocturne.h"

ulong __cdecl strtoul(char *str,char **endptr,int base)

{
  ulong uVar1;
  
  uVar1 = strtol_internal(str,endptr,base,0);
  return uVar1;
}
