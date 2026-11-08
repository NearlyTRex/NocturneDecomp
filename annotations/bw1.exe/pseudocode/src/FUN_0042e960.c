// Name: FUN_0042e960
// Address: 0042e960
// Address Range: [[0042e960, 0042ea07]]
// Convention: unknown
// Signature: void FUN_0042e960(int param_1)

#include "nocturne.h"

void FUN_0042e960(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xb9e8) == 0) {
    FUN_0042e580(param_1);
    FUN_00569810(param_1 + 0x158,0xffffffff,0xffffffff,1,0);
    FUN_00441ff0(param_1 + 0x2ca0,param_1 + 0x158);
  }
  iVar1 = FUN_00483e60(DAT_00612560);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x27a4) == 0) {
      FUN_0042fe00(param_1);
    }
    if (0.0 < *(float *)(param_1 + 0xb9f0)) {
      FUN_00430060(param_1);
    }
  }
  FUN_0042f3c0(param_1);
  if (*(int *)(0x01CCF390 + 0x238) == 0) {
    return;
  }
  FUN_0042ea10(param_1);
  return;
}
