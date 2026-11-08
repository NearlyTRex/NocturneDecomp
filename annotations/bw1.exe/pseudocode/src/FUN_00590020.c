// Name: FUN_00590020
// Address: 00590020
// Address Range: [[00590020, 00590683]]
// Convention: unknown
// Signature: void FUN_00590020(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00590020(int param_1,float param_2,int param_3)

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
  if ((*(int *)(param_1 + 0x20004) == 0) || (*(int *)(*(int *)(param_1 + 0x20004) + 0x2e0) != 0)) {
    param_3 = 0;
  }
  local_154 = 0.0;
  if (param_3 != 0) {
    local_1c = 0;
    for (local_20 = 0; local_20 < *(int *)(0x01E82168 + 0x14f0a8); local_20 = local_20 + 1) {
      iVar3 = *(int *)(0x01E82168 + local_1c + 0x14f0ac);
      FUN_00408bb0(param_1,iVar3 + 0x20);
      local_7c = local_10c[3];
      local_a8[(uint)bVar4 * -2 + 0xc] = afStack_fc[(uint)bVar4 * -2];
      local_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
           afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (((ABS(local_7c) <= (float)_DAT_005f6fc1) && (ABS(local_78) <= (float)_DAT_005f6fc9)) &&
         ((0.0 <= local_74 &&
          ((((int)local_74 < 0x40c00001 && (iVar3 != param_1)) &&
           (iVar2 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3), iVar2 == 0)))))) {
        FUN_005593c0(auStack_14c);
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x3c))(iVar3,auStack_14c);
        if ((iVar3 == 2) &&
           (fStack_150 = 1.0 - ((local_74 - fStack_130) + (float)_DAT_005f6fd1) *
                               (float)_DAT_005f6fb9, local_154 <= fStack_150)) {
          if (fStack_150 < 0.0) {
            fStack_150 = 0.0;
          }
          local_154 = fStack_150;
        }
      }
      local_1c = local_1c + 4;
    }
    FUN_00559220(0x01E82168);
    FUN_00559250(0x01E82168,param_1);
    local_10c[0] = 0.0;
    local_10c[1] = 0.0;
    local_24 = 3.5;
    local_28 = 1.5;
    local_10c[2] = 3.5;
    FUN_00408ac0(param_1,afStack_120 + 5);
    local_40 = local_58;
    afStack_54[(uint)bVar4 * -2 + 6] = afStack_54[(uint)bVar4 * -2];
    afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (afStack_fc + 0x11 != afStack_54 + 5) {
      local_b8 = local_40;
      local_b4 = local_3c;
      local_b0 = local_38;
    }
    FUN_00569040(param_1 + 0x158,_DAT_02c83604);
    local_a8[2] = (float)local_c4;
    local_a8[(uint)bVar4 * -2 + 3] = afStack_fc[(uint)bVar4 * -2 + 0xf];
    local_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
    FUN_00408b40(param_1,local_a8 + 2);
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
    local_18 = (float)FUN_00557300(0x01E82168,local_a8 + 0xe,&local_64);
    if (((0.0 <= local_18) && (local_18 < 1.0)) &&
       (fVar1 = 1.0 - (local_18 * local_24 - local_28) / (local_24 - local_28), local_154 < fVar1))
    {
      local_154 = fVar1;
    }
    FUN_00569040(param_1 + 0x158,_DAT_02c83608);
    pfVar5 = afStack_fc + 8;
    local_dc[0] = (float)local_d0;
    afStack_fc[(uint)bVar4 * -2 + 9] = afStack_fc[(uint)bVar4 * -2 + 0xc];
    afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    FUN_00408b40(param_1,pfVar5);
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
    local_18 = (float)FUN_00557300(0x01E82168,local_a8 + 0xe,&local_64);
    if (((0.0 <= local_18) && (local_18 < 1.0)) &&
       (fVar1 = 1.0 - (local_18 * local_24 - local_28) / (local_24 - local_28), local_154 < fVar1))
    {
      local_154 = fVar1;
    }
    FUN_00559220(0x01E82168);
  }
  if (1.0 < local_154) {
    local_154 = 1.0;
  }
  local_15c = local_154 - *(float *)(param_1 + 0x20060);
  if (0.0 <= local_15c) {
    if ((0.0 < local_15c) && (param_2 / _DAT_0060607c < local_15c)) {
      local_15c = param_2 / _DAT_0060607c;
    }
  }
  else {
    fVar1 = -param_2 * (1.0 / _DAT_00606080);
    if (local_15c < fVar1) {
      local_15c = fVar1;
    }
  }
  *(float *)(param_1 + 0x20060) = *(float *)(param_1 + 0x20060) + local_15c;
  return;
}
