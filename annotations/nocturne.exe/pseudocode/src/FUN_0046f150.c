// Name: FUN_0046f150
// Address: 0046f150
// Address Range: [[0046f150, 0046f1d2]]
// Convention: unknown
// Signature: void FUN_0046f150(int param_1,undefined1 param_2,int param_3)

#include "nocturne.h"

void FUN_0046f150(int param_1,byte param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 300) + -1;
  if (*(int *)(param_1 + 0x134) < iVar1) {
    if (*(int *)(param_1 + 0x130) < iVar1) {
      *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
    }
    iVar1 = *(int *)(param_1 + 0x134);
    FUN_00566170(iVar1 + 1 + param_1,iVar1 + param_1,*(int *)(param_1 + 0x130) - iVar1);
    *(byte *)(param_1 + *(int *)(param_1 + 0x134)) = param_2;
    if (param_3 != 0) {
      *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
      *(byte *)(param_1 + *(int *)(param_1 + 0x130)) = 0;
      return;
    }
  }
  *(byte *)(param_1 + *(int *)(param_1 + 0x130)) = 0;
  return;
}
