// Name: FUN_0045b510
// Address: 0045b510
// Address Range: [[0045b510, 0045bb47]]
// Convention: unknown
// Signature: void FUN_0045b510(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045b510(int param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1100 [991];
  float *pfVar5;
  uint *puVar6;
  float local_15c;
  float local_158;
  float fStack_150;
  byte auStack_14c [28];
  float fStack_130;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114 [4];
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4 [3];
  float local_e8;
  uint local_e4;
  uint local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  uint local_d0;
  float local_c4;
  float local_b8 [4];
  float afStack_a8 [4];
  float local_98;
  float local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  float afStack_84 [4];
  float local_74;
  float local_70;
  float afStack_6c [4];
  uint local_5c;
  uint local_58;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x25698) == 0) {
    param_3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x25698) + 0x43c);
    if ((iVar3 == 0) || (iVar3 == 5)) {
      param_3 = 1;
    }
  }
  local_158 = 0.0;
  if (param_3 != 0) {
    local_1c = 0;
    for (local_20 = 0; local_20 < *(int *)(0x01E661B8 + 0x14f0a8); local_20 = local_20 + 1) {
      iVar3 = *(int *)(0x01E661B8 + local_1c + 0x14f0ac);
      FUN_00408de0(param_1,iVar3 + 0x20);
      local_100 = local_70;
      local_114[(uint)bVar4 * -2 + 6] = afStack_6c[(uint)bVar4 * -2];
      local_114[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (((ABS(local_100) <= (float)_DAT_005d05ff) && (ABS(local_fc) <= (float)_DAT_005d0607)) &&
         ((0.0 <= local_f8 &&
          ((((int)local_f8 < 0x40c00001 && (iVar3 != param_1)) &&
           (iVar2 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3), iVar2 == 0)))))) {
        FUN_00537fa0(auStack_14c);
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x44))(iVar3,auStack_14c);
        if ((iVar3 == 2) &&
           (fStack_150 = 1.0 - ((local_f8 - fStack_130) + (float)_DAT_005d060f) *
                               (float)_DAT_005d05f7, local_158 <= fStack_150)) {
          if (fStack_150 < 0.0) {
            fStack_150 = 0.0;
          }
          local_158 = fStack_150;
        }
      }
      local_1c = local_1c + 4;
    }
    FUN_00537e00(0x01E661B8);
    FUN_00537e30(0x01E661B8,param_1);
    local_28 = 1.5;
    local_24 = 3.5;
    local_b8[0] = 0.0;
    local_b8[1] = 0.0;
    local_b8[2] = 3.5;
    FUN_00408cf0(param_1,local_114 + 0x17);
    local_4c = local_b8[3];
    afStack_6c[(uint)bVar4 * -2 + 9] = afStack_a8[(uint)bVar4 * -2];
    afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (afStack_84 + 2 != afStack_6c + 8) {
      afStack_84[2] = local_4c;
      afStack_84[3] = local_48;
      local_74 = local_44;
    }
    FUN_005469a0(param_1 + 0x2b4,_DAT_01b4d25c);
    pfVar5 = local_114 + 8;
    local_f4[0] = (float)local_d0;
    local_114[(uint)bVar4 * -2 + 9] = local_114[(uint)bVar4 * -2 + 0x12];
    local_114[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         local_114[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
    FUN_00408d70(param_1,pfVar5);
    local_118 = local_40;
    local_114[(uint)bVar4 * -2] = afStack_6c[(uint)bVar4 * -2 + 0xc];
    local_114[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    if (&local_124 != &local_118) {
      local_124 = local_118;
      local_120 = local_114[0];
      local_11c = local_114[1];
    }
    local_d8 = local_120 + afStack_84[3];
    local_d4 = local_11c + local_74;
    local_dc = local_124 + afStack_84[2];
    afStack_6c[2] = local_124 + afStack_84[2];
    afStack_6c[(uint)bVar4 * -2 + 3] = local_114[(uint)bVar4 * -2 + 0xf];
    afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         local_114[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
    if (afStack_a8 + 5 != afStack_6c + 2) {
      local_94 = afStack_6c[2];
      local_90 = afStack_6c[3];
      local_8c = local_5c;
    }
    local_18 = (float)FUN_00535ee0(0x01E661B8,&local_124,afStack_a8 + 5);
    if (((0.0 <= local_18) && (local_18 < 1.0)) &&
       (fVar1 = 1.0 - (local_18 * local_24 - local_28) / (local_24 - local_28), local_158 < fVar1))
    {
      local_158 = fVar1;
    }
    FUN_005469a0(param_1 + 0x2b4,_DAT_01b4d260);
    puVar6 = &local_88;
    local_88 = local_58;
    afStack_84[(uint)bVar4 * -2] = afStack_6c[(uint)bVar4 * -2 + 6];
    afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    FUN_00408d70(param_1,puVar6);
    afStack_a8[2] = local_c4;
    afStack_a8[(uint)bVar4 * -2 + 3] = local_114[(uint)bVar4 * -2 + 0x15];
    afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         local_114[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
    if (&local_124 != afStack_a8 + 2) {
      local_124 = afStack_a8[2];
      local_120 = afStack_a8[3];
      local_11c = local_98;
    }
    local_114[3] = local_120 + afStack_84[3];
    local_104 = local_11c + local_74;
    local_114[2] = local_124 + afStack_84[2];
    local_e8 = local_124 + afStack_84[2];
    local_114[(uint)bVar4 * -2 + 0xc] = local_114[(uint)bVar4 * -2 + 3];
    local_114[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
         local_114[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    if (afStack_a8 + 5 != local_114 + 0xb) {
      local_94 = local_e8;
      local_90 = local_e4;
      local_8c = local_e0;
    }
    local_18 = (float)FUN_00535ee0(0x01E661B8,&local_124,afStack_a8 + 5);
    if (((0.0 <= local_18) && (local_18 < 1.0)) &&
       (fVar1 = 1.0 - (local_18 * local_24 - local_28) / (local_24 - local_28), local_158 < fVar1))
    {
      local_158 = fVar1;
    }
    FUN_00537e00(0x01E661B8);
  }
  if (1.0 < local_158) {
    local_158 = 1.0;
  }
  local_15c = local_158 - *(float *)(param_1 + 0x256f4);
  if (0.0 <= local_15c) {
    if ((0.0 < local_15c) && (param_2 / _DAT_005f512c < local_15c)) {
      local_15c = param_2 / _DAT_005f512c;
    }
  }
  else {
    fVar1 = -param_2 * (1.0 / _DAT_005f5130);
    if (local_15c < fVar1) {
      local_15c = fVar1;
    }
  }
  *(float *)(param_1 + 0x256f4) = *(float *)(param_1 + 0x256f4) + local_15c;
  return;
}
