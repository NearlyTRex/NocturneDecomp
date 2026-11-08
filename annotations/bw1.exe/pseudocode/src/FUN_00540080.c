// Name: FUN_00540080
// Address: 00540080
// Address Range: [[00540080, 005407d2]]
// Convention: unknown
// Signature: undefined4 FUN_00540080(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00540080(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_110c [996];
  float *pfVar6;
  uint uStack_160;
  float fStack_15c;
  uint uStack_158;
  float fStack_154;
  uint uStack_150;
  uint uStack_14c;
  float fStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  int iStack_12c;
  uint uStack_128;
  float fStack_124;
  float afStack_120 [5];
  float afStack_10c [3];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  float afStack_dc [3];
  float fStack_d0;
  float afStack_cc [5];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  uint uStack_9c;
  uint uStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float afStack_88 [3];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar5 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  pfVar6 = afStack_cc + 2;
  afStack_cc[2] = (float)uStack_4c;
  afStack_cc[(uint)bVar5 * -2 + 3] = afStack_cc[(uint)bVar5 * -2 + 0x21];
  afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22];
  FUN_00408b40(param_1,pfVar6);
  fStack_94 = afStack_120[2];
  afStack_cc[(uint)bVar5 * -2 + 0xf] = afStack_120[(uint)bVar5 * -2 + 3];
  iVar3 = param_1;
  afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
       afStack_120[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  iVar3 = FUN_005adde0(iVar3);
  if (iVar3 == 0) {
    FUN_0057d8a0(0x02C82A60,param_1,"?shotgun-noammo.wav" + 1,afStack_cc + 0xe);
    return 0;
  }
  afStack_dc[2] = *(float *)(param_1 + 0x2e8);
  afStack_dc[0] = 0.0;
  afStack_dc[1] = 0.0;
  FUN_00408ac0(param_1,afStack_120 + 0x11);
  fVar2 = fStack_90;
  fVar1 = fStack_94;
  fStack_70 = fStack_f4;
  afStack_cc[(uint)bVar5 * -2 + 0x18] = afStack_120[(uint)bVar5 * -2 + 0xc];
  afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19] =
       afStack_120[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
  fStack_b8 = fVar1 + fStack_70;
  fStack_b4 = fVar2 + fStack_6c;
  fStack_b0 = fStack_8c + fStack_68;
  afStack_88[0] = fVar1 + fStack_70;
  afStack_cc[(uint)bVar5 * -2 + 0x12] = afStack_cc[(uint)bVar5 * -2 + 6];
  afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
       afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  fVar1 = fStack_94;
  fStack_30 = (float)_DAT_005edc67 / *(float *)(param_1 + 0x2e8);
  fStack_40 = fStack_70 * fStack_30;
  fStack_3c = fStack_6c * fStack_30;
  fStack_38 = fStack_68 * fStack_30;
  fStack_7c = fStack_70 * fStack_30;
  afStack_cc[(uint)bVar5 * -2 + 0x15] = afStack_cc[(uint)bVar5 * -2 + 0x24];
  afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
       afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25];
  fStack_64 = fVar1 - fStack_7c;
  fStack_60 = fStack_90 - fStack_78;
  fStack_5c = fStack_8c - fStack_74;
  afStack_10c[0] = fVar1 - fStack_7c;
  afStack_120[(uint)bVar5 * -2 + 6] = afStack_cc[(uint)bVar5 * -2 + 0x1b];
  afStack_120[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
  FUN_00559220(0x01E82168);
  FUN_005592d0(0x01E82168,1);
  FUN_00559250(0x01E82168,param_1);
  if (*(int *)(param_1 + 0x304) != 0) {
    FUN_00559250(0x01E82168,*(int *)(param_1 + 0x304));
  }
  iStack_20 = 0;
  do {
    fStack_14 = (float)FUN_00557300(0x01E82168,afStack_120 + 5,afStack_cc + 0x11);
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) break;
    iStack_18 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),DAT_007c637c);
    if ((iStack_18 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0x10c))(iStack_18), 0 < iVar3)) {
      iStack_18 = 0;
    }
    iVar3 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),_DAT_01cd0dfc);
    iVar4 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),_DAT_02c8ae44);
    iStack_2c = iVar4;
    iStack_24 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),DAT_007dc6d8);
    iStack_28 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),_DAT_01cc4184);
    fStack_34 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
    fStack_14 = fStack_34;
    if (iStack_18 == 0) {
      if (iVar3 == 0) {
        if (iVar4 == 0) {
          if (iStack_24 == 0) {
            if (iStack_28 == 0) {
              FUN_004b56a0(0x01C57074,0x01E82168 + 0x14d138,0x01E82168 + 0x14d128,
                           *(uint *)(0x01E82168 + 0x14d134),
                           *(uint *)(0x01E82168 + 0x14d144));
              break;
            }
            FUN_004b9180(iStack_28);
          }
          else {
            FUN_00449600(iStack_24);
          }
        }
        else {
          FUN_0059bdd0(iVar4);
          iVar3 = FUN_0059bdf0(iVar4,param_1);
          if (iVar3 != 0) {
            FUN_0059be30(iVar4,fStack_34);
          }
          FUN_00559250(0x01E82168,iStack_2c);
        }
      }
      else {
        iVar4 = FUN_004e3a40(iVar3);
        if (iVar4 == 0) break;
        FUN_004e34b0(iVar3,0x01E82168 + 0x14d138);
      }
    }
    else {
      iVar4 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0xe0))(iStack_18);
      iVar3 = 0x01E82168;
      if (iVar4 != 0) {
        if (iStack_20 == 0) {
          *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) + 1;
          FUN_00559220(iVar3);
          return 0;
        }
        break;
      }
      FUN_0042c010(&uStack_160);
      uStack_160 = *(uint *)(0x01E82168 + 0x14d148);
      fStack_14 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
      uStack_158 = 0x3ecccccd;
      fStack_15c = fStack_14;
      fStack_58 = *(float *)(0x01E82168 + 0x14d11c) - *(float *)(0x01E82168 + 0x14d110);
      fStack_54 = *(float *)(0x01E82168 + 0x14d120) - *(float *)(0x01E82168 + 0x14d114);
      fStack_50 = *(float *)(0x01E82168 + 0x14d124) - *(float *)(0x01E82168 + 0x14d118);
      fStack_124 = fStack_58;
      afStack_120[(uint)bVar5 * -2] = afStack_cc[(uint)bVar5 * -2 + 0x1e];
      afStack_120[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f];
      fStack_1c = (float)_DAT_005edc77 /
                  SQRT(afStack_120[1] * afStack_120[1] +
                       fStack_124 * fStack_124 + afStack_120[0] * afStack_120[0]);
      fStack_100 = fStack_124 * fStack_1c;
      fStack_fc = afStack_120[0] * fStack_1c;
      fStack_f8 = afStack_120[1] * fStack_1c;
      fStack_e8 = fStack_124 * fStack_1c;
      afStack_120[(uint)bVar5 * -2 + 0xf] = afStack_120[(uint)bVar5 * -2 + 9];
      afStack_120[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
           afStack_120[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
      if (&fStack_154 != afStack_120 + 0xe) {
        fStack_154 = fStack_e8;
        uStack_150 = uStack_e4;
        uStack_14c = uStack_e0;
      }
      FUN_00408bb0(iStack_18,0x01E82168 + 0x14d138);
      fStack_a0 = fStack_d0;
      afStack_cc[(uint)bVar5 * -2 + 0xc] = afStack_cc[(uint)bVar5 * -2];
      afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
           afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      if (&fStack_144 != afStack_cc + 0xb) {
        fStack_144 = fStack_a0;
        uStack_140 = uStack_9c;
        uStack_13c = uStack_98;
      }
      uStack_138 = *(uint *)(param_1 + 0x56c);
      uStack_130 = 0x65;
      uStack_134 = 0x3e19999a;
      iStack_12c = param_1;
      uStack_128 = (**(code **)(*(int *)(param_1 + 0x154) + 0x94))(param_1);
      (**(code **)(*(int *)(iStack_18 + 0x154) + 0x108))(iStack_18,&uStack_160);
      if (*(int *)(param_1 + 0x2e4) == 0) break;
      FUN_00559250(0x01E82168,*(uint *)(0x01E82168 + 0x14d144));
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  FUN_00559220(0x01E82168);
  fStack_ac = fStack_94;
  afStack_cc[(uint)bVar5 * -2 + 9] = afStack_cc[(uint)bVar5 * -2 + 0xf];
  afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
       afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
  fStack_a8 = fStack_a8 + _DAT_005edc6f;
  FUN_004b5a70(0x01C57074,afStack_cc + 8,param_1 + 0x3c);
  FUN_0057d8a0(0x02C82A60,param_1,"rifle-silencer.wav",afStack_cc + 0xe);
  *(uint *)(param_1 + 0x300) = 0x3fc00000;
  return 1;
}
