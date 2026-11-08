// Name: FUN_00501c60
// Address: 00501c60
// Address Range: [[00501c60, 005020b9]]
// Convention: unknown
// Signature: void FUN_00501c60(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00501c60(int param_1,float param_2)

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
  local_18 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_24 = 0.25;
  local_28 = 0.7853982;
  FUN_005b77c0(param_1 + 0x10a68,0,0x34);
  iVar5 = local_18;
  if ((*(int *)(param_1 + 0x25638) != 0) && (*(int *)(param_1 + 0x25638) == 1)) {
    iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
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
    iVar5 = _DAT_01cedef4 * 4;
    *(uint *)(param_1 + 0x2578) = 0;
    if (SQRT(local_90 * local_90 + afStack_a0[2] * afStack_a0[2] + afStack_a0[3] * afStack_a0[3]) <=
        (float)_DAT_005df249) {
      iVar5 = *(int *)(iVar5 + 0x1cedee4);
      iVar5 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x154))(iVar5);
      if ((iVar5 == 0) && (uVar4 = FUN_0042abe0(param_1,param_2), uVar4 != 0)) {
        if (uVar4 < 2) {
          *(uint *)(param_1 + 0x10a68) = 1;
        }
        else if (uVar4 == 2) {
          *(uint *)(param_1 + 0x10a70) = 1;
          *(uint *)(param_1 + 0x10a68) = 1;
        }
      }
    }
    else {
      iVar5 = *(int *)(iVar5 + 0x1cedee4);
      uVar3 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0xcc))(iVar5);
      iVar5 = FUN_00513650(uVar3,param_1 + 0x20,auStack_b0,*(uint *)(param_1 + 0x6c));
      if (iVar5 != 0) {
        fStack_14 = (float)FUN_0040d0c0(fStack_ac - *(float *)(param_1 + 0x34));
        fVar2 = fStack_14 * _DAT_005df251 * (float)_DAT_005df259;
        fStack_34 = -local_24;
        *(float *)(param_1 + 0x10a90) = fVar2;
        if (fVar2 < fStack_34) {
          *(float *)(param_1 + 0x10a90) = fStack_34;
        }
        if (local_24 < *(float *)(param_1 + 0x10a90)) {
          *(float *)(param_1 + 0x10a90) = local_24;
        }
        *(uint *)(param_1 + 0x10a68) = 1;
      }
      *(uint *)(param_1 + 0x303c) = 0;
    }
    if (*(float *)(param_1 + 0x2578) <= 0.0) {
      if (*(float *)(param_1 + 0x2578) < 0.0) {
        *(uint *)(param_1 + 0x2578) = 0;
        *(float *)(param_1 + 0x10a90) = -local_24;
      }
    }
    else {
      *(uint *)(param_1 + 0x2578) = 0;
      *(float *)(param_1 + 0x10a90) = local_24;
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
    FUN_005838f0(afStack_a0 + 2);
    fStack_80 = fStack_74;
    afStack_a0[(uint)bVar6 * -2 + 9] = afStack_a0[(uint)bVar6 * -2 + 0xc];
    afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    if (afStack_a0 + 2 != afStack_a0 + 8) {
      afStack_a0[2] = fStack_80;
      afStack_a0[3] = fStack_7c;
      local_90 = fStack_78;
    }
    fStack_40 = (float)FUN_0040d0c0(afStack_a0[3] - *(float *)(param_1 + 0x34));
    if (local_28 < fStack_40) {
      fStack_40 = local_28;
    }
    if (fStack_40 < -local_28) {
      fStack_40 = -local_28;
    }
    fStack_20 = fStack_40 - *(float *)(param_1 + 0x285f8);
    if (param_2 * _DAT_005df261 < fStack_20) {
      fStack_20 = param_2 * _DAT_005df261;
    }
    if (fStack_20 < param_2 * _DAT_005df265) {
      fStack_20 = param_2 * _DAT_005df265;
    }
    *(float *)(param_1 + 0x285f8) = *(float *)(param_1 + 0x285f8) + fStack_20;
  }
  return;
}
