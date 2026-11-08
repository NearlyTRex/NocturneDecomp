// Name: FUN_004fd9e0
// Address: 004fd9e0
// Address Range: [[004fd9e0, 004fda36]]
// Convention: unknown
// Signature: void FUN_004fd9e0(int param_1)

#include "nocturne.h"

void FUN_004fd9e0(int param_1)

{
  uint uVar1;
  
  FUN_00569b20(param_1 + 0x158);
  FUN_00569f30(param_1 + 0x158);
  *(uint *)(param_1 + 0xc268) = 0;
  FUN_004a0510(param_1);
  uVar1 = FUN_0040cc00(0,0x41f00000);
  *(uint *)(param_1 + 0xc1e4) = uVar1;
  return;
}
