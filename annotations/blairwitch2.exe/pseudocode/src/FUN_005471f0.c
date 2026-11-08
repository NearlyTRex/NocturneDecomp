// Name: FUN_005471f0
// Address: 005471f0
// Address Range: [[005471f0, 0054722c]]
// Convention: unknown
// Signature: void FUN_005471f0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005471f0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00547810(param_1,param_2,param_1 + 0xe80,*(uint *)(param_1 + 0x2234),
                       param_1 + 0x2140);
  FUN_00541640(uVar1);
  *(uint *)(param_1 + 0x2230) = param_2;
  return;
}
