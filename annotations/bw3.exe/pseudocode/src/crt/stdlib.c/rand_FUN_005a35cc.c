// Name: crt_stdlib.c_rand_FUN_005a35cc
// Address: 005a35cc
// Address Range: [[005a35cc, 005a35ee]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdlib_c_rand_FUN_005a35cc(void)

#include "nocturne.h"

int __cdecl rand(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)FUN_005a35c0();
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  uVar2 = *puVar1 * 0x41c64e6d + 0x3039;
  *puVar1 = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}
