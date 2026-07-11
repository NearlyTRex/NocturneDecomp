// Name: FUN_0046f1e0
// Address: 0046f1e0
// Address Range: [[0046f1e0, 0046f24c]]
// Convention: unknown
// Signature: void FUN_0046f1e0(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_0046f1e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (*(int *)(param_1 + 0x130) < param_3) {
    param_3 = *(int *)(param_1 + 0x130);
  }
  if (param_2 < param_3) {
    FUN_00566170(param_1 + param_2,param_1 + param_3,*(int *)(param_1 + 0x130) - param_3);
    iVar1 = *(int *)(param_1 + 0x130) - (param_3 - param_2);
    *(int *)(param_1 + 0x130) = iVar1;
    if (iVar1 < *(int *)(param_1 + 0x134)) {
      *(int *)(param_1 + 0x134) = iVar1;
    }
    *(byte *)(param_1 + *(int *)(param_1 + 0x130)) = 0;
  }
  return;
}
