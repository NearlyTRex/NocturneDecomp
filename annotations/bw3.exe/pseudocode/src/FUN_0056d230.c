// Name: FUN_0056d230
// Address: 0056d230
// Address Range: [[0056d230, 0056d2ee]]
// Convention: unknown
// Signature: void FUN_0056d230(int param_1)

#include "nocturne.h"

void FUN_0056d230(int param_1)

{
  uint uVar1;
  
  FUN_00408890(param_1);
  FUN_00462580(param_1 + 0x158);
  *(uint *)(param_1 + 0x308) = 0;
  *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x308);
  *(uint *)(param_1 + 0x300) = *(uint *)(param_1 + 0x304);
  *(uint *)(param_1 + 0x2f0) = 0;
  *(uint *)(param_1 + 0x2ec) = *(uint *)(param_1 + 0x2f0);
  *(uint *)(param_1 + 0x2e8) = *(uint *)(param_1 + 0x2ec);
  *(uint *)(param_1 + 0x2e0) = 0x3f000000;
  *(uint *)(param_1 + 0x2e4) = 0x40000000;
  *(uint *)(param_1 + 0x30c) = 0x3f800000;
  *(uint *)(param_1 + 0x310) = 0x3f800000;
  uVar1 = FUN_0040ce40(0x40c00000,0x41a00000);
  *(uint *)(param_1 + 0x314) = uVar1;
  *(uint *)(param_1 + 800) = 0;
  *(uint *)(param_1 + 0x31c) = *(uint *)(param_1 + 800);
  *(uint *)(param_1 + 0x318) = *(uint *)(param_1 + 0x31c);
  *(uint *)(param_1 + 0x324) = 0x41000000;
  return;
}
