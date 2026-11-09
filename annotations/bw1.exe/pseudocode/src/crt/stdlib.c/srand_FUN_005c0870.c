// Name: crt_stdlib.c_srand_FUN_005c0870
// Address: 005c0870
// Address Range: [[005c0870, 005c087f]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdlib_c_srand_FUN_005c0870(uint seed)

#include "nocturne.h"

void __cdecl srand(uint seed)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_005c0840();
  if (puVar1 != (uint *)0x0) {
    *puVar1 = seed;
  }
  return;
}
