// Name: crt_stdlib.c_srand_FUN_005a35f0
// Address: 005a35f0
// Address Range: [[005a35f0, 005a35ff]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdlib_c_srand_FUN_005a35f0(uint seed)

#include "nocturne.h"

void __cdecl srand(uint seed)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_005a35c0();
  if (puVar1 != (uint *)0x0) {
    *puVar1 = seed;
  }
  return;
}
