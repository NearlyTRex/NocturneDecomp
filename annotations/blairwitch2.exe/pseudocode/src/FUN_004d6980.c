// Name: FUN_004d6980
// Address: 004d6980
// Address Range: [[004d6980, 004d781e]]
// Convention: unknown
// Signature: void FUN_004d6980(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d6980(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_11f0 [982];
  float *pfVar9;
  uint *puVar10;
  uint uVar11;
  byte *puVar12;
  uint uVar13;
  byte auStack_280 [4];
  float fStack_27c;
  int iStack_24c;
  int iStack_248;
  byte auStack_244 [4];
  float fStack_240;
  int iStack_210;
  int iStack_20c;
  uint uStack_208;
  float afStack_204 [4];
  float fStack_1f4;
  uint uStack_1f0;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  uint uStack_1d8;
  float fStack_1d4;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  uint uStack_1bc;
  float fStack_1b8;
  float afStack_1b4 [3];
  int iStack_1a8;
  int iStack_1a4;
  float fStack_1a0;
  uint uStack_19c;
  float afStack_198 [5];
  float afStack_184 [3];
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float afStack_13c [3];
  uint uStack_130;
  uint uStack_124;
  uint uStack_118;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float afStack_100 [3];
  uint uStack_f4;
  float afStack_f0 [5];
  float afStack_dc [3];
  float afStack_d0 [3];
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float afStack_b8 [3];
  float afStack_ac [3];
  uint uStack_a0;
  uint uStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  float fStack_6c;
  uint uStack_64;
  float afStack_58 [3];
  int iStack_4c;
  float fStack_44;
  float fStack_40;
  float afStack_3c [2];
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
  iVar3 = FUN_004244b0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b28) * 4) == 0) &&
     (iVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1), iVar3 == 0)) {
    FUN_00503620(param_1 + 0x2b4,6,1);
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  afStack_3c[0] = param_2 * *(float *)(param_1 + 0x10a60);
  iStack_1c = param_1 + 0x2b4;
LAB_004d69ec:
  if (0.0 < afStack_3c[0]) {
    uVar4 = FUN_005030c0(iStack_1c,afStack_3c);
    if (uVar4 < 0x29a) {
      FUN_0042aa00(param_1,uVar4);
    }
    else {
      if (uVar4 < 0x29b) {
        iVar3 = *(int *)(param_1 + 0x10a78);
        iStack_18 = 1;
        if ((((iVar3 != 0) &&
             (iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3), iVar3 == 0)) &&
            ((iStack_18 == 0 ||
             (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xfc))
                                (*(int *)(param_1 + 0x10a78)), iVar3 == 0)))) &&
           ((iStack_18 == 0 ||
            (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xf0))
                               (*(int *)(param_1 + 0x10a78),param_1,0), iVar3 != 0)))) {
          if (iStack_18 != 0) {
            afStack_100[2] = 0x40000000;
            afStack_100[0] = 0.0;
            afStack_100[1] = 0.0;
            FUN_00408d70(param_1,afStack_198 + 0x26);
            fStack_154 = fStack_16c;
            afStack_198[(uint)bVar7 * -2 + 0x12] = afStack_198[(uint)bVar7 * -2 + 0xc];
            afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
                 afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
            fVar1 = fStack_154 - *(float *)(*(int *)(param_1 + 0x10a78) + 0x20);
            fVar2 = fStack_14c - *(float *)(*(int *)(param_1 + 0x10a78) + 0x28);
            if ((float)_DAT_005dab09 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
              iStack_18 = 0;
            }
            if ((float)_DAT_005dab11 <
                ABS(fStack_150 - *(float *)(*(int *)(param_1 + 0x10a78) + 0x24))) goto LAB_004d6a63;
          }
          if (((iStack_18 == 0) ||
              (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xf4))
                                 (*(int *)(param_1 + 0x10a78),param_1,0), iVar3 != 0)) &&
             (iStack_18 != 0)) {
            FUN_00503620(iStack_1c,9,1);
            goto LAB_004d69ec;
          }
        }
