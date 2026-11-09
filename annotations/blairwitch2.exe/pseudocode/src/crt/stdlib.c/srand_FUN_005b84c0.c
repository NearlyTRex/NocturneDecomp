// Name: crt_stdlib.c_srand_FUN_005b84c0
// Address: 005b84c0
// Address Range: [[005b84c0, 005b84cf]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdlib_c_srand_FUN_005b84c0(uint seed)

#include "nocturne.h"

void __cdecl srand(uint seed)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_005b8490();
  if (puVar1 != (uint *)0x0) {
    *puVar1 = seed;
  }
  return;
}
