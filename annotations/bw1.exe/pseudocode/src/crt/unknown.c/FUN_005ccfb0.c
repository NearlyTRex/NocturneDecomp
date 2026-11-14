// Name: crt_unknown.c_FUN_005ccfb0
// Address: 005ccfb0
// Address Range: [[005ccfb0, 005ccfb4]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ccfb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ccfb0(void)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = _DAT_02c9ffa0;
  while (puVar2 != (uint *)0x0) {
    puVar1 = (uint *)*puVar2;
    if (puVar2[3] != 0) {
      FUN_005c09f0(puVar2[2]);
    }
    FUN_005c09f0(puVar2);
    puVar2 = puVar1;
  }
  return;
}
