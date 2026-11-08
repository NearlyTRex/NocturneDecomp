// Name: FUN_005c084c
// Address: 005c084c
// Address Range: [[005c084c, 005c086e]]
// Convention: unknown
// Signature: uint FUN_005c084c(void)

#include "nocturne.h"

uint FUN_005c084c(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)FUN_005c0840();
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  uVar2 = *puVar1 * 0x41c64e6d + 0x3039;
  *puVar1 = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}
