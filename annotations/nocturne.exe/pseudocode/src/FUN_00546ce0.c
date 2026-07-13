// Name: FUN_00546ce0
// Address: 00546ce0
// Address Range: [[00546ce0, 00546d9e]]
// Convention: unknown
// Signature: void FUN_00546ce0(int param_1)

#include "nocturne.h"

void FUN_00546ce0(int param_1)

{
  uint uVar1;
  
  FUN_00409fc0(param_1);
  FUN_00454510(param_1 + 0x150);
  *(uint *)(param_1 + 0x300) = 0;
  *(uint *)(param_1 + 0x2fc) = *(uint *)(param_1 + 0x300);
  *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2fc);
  *(uint *)(param_1 + 0x2e8) = 0;
  *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e8);
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e4);
  *(uint *)(param_1 + 0x2d8) = 0x3f000000;
  *(uint *)(param_1 + 0x2dc) = 0x40000000;
  *(uint *)(param_1 + 0x304) = 0x3f800000;
  *(uint *)(param_1 + 0x308) = 0x3f800000;
  uVar1 = FUN_0040dda0(0x40c00000,0x41a00000);
  *(uint *)(param_1 + 0x30c) = uVar1;
  *(uint *)(param_1 + 0x318) = 0;
  *(uint *)(param_1 + 0x314) = *(uint *)(param_1 + 0x318);
  *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x314);
  *(uint *)(param_1 + 0x31c) = 0x41000000;
  return;
}
