// Name: FUN_00425c20
// Address: 00425c20
// Address Range: [[00425c20, 00425cbb]]
// Convention: unknown
// Signature: void FUN_00425c20(int param_1)

#include "nocturne.h"

void FUN_00425c20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xb640) == 0) {
    FUN_0051d9d0(param_1 + 0x150,0xffffffff,0xffffffff,1,0);
    FUN_004385a0(param_1 + 0x2a8c,param_1 + 0x150);
  }
  iVar1 = FUN_00461090(DAT_005ae704);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x260c) == 0) {
      FUN_00426e80(param_1);
    }
    if (0.0 < *(float *)(param_1 + 0xb648)) {
      FUN_004270e0(param_1);
    }
  }
  FUN_004265a0(param_1);
  if (*(int *)(0x01C775EC + 0x21c) == 0) {
    return;
  }
  FUN_00425cc0(param_1);
  return;
}
