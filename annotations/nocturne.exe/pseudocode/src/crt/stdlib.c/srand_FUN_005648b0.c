// Name: crt_stdlib.c_srand_FUN_005648b0
// Address: 005648b0
// Address Range: [[005648b0, 005648bf]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdlib_c_srand_FUN_005648b0(uint seed)

#include "nocturne.h"

void __cdecl srand(uint seed)

{
  uint *puVar1;
  
  puVar1 = GetRandomSeedPointer();
  if (puVar1 != (uint *)0x0) {
    *puVar1 = seed;
  }
  return;
}
