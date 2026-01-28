// Name: crt_stdlib.c_srand_FUN_005feb80
// Address: 005feb80
// Address Range: [[005feb80, 005feb8f]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdlib_c_srand_FUN_005feb80(uint seed)

#include "nocturne.h"

void __cdecl crt_stdlib_c_srand_FUN_005feb80(uint seed)

{
  uint *puVar1;
  
  puVar1 = crt_stdlib_c_GetRandomSeedPointer_FUN_005feb50();
  if (puVar1 != (uint *)0x0) {
    *puVar1 = seed;
  }
  return;
}
