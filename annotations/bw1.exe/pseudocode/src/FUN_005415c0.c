// Name: FUN_005415c0
// Address: 005415c0
// Address Range: [[005415c0, 00541ae6]]
// Convention: unknown
// Signature: void FUN_005415c0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005415c0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float afStackY_109c [1013];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a4;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  byte auStack_54 [4];
  float fStack_50;
  float local_48;
  float afStack_44 [2];
  float local_3c [2];
  float fStack_34;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  float local_14;
  
  bVar3 = 0;
  local_24 = 0.25;
  local_1c = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_28 = 0.7853982;
  if (*(int *)(param_1 + 0x1ffa8) == 0) {
    return;
  }
  FUN_005bfb70(param_1 + 0xc1d8,0,0x30);
  iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_60 = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x20);
  local_5c = *(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x24);
  local_58 = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x28);
  local_9c = local_60;
  (&stack0xffffff68)[(uint)bVar3 * -2] = afStack_44[(uint)bVar3 * -2 + -6];
  (&stack0xffffff68)[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       *(float *)(auStack_54 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -4);
  local_2c = 0;
  if ((((*(int *)(param_1 + 0x1ffa8) == 2) || (*(int *)(param_1 + 0x1ffa8) == 3)) &&
      (*(int *)(param_1 + 0x1fe20) != 0)) && (0 < *(int *)(*(int *)(param_1 + 0x1fe20) + 0x568))) {
    local_3c[0] = 9999.9;
    iVar2 = FUN_004ec350(param_1,afStack_44 + 2);
    if ((iVar2 != 0) && ((int)local_3c[0] < 0x41f00000)) {
      local_1c = iVar2;
      local_2c = 1;
    }
  }
  if (local_2c != *(int *)(param_1 + 0x1ffac)) {
    *(uint *)(param_1 + 0xc1f0) = 1;
  }
  local_6c = *(float *)(local_1c + 0x20) - *(float *)(param_1 + 0x20);
  local_68 = *(float *)(local_1c + 0x24) - *(float *)(param_1 + 0x24);
  local_64 = *(float *)(local_1c + 0x28) - *(float *)(param_1 + 0x28);
  local_b4 = local_6c;
  (&stack0xffffff50)[(uint)bVar3 * -2] = (&stack0xffffff68)[(uint)bVar3 * 0xfffffffe + 0xc];
  (&stack0xffffff50)[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -8];
  if (&stack0xffffff64 != &stack0xffffff4c) {
    local_9c = local_b4;
    local_98 = local_b0;
    local_94 = local_ac;
  }
  local_b8 = SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98);
  if (*(int *)(param_1 + 0x1ffa8) == 3) {
    local_b8 = 0.0;
  }
  if (*(int *)(param_1 + 0x1ffc0) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x1ffc0) + 0x2e0) == 8) {
      if (local_b8 < (float)_DAT_005ede6f) {
        iVar2 = FUN_00524770(param_1 + 0x158);
        if ((*(int *)(iVar2 + 0x24) == 7) && (*(int *)(param_1 + 0x1ffac) != 0)) {
          *(uint *)(param_1 + 0xc1e4) = 1;
        }
        goto LAB_005418bc;
      }
    }
    else if (local_b8 < (float)_DAT_005ede5f) {
      if ((*(int *)(param_1 + 0x1ffac) != 0) && (local_2c != 0)) {
        if (((float)_DAT_005ede67 < *(float *)(param_1 + 0x2c9c)) &&
           (*(int *)(param_1 + 0x1ffd4) != 0)) {
          *(uint *)(param_1 + 0xc1e4) = 1;
        }
        FUN_0042d540(param_1,local_1c + 0x20);
      }
      *(uint *)(param_1 + 0xc1e0) = 0;
      *(uint *)(param_1 + 0xc1d8) = 0;
      goto LAB_005418bc;
    }
    iVar2 = (**(code **)(*(int *)(local_1c + 0x154) + 0xc4))(local_1c);
    if (iVar2 == 0) {
      iVar2 = FUN_005351f0(local_1c + 0x20);
    }
    iVar2 = FUN_005349a0(iVar2,param_1 + 0x20,auStack_54,*(uint *)(param_1 + 0x6c));
    if (iVar2 != 0) {
      local_14 = (float)FUN_0040cd60(fStack_50 - *(float *)(param_1 + 0x34));
      fVar1 = local_14 * _DAT_005ede77 * (float)_DAT_005ede7f;
      fStack_34 = -local_24;
      *(float *)(param_1 + 0xc200) = fVar1;
      if (fVar1 < fStack_34) {
        *(float *)(param_1 + 0xc200) = fStack_34;
      }
      if (local_24 < *(float *)(param_1 + 0xc200)) {
        *(float *)(param_1 + 0xc200) = local_24;
      }
      if ((float)_DAT_005ede87 <= local_b8) {
        *(uint *)(param_1 + 0xc1e0) = 1;
      }
      *(uint *)(param_1 + 0xc1d8) = 1;
    }
  }
LAB_005418bc:
  local_84 = *(float *)(local_1c + 0x20) - *(float *)(param_1 + 0x20);
  local_80 = *(float *)(local_1c + 0x24) - *(float *)(param_1 + 0x24);
  local_7c = *(float *)(local_1c + 0x28) - *(float *)(param_1 + 0x28);
  local_90 = local_84;
  (&stack0xffffff68)[(uint)bVar3 * 0xfffffffe + 3] =
       (&stack0xffffff68)[(uint)bVar3 * 0xfffffffe + 6];
  (&stack0xffffff68)[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 4] =
       (&stack0xffffff68)[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 7];
  if (&stack0xffffff64 != &stack0xffffff70) {
    local_9c = local_90;
    local_98 = local_8c;
    local_94 = local_88;
  }
  FUN_005a7520(&stack0xffffff64);
  local_78 = local_48;
  (&stack0xffffff68)[(uint)bVar3 * 0xfffffffe + 9] = afStack_44[(uint)bVar3 * -2];
  (&stack0xffffff68)[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 10] =
       afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  if (&stack0xffffff64 != &stack0xffffff88) {
    local_9c = local_78;
    local_98 = local_74;
    local_94 = local_70;
  }
  local_a4 = (float)FUN_0040cd60(local_98 - *(float *)(param_1 + 0x34));
  if (local_28 < local_a4) {
    local_a4 = local_28;
  }
  if (local_a4 < -local_28) {
    local_a4 = -local_28;
  }
  local_20 = local_a4 - *(float *)(param_1 + 0x1ffb4);
  if (param_2 * _DAT_005ede8f < local_20) {
    local_20 = param_2 * _DAT_005ede8f;
  }
  if (local_20 < param_2 * _DAT_005ede93) {
    local_20 = param_2 * _DAT_005ede93;
  }
  *(float *)(param_1 + 0x1ffb4) = *(float *)(param_1 + 0x1ffb4) + local_20;
  return;
}
