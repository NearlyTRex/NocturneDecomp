// Name: FUN_00599150
// Address: 00599150
// Address Range: [[00599150, 00599889]]
// Convention: unknown
// Signature: void FUN_00599150(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00599150(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  byte bVar9;
  byte auStack_1e00 [1136];
  float afStack_1990 [1419];
  byte auStack_364 [48];
  uint auStack_334 [12];
  uint auStack_304 [12];
  byte auStack_2d4 [48];
  uint auStack_2a4 [12];
  uint auStack_274 [12];
  uint auStack_244 [12];
  uint auStack_214 [12];
  uint auStack_1e4 [12];
  uint uStack_1b4;
  float afStack_1b0 [7];
  float afStack_194 [4];
  float afStack_184 [4];
  float afStack_174 [3];
  uint uStack_168;
  uint uStack_164;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  float afStack_150 [3];
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  uint uStack_134;
  uint uStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [3];
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  uint uStack_f0;
  float fStack_e4;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float afStack_cc [3];
  uint uStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [3];
  float afStack_78 [7];
  float afStack_5c [5];
  float fStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float *pfStack_14;
  
  bVar9 = 0;
  iVar2 = FUN_0042e1a0(param_1,param_2);
  if (iVar2 != 0) {
    iStack_20 = param_1 + 0xc2a4;
    fStack_30 = param_2 * *(float *)(param_1 + 0xc1d0);
    pfStack_14 = (float *)(param_1 + 0x20);
    iStack_1c = param_1 + 0x30;
    iStack_18 = param_1 + 0x158;
    while (0.0 < fStack_30) {
      uVar3 = FUN_00524270(iStack_18,afStack_5c + 0xb);
      if (0x22 < uVar3) {
        if (uVar3 < 0x24) {
          iVar2 = *(int *)(param_1 + 0xc1e8);
          if ((iVar2 != 0) &&
             (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2), iVar2 == 0)) {
            FUN_00599be0(param_1);
            puVar6 = auStack_1e4;
            puVar8 = auStack_2a4;
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
              puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
            }
            FUN_005b6270(auStack_2a4);
            afStack_cc[0] = (float)uStack_f0;
            afStack_1b0[(uint)bVar9 * -2 + 0x3a] = afStack_1b0[(uint)bVar9 * -2 + 0x31];
            afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3b] =
                 afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x32];
            FUN_00408b40(param_1,afStack_1b0 + 0x39);
            fStack_114 = fStack_e4;
            afStack_1b0[(uint)bVar9 * -2 + 0x28] = afStack_1b0[(uint)bVar9 * -2 + 0x34];
            afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x29] =
                 afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x35];
            iVar2 = *(int *)(param_1 + 0xc1e8);
            fStack_12c = fStack_114 - *(float *)(iVar2 + 0x20);
            fStack_128 = fStack_110 - *(float *)(iVar2 + 0x24);
            fStack_124 = fStack_10c - *(float *)(iVar2 + 0x28);
            fStack_fc = fStack_12c;
            afStack_1b0[(uint)bVar9 * -2 + 0x2e] = afStack_1b0[(uint)bVar9 * -2 + 0x22];
            afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2f] =
                 afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x23];
            if (((ABS(fStack_f8) <= (float)_DAT_005f7fac) &&
                (fStack_fc * fStack_fc + fStack_f4 * fStack_f4 <= (float)_DAT_005f7fb4)) &&
               (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xec))(iVar2,param_1,1), iVar2 != 0))
            {
              *(uint *)(param_1 + 0xc270) = 0;
              FUN_005b5760(auStack_2d4,*(int *)(param_1 + 0xc1e8) + 0x20,
                           *(int *)(param_1 + 0xc1e8) + 0x30);
              FUN_005b5620(auStack_364,pfStack_14,iStack_1c);
              FUN_005b6380(auStack_2a4);
              puVar6 = auStack_244;
              puVar8 = auStack_334;
              for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
                puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
              }
              FUN_005b5200(auStack_2d4,auStack_364,auStack_334);
              puVar6 = auStack_214;
              puVar8 = auStack_304;
              for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
                puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
              }
              FUN_005b5200(auStack_304);
              puVar6 = auStack_274;
              puVar8 = (uint *)(param_1 + 0xc274);
              for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
                puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
              }
              uStack_15c = 0x3e6b395c;
              uStack_154 = 0xbf44b945;
              uStack_158 = 0x3dcf14db;
              afStack_78[3] = -2.44619;
              afStack_174[0] = 0.229711;
              afStack_1b0[(uint)bVar9 * -2 + 0x10] = afStack_1b0[(uint)bVar9 * -2 + 0x16];
              afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x11] =
                   afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x17];
              afStack_78[4] = -1.91555;
              afStack_78[5] = -0.767692;
              FUN_005b5760(iStack_20,afStack_1b0 + 0x51,afStack_1b0 + 0xf);
            }
          }
        }
        else if ((uVar3 == 0x5dc) && (iVar2 = *(int *)(param_1 + 0xc1e8), iVar2 != 0)) {
          (**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2);
        }
      }
    }
    iVar2 = FUN_00524770(iStack_18);
    if ((*(int *)(iVar2 + 0x24) != 0) && (*(int *)(iVar2 + 0x24) == 1)) {
      iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      *(int *)(param_1 + 0xc1e8) = iVar2;
      if ((iVar2 != 0) &&
         ((iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2), iVar2 < 1 &&
          (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))
                             (*(int *)(param_1 + 0xc1e8)), iVar2 = iStack_18, iVar4 == 0)))) {
        if (_DAT_02c8ad54 == 0) {
          FUN_0056acc0(iStack_18,auStack_1e00);
          uVar5 = FUN_00524a00(iVar2,"attack_nocollision",1);
          uVar5 = FUN_005240c0(uVar5);
          FUN_005675f0(iVar2,uVar5,0x41f00000);
          FUN_00569040(iVar2,_DAT_02c8ad48);
          afStack_108[0] = afStack_78[6];
          afStack_1b0[(uint)bVar9 * -2 + 0x2b] = afStack_5c[(uint)bVar9 * -2];
          afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2c] =
               afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          FUN_0056ad90(iStack_18,auStack_1e00);
          *(uint *)(param_1 + 0x30) = 0;
          *(uint *)(param_1 + 0x38) = 0;
          iVar2 = _DAT_01d06ab4;
          *(uint *)(param_1 + 0x34) = 0xbfc90fdb;
          iVar2 = *(int *)(iVar2 * 4 + 0x1d06aa4);
          *pfStack_14 = *(float *)(iVar2 + 0x20);
          pfStack_14[1] = *(float *)(iVar2 + 0x24);
          pfStack_14[2] = *(float *)(iVar2 + 0x28);
          pfStack_14[3] = *(float *)(iVar2 + 0x2c);
          *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + _DAT_005f7f9c;
          FUN_0045f3e0(param_1 + 0x3c,iStack_1c);
          FUN_00408ac0(param_1,afStack_1b0 + 0x2a);
          pfVar7 = pfStack_14;
          fStack_d8 = fStack_a8;
          afStack_1b0[(uint)bVar9 * -2 + 0x37] = afStack_1b0[(uint)bVar9 * -2 + 0x43];
          afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x38] =
               afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x44];
          *pfVar7 = *pfVar7 - fStack_d8;
          pfVar7[1] = pfVar7[1] - fStack_d4;
          pfVar7[2] = pfVar7[2] - fStack_d0;
          afStack_78[0] = 0.0;
          afStack_78[2] = -1.0;
          afStack_78[1] = 0.0;
          FUN_00408ac0(param_1,afStack_1b0 + 0x4e);
          pfVar7 = pfStack_14;
          fStack_b4 = fStack_48;
          afStack_1b0[(uint)bVar9 * -2 + 0x40] = afStack_5c[(uint)bVar9 * -2 + 6];
          afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x41] =
               afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
          _DAT_02c8ad54 = 1;
          *pfVar7 = *pfVar7 - fStack_b4;
          pfVar7[1] = pfVar7[1] - fStack_b0;
          pfVar7[2] = pfVar7[2] - fStack_ac;
        }
        uVar5 = FUN_00569f30(*(int *)(param_1 + 0xc1e8) + 0x158);
        uVar5 = FUN_005634f0(uVar5,"Bip01 Pelvis",1);
        FUN_00569040(*(int *)(param_1 + 0xc1e8) + 0x158,uVar5);
        afStack_84[0] = (float)uStack_9c;
        afStack_1b0[(uint)bVar9 * -2 + 0x4c] = afStack_1b0[(uint)bVar9 * -2 + 0x46];
        afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x4d] =
             afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x47];
        FUN_00408bb0(param_1,afStack_1b0 + 0x4b);
        fStack_138 = afStack_5c[2];
        afStack_1b0[(uint)bVar9 * -2 + 0x1f] = afStack_5c[(uint)bVar9 * -2 + 3];
        afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x20] =
             afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        if ((float *)(param_1 + 0xc2d4) != afStack_1b0 + 0x1e) {
          *(float *)(param_1 + 0xc2d4) = fStack_138;
          *(uint *)(param_1 + 0xc2d8) = uStack_134;
          *(uint *)(param_1 + 0xc2dc) = uStack_130;
        }
        pfVar7 = (float *)(param_1 + 0xc2d8 + (uint)bVar9 * -8);
        fStack_144 = *(float *)(param_1 + 0xc2d4);
        afStack_1b0[(uint)bVar9 * -2 + 0x1c] = *pfVar7;
        afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1d] = pfVar7[(uint)bVar9 * -2 + 1];
        iStack_2c = param_1 + 0x158;
        FUN_00569040(iStack_2c,_DAT_02c8ad4c);
        fVar1 = fStack_144;
        fStack_3c = fStack_120;
        afStack_5c[(uint)bVar9 * -2 + 9] = afStack_1b0[(uint)bVar9 * -2 + 0x25];
        afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
             afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x26];
        fStack_90 = fVar1 - fStack_3c;
        fStack_8c = fStack_140 - fStack_38;
        fStack_88 = fStack_13c - fStack_34;
        afStack_150[0] = fVar1 - fStack_3c;
        afStack_1b0[(uint)bVar9 * -2 + 0x19] = afStack_1b0[(uint)bVar9 * -2 + 0x49];
        afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1a] =
             afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x4a];
        FUN_005a7520(afStack_1b0 + 0x18);
        iVar2 = iStack_2c;
        uStack_168 = uStack_c0;
        afStack_1b0[(uint)bVar9 * -2 + 0x13] = afStack_1b0[(uint)bVar9 * -2 + 0x3d];
        afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x14] =
             afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3e];
        fStack_28 = *(float *)(iVar2 + 8);
        if (_DAT_005f7fa0 <= fStack_28) {
          fStack_24 = 1.0 - (fStack_28 + _DAT_005f7fa4) * _DAT_005f7fa8;
          if (fStack_24 < 0.0) {
            fStack_24 = 0.0;
          }
        }
        else {
          fStack_24 = fStack_28 * _DAT_005f7fa8;
        }
        FUN_005b7af0(uStack_168);
        afStack_184[0] = (float)uStack_1b4;
        afStack_1b0[(uint)bVar9 * -2 + 0xc] = afStack_1b0[(uint)bVar9 * -2];
        afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
             afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        (afStack_1b0 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd)[(uint)bVar9 * -2 + 1] =
             (afStack_1b0 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
        iStack_2c = param_1 + 0x158;
        FUN_005695e0(iStack_2c,afStack_1b0 + 0xb,fStack_24,_DAT_02c8ad50,&LAB_00567360);
        FUN_005b7b30(uStack_164);
        fVar1 = fStack_24;
        iVar2 = iStack_2c;
        afStack_194[0] = afStack_1b0[3];
        afStack_1b0[(uint)bVar9 * -2 + 8] = afStack_1b0[(uint)bVar9 * -2 + 4];
        afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9] =
             afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
        (afStack_1b0 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1] =
             (afStack_1b0 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
        FUN_005695e0(iVar2,afStack_1b0 + 7,fVar1,_DAT_02c8ad4c,&LAB_00567360);
      }
    }
    fVar1 = param_2 / _DAT_00606df8 + *(float *)(param_1 + 0xc270);
    *(float *)(param_1 + 0xc270) = fVar1;
    if (1.0 < fVar1) {
      *(uint *)(param_1 + 0xc270) = 0x3f800000;
    }
    FUN_0042e160(param_1);
    FUN_005675a0(param_1 + 0x158);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
    FUN_00433e80(param_1,param_2);
  }
  return;
}
