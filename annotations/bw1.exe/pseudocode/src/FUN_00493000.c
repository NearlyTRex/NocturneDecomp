// Name: FUN_00493000
// Address: 00493000
// Address Range: [[00493000, 0049306c]]
// Convention: unknown
// Signature: void FUN_00493000(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_00493000(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (*(int *)(param_1 + 0x130) < param_3) {
    param_3 = *(int *)(param_1 + 0x130);
  }
  if (param_2 < param_3) {
    FUN_005c25d0(param_1 + param_2,param_1 + param_3,*(int *)(param_1 + 0x130) - param_3);
    iVar1 = *(int *)(param_1 + 0x130) - (param_3 - param_2);
    *(int *)(param_1 + 0x130) = iVar1;
    if (iVar1 < *(int *)(param_1 + 0x134)) {
      *(int *)(param_1 + 0x134) = iVar1;
    }
    *(byte *)(param_1 + *(int *)(param_1 + 0x130)) = 0;
  }
  return;
}
