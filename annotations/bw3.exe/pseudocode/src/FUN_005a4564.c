// Name: FUN_005a4564
// Address: 005a4564
// Address Range: [[005a4564, 005a457b]]
// Convention: unknown
// Signature: void FUN_005a4564(undefined4 *param_1)

#include "nocturne.h"

void FUN_005a4564(uint *param_1)

{
  uint uVar1;
  
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xef;
  uVar1 = *(uint *)(param_1[2] + 8);
  param_1[1] = 0;
  *param_1 = uVar1;
  return;
}
