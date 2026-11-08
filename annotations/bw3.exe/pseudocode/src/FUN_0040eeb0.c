// Name: FUN_0040eeb0
// Address: 0040eeb0
// Address Range: [[0040eeb0, 0040ef1f]]
// Convention: unknown
// Signature: void FUN_0040eeb0(int param_1)

#include "nocturne.h"

void FUN_0040eeb0(int param_1)

{
  uint uVar1;
  
  FUN_00462580(param_1 + 0x188);
  FUN_00444970(param_1 + 0x178,param_1 + 0x158);
  FUN_00408890(param_1);
  FUN_0040f2f0(param_1);
  *(uint *)(param_1 + 0x380) = 0;
  uVar1 = FUN_0040ce40(*(uint *)(param_1 + 0x378),*(uint *)(param_1 + 0x37c));
  *(uint *)(param_1 + 900) = uVar1;
  return;
}