LAB_004d6a63:
        FUN_00503620(iStack_1c,0,1);
        goto LAB_004d69ec;
      }
      if (uVar4 == 0x29b) {
        if (*(int *)(param_1 + 0x10a78) == 0) {
          FUN_00503620(iStack_1c,0,1);
        }
        else {
          FUN_005469a0(iStack_1c,_DAT_01cee138);
          pfVar9 = afStack_f0 + 8;
          afStack_d0[0] = (float)uStack_130;
          afStack_f0[(uint)bVar7 * -2 + 9] = afStack_198[(uint)bVar7 * -2 + 0x1b];
          afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
               afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
          FUN_00408d70(param_1,pfVar9);
          puVar12 = auStack_244;
          uStack_19c = uStack_118;
          afStack_198[(uint)bVar7 * -2] = afStack_198[(uint)bVar7 * -2 + 0x21];
          afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22];
          afStack_1b4[0] = (float)uStack_19c;
          afStack_204[(uint)bVar7 * -2 + 0x15] = afStack_198[(uint)bVar7 * -2];
          afStack_204[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
               afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          FUN_004222d0(puVar12);
          fStack_240 = (float)FUN_0040cf60(0x40a00000,0x41200000);
          iStack_210 = param_1;
          iStack_20c = param_1;
          fStack_14 = fStack_240;
          (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0x110))
                    (*(int *)(param_1 + 0x10a78),auStack_244);
          fVar8 = (float10)fStack_240 * (float10)_DAT_005daaf9 * (float10)_DAT_005dab01;
          FUN_005b7ff0(0);
          iStack_4c = (int)ROUND(fVar8);
          FUN_004c9850(0x01CB8284,afStack_204 + 0x14,0,iStack_4c);
          iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0x114))
                            (*(int *)(param_1 + 0x10a78));
          if (iVar3 < 1) {
            (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"ghoul-eat-?.wav");
          }
          else {
            (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xf8))
                      (*(int *)(param_1 + 0x10a78));
            FUN_00503620(iStack_1c,0,1);
          }
        }
      }
      else {
        FUN_0042aa00(param_1,uVar4);
      }
    }
    goto LAB_004d69ec;
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
  iStack_20 = param_1 + 0x2b4;
  iVar3 = FUN_005035c0(iStack_20);
  iVar3 = *(int *)(iVar3 + 0x24);
  iStack_2c = iVar3;
  iVar5 = FUN_004287f0(param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar3) {
    case 0:
      iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3);
      if (iVar3 == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
        iVar3 = *(int *)(param_1 + 0x10a78);
        if (iVar3 == 0) {
          iVar3 = FUN_00488970(param_1,param_2);
          if (iVar3 != 0) {
            FUN_00503620(iStack_20,1,1);
          }
        }
        else if (*(int *)(iVar3 + 0x276c) == 0) {
          fStack_c4 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_c0 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_bc = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_88 = fStack_c4;
          afStack_f0[(uint)bVar7 * -2 + 0x1b] = afStack_f0[(uint)bVar7 * -2 + 0xc];
          afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c] =
               afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
          fStack_44 = SQRT(fStack_80 * fStack_80 + fStack_88 * fStack_88 + fStack_84 * fStack_84);
          fStack_34 = fStack_44;
          if (fStack_44 < 0x40000000) {
            FUN_005838f0(afStack_f0 + 0x1a);
            uStack_f4 = afStack_f0[2];
            afStack_f0[(uint)bVar7 * -2] = afStack_f0[(uint)bVar7 * -2 + 3];
            afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            fStack_14 = (float)FUN_0040d0c0(afStack_f0[0] - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005daaf1) {
              FUN_00503620(iStack_20,4,1);
            }
          }
          if (fStack_34 < *(float *)(param_1 + 0x10a70)) {
            if (_DAT_005f8d68 <= fStack_34) {
              FUN_00503620(param_1 + 0x2b4,2,1);
            }
            else {
              FUN_00503620(param_1 + 0x2b4,1,1);
            }
          }
        }
        else {
          FUN_00503620(iStack_20,3,1);
        }
      }
      else {
        iVar3 = FUN_0040d060(0x3dcccccd);
        if (iVar3 != 0) {
          FUN_00503620(param_1 + 0x2b4,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      fVar1 = 0x40000000;
      iStack_24 = param_1 + 0x2b4;
      if (*(int *)(param_1 + 0x10a78) == 0) {
        iVar3 = FUN_00488970(param_1,param_2);
        if (iVar3 == 0) {
          FUN_00503620(iStack_24,0,1);
        }
        else {
          FUN_00503620(iStack_24,1,1);
        }
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x10a78) + 0x276c);
        if (iVar3 == 0) {
          fStack_30 = 0x40000000;
          *(uint *)(param_1 + 0x2510) = 0;
          *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
          *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
          fStack_1a0 = fVar1;
          iStack_1a8 = iVar3;
          iStack_1a4 = iVar3;
          uVar11 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))
                             (*(int *)(param_1 + 0x10a78),&iStack_1a8,0x3f000000,0x3e32b8c2);
          iVar3 = FUN_00423000(param_1,*(int *)(param_1 + 0x10a78) + 0x20,uVar11);
          if (-1 < iVar3) {
            iVar3 = *(int *)(param_1 + 0x10a78);
            fStack_10c = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
            fStack_108 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
            fStack_104 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
            fStack_1c0 = fStack_10c;
            afStack_204[(uint)bVar7 * -2 + 0x12] = afStack_198[(uint)bVar7 * -2 + 0x24];
            afStack_204[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
                 afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x25];
            fStack_40 = SQRT(fStack_1b8 * fStack_1b8 + fStack_1c0 * fStack_1c0);
            uStack_1bc = 0;
            fStack_28 = fStack_40;
            if ((_DAT_005f8d68 < fStack_40) && (iStack_2c == 1)) {
              FUN_00503620(iStack_24,2,1);
            }
            if (((fStack_28 < _DAT_005f8d6c) &&
                (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xfc))
                                   (*(int *)(param_1 + 0x10a78)), iVar3 == 0)) &&
               (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b2c) * 4) != 0)) {
              iVar3 = *(int *)(param_1 + 0x10a78);
              fStack_148 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
              fStack_144 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
              fStack_140 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
              afStack_b8[0] = fStack_148;
              afStack_f0[(uint)bVar7 * -2 + 0xf] = afStack_198[(uint)bVar7 * -2 + 0x15];
              afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
                   afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
              FUN_005838f0(afStack_f0 + 0xe);
              uStack_1d8 = uStack_94;
              afStack_204[(uint)bVar7 * -2 + 0xc] = afStack_f0[(uint)bVar7 * -2 + 0x18];
              afStack_204[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
                   afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
              fStack_14 = (float)FUN_0040d0c0(fStack_1d4 - *(float *)(param_1 + 0x34));
              if ((ABS(fStack_14) < (float)_DAT_005daaf1) &&
                 (iVar3 = FUN_0040d060(0x3dcccccd), iVar3 != 0)) {
                FUN_00503620(param_1 + 0x2b4,8,1);
                iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10af8));
                if (iVar3 == 0) {
                  uVar11 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                                     (param_1,"imp-jump?.wav");
                  *(uint *)(param_1 + 0x10af8) = uVar11;
                }
              }
            }
            if ((fStack_28 <= fStack_30) && (*(float *)(param_1 + 0x10a74) <= 0.0)) {
              iVar3 = *(int *)(param_1 + 0x10a78);
              fStack_7c = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
              fStack_78 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
              fStack_74 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
              afStack_58[0] = fStack_7c;
              afStack_f0[(uint)bVar7 * -2 + 0x27] = afStack_f0[(uint)bVar7 * -2 + 0x1e];
              afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x28] =
                   afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f];
              FUN_005838f0(afStack_f0 + 0x26);
              uStack_70 = uStack_1f0;
              afStack_f0[(uint)bVar7 * -2 + 0x21] = afStack_204[(uint)bVar7 * -2 + 6];
              afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22] =
                   afStack_204[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
              fStack_14 = (float)FUN_0040d0c0(fStack_6c - *(float *)(param_1 + 0x34));
              if (ABS(fStack_14) < (float)_DAT_005daaf1) {
                FUN_00503620(param_1 + 0x2b4,4,1);
                *(uint *)(param_1 + 0x10a74) = 0x40800000;
              }
            }
            if (*(float *)(param_1 + 0x10a70) < fStack_28) {
              FUN_00503620(param_1 + 0x2b4,0,1);
            }
            fVar1 = *(float *)(param_1 + 0x10b00) - param_2;
            *(float *)(param_1 + 0x10b00) = fVar1;
            if (fVar1 < 0.0) {
              *(uint *)(param_1 + 0x10b00) = 0;
              iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10af8));
              if ((iVar3 == 0) &&
                 (iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10afc)), iVar3 == 0)) {
                uVar11 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                                   (param_1,"imp-laugh?.wav");
                *(uint *)(param_1 + 0x10af8) = uVar11;
                fStack_14 = (float)FUN_0040cf60(0x41200000,0x41a00000);
                *(float *)(param_1 + 0x10b00) = fStack_14;
              }
            }
          }
        }
        else {
          FUN_00503620(iStack_24,3,1);
        }
      }
      break;
    case 3:
      fVar1 = *(float *)(param_1 + 0x10b00) - param_2 * _DAT_005daae9;
      *(float *)(param_1 + 0x10b00) = fVar1;
      if (fVar1 < 0.0) {
        *(uint *)(param_1 + 0x10b00) = 0;
        iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10af8));
        if ((iVar3 == 0) && (iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10afc)), iVar3 == 0))
        {
          uVar11 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"imp-laugh?.wav")
          ;
          *(uint *)(param_1 + 0x10af8) = uVar11;
          fStack_14 = (float)FUN_0040cf60(0x41200000,0x41a00000);
          *(float *)(param_1 + 0x10b00) = fStack_14;
        }
      }
      break;
    case 4:
      FUN_004222d0(auStack_280);
      fStack_27c = (float)FUN_0040cf60(0x40400000,0x40a00000);
      iStack_24c = param_1;
      iStack_248 = param_1;
      fStack_14 = fStack_27c;
      FUN_00591530(&DAT_0265370c,param_1 + 0x1134 + _DAT_01cee140 * 0x30,0x3ecccccd,auStack_280);
      pfVar9 = afStack_198 + 5;
      afStack_184[0] = afStack_198[2];
      afStack_198[(uint)bVar7 * -2 + 6] = afStack_198[(uint)bVar7 * -2 + 3];
      afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      FUN_00408d70(param_1,pfVar9);
      puVar10 = &uStack_208;
      uStack_208 = uStack_124;
      afStack_204[(uint)bVar7 * -2] = afStack_198[(uint)bVar7 * -2 + 0x1e];
      iVar3 = param_1;
      afStack_204[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f];
      iVar3 = FUN_00488110(iVar3,puVar10);
      if (iVar3 != 0) {
        iVar5 = 0;
        iVar3 = 0;
        while (iVar3 < *(int *)(0x01E661B8 + 0x150fec)) {
          iVar6 = FUN_0040c8f0(*(uint *)(iVar5 + 0x150ff0 + 0x01E661B8),_DAT_01cee1a0);
          if (((iVar6 == 0) || (iVar6 == param_1)) ||
             (*(int *)(param_1 + 0x10a78) != *(int *)(iVar6 + 0x10a78))) {
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + 4;
          }
          else {
            FUN_00503620(iVar6 + 0x2b4,3,1);
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + 4;
          }
        }
      }
      break;
    case 7:
      if ((*(int *)(param_1 + 0x10a64) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_005469a0(iStack_20,0);
        pfVar9 = afStack_198 + 0x17;
        afStack_13c[0] = (float)uStack_a0;
        afStack_198[(uint)bVar7 * -2 + 0x18] = afStack_f0[(uint)bVar7 * -2 + 0x15];
        afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
             afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
        FUN_00408d70(param_1,pfVar9);
        uVar13 = 0;
        pfVar9 = afStack_f0 + 0x11;
        afStack_ac[0] = (float)uStack_64;
        afStack_f0[(uint)bVar7 * -2 + 0x12] = afStack_f0[(uint)bVar7 * -2 + 0x24];
        uVar11 = 0x01CB8284;
        afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
             afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x25];
        FUN_004c9ad0(uVar11,pfVar9,uVar13);
        *(uint *)(param_1 + 0x10a64) = 1;
      }
      break;
    case 9:
      iVar3 = *(int *)(param_1 + 0x10a78);
      if (iVar3 == 0) {
        FUN_00503620(iStack_20,5,1);
      }
      else {
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3);
        if (iVar3 == 0) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x10a78) + 0x276c);
          if (param_1 == iVar3) {
            fVar1 = (float)_DAT_005daae1;
            *(float *)(iVar3 + 0x20) =
                 *(float *)(*(int *)(param_1 + 0x10a78) + 0x20) - *(float *)(iVar3 + 0x44) * fVar1;
            *(float *)(iVar3 + 0x28) =
                 *(float *)(*(int *)(iVar3 + 0x10a78) + 0x28) - *(float *)(iVar3 + 0x5c) * fVar1;
          }
          else {
            FUN_00503620(iStack_20,5,1);
          }
        }
        else {
          FUN_00503620(iStack_20,5,1);
        }
      }
    }
    goto switchD_004d7818_caseD_5;
  }
  uVar4 = *(uint *)(param_1 + 0x27ac);
  if (uVar4 < 2) {
    if (uVar4 == 1) {
LAB_004d6d91:
      uVar11 = 1;
    }
    else {
LAB_004d6f73:
      uVar11 = 0;
    }
    FUN_00503620(param_1 + 0x2b4,uVar11,1);
  }
  else {
    if (uVar4 < 3) goto LAB_004d6d91;
    if (uVar4 != 3) goto LAB_004d6f73;
    FUN_00503620(param_1 + 0x2b4,0,1);
    FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
switchD_004d7818_caseD_5:
  if (0.0 < *(float *)(param_1 + 0x10a74)) {
    *(float *)(param_1 + 0x10a74) = *(float *)(param_1 + 0x10a74) - param_2;
  }
  iVar3 = FUN_00424430(param_1);
  if ((iVar3 != 0) && (iStack_2c != 9)) {
    FUN_00423a10(param_1,param_2);
    fStack_178 = *(float *)(param_1 + 0x2588) * param_2;
    fStack_174 = *(float *)(param_1 + 0x258c) * param_2;
    fStack_170 = *(float *)(param_1 + 0x2590) * param_2;
    fStack_160 = fStack_178;
    afStack_198[(uint)bVar7 * -2 + 0xf] = afStack_198[(uint)bVar7 * -2 + 9];
    afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
         afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    fStack_1cc = fStack_160 + *(float *)(param_1 + 0x257c);
    fStack_1c8 = fStack_15c + *(float *)(param_1 + 0x2580);
    fStack_1c4 = fStack_158 + *(float *)(param_1 + 0x2584);
    fStack_1e4 = fStack_1cc;
    afStack_204[(uint)bVar7 * -2 + 9] = afStack_204[(uint)bVar7 * -2 + 0xf];
    afStack_204[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_204[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
    afStack_204[2] = fStack_1e4 + *(float *)(param_1 + 0x2508);
    afStack_204[3] = fStack_1e0 + *(float *)(param_1 + 0x250c);
    fStack_1f4 = fStack_1dc + *(float *)(param_1 + 0x2510);
    afStack_dc[0] = afStack_204[2];
    afStack_f0[(uint)bVar7 * -2 + 6] = afStack_204[(uint)bVar7 * -2 + 3];
    afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         afStack_204[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x250c);
    FUN_00423a60(param_1,afStack_f0 + 5);
  }
  FUN_00424470(param_1);
  FUN_00544f00(param_1 + 0x2b4);
  FUN_00429e90(param_1,param_2);
  return;
}
