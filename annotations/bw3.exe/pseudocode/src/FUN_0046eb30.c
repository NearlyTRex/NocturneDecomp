// Name: FUN_0046eb30
// Address: 0046eb30
// Address Range: [[0046eb30, 0046ebb9]]
// Convention: unknown
// Signature: void FUN_0046eb30(int param_1)

#include "nocturne.h"

void FUN_0046eb30(int param_1)

{
  uint uVar1;
  
  FUN_00462580(param_1 + 0x158);
  *(uint *)(param_1 + 0x2ec) = 0;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x2f8);
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x2fc);
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x300);
  uVar1 = FUN_0040ce40(*(uint *)(param_1 + 0x2e0),*(uint *)(param_1 + 0x2e4));
  *(uint *)(param_1 + 0x2dc) = uVar1;
  FUN_004625f0(0x1c0b3dc,"stalrock.kfm");
  FUN_00462580(0x1c0b3dc);
  *(uint *)(param_1 + 0x338) = 0;
  return;
}
