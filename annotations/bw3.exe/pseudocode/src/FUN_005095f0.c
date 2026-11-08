// Name: FUN_005095f0
// Address: 005095f0
// Address Range: [[005095f0, 005097fc]]
// Convention: unknown
// Signature: undefined4 FUN_005095f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005095f0(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  uint local_40 [6];
  uint local_28 [6];
  
  bVar8 = 0;
  if (((*(int *)(param_1 + 0x206b8) != -1) || (*(int *)(param_1 + 0x27a8) != 0)) ||
     (*(int *)(param_1 + 0xcdc4) != 0)) {
    if ((*(int *)(param_1 + 0x27a8) != 0) &&
       (iVar4 = FUN_00491aa0(0x01C6E360,"heroCanSee"), iVar4 == 0)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x206ac) == 0) {
      if (0.0 < *(float *)(param_1 + 0x206c0)) {
        if (*(int *)(param_1 + 0x206b8) == 0) {
          fVar9 = ((float10)*(float *)(param_1 + 0x206c0) / (float10)*(float *)(param_1 + 0x206c4))
                  * (float10)_DAT_005cb5d0;
        }
        else {
          fVar9 = ((float10)1 -
                  (float10)*(float *)(param_1 + 0x206c0) / (float10)*(float *)(param_1 + 0x206c4)) *
                  (float10)_DAT_005cb5d8;
        }
        FUN_005a3120();
        *(int *)(param_1 + 0x206b4) = (int)ROUND(fVar9);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x2f08)) {
          fVar1 = (float)_DAT_005cb5e0;
          fVar2 = (float)_DAT_005cb5e8;
          iVar5 = param_1;
          do {
            iVar4 = iVar4 + 1;
            *(float *)(*(int *)(iVar5 + 0x309c) + 0x37b18) =
                 ((float)*(int *)(param_1 + 0x206b4) + fVar2) * fVar1;
            iVar5 = iVar5 + 4;
          } while (iVar4 < *(int *)(param_1 + 0x2f08));
        }
      }
      FUN_004087f0(param_1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
      puVar6 = local_28;
      puVar7 = local_40;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      iVar4 = FUN_0041daf0(local_40);
      uVar3 = DAT_005f2afc;
      if (iVar4 != 0) {
        *(uint *)(param_1 + 0x27bc) = 1;
        FUN_0046d4c0(uVar3,*(uint *)(param_1 + 0x206b4));
        FUN_0046d4b0(DAT_005f2afc,*(int *)(param_1 + 0xcdc4) != 0);
        FUN_0046e120(DAT_005f2afc,1);
        FUN_0054e3a0(param_1 + 0x158,0xffffffff,0x2e7,1,0);
        FUN_0046e4e0(DAT_005f2afc);
        if (_DAT_01d8e40c != 0) {
          FUN_004fcdc0(param_1 + 0x158,param_1);
        }
      }
      FUN_0043fc50(param_1 + 0x2f08,0);
      FUN_00408830(param_1);
      return *(uint *)(param_1 + 0x27bc);
    }
  }
  return 0;
}
