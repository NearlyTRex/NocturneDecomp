// Name: FUN_0051ed30
// Address: 0051ed30
// Address Range: [[0051ed30, 0051ed8c]]
// Convention: unknown
// Signature: void FUN_0051ed30(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void FUN_0051ed30(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 != *(int *)(param_1 + 0x2230)) {
    FUN_0051da50(param_1,param_4);
  }
  uVar1 = FUN_0051e020(param_1,param_2,param_3,*(uint *)(param_1 + 0x2230),
                       *(uint *)(param_1 + 0x2234),param_1 + 0x2140,param_1 + 0x21b8);
  FUN_0051a780(uVar1);
  return;
}
