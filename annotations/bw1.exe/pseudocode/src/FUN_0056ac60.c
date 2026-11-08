// Name: FUN_0056ac60
// Address: 0056ac60
// Address Range: [[0056ac60, 0056acbc]]
// Convention: unknown
// Signature: void FUN_0056ac60(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void FUN_0056ac60(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 != *(int *)(param_1 + 0x2320)) {
    FUN_00569890(param_1,param_4);
  }
  uVar1 = FUN_00569eb0(param_1,param_2,param_3,*(uint *)(param_1 + 0x2320),
                       *(uint *)(param_1 + 0x2324),param_1 + 0x2140,param_1 + 0x2230);
  FUN_00566420(uVar1);
  return;
}
