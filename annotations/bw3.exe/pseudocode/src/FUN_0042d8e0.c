// Name: FUN_0042d8e0
// Address: 0042d8e0
// Address Range: [[0042d8e0, 0042d9e7]]
// Convention: unknown
// Signature: void FUN_0042d8e0(int param_1)

#include "nocturne.h"

void FUN_0042d8e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xbc68) == 0) {
    FUN_0042d500(param_1);
    if (*(int *)(param_1 + 0xcdc4) == 0) {
      FUN_0054e3a0(param_1 + 0x158,0xffffffff,0xffffffff,1,0);
    }
    else {
      FUN_0046d4b0(DAT_005f2afc,1);
      FUN_0054e3a0(param_1 + 0x158,0xffffffff,0x2e7,1,0);
      FUN_0046d4b0(DAT_005f2afc,0);
    }
    FUN_0043fc50(param_1 + 0x2f08,param_1 + 0x158);
  }
  iVar1 = FUN_0046d540(DAT_005f2afc);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x27a4) == 0) {
      FUN_0042f010(param_1);
    }
    if (0.0 < *(float *)(param_1 + 0xbc70)) {
      FUN_0042f310(param_1);
    }
    if (0.0 < *(float *)(param_1 + 0x3254)) {
      FUN_0042f310(param_1);
    }
  }
  FUN_0042e3a0(param_1);
  if (*(int *)(0x01D2130C + 0x240) == 0) {
    return;
  }
  FUN_0042d9f0(param_1);
  return;
}
