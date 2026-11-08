// Name: FUN_00555f20
// Address: 00555f20
// Address Range: [[00555f20, 00555f3c]]
// Convention: unknown
// Signature: void FUN_00555f20(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555f20(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(_DAT_02ceb91c * 0x60 + 0x2ceb96c);
  *puVar1 = *puVar1 | param_1;
  return;
}
