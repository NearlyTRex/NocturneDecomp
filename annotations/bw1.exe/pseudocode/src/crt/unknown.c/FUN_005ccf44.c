// Name: crt_unknown.c_FUN_005ccf44
// Address: 005ccf44
// Address Range: [[005ccf44, 005ccf76]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ccf44(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ccf44(void)

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
