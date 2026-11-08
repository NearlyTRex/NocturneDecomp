// Name: FUN_004d6a90
// Address: 004d6a90
// Address Range: [[004d6a90, 004d793e]]
// Convention: unknown
// Signature: void FUN_004d6a90(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d6a90(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_11f4 [982];
  float *pfVar9;
  uint uVar10;
  byte *puVar11;
  uint uVar12;
  byte auStack_284 [4];
  float fStack_280;
  int iStack_250;
  int iStack_24c;
  byte auStack_248 [4];
  float fStack_244;
  int iStack_214;
  int iStack_210;
  float fStack_20c;
  float afStack_208 [4];
  float fStack_1f8;
  uint uStack_1f4;
  float fStack_1f0;
  uint uStack_1e8;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  uint uStack_1d0;
  float fStack_1cc;
  uint uStack_1c4;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  uint uStack_1a8;
  float fStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  float fStack_198;
  uint uStack_194;
  float afStack_190 [5];
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float afStack_170 [3];
  float afStack_164 [3];
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [3];
  uint uStack_134;
  float afStack_128 [3];
  uint uStack_11c;
  uint uStack_110;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float afStack_f8 [3];
  uint uStack_ec;
  float fStack_e8;
  uint uStack_e0;
  float afStack_d4 [3];
  float fStack_c8;
  float afStack_bc [3];
  float fStack_b0;
  float afStack_ac [5];
  uint uStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [3];
  uint uStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  float afStack_48 [2];
  float fStack_40;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd084) * 4) == 0) &&
     (iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1), iVar3 == 0)) {
    FUN_004fc0d0(param_1 + 0x158,6,1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  afStack_48[0] = param_2 * *(float *)(param_1 + 0xcdcc);
  iStack_1c = param_1 + 0x158;
LAB_004d6b03:
  if (0.0 < afStack_48[0]) {
    uVar4 = FUN_004fbb70(iStack_1c,afStack_48);
    if (uVar4 < 0x29a) {
      FUN_00433fb0(param_1,uVar4);
    }
    else {
      if (uVar4 < 0x29b) {
        iVar3 = *(int *)(param_1 + 0xcde4);
        iStack_18 = 1;
        if ((((iVar3 != 0) &&
             (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3), iVar3 == 0)) &&
            ((iStack_18 == 0 ||
             (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))
                                (*(int *)(param_1 + 0xcde4)), iVar3 == 0)))) &&
           ((iStack_18 == 0 ||
            (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xe8))
                               (*(int *)(param_1 + 0xcde4),param_1,0), iVar3 != 0)))) {
          if (iStack_18 != 0) {
            fStack_50 = 0x40000000;
            afStack_bc[0] = 0.0;
            afStack_bc[1] = 0.0;
            afStack_bc[2] = 0x40000000;
            FUN_00408b80(param_1,afStack_190 + 0x35);
            fStack_14c = fStack_c8;
            afStack_190[(uint)bVar7 * -2 + 0x12] = afStack_190[(uint)bVar7 * -2 + 0x33];
            afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
                 afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x34];
            fVar1 = fStack_14c - *(float *)(*(int *)(param_1 + 0xcde4) + 0x20);
            fVar2 = fStack_144 - *(float *)(*(int *)(param_1 + 0xcde4) + 0x28);
            if ((float)_DAT_005c5630 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
              iStack_18 = 0;
            }
            if ((float)_DAT_005c5638 <
                ABS(fStack_148 - *(float *)(*(int *)(param_1 + 0xcde4) + 0x24))) goto LAB_004d6b7a;
          }
          if (((iStack_18 == 0) ||
              (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xec))
                                 (*(int *)(param_1 + 0xcde4),param_1,0), iVar3 != 0)) &&
             (iStack_18 != 0)) {
            FUN_004fc0d0(iStack_1c,9,1);
            goto LAB_004d6b03;
          }
        }
