// Name: FUN_0056de90
// Address: 0056de90
// Address Range: [[0056de90, 0056de9e]]
// Convention: unknown
// Signature: void FUN_0056de90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056de90(void)

{
  uint *puVar1;
  
  FUN_0056deac(0);
  while (_DAT_02de4e24 != (uint *)0x0) {
    puVar1 = (uint *)*_DAT_02de4e24;
    FUN_005638d0(_DAT_02de4e24);
    _DAT_02de4e24 = puVar1;
  }
  return;
}
