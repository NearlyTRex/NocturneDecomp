// Name: FUN_0054f7f0
// Address: 0054f7f0
// Address Range: [[0054f7f0, 0054f84c]]
// Convention: unknown
// Signature: void FUN_0054f7f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void FUN_0054f7f0(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 != *(int *)(param_1 + 0x2320)) {
    FUN_0054e420(param_1,param_4);
  }
  uVar1 = FUN_0054ea40(param_1,param_2,param_3,*(uint *)(param_1 + 0x2320),
                       *(uint *)(param_1 + 0x2324),param_1 + 0x2140,param_1 + 0x2230);
  FUN_0054afb0(uVar1);
  return;
}
