// Name: FUN_0056d3d0
// Address: 0056d3d0
// Address Range: [[0056d3d0, 0056da33]]
// Convention: unknown
// Signature: void FUN_0056d3d0(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056d3d0(int param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float afStackY_110c [994];
  float *pfVar5;
  float local_15c;
  float local_154;
  float fStack_150;
  byte auStack_14c [28];
  float fStack_130;
  float local_124;
  float afStack_120 [5];
  float local_10c [4];
  float afStack_fc [4];
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc [3];
  uint local_d0;
  uint local_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [5];
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  uint local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  uint local_5c;
  float local_58;
  float afStack_54 [4];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar4 = 0;
  if ((*(int *)(param_1 + 0x25698) == 0) || (*(int *)(*(int *)(param_1 + 0x25698) + 0x43c) != 0)) {
    param_3 = 0;
  }
  local_154 = 0.0;
  if (param_3 != 0) {
    local_1c = 0;
    for (local_20 = 0; local_20 < *(int *)(0x01E661B8 + 0x14f0a8); local_20 = local_20 + 1) {
      iVar3 = *(int *)(0x01E661B8 + local_1c + 0x14f0ac);
      FUN_00408de0(param_1,iVar3 + 0x20);
      local_7c = local_10c[3];
      local_a8[(uint)bVar4 * -2 + 0xc] = afStack_fc[(uint)bVar4 * -2];
      local_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
           afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (((ABS(local_7c) <= (float)_DAT_005ebd4d) && (ABS(local_78) <= (float)_DAT_005ebd55)) &&
         ((0.0 <= local_74 &&
          ((((int)local_74 < 0x40c00001 && (iVar3 != param_1)) &&
           (iVar2 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3), iVar2 == 0)))))) {
        FUN_00537fa0(auStack_14c);
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x44))(iVar3,auStack_14c);
        if ((iVar3 == 2) &&
           (fStack_150 = 1.0 - ((local_74 - fStack_130) + (float)_DAT_005ebd5d) *
                               (float)_DAT_005ebd45, local_154 <= fStack_150)) {
          if (fStack_150 < 0.0) {
            fStack_150 = 0.0;
          }
          local_154 = fStack_150;
        }
      }
      local_1c = local_1c + 4;
    }
    FUN_00537e00(0x01E661B8);
    FUN_00537e30(0x01E661B8,param_1);
    local_10c[0] = 0.0;
    local_10c[1] = 0.0;
    local_24 = 3.5;
    local_28 = 1.5;
    local_10c[2] = 3.5;
    FUN_00408cf0(param_1,afStack_120 + 5);
    local_40 = local_58;
    afStack_54[(uint)bVar4 * -2 + 6] = afStack_54[(uint)bVar4 * -2];
    afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (afStack_fc + 0x11 != afStack_54 + 5) {
      local_b8 = local_40;
      local_b4 = local_3c;
      local_b0 = local_38;
    }
    FUN_005469a0(param_1 + 0x2b4,_DAT_0264be34);
    local_a8[2] = (float)local_c4;
    local_a8[(uint)bVar4 * -2 + 3] = afStack_fc[(uint)bVar4 * -2 + 0xf];
    local_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
    FUN_00408d70(param_1,local_a8 + 2);
    local_e8 = afStack_120[2];
    afStack_fc[(uint)bVar4 * -2 + 6] = afStack_120[(uint)bVar4 * -2 + 3];
    afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_120[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    if (local_a8 + 0xe != afStack_fc + 5) {
      local_70 = local_e8;
      local_6c = local_e4;
      local_68 = local_e0;
    }
    local_90 = local_6c + local_b4;
    local_8c = local_68 + local_b0;
    local_94 = local_70 + local_b8;
    local_ac = local_70 + local_b8;
    local_a8[(uint)bVar4 * -2] = local_a8[(uint)bVar4 * -2 + 6];
    local_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    if (&local_64 != &local_ac) {
      local_64 = local_ac;
      local_60 = local_a8[0];
      local_5c = local_a8[1];
    }
    local_18 = (float)FUN_00535ee0(0x01E661B8,local_a8 + 0xe,&local_64);
    if (((0.0 <= local_18) && (local_18 < 1.0)) &&
       (fVar1 = 1.0 - (local_18 * local_24 - local_28) / (local_24 - local_28), local_154 < fVar1))
    {
      local_154 = fVar1;
    }
    FUN_005469a0(param_1 + 0x2b4,_DAT_0264be38);
    pfVar5 = afStack_fc + 8;
    local_dc[0] = (float)local_d0;
    afStack_fc[(uint)bVar4 * -2 + 9] = afStack_fc[(uint)bVar4 * -2 + 0xc];
    afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    FUN_00408d70(param_1,pfVar5);
    afStack_54[2] = local_124;
    afStack_54[(uint)bVar4 * -2 + 3] = afStack_120[(uint)bVar4 * -2];
    afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_120[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (local_a8 + 0xe != afStack_54 + 2) {
      local_70 = afStack_54[2];
      local_6c = afStack_54[3];
      local_68 = local_44;
    }
    afStack_fc[3] = local_6c + local_b4;
    local_ec = local_68 + local_b0;
    afStack_fc[2] = local_70 + local_b8;
    local_88 = local_70 + local_b8;
    local_a8[(uint)bVar4 * -2 + 9] = afStack_fc[(uint)bVar4 * -2 + 3];
    local_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    if (&local_64 != local_a8 + 8) {
      local_64 = local_88;
      local_60 = local_84;
      local_5c = local_80;
    }
    local_18 = (float)FUN_00535ee0(0x01E661B8,local_a8 + 0xe,&local_64);
    if (((0.0 <= local_18) && (local_18 < 1.0)) &&
       (fVar1 = 1.0 - (local_18 * local_24 - local_28) / (local_24 - local_28), local_154 < fVar1))
    {
      local_154 = fVar1;
    }
    FUN_00537e00(0x01E661B8);
  }
  if (1.0 < local_154) {
    local_154 = 1.0;
  }
  local_15c = local_154 - *(float *)(param_1 + 0x256f8);
  if (0.0 <= local_15c) {
    if ((0.0 < local_15c) && (param_2 / _DAT_005fc1cc < local_15c)) {
      local_15c = param_2 / _DAT_005fc1cc;
    }
  }
  else {
    fVar1 = -param_2 * (1.0 / _DAT_005fc1d0);
    if (local_15c < fVar1) {
      local_15c = fVar1;
    }
  }
  *(float *)(param_1 + 0x256f8) = *(float *)(param_1 + 0x256f8) + local_15c;
  return;
}
