// Name: FUN_0056d0f0
// Address: 0056d0f0
// Address Range: [[0056d0f0, 0056d1f5]]
// Convention: unknown
// Signature: void FUN_0056d0f0(int param_1,int param_2)

#include "nocturne.h"

void FUN_0056d0f0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc2a8) != 1) {
    *(uint *)(param_2 + 0x30) = 100;
    *(uint *)(param_2 + 4) = 0;
    return;
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 == 4) {
    *(uint *)(param_2 + 0x30) = 100;
  }
  else if ((iVar1 < 0xc) || (iVar1 == 0x6b)) goto LAB_0056d124;
  *(uint *)(param_2 + 4) = 0;
LAB_0056d124:
  if (0.0 < *(float *)(param_2 + 4)) {
    FUN_0056ce10(param_1,param_2);
  }
  fVar2 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  iVar1 = param_1 + 0x158;
  *(float *)(param_1 + 0x2538) = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar3 = FUN_00524770(iVar1);
    if ((*(int *)(iVar3 + 0x24) != 8) && (*(int *)(iVar3 + 0x24) != 7)) {
      FUN_005247c0(iVar1,7,1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"@smiley_die??.wav" + 1);
    }
    FUN_004a0f00(param_1,param_2);
    return;
  }
  FUN_005247c0(iVar1,3,1);
  FUN_004a0f00(param_1,param_2);
  return;
}
