// Name: FUN_00410c20
// Address: 00410c20
// Address Range: [[00410c20, 00410c8f]]
// Convention: unknown
// Signature: void FUN_00410c20(int param_1)

#include "nocturne.h"

void FUN_00410c20(int param_1)

{
  uint uVar1;
  
  FUN_004688e0(param_1 + 0x188);
  FUN_00447db0(param_1 + 0x178,param_1 + 0x158);
  FUN_00408850(param_1);
  FUN_00411060(param_1);
  *(uint *)(param_1 + 0x380) = 0;
  uVar1 = FUN_0040cc00(*(uint *)(param_1 + 0x378),*(uint *)(param_1 + 0x37c));
  *(uint *)(param_1 + 900) = uVar1;
  return;
}
