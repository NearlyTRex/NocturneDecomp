// Name: FUN_004451c0
// Address: 004451c0
// Address Range: [[004451c0, 004452d8]]
// Convention: unknown
// Signature: void FUN_004451c0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004451c0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 0xc1d0) & 0x7fffffff) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01CCF390 + 0x1ec) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01CCF390 + 0x248) == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  *(uint *)(param_1 + 0xc1d0) = 0x3F000000;
  fVar2 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  iVar1 = param_1 + 0x158;
  *(float *)(param_1 + 0x2538) = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar3 = FUN_00524770(iVar1);
    if (*(int *)(iVar3 + 0x24) != 6) {
      iVar3 = FUN_00524770(iVar1);
      if (*(int *)(iVar3 + 0x24) != 5) {
        *(uint *)(param_1 + 0x26fc) = 0;
        FUN_005247c0(iVar1,5,1);
        FUN_004e64d0(0x01CD0E3C,param_1,0x32,0x42480000,0);
        FUN_004319e0(param_1,param_2);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(param_2 + 4)) {
    FUN_005247c0(iVar1,4,1);
    FUN_004319e0(param_1,param_2);
    return;
  }
  FUN_004319e0(param_1,param_2);
  return;
}
