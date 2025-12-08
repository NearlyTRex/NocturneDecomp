// Name: crt_stdlib.c_rand_FUN_005feb5c
// Address: 005feb5c
// Address Range: [[005feb5c, 005feb7e]]
// Convention: __cdecl
// Signature: int crt_stdlib.c_rand_FUN_005feb5c(void)

#include "nocturne.h"

int __cdecl crt_stdlib_c_rand_FUN_005feb5c(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = crt_stdlib_c_GetRandomSeedPointer_FUN_005feb50();
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  uVar2 = *puVar1 * 0x41c64e6d + 0x3039;
  *puVar1 = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}
