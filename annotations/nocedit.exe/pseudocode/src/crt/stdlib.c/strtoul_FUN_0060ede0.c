// Name: crt_stdlib.c_strtoul_FUN_0060ede0
// Address: 0060ede0
// Address Range: [[0060ede0, 0060edfb]]
// Convention: __cdecl
// Signature: ulong crt_stdlib.c_strtoul_FUN_0060ede0(char * str, char * * endptr, int base)

#include "nocturne.h"

ulong __cdecl crt_stdlib_c_strtoul_FUN_0060ede0(char *str,char **endptr,int base)

{
  ulong uVar1;
  
  uVar1 = crt_stdlib_c_strtol_internal_FUN_0060ec70(str,endptr,base,0);
  return uVar1;
}
