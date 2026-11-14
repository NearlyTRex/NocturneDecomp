// Name: crt_stdlib.c_strtoul_FUN_00573890
// Address: 00573890
// Address Range: [[00573890, 005738ab]]
// Convention: __cdecl
// Signature: ulong __cdecl crt_stdlib_c_strtoul_FUN_00573890(char *str,char **endptr,int base)

#include "nocturne.h"

ulong __cdecl strtoul(char *str,char **endptr,int base)

{
  ulong uVar1;
  
  uVar1 = strtol_internal(str,endptr,base,0);
  return uVar1;
}
