// Name: FUN_0040a000
// Address: 0040a000
// Address Range: [[0040a000, 0040a05e]]
// Convention: unknown
// Signature: void FUN_0040a000(int param_1)

#include "nocturne.h"

void FUN_0040a000(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0040df00(*(uint *)(param_1 + 0x30));
  *(uint *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_0040df00(*(uint *)(param_1 + 0x38));
  *(uint *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_0040df00(*(uint *)(param_1 + 0x34));
  *(uint *)(param_1 + 0x34) = uVar1;
  FUN_0044d7a0(param_1 + 0x3c,param_1 + 0x30);
  return;
}
