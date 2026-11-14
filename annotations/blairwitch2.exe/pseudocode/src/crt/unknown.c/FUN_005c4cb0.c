// Name: crt_unknown.c_FUN_005c4cb0
// Address: 005c4cb0
// Address Range: [[005c4cb0, 005c4cb4]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c4cb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c4cb0(void)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = _DAT_026810b0;
  while (puVar2 != (uint *)0x0) {
    puVar1 = (uint *)*puVar2;
    if (puVar2[3] != 0) {
      FUN_005b86a0(puVar2[2]);
    }
    FUN_005b86a0(puVar2);
    puVar2 = puVar1;
  }
  return;
}
