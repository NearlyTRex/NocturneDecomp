// Name: FUN_00565814
// Address: 00565814
// Address Range: [[00565814, 0056582b]]
// Convention: unknown
// Signature: void FUN_00565814(undefined4 *param_1)

#include "nocturne.h"

void FUN_00565814(uint *param_1)

{
  uint uVar1;
  
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xef;
  uVar1 = *(uint *)(param_1[2] + 8);
  param_1[1] = 0;
  *param_1 = uVar1;
  return;
}
