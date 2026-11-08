// Name: FUN_005a5460
// Address: 005a5460
// Address Range: [[005a5460, 005a59e4]]
// Convention: unknown
// Signature: void FUN_005a5460(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a5460(int param_1)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float afStackY_110c [996];
  float *pfVar4;
  byte auStack_160 [4];
  uint uStack_15c;
  uint uStack_158;
  float fStack_154;
  float fStack_150;
  uint uStack_14c;
  float fStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_130;
  int iStack_128;
  float fStack_124;
  float afStack_120 [4];
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint local_f4;
  float fStack_e8;
  float local_dc [3];
  float local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  float afStack_c0 [5];
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  uint uStack_68;
  float local_64;
  float local_60;
  float local_5c;
  uint local_58;
  float local_4c;
  float local_48;
  float local_44;
  float afStack_40 [3];
  float local_34 [3];
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  int iStack_18;
  float local_14;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x10a78) == 0) {
    return;
  }
  local_14 = (float)(param_1 + 0x1134);
  FUN_00591530(&DAT_0265370c,*(int *)(param_1 + 0x1185c) * 0x30 + (int)local_14);
  pfVar4 = afStack_120 + 0x11;
  local_dc[0] = (float)local_58;
  afStack_120[(uint)bVar3 * -2 + 0x12] = afStack_c0[(uint)bVar3 * -2 + 0x1b];
  afStack_120[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x13] =
       afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1c];
  FUN_00408d70(param_1,pfVar4);
  afStack_120[2] = afStack_c0[2];
  afStack_120[(uint)bVar3 * -2 + 3] = afStack_c0[(uint)bVar3 * -2 + 3];
  afStack_120[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  FUN_00591530(&DAT_0265370c,*(int *)(param_1 + 0x11858) * 0x30 + (int)local_14);
  pfVar4 = afStack_c0 + 0x23;
  local_34[0] = (float)local_f4;
  afStack_c0[(uint)bVar3 * -2 + 0x24] = afStack_120[(uint)bVar3 * -2 + 0xc];
  afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x25] =
       afStack_120[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
  FUN_00408d70(param_1,pfVar4);
  fVar1 = afStack_120[2];
  local_ac = local_88;
  afStack_c0[(uint)bVar3 * -2 + 6] = afStack_c0[(uint)bVar3 * -2 + 0xf];
  afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
       afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10];
  local_4c = fVar1 - local_ac;
  local_48 = afStack_120[3] - local_a8;
  local_44 = local_110 - local_a4;
  local_64 = fVar1 - local_ac;
  afStack_c0[(uint)bVar3 * -2 + 0x18] = afStack_c0[(uint)bVar3 * -2 + 0x1e];
  afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19] =
       afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1f];
  local_64 = local_64 * _DAT_005f05d6;
  local_60 = local_60 * _DAT_005f05d6;
  local_5c = local_5c * _DAT_005f05d6;
  local_28 = local_64 + local_ac;
  local_24 = local_60 + local_a8;
  local_20 = local_5c + local_a4;
  local_a0 = local_28;
  afStack_c0[(uint)bVar3 * -2 + 9] = afStack_c0[(uint)bVar3 * -2 + 0x27];
  afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
       afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x28];
  if (afStack_c0 + 0x17 != afStack_c0 + 8) {
    local_64 = local_a0;
    local_60 = local_9c;
    local_5c = local_98;
  }
  FUN_0049d170(0x01C3DEB4,afStack_c0 + 0x17,param_1 + 0x3c);
  FUN_0049d230(0x01C3DEB4,afStack_c0 + 5,0x3fc00000,0,0xffff);
  FUN_0055ae50(0x0264B290,param_1,"shotgun.wav",afStack_120 + 2);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0x5c))
            (*(int *)(param_1 + 0x10a78),afStack_120 + 0x14);
  FUN_00408d70(*(uint *)(param_1 + 0x10a78),afStack_120 + 0x14);
  fStack_70 = (float)uStack_c4;
  afStack_c0[(uint)bVar3 * -2 + 0x15] = afStack_c0[(uint)bVar3 * -2];
  afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x16] =
       afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  if (afStack_120 + 0x14 != afStack_c0 + 0x14) {
    local_d0 = fStack_70;
    uStack_cc = uStack_6c;
    uStack_c8 = uStack_68;
  }
  afStack_40[0] = afStack_120[2];
  afStack_c0[(uint)bVar3 * -2 + 0x21] = afStack_120[(uint)bVar3 * -2 + 3];
  afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x22] =
       afStack_120[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  FUN_00537e00(0x01E661B8);
  FUN_00537eb0(0x01E661B8,1);
  FUN_00537e30(0x01E661B8,param_1);
  local_14 = (float)FUN_00535ee0(0x01E661B8,afStack_c0 + 0x20,afStack_120 + 0x14);
  if ((local_14 < 0.0) || (1.0 < local_14)) {
    FUN_00537e00(0x01E661B8);
    return;
  }
  iStack_18 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),DAT_007bdc94);
  if (iStack_18 != 0) {
    iVar2 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x114))(iStack_18);
    if (0 < iVar2) goto LAB_005a580c;
  }
  if (iStack_18 != 0) {
    FUN_004222d0(auStack_160);
    uStack_15c = 0x41200000;
    uStack_158 = 0x3f800000;
    fStack_10c = *(float *)(0x01E661B8 + 0x14d11c) - *(float *)(0x01E661B8 + 0x14d110);
    fStack_108 = *(float *)(0x01E661B8 + 0x14d120) - *(float *)(0x01E661B8 + 0x14d114);
    fStack_104 = *(float *)(0x01E661B8 + 0x14d124) - *(float *)(0x01E661B8 + 0x14d118);
    fStack_7c = fStack_10c;
    afStack_c0[(uint)bVar3 * -2 + 0x12] = afStack_120[(uint)bVar3 * -2 + 6];
    afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x13] =
         afStack_120[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
    fStack_1c = (float)_DAT_005f05da /
                SQRT(fStack_74 * fStack_74 + fStack_7c * fStack_7c + fStack_78 * fStack_78);
    fStack_94 = fStack_7c * fStack_1c;
    fStack_90 = fStack_78 * fStack_1c;
    fStack_8c = fStack_74 * fStack_1c;
    fStack_124 = fStack_7c * fStack_1c;
    afStack_120[(uint)bVar3 * -2] = afStack_c0[(uint)bVar3 * -2 + 0xc];
    afStack_120[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
    if (&fStack_154 != &fStack_124) {
      fStack_154 = fStack_124;
      fStack_150 = afStack_120[0];
      uStack_14c = afStack_120[1];
    }
    FUN_00408de0(iStack_18,0x01E661B8 + 0x14d138);
    fStack_100 = fStack_e8;
    afStack_120[(uint)bVar3 * -2 + 9] = afStack_120[(uint)bVar3 * -2 + 0xf];
    afStack_120[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
         afStack_120[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10];
    if (&fStack_144 != afStack_120 + 8) {
      fStack_144 = fStack_100;
      uStack_140 = uStack_fc;
      uStack_13c = uStack_f8;
    }
    iStack_128 = param_1;
    uStack_130 = 0x65;
    (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x110))(iStack_18,auStack_160);
    FUN_00537e00(0x01E661B8);
    return;
  }
LAB_005a580c:
  FUN_00537e00(0x01E661B8);
  return;
}
