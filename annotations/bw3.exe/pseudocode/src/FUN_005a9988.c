// Name: FUN_005a9988
// Address: 005a9988
// Address Range: [[005a9988, 005a99ad]]
// Convention: unknown
// Signature: void FUN_005a9988(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a9988(void)

{
  uint *puVar1;
  
  while (_DAT_02d252a4 != (uint *)0x0) {
    puVar1 = (uint *)*_DAT_02d252a4;
    FUN_005a3770(_DAT_02d252a4);
    _DAT_02d252a4 = puVar1;
  }
  return;
}
