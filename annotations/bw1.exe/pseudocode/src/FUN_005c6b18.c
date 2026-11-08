// Name: FUN_005c6b18
// Address: 005c6b18
// Address Range: [[005c6b18, 005c6b3d]]
// Convention: unknown
// Signature: void FUN_005c6b18(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c6b18(void)

{
  uint *puVar1;
  
  while (_DAT_02c9f054 != (uint *)0x0) {
    puVar1 = (uint *)*_DAT_02c9f054;
    FUN_005c09f0(_DAT_02c9f054);
    _DAT_02c9f054 = puVar1;
  }
  return;
}
