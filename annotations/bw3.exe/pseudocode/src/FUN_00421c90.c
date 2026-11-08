// Name: FUN_00421c90
// Address: 00421c90
// Address Range: [[00421c90, 0042206b]]
// Convention: unknown
// Signature: void FUN_00421c90(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00421c90(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  float afStackY_106c [1005];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float fStack_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  double local_48;
  byte local_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar8 = 0;
  local_a8 = *(float *)(param_1 + 0x1be68) + *(float *)(param_1 + 0x1be74);
  local_14 = 1.0 / _DAT_005dcbc8;
  local_a4 = *(float *)(param_1 + 0x1be6c) + *(float *)(param_1 + 0x1be78);
  local_a0 = *(float *)(param_1 + 0x1be70) + *(float *)(param_1 + 0x1be7c);
  local_78 = local_a8 * _DAT_005b783d;
  local_74 = local_a4 * _DAT_005b783d;
  local_70 = local_a0 * _DAT_005b783d;
  local_9c = *(float *)(param_1 + 0x20) + local_78;
  fStack_98 = *(float *)(param_1 + 0x24) + local_74;
  local_94 = *(float *)(param_1 + 0x28) + local_70;
  local_90 = local_a8;
  local_8c = local_a4;
  local_88 = local_a0;
  local_60 = local_9c;
  local_5c = fStack_98;
  local_58 = local_94;
  local_54 = local_78;
  local_50 = local_74;
  local_4c = local_70;
  local_48 = (double)FUN_005a3600((double)(local_9c * local_14));
  fVar9 = (float10)local_48;
  fVar10 = (float10)local_94 * (float10)local_14;
  FUN_005a3120();
  local_38 = (int)ROUND(fVar9);
  dVar12 = (double)FUN_005a3600((double)fVar10);
  fVar11 = (float10)dVar12;
  local_14 = (float)local_38;
  fVar10 = (float10)local_38 * (float10)_DAT_005dcbc8 - (float10)*(float *)(param_1 + 0x20);
  fVar9 = (float10)_DAT_005dcbc8 * (float10)_DAT_005b7841 * (float10)_DAT_005b7849;
  local_48 = dVar12;
  iVar1 = FUN_005a3120();
  local_3c = (int)ROUND(fVar11);
  *(float *)(iVar1 + 0x1be88) = (float)(fVar10 - fVar9);
  local_14 = (float)local_3c;
  *(float *)(param_1 + 0x1be8c) =
       (float)(((float10)local_3c * (float10)_DAT_005dcbc8 - (float10)*(float *)(param_1 + 0x28)) -
              fVar9);
  if ((local_38 != *(int *)(param_1 + 0x1be80)) || (local_3c != *(int *)(param_1 + 0x1be84))) {
    iVar1 = *(int *)(param_1 + 0x1be80) - local_38;
    local_20 = iVar1;
    local_24 = *(int *)(param_1 + 0x1be84) - local_3c;
    local_28 = iVar1 + 0xb;
    local_2c = local_24 + 0xb;
    puVar5 = (uint *)(param_1 + 0x135dc);
    puVar7 = &DAT_007e1a54;
    for (iVar3 = 0x90; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(byte *)puVar7 = *(byte *)puVar5;
      puVar5 = (uint *)((int)puVar5 + (uint)bVar8 * -2 + 1);
      puVar7 = (uint *)((int)puVar7 + (uint)bVar8 * -2 + 1);
    }
    puVar5 = (uint *)(param_1 + 0x24 + (uint)bVar8 * -8);
    local_6c = *(float *)(param_1 + 0x20);
    *(uint *)((int)&stack0xffffff98 + (uint)bVar8 * 0xfffffffe * 4) = *puVar5;
    *(uint *)((int)&stack0xffffff9c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         puVar5[(uint)bVar8 * -2 + 1];
    local_18 = param_1;
    local_6c = local_6c + *(float *)(param_1 + 0x1be88);
    local_64 = local_64 + *(float *)(param_1 + 0x1be8c);
    local_84 = local_6c;
    *(uint *)((int)&stack0xffffff80 + (uint)bVar8 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffff98 + (uint)bVar8 * 0xfffffffe * 4);
    *(uint *)((int)&stack0xffffff84 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffff9c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    local_34 = local_24 << 2;
    local_1c = 0;
    local_30 = iVar1 * -0x30;
    do {
      iVar4 = 0;
      local_84 = (float)local_1c * _DAT_005dcbc8 + local_6c;
      iVar6 = local_30 - local_34;
      iVar1 = local_18;
      iVar3 = local_18;
      do {
        local_7c = (float)iVar4 * _DAT_005dcbc8 + local_64;
        if ((((local_1c < local_20) || (local_28 < local_1c)) || (iVar4 < local_24)) ||
           (local_2c < iVar4)) {
          local_14 = (float)iVar4;
          fVar2 = (float)FUN_00474940(&DAT_0203b37c,&stack0xffffff7c,local_40,0);
          *(float *)(iVar1 + 0x135dc) = fVar2 - *(float *)(param_1 + 0x24);
        }
        else {
          *(uint *)(iVar3 + 0x135dc) = *(uint *)((int)&DAT_007e1a54 + iVar6);
        }
        iVar3 = iVar3 + 4;
        iVar6 = iVar6 + 4;
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar4 < 0xc);
      local_30 = local_30 + 0x30;
      local_1c = local_1c + 1;
      local_18 = local_18 + 0x30;
    } while (local_1c < 0xc);
    *(int *)(param_1 + 0x1be80) = local_38;
    *(int *)(param_1 + 0x1be84) = local_3c;
  }
  return;
}
