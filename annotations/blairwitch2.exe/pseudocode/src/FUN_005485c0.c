// Name: FUN_005485c0
// Address: 005485c0
// Address Range: [[005485c0, 0054861c]]
// Convention: unknown
// Signature: void FUN_005485c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void FUN_005485c0(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 != *(int *)(param_1 + 0x2230)) {
    FUN_005471f0(param_1,param_4);
  }
  uVar1 = FUN_00547810(param_1,param_2,param_3,*(uint *)(param_1 + 0x2230),
                       *(uint *)(param_1 + 0x2234),param_1 + 0x2140,param_1 + 0x21b8);
  FUN_00543d80(uVar1);
  return;
}
