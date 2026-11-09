// Name: crt_unknown.c_FUN_005ca040
// Address: 005ca040
// Address Range: [[005ca040, 005ca04e]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ca040(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ca040(void)

{
  uint *puVar1;
  
  FUN_005ca05c(0);
  while (_DAT_02c9f054 != (uint *)0x0) {
    puVar1 = (uint *)*_DAT_02c9f054;
    FUN_005c09f0(_DAT_02c9f054);
    _DAT_02c9f054 = puVar1;
  }
  return;
}
