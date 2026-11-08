// Name: FUN_005a40a0
// Address: 005a40a0
// Address Range: [[005a40a0, 005a4104]]
// Convention: unknown
// Signature: void FUN_005a40a0(int param_1)

#include "nocturne.h"

void FUN_005a40a0(int param_1)

{
  uint uVar1;
  
  FUN_004688e0(param_1 + 0xc26c);
  FUN_004a0510(param_1);
  *(uint *)(param_1 + 0x2538) = 0x41200000;
  *(uint *)(param_1 + 0xc49c) = 0;
  *(uint *)(param_1 + 0xc494) = 0;
  uVar1 = FUN_0040cc00(*(uint *)(param_1 + 0xc48c),*(uint *)(param_1 + 0xc490));
  *(uint *)(param_1 + 0xc498) = uVar1;
  return;
}
