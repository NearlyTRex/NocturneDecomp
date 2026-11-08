// Name: FUN_0047bba0
// Address: 0047bba0
// Address Range: [[0047bba0, 0047bc0c]]
// Convention: unknown
// Signature: void FUN_0047bba0(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_0047bba0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (*(int *)(param_1 + 0x130) < param_3) {
    param_3 = *(int *)(param_1 + 0x130);
  }
  if (param_2 < param_3) {
    FUN_005a54c0(param_1 + param_2,param_1 + param_3,*(int *)(param_1 + 0x130) - param_3);
    iVar1 = *(int *)(param_1 + 0x130) - (param_3 - param_2);
    *(int *)(param_1 + 0x130) = iVar1;
    if (iVar1 < *(int *)(param_1 + 0x134)) {
      *(int *)(param_1 + 0x134) = iVar1;
    }
    *(byte *)(param_1 + *(int *)(param_1 + 0x130)) = 0;
  }
  return;
}
