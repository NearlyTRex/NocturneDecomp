// Name: FUN_00521990
// Address: 00521990
// Address Range: [[00521990, 00521a54]]
// Convention: unknown
// Signature: void FUN_00521990(int param_1,int param_2)

#include "nocturne.h"

void FUN_00521990(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  FUN_00521810(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_00524770(param_1 + 0x158);
    if ((*(int *)(iVar2 + 0x24) != 7) && (*(int *)(iVar2 + 0x24) != 6)) {
      FUN_005247c0(param_1 + 0x158,6,1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
    }
  }
  iVar2 = FUN_0057d9c0(0x02C82A60,*(uint *)(param_1 + 0xc1d8));
  if (iVar2 != 0) {
    FUN_004319e0(param_1,param_2);
    return;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"cow?.wav");
  *(uint *)(param_1 + 0xc1d8) = uVar3;
  FUN_004319e0(param_1,param_2);
  return;
}
