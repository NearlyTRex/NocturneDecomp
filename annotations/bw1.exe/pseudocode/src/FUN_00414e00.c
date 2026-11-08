// Name: FUN_00414e00
// Address: 00414e00
// Address Range: [[00414e00, 00414f20]]
// Convention: unknown
// Signature: int FUN_00414e00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00414e00(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar6 = 0;
  if (*(int *)(param_1 + 0x24fc) != 0) {
    return 0;
  }
  FUN_004087b0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar4 = auStack_38;
  puVar5 = auStack_20;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  iVar3 = FUN_004207b0(auStack_20);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x27bc) = 1;
    if (*(int *)(param_1 + 0xc3e4) == 0) {
      FUN_0042e960(param_1);
    }
    else {
      iVar2 = param_1 + 0xc3ec;
      FUN_00523290(iVar2,0,param_1 + 0x158,0);
      uVar1 = FUN_00468900(param_1 + 0xc268,0,0);
      FUN_005232d0(iVar2,1,uVar1);
      FUN_005237e0(iVar2,*(float *)(param_1 + 0xc3e8) / 0x40800000);
    }
    if (_DAT_01d39d34 != 0) {
      iVar2 = FUN_00483e60(DAT_00612560);
      if (iVar2 == 0) {
        FUN_005254b0(param_1 + 0x158,param_1);
        (**(code **)(*(int *)(param_1 + 0x154) + 0x58))(param_1);
      }
    }
  }
  FUN_004087f0(param_1);
  return iVar3;
}
