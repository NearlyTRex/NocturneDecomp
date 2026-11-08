// Name: FUN_005503a0
// Address: 005503a0
// Address Range: [[005503a0, 005503bc]]
// Convention: unknown
// Signature: void FUN_005503a0(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005503a0(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(_DAT_0264161c * 0x60 + 0x264166c);
  *puVar1 = *puVar1 | param_1;
  return;
}
