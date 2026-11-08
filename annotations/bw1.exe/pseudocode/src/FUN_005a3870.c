// Name: FUN_005a3870
// Address: 005a3870
// Address Range: [[005a3870, 005a3e2b]]
// Convention: unknown
// Signature: undefined4 FUN_005a3870(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a3870(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_10dc [996];
  float *pfVar6;
  uint uStack_130;
  float fStack_12c;
  uint uStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  float fStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  int iStack_fc;
  uint uStack_f8;
  float fStack_f4;
  float afStack_f0 [5];
  uint uStack_dc;
  float afStack_d0 [3];
  float afStack_c4 [3];
  float fStack_b8;
  float afStack_b4 [4];
  uint uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float afStack_88 [3];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar5 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  pfVar6 = afStack_f0 + 8;
  afStack_d0[0] = (float)uStack_dc;
  afStack_f0[(uint)bVar5 * -2 + 9] = afStack_f0[(uint)bVar5 * -2 + 6];
  afStack_f0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
       afStack_f0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  FUN_00408b40(param_1,pfVar6);
  fStack_94 = fStack_4c;
  afStack_b4[(uint)bVar5 * -2 + 9] = afStack_b4[(uint)bVar5 * -2 + 0x1b];
  afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
       afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
  afStack_c4[2] = *(float *)(param_1 + 0x2e8);
  afStack_c4[0] = 0.0;
  afStack_c4[1] = 0.0;
  FUN_00408ac0(param_1,afStack_f0 + 0xb);
  fVar1 = fStack_94;
  fStack_a0 = afStack_f0[2];
  afStack_b4[(uint)bVar5 * -2 + 6] = afStack_f0[(uint)bVar5 * -2 + 3];
  afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_f0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  fStack_34 = fVar1 + fStack_a0;
  fStack_30 = fStack_90 + fStack_9c;
  fStack_2c = fStack_8c + fStack_98;
  fStack_f4 = fVar1 + fStack_a0;
  afStack_f0[(uint)bVar5 * -2] = afStack_b4[(uint)bVar5 * -2 + 0x21];
  afStack_f0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22];
  afStack_88[0] = fStack_94;
  afStack_b4[(uint)bVar5 * -2 + 0xc] = afStack_b4[(uint)bVar5 * -2 + 9];
  afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
       afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  FUN_005592d0(0x01E82168,1);
  FUN_00559250(0x01E82168,param_1);
  iStack_20 = 0;
  do {
    fStack_14 = (float)FUN_00557300(0x01E82168,afStack_b4 + 0xb,&fStack_f4);
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) break;
    iStack_18 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),DAT_007c637c);
    if ((iStack_18 != 0) &&
       (iVar2 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0x10c))(iStack_18), 0 < iVar2)) {
      iStack_18 = 0;
    }
    iVar2 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),_DAT_01cd0dfc);
    iVar3 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),_DAT_02c8ae44);
    iStack_28 = iVar3;
    iStack_24 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),DAT_007dc6d8);
    iVar4 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),_DAT_01cc4184);
    if (iStack_18 == 0) {
      if (iVar2 == 0) {
        if (iVar3 != 0) {
          FUN_0059bdd0(iVar3);
          iVar4 = FUN_0059bdf0(iVar3,param_1);
          iVar2 = iStack_28;
          if (iVar4 != 0) {
            fStack_14 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
            FUN_0059be30(iVar3,fStack_14);
            iVar2 = iStack_28;
          }
          goto LAB_005a3cc2;
        }
        if (iStack_24 == 0) {
          if (iVar4 == 0) {
            FUN_004b56a0(0x01C57074,0x01E82168 + 0x14d138,0x01E82168 + 0x14d128,
                         *(uint *)(0x01E82168 + 0x14d134),
                         *(uint *)(0x01E82168 + 0x14d144));
            break;
          }
          FUN_004b9180(iVar4);
        }
        else {
          FUN_00449600(iStack_24);
        }
      }
      else {
        iVar3 = FUN_004e3a40(iVar2);
        if (iVar3 == 0) break;
        FUN_004e34b0(iVar2,0x01E82168 + 0x14d138);
      }
    }
    else {
      FUN_0042c010(&uStack_130);
      uStack_130 = *(uint *)(0x01E82168 + 0x14d148);
      fStack_14 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
      uStack_128 = 0x3ecccccd;
      fStack_12c = fStack_14;
      fStack_7c = *(float *)(0x01E82168 + 0x14d11c) - *(float *)(0x01E82168 + 0x14d110);
      fStack_78 = *(float *)(0x01E82168 + 0x14d120) - *(float *)(0x01E82168 + 0x14d114);
      fStack_74 = *(float *)(0x01E82168 + 0x14d124) - *(float *)(0x01E82168 + 0x14d118);
      fStack_64 = fStack_7c;
      afStack_b4[(uint)bVar5 * -2 + 0x15] = afStack_b4[(uint)bVar5 * -2 + 0xf];
      afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
           afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
      fStack_1c = (float)_DAT_005f8b88 /
                  SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60);
      fStack_58 = fStack_64 * fStack_1c;
      fStack_54 = fStack_60 * fStack_1c;
      fStack_50 = fStack_5c * fStack_1c;
      fStack_b8 = fStack_64 * fStack_1c;
      afStack_b4[(uint)bVar5 * -2] = afStack_b4[(uint)bVar5 * -2 + 0x18];
      afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
      if (&fStack_124 != &fStack_b8) {
        fStack_124 = fStack_b8;
        fStack_120 = afStack_b4[0];
        uStack_11c = afStack_b4[1];
      }
      FUN_00408bb0(iStack_18,0x01E82168 + 0x14d138);
      afStack_b4[2] = fStack_40;
      afStack_b4[(uint)bVar5 * -2 + 3] = afStack_b4[(uint)bVar5 * -2 + 0x1e];
      afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f];
      if (&fStack_114 != afStack_b4 + 2) {
        fStack_114 = afStack_b4[2];
        uStack_110 = afStack_b4[3];
        uStack_10c = uStack_a4;
      }
      uStack_108 = *(uint *)(param_1 + 0x56c);
      uStack_100 = 0x65;
      uStack_104 = 0x3f800000;
      iStack_fc = param_1;
      uStack_f8 = (**(code **)(*(int *)(param_1 + 0x154) + 0x94))(param_1);
      (**(code **)(*(int *)(iStack_18 + 0x154) + 0x108))(iStack_18,&uStack_130);
      if (*(int *)(param_1 + 0x2e4) == 0) break;
      iVar2 = *(int *)(0x01E82168 + 0x14d144);
LAB_005a3cc2:
      FUN_00559250(0x01E82168,iVar2);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  iVar2 = param_1 + 0x3c;
  fStack_70 = fStack_94;
  afStack_b4[(uint)bVar5 * -2 + 0x12] = afStack_b4[(uint)bVar5 * -2 + 9];
  afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
       afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  fStack_6c = fStack_6c + _DAT_005f8b84;
  FUN_004b5a70(0x01C57074,afStack_b4 + 0x11,iVar2);
  *(uint *)(param_1 + 0x8b0) = 2;
  *(uint *)(param_1 + 0x300) = *(uint *)(param_1 + 0x774);
  return 1;
}
