// Name: FUN_005918e0
// Address: 005918e0
// Address Range: [[005918e0, 00591999]]
// Convention: unknown
// Signature: void FUN_005918e0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005918e0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = *(float *)(param_2 + 4);
  *(uint *)(param_1 + 0xcde0) = 0x3f99999a;
  fVar2 = *(float *)(param_1 + 0x2538) - fVar2;
  iVar1 = param_1 + 0x158;
  *(float *)(param_1 + 0x2538) = fVar2;
  if (0.0 < fVar2) {
    iVar3 = FUN_0048a1b0(param_1,*(uint *)(param_2 + 4));
    if (iVar3 != 0) {
      FUN_004fc0d0(iVar1,6,1);
      FUN_00489b80(param_1,param_2);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x2540) = 0;
    *(uint *)(param_1 + 0x2538) = 0;
    iVar3 = FUN_004fc070(iVar1);
    if ((*(int *)(iVar3 + 0x24) != 8) && (*(int *)(iVar3 + 0x24) != 7)) {
      FUN_004fc0d0(iVar1,7,1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
    }
  }
  FUN_00489b80(param_1,param_2);
  return;
}
