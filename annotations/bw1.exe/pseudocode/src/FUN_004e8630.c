// Name: FUN_004e8630
// Address: 004e8630
// Address Range: [[004e8630, 004e8ee0]]
// Convention: unknown
// Signature: undefined4 FUN_004e8630(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e8630(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  float afStackY_114c [986];
  float *pfVar8;
  uint uStack_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  float fStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  float fStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  int iStack_194;
  uint uStack_190;
  byte auStack_18c [40];
  float fStack_164;
  float afStack_160 [5];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint uStack_140;
  float fStack_134;
  uint uStack_130;
  uint uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float afStack_110 [3];
  float afStack_104 [3];
  float fStack_f8;
  float afStack_f4 [4];
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  float afStack_d4 [3];
  float afStack_c8 [3];
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  float fStack_a4;
  float afStack_a0 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  float fStack_38;
  float afStack_34 [3];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  pfVar8 = afStack_160 + 0x14;
  afStack_110[0] = afStack_160[2];
  afStack_160[(uint)bVar7 * -2 + 0x15] = afStack_160[(uint)bVar7 * -2 + 3];
  afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
       afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  FUN_00408b40(param_1,pfVar8);
  fStack_11c = fStack_8c;
  afStack_160[(uint)bVar7 * -2 + 0x12] = afStack_a0[(uint)bVar7 * -2 + 6];
  iVar3 = param_1;
  afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
       afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  iVar3 = FUN_005adde0(iVar3);
  if (iVar3 == 0) {
    FUN_0057d8a0(0x02C82A60,param_1,"45-dry-!.wav",afStack_160 + 0x11);
    return 0;
  }
  afStack_104[2] = *(float *)(param_1 + 0x2e8);
  afStack_104[0] = 0.0;
  afStack_104[1] = 0.0;
  FUN_00408ac0(param_1,afStack_160 + 0x17);
  fVar2 = fStack_118;
  fVar1 = fStack_11c;
  afStack_a0[2] = fStack_a4;
  afStack_a0[(uint)bVar7 * -2 + 3] = afStack_a0[(uint)bVar7 * -2];
  afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_164 = fVar1 + afStack_a0[2];
  afStack_160[0] = fVar2 + afStack_a0[3];
  afStack_160[1] = fStack_114 + fStack_90;
  afStack_d4[0] = fVar1 + afStack_a0[2];
  afStack_f4[(uint)bVar7 * -2 + 9] = afStack_160[(uint)bVar7 * -2];
  afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fVar1 = fStack_11c;
  afStack_34[2] = (float)_DAT_005e43d3 / *(float *)(param_1 + 0x2e8);
  fStack_f8 = afStack_a0[2] * afStack_34[2];
  afStack_f4[0] = afStack_a0[3] * afStack_34[2];
  afStack_f4[1] = fStack_90 * afStack_34[2];
  fStack_50 = afStack_a0[2] * afStack_34[2];
  afStack_a0[(uint)bVar7 * -2 + 0x15] = afStack_f4[(uint)bVar7 * -2];
  afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
       afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_80 = fVar1 - fStack_50;
  fStack_7c = fStack_118 - fStack_4c;
  fStack_78 = fStack_114 - fStack_48;
  afStack_c8[0] = fVar1 - fStack_50;
  afStack_f4[(uint)bVar7 * -2 + 0xc] = afStack_a0[(uint)bVar7 * -2 + 9];
  afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  FUN_00559220(0x01E82168);
  FUN_005592d0(0x01E82168,1);
  FUN_00559250(0x01E82168,param_1);
  if (*(int *)(param_1 + 0x304) != 0) {
    FUN_00559250(0x01E82168,*(int *)(param_1 + 0x304));
  }
  iStack_20 = 0;
  do {
    fStack_14 = (float)FUN_00557300(0x01E82168,afStack_f4 + 0xb,afStack_f4 + 8);
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) break;
    iStack_18 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),DAT_007c637c);
    if ((iStack_18 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0x10c))(iStack_18), 0 < iVar3)) {
      iStack_18 = 0;
    }
    iVar3 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),_DAT_01cd0dfc);
    iVar5 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),_DAT_02c8ae44);
    iStack_28 = iVar5;
    iStack_24 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),DAT_007dc6d8);
    iVar6 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),_DAT_01cc4184);
    if (iStack_18 == 0) {
      if (iVar3 == 0) {
        if (iVar5 == 0) {
          if (iStack_24 == 0) {
            if (iVar6 == 0) {
              FUN_004b56a0(0x01C57074,0x01E82168 + 0x14d138,0x01E82168 + 0x14d128,
                           *(uint *)(0x01E82168 + 0x14d134),
                           *(uint *)(0x01E82168 + 0x14d144));
              break;
            }
            FUN_004b9180(iVar6);
          }
          else {
            FUN_00449600(iStack_24);
          }
        }
        else {
          FUN_0059bdd0(iVar5);
          iVar3 = FUN_0059bdf0(iVar5,param_1);
          if (iVar3 != 0) {
            fStack_14 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
            FUN_0059be30(iVar5,fStack_14);
          }
          FUN_00559250(0x01E82168,iStack_28);
        }
      }
      else {
        iVar5 = FUN_004e3a40(iVar3);
        if (iVar5 == 0) break;
        FUN_004e34b0(iVar3,0x01E82168 + 0x14d138);
      }
    }
    else {
      iVar5 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0xe0))(iStack_18);
      iVar3 = 0x01E82168;
      if (iVar5 != 0) {
        if (iStack_20 == 0) {
          *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) + 1;
          FUN_00559220(iVar3);
          return 0;
        }
        break;
      }
      FUN_0042c010(&uStack_1c8);
      uStack_1c8 = *(uint *)(0x01E82168 + 0x14d148);
      fStack_14 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
      uStack_1c0 = 0x3ecccccd;
      fStack_1c4 = fStack_14;
      fStack_14c = *(float *)(0x01E82168 + 0x14d11c) - *(float *)(0x01E82168 + 0x14d110);
      fStack_148 = *(float *)(0x01E82168 + 0x14d120) - *(float *)(0x01E82168 + 0x14d114);
      fStack_144 = *(float *)(0x01E82168 + 0x14d124) - *(float *)(0x01E82168 + 0x14d118);
      afStack_f4[2] = fStack_14c;
      afStack_f4[(uint)bVar7 * -2 + 3] = afStack_160[(uint)bVar7 * -2 + 6];
      afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      fStack_1c = (float)_DAT_005e43e3 /
                  SQRT(fStack_e4 * fStack_e4 +
                       afStack_f4[2] * afStack_f4[2] + afStack_f4[3] * afStack_f4[3]);
      fStack_128 = afStack_f4[2] * fStack_1c;
      fStack_124 = afStack_f4[3] * fStack_1c;
      fStack_120 = fStack_e4 * fStack_1c;
      fStack_68 = afStack_f4[2] * fStack_1c;
      afStack_a0[(uint)bVar7 * -2 + 0xf] = afStack_160[(uint)bVar7 * -2 + 0xf];
      afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
           afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
      if (&fStack_1bc != afStack_a0 + 0xe) {
        fStack_1bc = fStack_68;
        uStack_1b8 = uStack_64;
        uStack_1b4 = uStack_60;
      }
      FUN_00408bb0(iStack_18,0x01E82168 + 0x14d138);
      fStack_e0 = fStack_74;
      afStack_f4[(uint)bVar7 * -2 + 6] = afStack_a0[(uint)bVar7 * -2 + 0xc];
      afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
      if (&fStack_1ac != afStack_f4 + 5) {
        fStack_1ac = fStack_e0;
        uStack_1a8 = uStack_dc;
        uStack_1a4 = uStack_d8;
      }
      uStack_1a0 = *(uint *)(param_1 + 0x56c);
      uStack_198 = 0x65;
      iStack_194 = param_1;
      uStack_19c = 0x3e19999a;
      uStack_190 = (**(code **)(*(int *)(param_1 + 0x154) + 0x94))(param_1);
      (**(code **)(*(int *)(iStack_18 + 0x154) + 0x108))(iStack_18,&uStack_1c8);
      if (*(int *)(param_1 + 0x2e4) == 0) break;
      FUN_00559250(0x01E82168,*(uint *)(0x01E82168 + 0x14d144));
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  FUN_00559220(0x01E82168);
  iVar3 = param_1 + 0x3c;
  fStack_bc = fStack_11c;
  afStack_f4[(uint)bVar7 * -2 + 0xf] = afStack_160[(uint)bVar7 * -2 + 0x12];
  afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
       afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
  fStack_b8 = fStack_b8 + _DAT_005e43db;
  FUN_004b5a70(0x01C57074,afStack_f4 + 0xe,iVar3);
  FUN_0057d8a0(0x02C82A60,param_1,"45.wav",afStack_160 + 0x11);
  *(uint *)(param_1 + 0x300) = 0x3f2a7efa;
  fStack_44 = 3.0;
  uStack_40 = 0x40400000;
  uStack_3c = 0xc0800000;
  fStack_b0 = (float)FUN_0040cc00(0xbec90fdb,0x3ec90fdb);
  fStack_14 = fStack_b0;
  uStack_ac = FUN_0040cc00(0xbec90fdb,0x3ec90fdb);
  uStack_a8 = 0;
  fStack_14 = (float)uStack_ac;
  FUN_0045f3e0(auStack_18c,afStack_f4 + 0x11);
  FUN_0045f690(auStack_18c,afStack_a0 + 0x17);
  pfVar8 = afStack_a0 + 0x1a;
  fStack_38 = (float)uStack_5c;
  afStack_34[(uint)bVar7 * -2] = afStack_a0[(uint)bVar7 * -2 + 0x12];
  afStack_34[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
  FUN_00408ac0(param_1,pfVar8);
  fStack_134 = (float)uStack_140;
  afStack_160[(uint)bVar7 * -2 + 0xc] = afStack_160[(uint)bVar7 * -2 + 9];
  afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  if (afStack_a0 + 0x17 != afStack_160 + 0xb) {
    fStack_44 = fStack_134;
    uStack_40 = uStack_130;
    uStack_3c = uStack_12c;
  }
  uVar4 = FUN_00468780("gatbullet.kfm");
  FUN_004b7270(0x01C57074,param_1 + 0x20,param_1 + 0x30,afStack_a0 + 0x17,uVar4);
  return 1;
}
