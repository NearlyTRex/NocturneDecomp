// Name: FUN_00520c10
// Address: 00520c10
// Address Range: [[00520c10, 00521069]]
// Convention: unknown
// Signature: void FUN_00520c10(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00520c10(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  float afStackY_108c [1009];
  byte auStack_b0 [4];
  float fStack_ac;
  float fStack_a4;
  float afStack_a0 [4];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_40;
  float fStack_34;
  float local_28;
  float local_24;
  float fStack_20;
  int local_18;
  float fStack_14;
  
  bVar6 = 0;
  local_18 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_24 = 0.25;
  local_28 = 0.7853982;
  FUN_005bfb70(param_1 + 0xc1d8,0,0x30);
  iVar5 = local_18;
  if ((*(int *)(param_1 + 0x1ffa8) != 0) && (*(int *)(param_1 + 0x1ffa8) == 1)) {
    iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    local_5c = *(float *)(param_1 + 0x20) - *(float *)(iVar1 + 0x20);
    local_58 = *(float *)(param_1 + 0x24) - *(float *)(iVar1 + 0x24);
    local_54 = *(float *)(param_1 + 0x28) - *(float *)(iVar1 + 0x28);
    afStack_a0[2] = local_5c;
    afStack_a0[(uint)bVar6 * -2 + 3] = afStack_a0[(uint)bVar6 * -2 + 0x12];
    afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
    local_50 = *(float *)(iVar5 + 0x20) - *(float *)(param_1 + 0x20);
    local_4c = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24);
    local_48 = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28);
    local_68 = local_50;
    afStack_a0[(uint)bVar6 * -2 + 0xf] = afStack_a0[(uint)bVar6 * -2 + 0x15];
    afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
         afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
    if (afStack_a0 + 2 != afStack_a0 + 0xe) {
      afStack_a0[2] = local_68;
      afStack_a0[3] = local_64;
      local_90 = local_60;
    }
    iVar5 = _DAT_01d06ab4 * 4;
    *(uint *)(param_1 + 0x2508) = 0;
    if (SQRT(local_90 * local_90 + afStack_a0[2] * afStack_a0[2] + afStack_a0[3] * afStack_a0[3]) <=
        (float)_DAT_005ea296) {
      iVar5 = *(int *)(iVar5 + 0x1d06aa4);
      iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x148))(iVar5);
      if ((iVar5 == 0) && (uVar4 = FUN_00434c60(param_1,param_2), uVar4 != 0)) {
        if (uVar4 < 2) {
          *(uint *)(param_1 + 0xc1d8) = 1;
        }
        else if (uVar4 == 2) {
          *(uint *)(param_1 + 0xc1e0) = 1;
          *(uint *)(param_1 + 0xc1d8) = 1;
        }
      }
    }
    else {
      iVar5 = *(int *)(iVar5 + 0x1d06aa4);
      uVar3 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xc4))(iVar5);
      iVar5 = FUN_005349a0(uVar3,param_1 + 0x20,auStack_b0,*(uint *)(param_1 + 0x6c));
      if (iVar5 != 0) {
        fStack_14 = (float)FUN_0040cd60(fStack_ac - *(float *)(param_1 + 0x34));
        fVar2 = fStack_14 * _DAT_005ea29e * (float)_DAT_005ea2a6;
        fStack_34 = -local_24;
        *(float *)(param_1 + 0xc200) = fVar2;
        if (fVar2 < fStack_34) {
          *(float *)(param_1 + 0xc200) = fStack_34;
        }
        if (local_24 < *(float *)(param_1 + 0xc200)) {
          *(float *)(param_1 + 0xc200) = local_24;
        }
        *(uint *)(param_1 + 0xc1d8) = 1;
      }
      *(uint *)(param_1 + 0x2fd0) = 0;
    }
    if (*(float *)(param_1 + 0x2508) <= 0.0) {
      if (*(float *)(param_1 + 0x2508) < 0.0) {
        *(uint *)(param_1 + 0x2508) = 0;
        *(float *)(param_1 + 0xc200) = -local_24;
      }
    }
    else {
      *(uint *)(param_1 + 0x2508) = 0;
      *(float *)(param_1 + 0xc200) = local_24;
    }
    fStack_a4 = *(float *)(local_18 + 0x20) - *(float *)(param_1 + 0x20);
    afStack_a0[0] = *(float *)(local_18 + 0x24) - *(float *)(param_1 + 0x24);
    afStack_a0[1] = *(float *)(local_18 + 0x28) - *(float *)(param_1 + 0x28);
    fStack_8c = fStack_a4;
    afStack_a0[(uint)bVar6 * -2 + 6] = afStack_a0[(uint)bVar6 * -2];
    afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    if (afStack_a0 + 2 != afStack_a0 + 5) {
      afStack_a0[2] = fStack_8c;
      afStack_a0[3] = fStack_88;
      local_90 = fStack_84;
    }
    FUN_005a7520(afStack_a0 + 2);
    fStack_80 = fStack_74;
    afStack_a0[(uint)bVar6 * -2 + 9] = afStack_a0[(uint)bVar6 * -2 + 0xc];
    afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    if (afStack_a0 + 2 != afStack_a0 + 8) {
      afStack_a0[2] = fStack_80;
      afStack_a0[3] = fStack_7c;
      local_90 = fStack_78;
    }
    fStack_40 = (float)FUN_0040cd60(afStack_a0[3] - *(float *)(param_1 + 0x34));
    if (local_28 < fStack_40) {
      fStack_40 = local_28;
    }
    if (fStack_40 < -local_28) {
      fStack_40 = -local_28;
    }
    fStack_20 = fStack_40 - *(float *)(param_1 + 0x23054);
    if (param_2 * _DAT_005ea2ae < fStack_20) {
      fStack_20 = param_2 * _DAT_005ea2ae;
    }
    if (fStack_20 < param_2 * _DAT_005ea2b2) {
      fStack_20 = param_2 * _DAT_005ea2b2;
    }
    *(float *)(param_1 + 0x23054) = *(float *)(param_1 + 0x23054) + fStack_20;
  }
  return;
}
