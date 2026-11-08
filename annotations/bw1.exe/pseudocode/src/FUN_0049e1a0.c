// Name: FUN_0049e1a0
// Address: 0049e1a0
// Address Range: [[0049e1a0, 0049e9b6]]
// Convention: unknown
// Signature: undefined4 FUN_0049e1a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0049e1a0(int param_1)

{
  double dVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_1130 [995];
  float *pfVar10;
  uint uStack_184;
  float fStack_180;
  uint uStack_17c;
  float fStack_178;
  float fStack_174;
  uint uStack_170;
  float fStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  int iStack_150;
  uint uStack_14c;
  float fStack_148;
  float afStack_144 [4];
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float afStack_118 [3];
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float afStack_e8 [3];
  float fStack_dc;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float afStack_a0 [3];
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [4];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_48;
  float fStack_40;
  int iStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  float fStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  pfVar10 = afStack_144 + 0x17;
  afStack_e8[0] = (float)uStack_b8;
  afStack_144[(uint)bVar7 * -2 + 0x18] = afStack_144[(uint)bVar7 * -2 + 0x24];
  afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
       afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x25];
  FUN_00408b40(param_1,pfVar10);
  fStack_ac = fStack_88;
  afStack_144[(uint)bVar7 * -2 + 0x27] = afStack_84[(uint)bVar7 * -2];
  iVar3 = param_1;
  afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x28] =
       afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  iVar3 = FUN_005adde0(iVar3);
  if (iVar3 == 0) {
    FUN_0057d8a0(0x02C82A60,param_1,"shotgun-noammo.wav",afStack_144 + 0x26);
    return 0;
  }
  fVar8 = (float10)fptan((float10)*(float *)(param_1 + 0x578) * (float10)_DAT_005dc8df *
                         (float10)_DAT_005dc8e7);
  fStack_40 = (float)(fVar8 * (float10)*(float *)(param_1 + 0x2e8));
  fStack_34 = (float)FUN_0040cc60(10,0xf);
  iStack_3c = 0;
  if (0 < (int)fStack_34) {
    do {
      fStack_48 = (float)FUN_0040cc00(0,0x40c90fdb);
      fStack_14 = fStack_48;
      fStack_14 = (float)FUN_0040cc00(0,fStack_40);
      fVar8 = (float10)fcos((float10)fStack_48);
      fVar9 = (float10)fsin((float10)fStack_48);
      fStack_94 = (float)(fVar8 * (float10)fStack_14);
      fStack_90 = (float)(fVar9 * (float10)fStack_14);
      fStack_8c = *(float *)(param_1 + 0x2e8);
      FUN_00408ac0(param_1,afStack_144 + 0x2c);
      fStack_f4 = fStack_dc;
      afStack_144[(uint)bVar7 * -2 + 0x15] = afStack_144[(uint)bVar7 * -2 + 0x1b];
      afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
           afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
      if (afStack_144 + 0x2c != afStack_144 + 0x14) {
        fStack_94 = fStack_f4;
        fStack_90 = fStack_f0;
        fStack_8c = fStack_ec;
      }
      fStack_64 = fStack_ac + fStack_94;
      fStack_60 = fStack_a8 + fStack_90;
      fStack_5c = fStack_a4 + fStack_8c;
      afStack_a0[0] = fStack_ac + fStack_94;
      afStack_144[(uint)bVar7 * -2 + 0x2a] = afStack_84[(uint)bVar7 * -2 + 9];
      afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2b] =
           afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
      fVar2 = fStack_a4;
      fVar6 = fStack_a8;
      fVar4 = fStack_ac;
      fStack_38 = (float)_DAT_005dc8f7 / *(float *)(param_1 + 0x2e8);
      afStack_84[2] = fStack_94 * fStack_38;
      afStack_84[3] = fStack_90 * fStack_38;
      fStack_74 = fStack_8c * fStack_38;
      fStack_130 = fStack_94 * fStack_38;
      afStack_144[(uint)bVar7 * -2 + 6] = afStack_84[(uint)bVar7 * -2 + 3];
      afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      fStack_d0 = fVar4 - fStack_130;
      fStack_cc = fVar6 - fStack_12c;
      fStack_c8 = fVar2 - fStack_128;
      afStack_118[0] = fVar4 - fStack_130;
      afStack_144[(uint)bVar7 * -2 + 0xc] = afStack_144[(uint)bVar7 * -2 + 0x1e];
      iVar3 = 0x01E82168;
      afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
           afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f];
      FUN_00559220(iVar3);
      FUN_005592d0(0x01E82168,1);
      FUN_00559250(0x01E82168,param_1);
      if (*(int *)(param_1 + 0x304) != 0) {
        FUN_00559250(0x01E82168,*(int *)(param_1 + 0x304));
      }
      iStack_20 = 0;
      do {
        fVar4 = (float)FUN_00557300(0x01E82168,afStack_144 + 0xb,afStack_144 + 0x29);
        fStack_14 = fVar4;
        dVar1 = (double)fVar4;
        if ((dVar1 < 0.0) || (1.0 < dVar1)) break;
        iStack_18 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),DAT_007c637c,dVar1,fVar4);
        if ((iStack_18 != 0) &&
           (iVar3 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0x10c))(iStack_18), 0 < iVar3)) {
          iStack_18 = 0;
        }
        iVar3 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),_DAT_01cd0dfc);
        iVar5 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),_DAT_02c8ae44);
        iStack_30 = iVar5;
        iStack_2c = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),DAT_007dc6d8);
        iStack_28 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),_DAT_01cc4184);
        fVar6 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
        fStack_14 = fStack_34;
        fStack_24 = ((1.0 - fVar4) * fVar6) / (float)(int)fStack_34;
        if (iStack_18 == 0) {
          if (iVar3 == 0) {
            if (iVar5 == 0) {
              if (iStack_2c == 0) {
                if (iStack_28 == 0) {
                  FUN_004b56a0(0x01C57074,0x01E82168 + 0x14d138,0x01E82168 + 0x14d128,
                               *(uint *)(0x01E82168 + 0x14d134),
                               *(uint *)(0x01E82168 + 0x14d144));
                  break;
                }
                FUN_004b9180(iStack_28);
              }
              else {
                FUN_00449600(iStack_2c);
              }
            }
            else {
              FUN_0059bdd0(iVar5);
              iVar3 = FUN_0059bdf0(iVar5,param_1);
              if (iVar3 != 0) {
                FUN_0059be30(iVar5,fStack_24);
              }
              FUN_00559250(0x01E82168,iStack_30);
            }
          }
          else {
            iVar5 = FUN_004e3a40(iVar3);
            if (iVar5 == 0) break;
            FUN_004e34b0(iVar3,0x01E82168 + 0x14d138);
          }
        }
        else {
          iVar3 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0xe0))(iStack_18);
          if (iVar3 != 0) break;
          FUN_0042c010(&uStack_184);
          uStack_184 = *(uint *)(0x01E82168 + 0x14d148);
          fStack_180 = fStack_24;
          uStack_17c = 0x3ecccccd;
          afStack_144[2] = *(float *)(0x01E82168 + 0x14d11c) - *(float *)(0x01E82168 + 0x14d110)
          ;
          afStack_144[3] = *(float *)(0x01E82168 + 0x14d120) - *(float *)(0x01E82168 + 0x14d114)
          ;
          fStack_134 = *(float *)(0x01E82168 + 0x14d124) - *(float *)(0x01E82168 + 0x14d118);
          fStack_100 = afStack_144[2];
          afStack_144[(uint)bVar7 * -2 + 0x12] = afStack_144[(uint)bVar7 * -2 + 3];
          afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
               afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          fStack_1c = (float)_DAT_005dc8ff /
                      SQRT(fStack_f8 * fStack_f8 + fStack_100 * fStack_100 + fStack_fc * fStack_fc);
          fStack_10c = fStack_100 * fStack_1c;
          fStack_108 = fStack_fc * fStack_1c;
          fStack_104 = fStack_f8 * fStack_1c;
          fStack_148 = fStack_100 * fStack_1c;
          afStack_144[(uint)bVar7 * -2] = afStack_144[(uint)bVar7 * -2 + 0xf];
          afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
          if (&fStack_178 != &fStack_148) {
            fStack_178 = fStack_148;
            fStack_174 = afStack_144[0];
            uStack_170 = afStack_144[1];
          }
          FUN_00408bb0(iStack_18,0x01E82168 + 0x14d138);
          fStack_c4 = fStack_124;
          afStack_144[(uint)bVar7 * -2 + 0x21] = afStack_144[(uint)bVar7 * -2 + 9];
          afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22] =
               afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
          if (&fStack_168 != afStack_144 + 0x20) {
            fStack_168 = fStack_c4;
            uStack_164 = uStack_c0;
            uStack_160 = uStack_bc;
          }
          uStack_15c = *(uint *)(param_1 + 0x56c);
          uStack_154 = 0x6b;
          uStack_158 = 0x3f800000;
          iStack_150 = param_1;
          uStack_14c = (**(code **)(*(int *)(param_1 + 0x154) + 0x94))(param_1);
          (**(code **)(*(int *)(iStack_18 + 0x154) + 0x108))(iStack_18,&uStack_184);
          if (*(int *)(param_1 + 0x2e4) == 0) break;
          FUN_00559250(0x01E82168,*(uint *)(0x01E82168 + 0x14d144));
        }
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < 4);
      iStack_3c = iStack_3c + 1;
    } while (iStack_3c < (int)fStack_34);
  }
  iVar3 = param_1 + 0x3c;
  fStack_70 = fStack_ac;
  afStack_84[(uint)bVar7 * -2 + 6] = afStack_144[(uint)bVar7 * -2 + 0x27];
  afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x28];
  fStack_6c = fStack_6c + _DAT_005dc8ef;
  FUN_004b5a70(0x01C57074,afStack_84 + 5,iVar3);
  FUN_0057d8a0(0x02C82A60,param_1,"elephantgun.wav",afStack_144 + 0x26);
  *(uint *)(param_1 + 0x300) = 0x3f800000;
  return 1;
}
