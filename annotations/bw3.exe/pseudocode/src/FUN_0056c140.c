// Name: FUN_0056c140
// Address: 0056c140
// Address Range: [[0056c140, 0056c87d]]
// Convention: unknown
// Signature: void FUN_0056c140(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056c140(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  float *pfVar9;
  byte bVar10;
  byte auStack_1e00 [1136];
  float afStack_1990 [1431];
  byte auStack_334 [48];
  uint auStack_304 [12];
  uint auStack_2d4 [12];
  byte auStack_2a4 [48];
  uint auStack_274 [12];
  uint auStack_244 [12];
  uint auStack_214 [12];
  uint auStack_1e4 [12];
  uint uStack_1b4;
  float afStack_1b0 [7];
  uint uStack_194;
  uint auStack_184 [4];
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  float afStack_144 [3];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  uint auStack_12c [3];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  uint auStack_114 [3];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  uint uStack_e4;
  float fStack_d8;
  uint auStack_cc [3];
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  float afStack_b0 [5];
  float fStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  uint uStack_84;
  float afStack_78 [3];
  float fStack_6c;
  float afStack_60 [4];
  float afStack_50 [5];
  uint uStack_3c;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float *pfStack_14;
  
  bVar10 = 0;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar2 != 0) {
    iStack_20 = param_1 + 0xd090;
    fStack_30 = param_2 * *(float *)(param_1 + 0xcdcc);
    pfStack_14 = (float *)(param_1 + 0x20);
    iStack_1c = param_1 + 0x30;
    iStack_18 = param_1 + 0x158;
    while (0.0 < fStack_30) {
      uVar3 = FUN_004fbb70(iStack_18,afStack_50 + 8);
      if (0x22 < uVar3) {
        if (uVar3 < 0x24) {
          iVar2 = *(int *)(param_1 + 0xcde4);
          if ((iVar2 != 0) &&
             (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2), iVar2 == 0)) {
            FUN_0056cbd0(param_1);
            puVar6 = auStack_244;
            puVar8 = auStack_274;
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
              puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
            }
            FUN_00584450(auStack_274);
            auStack_114[0] = uStack_e4;
            afStack_1b0[(uint)bVar10 * -2 + 0x28] = afStack_1b0[(uint)bVar10 * -2 + 0x34];
            afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x29] =
                 afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x35];
            FUN_00408b80(param_1,afStack_1b0 + 0x27);
            fStack_108 = fStack_d8;
            afStack_1b0[(uint)bVar10 * -2 + 0x2b] = afStack_1b0[(uint)bVar10 * -2 + 0x37];
            afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2c] =
                 afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x38];
            iVar2 = *(int *)(param_1 + 0xcde4);
            fStack_120 = fStack_108 - *(float *)(iVar2 + 0x20);
            fStack_11c = fStack_104 - *(float *)(iVar2 + 0x24);
            fStack_118 = fStack_100 - *(float *)(iVar2 + 0x28);
            fStack_174 = fStack_120;
            afStack_1b0[(uint)bVar10 * -2 + 0x10] = afStack_1b0[(uint)bVar10 * -2 + 0x25];
            afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x11] =
                 afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x26];
            if (((ABS(fStack_170) <= (float)_DAT_005d651b) &&
                (fStack_174 * fStack_174 + fStack_16c * fStack_16c <= (float)_DAT_005d6523)) &&
               (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xec))(iVar2,param_1,1), iVar2 != 0))
            {
              *(uint *)(param_1 + 0xd05c) = 0;
              FUN_00583940(auStack_2a4,*(int *)(param_1 + 0xcde4) + 0x20,
                           *(int *)(param_1 + 0xcde4) + 0x30);
              FUN_00583800(auStack_334,pfStack_14,iStack_1c);
              FUN_00584560(auStack_274);
              puVar6 = auStack_214;
              puVar8 = auStack_304;
              for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
                puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
              }
              FUN_005833e0(auStack_2a4,auStack_334,auStack_304);
              puVar6 = auStack_1e4;
              puVar8 = auStack_2d4;
              for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
                puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
              }
              FUN_005833e0(auStack_2d4);
              pfVar7 = afStack_1990 + 0x58b;
              pfVar9 = (float *)(param_1 + 0xd060);
              for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                *pfVar9 = *pfVar7;
                pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
                pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
              }
              uStack_150 = 0x3e6b395c;
              uStack_148 = 0xbf44b945;
              uStack_14c = 0x3dcf14db;
              afStack_60[0] = -2.44619;
              auStack_cc[0] = 0x3e6b395c;
              afStack_1b0[(uint)bVar10 * -2 + 0x3a] = afStack_1b0[(uint)bVar10 * -2 + 0x19];
              afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x3b] =
                   afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1a];
              afStack_60[1] = -1.91555;
              afStack_60[2] = -0.767692;
              FUN_00583940(iStack_20,afStack_b0 + 0x14,afStack_1b0 + 0x39);
            }
          }
        }
        else if ((uVar3 == 0x5dc) && (iVar2 = *(int *)(param_1 + 0xcde4), iVar2 != 0)) {
          (**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2);
        }
      }
    }
    iVar2 = FUN_004fc070(iStack_18);
    if ((*(int *)(iVar2 + 0x24) != 0) && (*(int *)(iVar2 + 0x24) == 1)) {
      iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      *(int *)(param_1 + 0xcde4) = iVar2;
      if ((iVar2 != 0) &&
         ((iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2), iVar2 < 1 &&
          (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))
                             (*(int *)(param_1 + 0xcde4)), iVar2 = iStack_18, iVar4 == 0)))) {
        if (_DAT_02cfd7a4 == 0) {
          FUN_0054f850(iStack_18,auStack_1e00);
          uVar5 = FUN_004fc310(iVar2,"attack_nocollision",1);
          uVar5 = FUN_004fb9c0(uVar5);
          FUN_0054c180(iVar2,uVar5,0x41f00000);
          FUN_0054dbd0(iVar2,_DAT_02cfd798);
          auStack_12c[0] = uStack_3c;
          afStack_1b0[(uint)bVar10 * -2 + 0x22] = afStack_50[(uint)bVar10 * -2 + 6];
          afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x23] =
               afStack_50[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
          FUN_0054f920(iStack_18,auStack_1e00);
          *(uint *)(param_1 + 0x30) = 0;
          *(uint *)(param_1 + 0x38) = 0;
          iVar2 = _DAT_01d5ba14;
          *(uint *)(param_1 + 0x34) = 0xbfc90fdb;
          iVar2 = *(int *)(iVar2 * 4 + 0x1d5ba04);
          *pfStack_14 = *(float *)(iVar2 + 0x20);
          pfStack_14[1] = *(float *)(iVar2 + 0x24);
          pfStack_14[2] = *(float *)(iVar2 + 0x28);
          pfStack_14[3] = *(float *)(iVar2 + 0x2c);
          *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + _DAT_005d650b;
          FUN_0045b550(param_1 + 0x3c,iStack_1c);
          FUN_00408b00(param_1,afStack_1b0 + 0x21);
          pfVar7 = pfStack_14;
          fStack_fc = fStack_9c;
          afStack_1b0[(uint)bVar10 * -2 + 0x2e] = afStack_b0[(uint)bVar10 * -2 + 6];
          afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2f] =
               afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
          *pfVar7 = *pfVar7 - fStack_fc;
          pfVar7[1] = pfVar7[1] - fStack_f8;
          pfVar7[2] = pfVar7[2] - fStack_f4;
          uStack_c0 = 0;
          uStack_b8 = 0xbf800000;
          uStack_bc = 0;
          FUN_00408b00(param_1,afStack_1b0 + 0x3c);
          pfVar7 = pfStack_14;
          afStack_60[3] = fStack_6c;
          afStack_50[(uint)bVar10 * -2] = afStack_b0[(uint)bVar10 * -2 + 0x12];
          afStack_50[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
          _DAT_02cfd7a4 = 1;
          *pfVar7 = *pfVar7 - afStack_60[3];
          pfVar7[1] = pfVar7[1] - afStack_50[0];
          pfVar7[2] = pfVar7[2] - afStack_50[1];
        }
        uVar5 = FUN_0054eac0(*(int *)(param_1 + 0xcde4) + 0x158);
        uVar5 = FUN_00548090(uVar5,"Bip01 Pelvis",1);
        FUN_0054dbd0(*(int *)(param_1 + 0xcde4) + 0x158,uVar5);
        afStack_78[0] = afStack_50[2];
        afStack_b0[(uint)bVar10 * -2 + 0xf] = afStack_50[(uint)bVar10 * -2 + 3];
        afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
             afStack_50[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        FUN_00408bf0(param_1,afStack_b0 + 0xe);
        uStack_15c = uStack_84;
        afStack_1b0[(uint)bVar10 * -2 + 0x16] = afStack_b0[(uint)bVar10 * -2 + 0xc];
        afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x17] =
             afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
        if ((float *)(param_1 + 0xd0c0) != afStack_1b0 + 0x15) {
          *(float *)(param_1 + 0xd0c0) = uStack_15c;
          *(uint *)(param_1 + 0xd0c4) = uStack_158;
          *(uint *)(param_1 + 0xd0c8) = uStack_154;
        }
        pfVar7 = (float *)(param_1 + 0xd0c4 + (uint)bVar10 * -8);
        fStack_138 = *(float *)(param_1 + 0xd0c0);
        afStack_1b0[(uint)bVar10 * -2 + 0x1f] = *pfVar7;
        afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x20] = pfVar7[(uint)bVar10 * -2 + 1];
        iStack_2c = param_1 + 0x158;
        FUN_0054dbd0(iStack_2c,_DAT_02cfd79c);
        fVar1 = fStack_138;
        fStack_90 = fStack_168;
        afStack_b0[(uint)bVar10 * -2 + 9] = afStack_1b0[(uint)bVar10 * -2 + 0x13];
        afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x14];
        fStack_f0 = fVar1 - fStack_90;
        fStack_ec = fStack_134 - fStack_8c;
        fStack_e8 = fStack_130 - fStack_88;
        afStack_144[0] = fVar1 - fStack_90;
        afStack_1b0[(uint)bVar10 * -2 + 0x1c] = afStack_1b0[(uint)bVar10 * -2 + 0x31];
        afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1d] =
             afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x32];
        FUN_00576250(afStack_1b0 + 0x1b);
        iVar2 = iStack_2c;
        afStack_b0[2] = (float)uStack_b4;
        afStack_b0[(uint)bVar10 * -2 + 3] = afStack_b0[(uint)bVar10 * -2];
        afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        fStack_28 = *(float *)(iVar2 + 8);
        if (_DAT_005d650f <= fStack_28) {
          fStack_24 = 1.0 - (fStack_28 + _DAT_005d6513) * _DAT_005d6517;
          if (fStack_24 < 0.0) {
            fStack_24 = 0.0;
          }
        }
        else {
          fStack_24 = fStack_28 * _DAT_005d6517;
        }
        FUN_00585cd0(afStack_b0[2]);
        auStack_184[0] = afStack_1b0[3];
        afStack_1b0[(uint)bVar10 * -2 + 0xc] = afStack_1b0[(uint)bVar10 * -2 + 4];
        afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
             afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
        (afStack_1b0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd)[(uint)bVar10 * -2 + 1] =
             (afStack_1b0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
        iStack_2c = param_1 + 0x158;
        FUN_0054e170(iStack_2c,afStack_1b0 + 0xb,fStack_24,_DAT_02cfd7a0,&LAB_0054bef0);
        FUN_00585d10(afStack_b0[3]);
        fVar1 = fStack_24;
        iVar2 = iStack_2c;
        uStack_1b4 = uStack_194;
        afStack_1b0[(uint)bVar10 * -2] = afStack_1b0[(uint)bVar10 * -2 + 8];
        afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
        (afStack_1b0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
             (afStack_1b0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1];
        FUN_0054e170(iVar2,&uStack_1b4,fVar1,_DAT_02cfd79c,&LAB_0054bef0);
      }
    }
    fVar1 = param_2 / _DAT_005e54f8 + *(float *)(param_1 + 0xd05c);
    *(float *)(param_1 + 0xd05c) = fVar1;
    if (1.0 < fVar1) {
      *(uint *)(param_1 + 0xd05c) = 0x3f800000;
    }
    FUN_0042cd30(param_1);
    FUN_0054c130(param_1 + 0x158);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
    FUN_00433350(param_1,param_2);
  }
  return;
}
