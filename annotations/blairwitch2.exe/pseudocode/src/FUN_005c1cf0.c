// Name: FUN_005c1cf0
// Address: 005c1cf0
// Address Range: [[005c1cf0, 005c1cfe]]
// Convention: unknown
// Signature: void FUN_005c1cf0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c1cf0(void)

{
  uint *puVar1;
  
  FUN_005c1d0c(0);
  while (_DAT_02680164 != (uint *)0x0) {
    puVar1 = (uint *)*_DAT_02680164;
    FUN_005b86a0(_DAT_02680164);
    _DAT_02680164 = puVar1;
  }
  return;
}
