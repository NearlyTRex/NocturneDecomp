// Name: crt_stdlib.c_atoi_FUN_1000ff10
// Address: 1000ff10
// Address Range: [[1000ff10, 1000ff1d]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdlib_c_atoi_FUN_1000ff10(char *str)

#include "nocturne.h"

int __cdecl atoi(char *str)

{
  long lVar1;
  
  lVar1 = atol(str);
  return lVar1;
}
