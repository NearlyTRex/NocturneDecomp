// Name: FUN_0042f240
// Address: 0042f240
// Address Range: [[0042f240, 0042f31f]]
// Convention: unknown
// Signature: int FUN_0042f240(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0042f240(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_38 [6];
  uint local_20 [6];
  
  bVar5 = 0;
  iVar1 = FUN_00484180(DAT_00612560);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x27bc) = 0;
  }
  if (*(int *)(param_1 + 0x24fc) == 0) {
    FUN_004087b0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar3 = local_38;
    puVar4 = local_20;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar1 = FUN_004207b0(local_20);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x27bc) = 1;
      FUN_0042e960(param_1);
      if (_DAT_01d39d34 != 0) {
        iVar2 = FUN_00483e60(DAT_00612560);
        if (iVar2 == 0) {
          FUN_005254b0(param_1 + 0x158,param_1);
          (**(code **)(*(int *)(param_1 + 0x154) + 0x58))(param_1);
        }
      }
    }
    FUN_004087f0(param_1);
    return iVar1;
  }
  return 0;
}
