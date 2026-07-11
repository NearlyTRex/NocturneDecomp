// Name: FUN_0046f2a0
// Address: 0046f2a0
// Address Range: [[0046f2a0, 0046f2d8]]
// Convention: unknown
// Signature: void FUN_0046f2a0(int param_1)

#include "nocturne.h"

void FUN_0046f2a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x134);
  if (iVar1 < 1) {
    FUN_0046f130(param_1);
    return;
  }
  *(int *)(param_1 + 0x134) = iVar1 + -1;
  FUN_0046f1e0(param_1,iVar1 + -1,iVar1);
  FUN_0046f130(param_1);
  return;
}