LAB_004d6b7a:
        FUN_004fc0d0(iStack_1c,0,1);
        goto LAB_004d6b03;
      }
      if (uVar4 == 0x29b) {
        if (*(int *)(param_1 + 0xcde4) == 0) {
          FUN_004fc0d0(iStack_1c,0,1);
        }
        else {
          FUN_0054dbd0(iStack_1c,_DAT_01d5bc0c);
          pfVar9 = afStack_ac + 0xe;
          afStack_74[0] = (float)uStack_1c4;
          afStack_ac[(uint)bVar7 * -2 + 0xf] = afStack_208[(uint)bVar7 * -2 + 0x12];
          afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
               afStack_208[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
          FUN_00408b80(param_1,pfVar9);
          puVar11 = auStack_284;
          uStack_194 = uStack_110;
          afStack_190[(uint)bVar7 * -2] = afStack_190[(uint)bVar7 * -2 + 0x21];
          afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22];
          afStack_ac[2] = (float)uStack_194;
          afStack_ac[(uint)bVar7 * -2 + 3] = afStack_190[(uint)bVar7 * -2];
          afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          FUN_0042abb0(puVar11);
          fStack_280 = (float)FUN_0040ce40(0x40a00000,0x41200000);
          iStack_250 = param_1;
          iStack_24c = param_1;
          fStack_14 = fStack_280;
          (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0x108))
                    (*(int *)(param_1 + 0xcde4),auStack_284);
          fVar8 = (float10)fStack_280 * (float10)_DAT_005c5620 * (float10)_DAT_005c5628;
          FUN_005a3120(0);
          iStack_4c = (int)ROUND(fVar8);
          FUN_004ce9c0(0x01D22E44,afStack_ac + 2,0,iStack_4c);
          iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0x10c))
                            (*(int *)(param_1 + 0xcde4));
          if (iVar3 < 1) {
            (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"ghoul-eat-?.wav");
          }
          else {
            (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf0))
                      (*(int *)(param_1 + 0xcde4));
            FUN_004fc0d0(iStack_1c,0,1);
          }
        }
      }
      else {
        FUN_00433fb0(param_1,uVar4);
      }
    }
    goto LAB_004d6b03;
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  iStack_20 = param_1 + 0x158;
  iVar3 = FUN_004fc070(iStack_20);
  iVar3 = *(int *)(iVar3 + 0x24);
  iStack_2c = iVar3;
  iVar5 = FUN_00431660(param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar3) {
    case 0:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
      if (iVar3 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        iVar3 = *(int *)(param_1 + 0xcde4);
        if (iVar3 == 0) {
          iVar3 = FUN_00489ff0(param_1,param_2);
          if (iVar3 != 0) {
            FUN_004fc0d0(iStack_20,1,1);
          }
        }
        else if (*(int *)(iVar3 + 0x26fc) == 0) {
          fStack_80 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_7c = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_78 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_1b8 = fStack_80;
          afStack_208[(uint)bVar7 * -2 + 0x15] = afStack_ac[(uint)bVar7 * -2 + 0xc];
          afStack_208[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
               afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
          fStack_40 = SQRT(fStack_1b0 * fStack_1b0 +
                           fStack_1b8 * fStack_1b8 + fStack_1b4 * fStack_1b4);
          fStack_34 = fStack_40;
          if (fStack_40 < 0x40000000) {
            FUN_00576250(afStack_208 + 0x14);
            uStack_ec = uStack_e0;
            afStack_190[(uint)bVar7 * -2 + 0x2a] = afStack_190[(uint)bVar7 * -2 + 0x2d];
            afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2b] =
                 afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2e];
            fStack_14 = (float)FUN_0040cfa0(fStack_e8 - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005c5618) {
              FUN_004fc0d0(iStack_20,4,1);
            }
          }
          if (fStack_34 < *(float *)(param_1 + 0xcddc)) {
            if (_DAT_005e1ef8 <= fStack_34) {
              FUN_004fc0d0(param_1 + 0x158,2,1);
            }
            else {
              FUN_004fc0d0(param_1 + 0x158,1,1);
            }
          }
        }
        else {
          FUN_004fc0d0(iStack_20,3,1);
        }
      }
      else {
        iVar3 = FUN_0040cf40(0x3dcccccd);
        if (iVar3 != 0) {
          FUN_004fc0d0(param_1 + 0x158,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      fVar1 = 0x40000000;
      iStack_24 = param_1 + 0x158;
      if (*(int *)(param_1 + 0xcde4) == 0) {
        iVar3 = FUN_00489ff0(param_1,param_2);
        if (iVar3 == 0) {
          FUN_004fc0d0(iStack_24,0,1);
        }
        else {
          FUN_004fc0d0(iStack_24,1,1);
        }
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0xcde4) + 0x26fc);
        if (iVar3 == 0) {
          fStack_30 = 0x40000000;
          *(uint *)(param_1 + 0x24a4) = 0;
          *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
          *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
          fStack_198 = fVar1;
          iStack_1a0 = iVar3;
          iStack_19c = iVar3;
          uVar10 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                             (*(int *)(param_1 + 0xcde4),&iStack_1a0,0x3f000000,0x3e32b8c2);
          iVar3 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar10);
          if (-1 < iVar3) {
            iVar3 = *(int *)(param_1 + 0xcde4);
            fStack_8c = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
            fStack_88 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
            fStack_84 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
            fStack_1ac = fStack_8c;
            afStack_208[(uint)bVar7 * -2 + 0x18] = afStack_ac[(uint)bVar7 * -2 + 9];
            afStack_208[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
                 afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
            fStack_3c = SQRT(fStack_1a4 * fStack_1a4 + fStack_1ac * fStack_1ac);
            uStack_1a8 = 0;
            fStack_28 = fStack_3c;
            if ((_DAT_005e1ef8 < fStack_3c) && (iStack_2c == 1)) {
              FUN_004fc0d0(iStack_24,2,1);
            }
            if (((fStack_28 < _DAT_005e1efc) &&
                (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))
                                   (*(int *)(param_1 + 0xcde4)), iVar3 == 0)) &&
               (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd088) * 4) != 0)) {
              iVar3 = *(int *)(param_1 + 0xcde4);
              afStack_208[2] = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
              afStack_208[3] = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
              fStack_1f8 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
              fStack_b0 = afStack_208[2];
              afStack_ac[(uint)bVar7 * -2] = afStack_208[(uint)bVar7 * -2 + 3];
              afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                   afStack_208[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
              FUN_00576250(&fStack_b0);
              uStack_1d0 = uStack_98;
              afStack_208[(uint)bVar7 * -2 + 0xf] = afStack_ac[(uint)bVar7 * -2 + 6];
              afStack_208[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
                   afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
              fStack_14 = (float)FUN_0040cfa0(fStack_1cc - *(float *)(param_1 + 0x34));
              if ((ABS(fStack_14) < (float)_DAT_005c5618) &&
                 (iVar3 = FUN_0040cf40(0x3dcccccd), iVar3 != 0)) {
                FUN_004fc0d0(param_1 + 0x158,8,1);
                iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd054));
                if (iVar3 == 0) {
                  uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                     (param_1,"imp-jump?.wav");
                  *(uint *)(param_1 + 0xd054) = uVar10;
                }
              }
            }
            if ((fStack_28 <= fStack_30) && (*(float *)(param_1 + 0xcde0) <= 0.0)) {
              iVar3 = *(int *)(param_1 + 0xcde4);
              fStack_5c = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
              fStack_58 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
              fStack_54 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
              afStack_f8[0] = fStack_5c;
              afStack_190[(uint)bVar7 * -2 + 0x27] = afStack_ac[(uint)bVar7 * -2 + 0x15];
              afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x28] =
                   afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
              FUN_00576250(afStack_190 + 0x26);
              uStack_1f4 = uStack_1e8;
              afStack_208[(uint)bVar7 * -2 + 6] = afStack_208[(uint)bVar7 * -2 + 9];
              afStack_208[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                   afStack_208[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
              fStack_14 = (float)FUN_0040cfa0(fStack_1f0 - *(float *)(param_1 + 0x34));
              if (ABS(fStack_14) < (float)_DAT_005c5618) {
                FUN_004fc0d0(param_1 + 0x158,4,1);
                *(uint *)(param_1 + 0xcde0) = 0x40800000;
              }
            }
            if (*(float *)(param_1 + 0xcddc) < fStack_28) {
              FUN_004fc0d0(param_1 + 0x158,0,1);
            }
            fVar1 = *(float *)(param_1 + 0xd05c) - param_2;
            *(float *)(param_1 + 0xd05c) = fVar1;
            if (fVar1 < 0.0) {
              *(uint *)(param_1 + 0xd05c) = 0;
              iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd054));
              if ((iVar3 == 0) &&
                 (iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd058)), iVar3 == 0)) {
                uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                   (param_1,"imp-laugh?.wav");
                *(uint *)(param_1 + 0xd054) = uVar10;
                fStack_14 = (float)FUN_0040ce40(0x41200000,0x41a00000);
                *(float *)(param_1 + 0xd05c) = fStack_14;
              }
            }
          }
        }
        else {
          FUN_004fc0d0(iStack_24,3,1);
        }
      }
      break;
    case 3:
      fVar1 = *(float *)(param_1 + 0xd05c) - param_2 * _DAT_005c5610;
      *(float *)(param_1 + 0xd05c) = fVar1;
      if (fVar1 < 0.0) {
        *(uint *)(param_1 + 0xd05c) = 0;
        iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd054));
        if ((iVar3 == 0) && (iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd058)), iVar3 == 0)) {
          uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"imp-laugh?.wav")
          ;
          *(uint *)(param_1 + 0xd054) = uVar10;
          fStack_14 = (float)FUN_0040ce40(0x41200000,0x41a00000);
          *(float *)(param_1 + 0xd05c) = fStack_14;
        }
      }
      break;
    case 4:
      FUN_0042abb0(auStack_248);
      fStack_244 = (float)FUN_0040ce40(0x40400000,0x40a00000);
      iStack_214 = param_1;
      iStack_210 = param_1;
      fStack_14 = fStack_244;
      FUN_00583260(&DAT_02cfd900,param_1 + 0xfd8 + _DAT_01d5bc14 * 0x30,0x3ecccccd,auStack_248);
      pfVar9 = afStack_190 + 8;
      afStack_170[0] = afStack_190[2];
      afStack_190[(uint)bVar7 * -2 + 9] = afStack_190[(uint)bVar7 * -2 + 3];
      afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      FUN_00408b80(param_1,pfVar9);
      pfVar9 = afStack_190 + 0xb;
      afStack_164[0] = (float)uStack_11c;
      afStack_190[(uint)bVar7 * -2 + 0xc] = afStack_190[(uint)bVar7 * -2 + 0x1e];
      iVar3 = param_1;
      afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
           afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f];
      iVar3 = FUN_004893f0(iVar3,pfVar9);
      if (iVar3 != 0) {
        iVar5 = 0;
        iVar3 = 0;
        while (iVar3 < *(int *)(0x01ED78C8 + 0x150fec)) {
          iVar6 = FUN_0040c840(*(uint *)(iVar5 + 0x150ff0 + 0x01ED78C8),_DAT_01d5bc74);
          if (((iVar6 == 0) || (iVar6 == param_1)) ||
             (*(int *)(param_1 + 0xcde4) != *(int *)(iVar6 + 0xcde4))) {
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + 4;
          }
          else {
            FUN_004fc0d0(iVar6 + 0x158,3,1);
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + 4;
          }
        }
      }
      break;
    case 7:
      if ((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_0054dbd0(iStack_20,0);
        pfVar9 = afStack_190 + 0x1a;
        afStack_128[0] = (float)uStack_134;
        afStack_190[(uint)bVar7 * -2 + 0x1b] = afStack_190[(uint)bVar7 * -2 + 0x18];
        afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c] =
             afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
        FUN_00408b80(param_1,pfVar9);
        uVar12 = 0;
        pfVar9 = afStack_190 + 0x14;
        afStack_140[0] = (float)uStack_68;
        afStack_190[(uint)bVar7 * -2 + 0x15] = afStack_ac[(uint)bVar7 * -2 + 0x12];
        uVar10 = 0x01D22E44;
        afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
             afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
        FUN_004cec40(uVar10,pfVar9,uVar12);
        *(uint *)(param_1 + 0xcdd0) = 1;
      }
      break;
    case 9:
      iVar3 = *(int *)(param_1 + 0xcde4);
      if (iVar3 == 0) {
        FUN_004fc0d0(iStack_20,5,1);
      }
      else {
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
        if (iVar3 == 0) {
          iVar3 = *(int *)(*(int *)(param_1 + 0xcde4) + 0x26fc);
          if (param_1 == iVar3) {
            fVar1 = (float)_DAT_005c5608;
            *(float *)(iVar3 + 0x20) =
                 *(float *)(*(int *)(param_1 + 0xcde4) + 0x20) - *(float *)(iVar3 + 0x44) * fVar1;
            *(float *)(iVar3 + 0x28) =
                 *(float *)(*(int *)(iVar3 + 0xcde4) + 0x28) - *(float *)(iVar3 + 0x5c) * fVar1;
          }
          else {
            FUN_004fc0d0(iStack_20,5,1);
          }
        }
        else {
          FUN_004fc0d0(iStack_20,5,1);
        }
      }
    }
    goto switchD_004d7938_caseD_5;
  }
  uVar4 = *(uint *)(param_1 + 0x273c);
  if (uVar4 < 2) {
    if (uVar4 == 1) {
LAB_004d6ea3:
      uVar10 = 1;
    }
    else {
LAB_004d7078:
      uVar10 = 0;
    }
    FUN_004fc0d0(param_1 + 0x158,uVar10,1);
  }
  else {
    if (uVar4 < 3) goto LAB_004d6ea3;
    if (uVar4 != 3) goto LAB_004d7078;
    FUN_004fc0d0(param_1 + 0x158,0,1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_004d7938_caseD_5:
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  iVar3 = FUN_0042ccf0(param_1);
  if ((iVar3 != 0) && (iStack_2c != 9)) {
    FUN_0042c1e0(param_1,param_2);
    fStack_20c = *(float *)(param_1 + 0x2518) * param_2;
    afStack_208[0] = *(float *)(param_1 + 0x251c) * param_2;
    afStack_208[1] = *(float *)(param_1 + 0x2520) * param_2;
    fStack_158 = fStack_20c;
    afStack_190[(uint)bVar7 * -2 + 0xf] = afStack_208[(uint)bVar7 * -2];
    afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
         afStack_208[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    fStack_104 = fStack_158 + *(float *)(param_1 + 0x250c);
    fStack_100 = fStack_154 + *(float *)(param_1 + 0x2510);
    fStack_fc = fStack_150 + *(float *)(param_1 + 0x2514);
    fStack_1dc = fStack_104;
    afStack_208[(uint)bVar7 * -2 + 0xc] = afStack_190[(uint)bVar7 * -2 + 0x24];
    afStack_208[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
         afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x25];
    fStack_17c = fStack_1dc + *(float *)(param_1 + 0x249c);
    fStack_178 = fStack_1d8 + *(float *)(param_1 + 0x24a0);
    fStack_174 = fStack_1d4 + *(float *)(param_1 + 0x24a4);
    afStack_d4[0] = fStack_17c;
    afStack_190[(uint)bVar7 * -2 + 0x30] = afStack_190[(uint)bVar7 * -2 + 6];
    afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x31] =
         afStack_190[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042c230(param_1,afStack_190 + 0x2f);
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  return;
}
