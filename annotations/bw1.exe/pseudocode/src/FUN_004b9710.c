// Name: FUN_004b9710
// Address: 004b9710
// Address Range: [[004b9710, 004b9801]]
// Convention: unknown
// Signature: void FUN_004b9710(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b9710(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  FUN_005ad770(param_1,param_2);
  if (*(int *)(param_1 + 0x578) == 0) {
    if (*(int *)(param_1 + 0x57c) != 0) {
      FUN_0057d9d0(0x02C82A60,*(int *)(param_1 + 0x57c));
      *(uint *)(param_1 + 0x57c) = 0;
    }
  }
  else {
    iVar2 = FUN_0057d9c0(0x02C82A60,*(uint *)(param_1 + 0x57c));
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"fl-throw.wav");
      *(uint *)(param_1 + 0x57c) = uVar3;
    }
    param_2 = *(float *)(param_1 + 0x584) - param_2;
    *(float *)(param_1 + 0x584) = param_2;
    if (param_2 < 0.0) {
      fVar1 = 1.0 / _DAT_006005c0;
      iVar2 = *(int *)(param_1 + 0x568) + -1;
      *(int *)(param_1 + 0x568) = iVar2;
      *(float *)(param_1 + 0x584) = fVar1 + param_2;
      if (iVar2 < 0) {
        *(uint *)(param_1 + 0x568) = 0;
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 0x578);
  *(uint *)(param_1 + 0x578) = 0;
  *(uint *)(param_1 + 0x580) = uVar3;
  return;
}
