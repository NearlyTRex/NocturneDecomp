// Name: FUN_0054e420
// Address: 0054e420
// Address Range: [[0054e420, 0054e45c]]
// Convention: unknown
// Signature: void FUN_0054e420(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0054e420(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0054ea40(param_1,param_2,param_1 + 0xe80,*(uint *)(param_1 + 0x2324),
                       param_1 + 0x2140);
  FUN_00548850(uVar1);
  *(uint *)(param_1 + 0x2320) = param_2;
  return;
}
