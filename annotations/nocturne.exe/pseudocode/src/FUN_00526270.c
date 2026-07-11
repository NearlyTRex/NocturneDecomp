// Name: FUN_00526270
// Address: 00526270
// Address Range: [[00526270, 00526293]]
// Convention: unknown
// Signature: void FUN_00526270(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00526270(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(_DAT_02dc1b74 * 0x6c + 0x2dc1bd4);
  *puVar1 = *puVar1 | param_1;
  return;
}
