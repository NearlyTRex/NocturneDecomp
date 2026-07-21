// Name: crt_stdlib.c_rand_FUN_0056488c
// Address: 0056488c
// Address Range: [[0056488c, 005648ae]]
// Convention: __cdecl
// Signature: uint __cdecl crt_stdlib_c_rand_FUN_0056488c(void)

#include "nocturne.h"

uint __cdecl rand(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)FUN_00564880();
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  uVar2 = *puVar1 * 0x41c64e6d + 0x3039;
  *puVar1 = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}
