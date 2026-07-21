// Name: crt_stdlib.c_srand_FUN_005648b0
// Address: 005648b0
// Address Range: [[005648b0, 005648bf]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdlib_c_srand_FUN_005648b0(undefined4 param_1)

#include "nocturne.h"

void __cdecl srand(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00564880();
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_1;
  }
  return;
}
