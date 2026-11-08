// Name: FUN_00436e80
// Address: 00436e80
// Address Range: [[00436e80, 00437b6e]]
// Convention: unknown
// Signature: void FUN_00436e80(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00436e80(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  float afStackY_19b4 [1503];
  uint uVar10;
  byte auStack_214 [4];
  uint uStack_210;
  int iStack_1e0;
  int iStack_1dc;
  uint uStack_1d8;
  float afStack_1d4 [7];
  uint uStack_1b8;
  uint uStack_1b4;
  float fStack_1b0;
  uint uStack_1ac;
  float afStack_1a8 [4];
  uint uStack_198;
  float fStack_194;
  uint uStack_190;
  float fStack_18c;
  uint uStack_188;
  float fStack_17c;
  float fStack_170;
  float afStack_164 [3];
  uint uStack_158;
  uint uStack_14c;
  float fStack_148;
  uint uStack_140;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint uStack_128;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float afStack_e0 [4];
  float afStack_d0 [4];
  float fStack_c0;
  uint uStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  uint uStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  float *pfStack_28;
  int iStack_24;
  float *pfStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar4 = FUN_0048e340();
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x25a8) = 0;
    *(uint *)(param_1 + 0x10a64) = 1;
    *(uint *)(param_1 + 0x112dc) = 0;
    if (*(int *)(param_1 + 0x112d8) == 0) {
      FUN_00438060(param_1);
    }
    FUN_00503980(param_1 + 0x2b4,0xb,0);
  }
  iVar4 = FUN_004244b0();
  if (iVar4 == 0) {
    FUN_00551050(*(uint *)(param_1 + 0x10b5c));
    return;
  }
  if ((*(int *)(param_1 + 0x112d8) == 1) && (0.0 < *(float *)(param_1 + 0x25a8))) {
    fVar2 = *(float *)(param_1 + 0x112dc) + param_2;
    *(float *)(param_1 + 0x112dc) = fVar2;
    if (fVar2 <= *(float *)(param_1 + 0x10c0c)) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x112e0) * 0x48 + param_1 + 0x10c5c);
      if (iVar4 == 0) {
        return;
      }
      iVar8 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x9c))(iVar4);
      if (iVar8 != *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
        return;
      }
      FUN_004894f0();
      FUN_004894f0();
      afStack_e0[1] = 3.0;
      afStack_e0[0] = 0.0;
      afStack_e0[2] = 0.0;
      iVar8 = 0;
      FUN_0049d230(0x01C3DEB4,iVar4 + 0x20,0x3f000000,afStack_1a8 + 0x32,0xffff);
      do {
        iVar8 = iVar8 + 1;
        FUN_0049d6a0(0x01C3DEB4,iVar4 + 0x20,0,0x4000,0x10000,0,0xffff,0x3f800000,0x3ecccccd);
      } while (iVar8 < 10);
      FUN_00428e00(*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4));
      return;
    }
    FUN_004382a0(param_1);
  }
  if (*(int *)(param_1 + 0x112d8) == 2) {
    fVar2 = param_2 / _DAT_005f46a8 + *(float *)(param_1 + 0x112dc);
    *(float *)(param_1 + 0x112dc) = fVar2;
    if (fVar2 < 1.0) {
      iStack_24 = 0;
      if (*(int *)(param_1 + 0x10c14) < 1) {
        return;
      }
      iStack_34 = param_1 + 0x10c18;
      pfStack_28 = (float *)(param_1 + 0x112dc);
      iStack_2c = param_1 + 0x10c30;
      iStack_30 = param_1 + 0x10c40;
      pfStack_20 = (float *)(param_1 + 0x10c50);
      do {
        pfVar3 = pfStack_20;
        pfVar5 = (float *)(iStack_24 * 0x48 + iStack_34);
        fStack_3c = pfVar5[0x11];
        fStack_5c = *pfVar5 - *pfStack_20;
        fStack_58 = pfVar5[1] - pfStack_20[1];
        fStack_54 = pfVar5[2] - pfStack_20[2];
        fStack_ec = *pfVar5 - *pfStack_20;
        afStack_1a8[(uint)bVar9 * -2 + 0x30] = afStack_d0[(uint)bVar9 * -2 + 0x1e];
        afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31] =
             afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f];
        fStack_68 = fStack_ec * *pfStack_28;
        fStack_64 = fStack_e8 * *pfStack_28;
        fStack_60 = fStack_e4 * *pfStack_28;
        fStack_74 = fStack_ec * *pfStack_28;
        afStack_d0[(uint)bVar9 * -2 + 0x18] = afStack_d0[(uint)bVar9 * -2 + 0x1b];
        afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] =
             afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
        afStack_d0[2] = *pfVar3 + fStack_74;
        afStack_d0[3] = pfVar3[1] + fStack_70;
        fStack_c0 = pfVar3[2] + fStack_6c;
        fStack_f8 = *pfVar3 + fStack_74;
        afStack_1a8[(uint)bVar9 * -2 + 0x2d] = afStack_d0[(uint)bVar9 * -2 + 3];
        afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e] =
             afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        FUN_00593df0(iStack_2c,iStack_30,*(uint *)(param_1 + 0x112dc));
        uStack_1d8 = afStack_1d4[3];
        afStack_1d4[(uint)bVar9 * -2] = afStack_1d4[(uint)bVar9 * -2 + 4];
        afStack_1d4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_1d4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
        (afStack_1d4 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
             (afStack_1d4 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
        FUN_005940b0(&uStack_1d8);
        afStack_1a8[2] = fStack_17c;
        afStack_1a8[(uint)bVar9 * -2 + 3] = afStack_1a8[(uint)bVar9 * -2 + 0xc];
        afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
        afStack_1a8[2] = *(float *)(param_1 + 0x112dc) * (float)_DAT_005cde1b + afStack_1a8[2];
        *(float *)((int)fStack_3c + 0x20) = fStack_f8;
        *(uint *)((int)fStack_3c + 0x24) = uStack_f4;
        *(uint *)((int)fStack_3c + 0x28) = uStack_f0;
        if ((float *)((int)fStack_3c + 0x30) != afStack_1a8 + 2) {
          *(float *)((int)fStack_3c + 0x30) = afStack_1a8[2];
          *(float *)((int)fStack_3c + 0x34) = afStack_1a8[3];
          *(uint *)((int)fStack_3c + 0x38) = uStack_198;
        }
        if ((float *)((int)fStack_3c + 0x10e0) != afStack_1a8 + 0x2c) {
          *(float *)((int)fStack_3c + 0x10e0) = fStack_f8;
          *(uint *)((int)fStack_3c + 0x10e4) = uStack_f4;
          *(uint *)((int)fStack_3c + 0x10e8) = uStack_f0;
        }
        if ((float *)((int)fStack_3c + 0x10ec) != afStack_1a8 + 2) {
          *(float *)((int)fStack_3c + 0x10ec) = afStack_1a8[2];
          *(float *)((int)fStack_3c + 0x10f0) = afStack_1a8[3];
          *(uint *)((int)fStack_3c + 0x10f4) = uStack_198;
        }
        iStack_24 = iStack_24 + 1;
        iStack_2c = iStack_2c + 0x48;
        iStack_30 = iStack_30 + 0x48;
        pfStack_20 = pfStack_20 + 0x12;
      } while (iStack_24 < *(int *)(param_1 + 0x10c14));
      return;
    }
    iVar8 = 0;
    FUN_00547440(param_1 + 0x2b4);
    iVar4 = param_1;
    if (0 < *(int *)(param_1 + 0x10c14)) {
      do {
        FUN_004fc7b0(0x01D182F0,*(uint *)(iVar4 + 0x10c5c),1);
        *(uint *)(iVar4 + 0x10c5c) = 0;
        iVar8 = iVar8 + 1;
        iVar4 = iVar4 + 0x48;
      } while (iVar8 < *(int *)(param_1 + 0x10c14));
    }
    *(uint *)(param_1 + 0x112d8) = 0;
    *(float *)(param_1 + 0x25a8) = (float)*(int *)(param_1 + 0x10c10);
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  fStack_48 = param_2 * *(float *)(param_1 + 0x10a60);
  iVar4 = param_1 + 0x2b4;
  while (0.0 < fStack_48) {
    FUN_005030c0();
    FUN_0042aa00();
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0();
  iVar8 = FUN_005035c0(iVar4);
  iVar8 = *(int *)(iVar8 + 0x24);
  iStack_18 = iVar8;
  iVar6 = FUN_004287f0();
  if (iVar6 == 0) {
    switch(iVar8) {
    case 0:
    case 1:
    case 2:
      iVar4 = FUN_00488970();
      if (iVar4 == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))();
        if (*(int *)(param_1 + 0x10a78) != 0) {
          FUN_00503620(param_1 + 0x2b4,3,1);
        }
      }
      else {
        FUN_00503620(param_1 + 0x2b4,3,1);
      }
      break;
    case 3:
    case 4:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))();
      iStack_38 = param_1 + 0x2b4;
      if (*(int *)(param_1 + 0x10a78) == 0) {
        iVar4 = FUN_00488970();
        if (iVar4 == 0) {
          FUN_00503620(iStack_38,0,1);
        }
      }
      else {
        uStack_1b8 = 0;
        fStack_1b0 = 0x40400000;
        uStack_1b4 = 0;
        fStack_44 = 0x40400000 + (float)_DAT_005cde03;
        (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))();
        iVar4 = FUN_00423000();
        if (iVar4 < 0) {
          FUN_00436710(PTR_DAT_00609ed0,"%s gave up chase - I'm confused\n",param_1);
          FUN_00503620(iStack_38,0,1);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x10a78);
          afStack_e0[3] = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
          afStack_d0[0] = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
          afStack_d0[1] = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
          fStack_194 = afStack_e0[3];
          afStack_1a8[(uint)bVar9 * -2 + 6] = afStack_d0[(uint)bVar9 * -2];
          afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
               afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          fStack_1c = SQRT(fStack_18c * fStack_18c + fStack_194 * fStack_194);
          uStack_190 = 0;
          fStack_40 = fStack_1c;
          if ((fStack_1c <= fStack_44) && (*(float *)(param_1 + 0x10a74) <= 0.0)) {
            fStack_110 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_10c = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_108 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_164[0] = fStack_110;
            afStack_1a8[(uint)bVar9 * -2 + 0x12] = afStack_1a8[(uint)bVar9 * -2 + 0x27];
            afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
                 afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28];
            FUN_005838f0(afStack_1a8 + 0x11);
            uStack_14c = uStack_140;
            afStack_1a8[(uint)bVar9 * -2 + 0x18] = afStack_1a8[(uint)bVar9 * -2 + 0x1b];
            afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] =
                 afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
            fStack_14 = (float)FUN_0040d0c0(fStack_148 - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005cde0b) {
              iVar4 = FUN_0040cfc0(0,1,1);
              FUN_00503620(iStack_38,iVar4 + 5);
              *(uint *)(param_1 + 0x10a74) = 0x40200000;
              iVar4 = FUN_00550b70(*(uint *)(param_1 + 0x10b9c));
              if ((iVar4 == 0) &&
                 (iVar4 = FUN_00550b70(*(uint *)(param_1 + 0x10ba0)), iVar4 == 0)) {
                uVar7 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))();
                *(uint *)(param_1 + 0x10ba0) = uVar7;
              }
            }
          }
          if (*(float *)(param_1 + 0x10a70) * _DAT_005cde13 < fStack_40) {
            FUN_00503620(param_1 + 0x2b4,0,1);
          }
        }
      }
      break;
    case 5:
    case 6:
      FUN_004222d0(auStack_214);
      uStack_210 = FUN_0040cf60();
      iStack_1e0 = param_1;
      iStack_1dc = param_1;
      fStack_14 = (float)(param_1 + 0x1134);
      FUN_00591530();
      uStack_188 = uStack_158;
      afStack_1a8[(uint)bVar9 * -2 + 9] = afStack_1a8[(uint)bVar9 * -2 + 0x15];
      afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
           afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
      FUN_00408d70();
      uStack_a4 = uStack_1ac;
      afStack_d0[(uint)bVar9 * -2 + 0xc] = afStack_1a8[(uint)bVar9 * -2];
      afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      FUN_00488110();
      FUN_00591530();
      uStack_80 = uStack_128;
      afStack_d0[(uint)bVar9 * -2 + 0x15] = afStack_1a8[(uint)bVar9 * -2 + 0x21];
      afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
           afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22];
      FUN_00408d70();
      uStack_bc = uStack_98;
      afStack_d0[(uint)bVar9 * -2 + 6] = afStack_d0[(uint)bVar9 * -2 + 0xf];
      afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
      FUN_00488110();
      break;
    case 0xb:
      if ((*(int *)(param_1 + 0x10a64) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        *(uint *)(param_1 + 0x10a64) = 1;
      }
      break;
    case 0xc:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))();
      if ((*(int *)(param_1 + 0x10a78) != 0) || (iVar4 = FUN_0048e340(), iVar4 != 0)) {
        FUN_00503620(param_1 + 0x2b4,0xe,1);
        iVar4 = FUN_00550b70(*(uint *)(param_1 + 0x10b9c));
        if ((iVar4 == 0) &&
           ((iVar4 = FUN_00550b70(*(uint *)(param_1 + 0x10ba0)), iVar4 == 0 &&
            (iVar4 = FUN_00550b70(*(uint *)(param_1 + 0x10b98)), iVar4 == 0)))) {
          uVar7 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))();
          *(uint *)(param_1 + 0x10b98) = uVar7;
        }
      }
      break;
    case 0xe:
      if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2574) + (float)_DAT_005cddfb) {
        FUN_00503620(iVar4,0xf,1);
      }
      break;
    case 0xf:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))();
    }
    goto switchD_00437b48_caseD_7;
  }
  uVar1 = *(uint *)(param_1 + 0x27ac);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0043739d:
      uVar10 = 1;
      uVar7 = 3;
    }
    else {
LAB_004375f4:
      uVar10 = 1;
      uVar7 = FUN_0040cfc0(0,2,1);
    }
    FUN_00503620(param_1 + 0x2b4,uVar7,uVar10);
  }
  else {
    if (uVar1 < 3) goto LAB_0043739d;
    if (uVar1 != 3) goto LAB_004375f4;
    FUN_00503620(iVar4,0,1);
    FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
switchD_00437b48_caseD_7:
  if (0.0 < *(float *)(param_1 + 0x10a74)) {
    *(float *)(param_1 + 0x10a74) = *(float *)(param_1 + 0x10a74) - param_2;
  }
  iVar4 = FUN_00424430(param_1);
  if ((iVar4 != 0) && (iStack_18 != 0xc)) {
    FUN_00423a10();
    fStack_11c = *(float *)(param_1 + 0x2588) * param_2;
    fStack_118 = *(float *)(param_1 + 0x258c) * param_2;
    fStack_114 = *(float *)(param_1 + 0x2590) * param_2;
    fStack_134 = fStack_11c;
    afStack_1a8[(uint)bVar9 * -2 + 0x1e] = afStack_1a8[(uint)bVar9 * -2 + 0x24];
    afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f] =
         afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25];
    fStack_b0 = fStack_134 + *(float *)(param_1 + 0x257c);
    fStack_ac = fStack_130 + *(float *)(param_1 + 0x2580);
    fStack_a8 = fStack_12c + *(float *)(param_1 + 0x2584);
    fStack_104 = fStack_b0;
    afStack_1a8[(uint)bVar9 * -2 + 0x2a] = afStack_d0[(uint)bVar9 * -2 + 9];
    afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b] =
         afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
    fStack_8c = fStack_104 + *(float *)(param_1 + 0x2508);
    fStack_88 = fStack_100 + *(float *)(param_1 + 0x250c);
    fStack_84 = fStack_fc + *(float *)(param_1 + 0x2510);
    fStack_170 = fStack_8c;
    afStack_1a8[(uint)bVar9 * -2 + 0xf] = afStack_d0[(uint)bVar9 * -2 + 0x12];
    afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
         afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x250c);
    FUN_00423a60();
  }
  FUN_00424470(param_1);
  FUN_00544f00(param_1 + 0x2b4);
  iVar4 = iStack_18;
  FUN_00429e90();
  if (((iVar4 == 3) || (iVar4 == 4)) &&
     (iVar4 = FUN_005515e0((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0x42c80000), iVar4 != 0)) {
    iVar4 = FUN_00550b70(*(uint *)(param_1 + 0x10b5c));
    if (iVar4 != 0) {
      return;
    }
    FUN_00550450();
    fStack_14 = (float)FUN_0040cf60(0,0x3f800000,2);
    FUN_005503e0((double)fStack_14);
    uVar7 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x38))();
    *(uint *)(param_1 + 0x10b5c) = uVar7;
    FUN_005504d0();
    return;
  }
  FUN_00551050(*(uint *)(param_1 + 0x10b5c));
  return;
}
