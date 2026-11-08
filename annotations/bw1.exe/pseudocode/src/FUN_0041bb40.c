// Name: FUN_0041bb40
// Address: 0041bb40
// Address Range: [[0041bb40, 0041c71b]]
// Convention: unknown
// Signature: void FUN_0041bb40(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041bb40(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  byte bVar10;
  float afStackY_19a4 [1478];
  byte auStack_270 [4];
  uint uStack_26c;
  int iStack_23c;
  int iStack_238;
  byte auStack_234 [4];
  uint uStack_230;
  uint uStack_200;
  int iStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float afStack_1e0 [6];
  uint uStack_1c8;
  float afStack_1c4 [7];
  float fStack_1a8;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  uint uStack_154;
  uint uStack_150;
  float fStack_14c;
  uint uStack_148;
  float afStack_144 [4];
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  uint uStack_118;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  uint uStack_f4;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  float afStack_d8 [4];
  uint uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float afStack_78 [4];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  int iStack_34;
  float *pfStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  float *pfStack_20;
  int iStack_1c;
  float fStack_14;
  
  bVar10 = 0;
  iVar4 = FUN_004a6c30();
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x2538) = 0;
    *(uint *)(param_1 + 0xc1d4) = 1;
    *(uint *)(param_1 + 0xc88c) = 0;
    if (*(int *)(param_1 + 0xc888) == 0) {
      FUN_0041d540(param_1);
    }
    FUN_00524b10(param_1 + 0x158,5,0);
  }
  iVar4 = FUN_0042e1a0();
  if (iVar4 == 0) goto LAB_0041be0f;
  if ((*(int *)(param_1 + 0xc888) == 1) && (0.0 < *(float *)(param_1 + 0x2538))) {
    fVar2 = *(float *)(param_1 + 0xc88c) + param_2;
    *(float *)(param_1 + 0xc88c) = fVar2;
    if (fVar2 <= *(float *)(param_1 + 0xc2e0)) {
      return;
    }
    FUN_0041d760(param_1);
  }
  if (*(int *)(param_1 + 0xc888) == 2) {
    fVar2 = param_2 / _DAT_005fcc38 + *(float *)(param_1 + 0xc88c);
    *(float *)(param_1 + 0xc88c) = fVar2;
    if (fVar2 < 1.0) {
      iStack_24 = 0;
      if (*(int *)(param_1 + 0xc2e4) < 1) {
        return;
      }
      iStack_34 = param_1 + 0xc2e8;
      pfStack_30 = (float *)(param_1 + 0xc88c);
      iStack_28 = param_1 + 0xc300;
      iStack_2c = param_1 + 0xc310;
      pfStack_20 = (float *)(param_1 + 0xc320);
      do {
        pfVar8 = pfStack_20;
        pfVar5 = (float *)(iStack_24 * 0x48 + iStack_34);
        fStack_44 = pfVar5[0x11];
        fStack_184 = *pfVar5 - *pfStack_20;
        fStack_180 = pfVar5[1] - pfStack_20[1];
        fStack_17c = pfVar5[2] - pfStack_20[2];
        fStack_a0 = *pfVar5 - *pfStack_20;
        afStack_d8[(uint)bVar10 * -2 + 0xf] = afStack_1c4[(uint)bVar10 * -2 + 0x11];
        afStack_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
             afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x12];
        afStack_78[2] = fStack_a0 * *pfStack_30;
        afStack_78[3] = fStack_9c * *pfStack_30;
        fStack_68 = fStack_98 * *pfStack_30;
        fStack_64 = fStack_a0 * *pfStack_30;
        afStack_78[(uint)bVar10 * -2 + 6] = afStack_78[(uint)bVar10 * -2 + 3];
        afStack_78[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_78[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        fStack_58 = *pfVar8 + fStack_64;
        fStack_54 = pfVar8[1] + fStack_60;
        fStack_50 = pfVar8[2] + fStack_5c;
        afStack_d8[2] = *pfVar8 + fStack_64;
        afStack_d8[(uint)bVar10 * -2 + 3] = afStack_78[(uint)bVar10 * -2 + 9];
        afStack_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_78[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        FUN_005b7940(iStack_28,iStack_2c,*(uint *)(param_1 + 0xc88c));
        uStack_1c8 = afStack_1c4[3];
        afStack_1c4[(uint)bVar10 * -2] = afStack_1c4[(uint)bVar10 * -2 + 4];
        afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
        (afStack_1c4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
             (afStack_1c4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
        FUN_005b7c00(&uStack_1c8);
        fStack_ac = fStack_b8;
        afStack_d8[(uint)bVar10 * -2 + 0xc] = afStack_d8[(uint)bVar10 * -2 + 9];
        afStack_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
             afStack_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        fStack_ac = *(float *)(param_1 + 0xc88c) * (float)_DAT_005d4761 + fStack_ac;
        *(float *)((int)fStack_44 + 0x20) = afStack_d8[2];
        *(float *)((int)fStack_44 + 0x24) = afStack_d8[3];
        *(uint *)((int)fStack_44 + 0x28) = uStack_c8;
        if ((float *)((int)fStack_44 + 0x30) != afStack_d8 + 0xb) {
          *(float *)((int)fStack_44 + 0x30) = fStack_ac;
          *(uint *)((int)fStack_44 + 0x34) = uStack_a8;
          *(uint *)((int)fStack_44 + 0x38) = uStack_a4;
        }
        if ((float *)((int)fStack_44 + 0xcd0) != afStack_d8 + 2) {
          *(float *)((int)fStack_44 + 0xcd0) = afStack_d8[2];
          *(float *)((int)fStack_44 + 0xcd4) = afStack_d8[3];
          *(uint *)((int)fStack_44 + 0xcd8) = uStack_c8;
        }
        if ((float *)((int)fStack_44 + 0xcdc) != afStack_d8 + 0xb) {
          *(float *)((int)fStack_44 + 0xcdc) = fStack_ac;
          *(uint *)((int)fStack_44 + 0xce0) = uStack_a8;
          *(uint *)((int)fStack_44 + 0xce4) = uStack_a4;
        }
        iStack_24 = iStack_24 + 1;
        iStack_28 = iStack_28 + 0x48;
        iStack_2c = iStack_2c + 0x48;
        pfStack_20 = pfStack_20 + 0x12;
      } while (iStack_24 < *(int *)(param_1 + 0xc2e4));
      return;
    }
    iVar9 = 0;
    FUN_00569ae0(param_1 + 0x158);
    iVar4 = param_1;
    if (0 < *(int *)(param_1 + 0xc2e4)) {
      do {
        FUN_0051b740(0x01D2C900,*(uint *)(iVar4 + 0xc32c),1);
        *(uint *)(iVar4 + 0xc32c) = 0;
        iVar9 = iVar9 + 1;
        iVar4 = iVar4 + 0x48;
      } while (iVar9 < *(int *)(param_1 + 0xc2e4));
    }
    *(uint *)(param_1 + 0xc888) = 0;
    fVar2 = *(float *)(param_1 + 0xc2e0) * (float)_DAT_005d4749;
    *(uint *)(param_1 + 0x2538) = 0x42c80000;
    *(float *)(param_1 + 0xc2e0) = fVar2;
    if (fVar2 <= (float)_DAT_005d4751) {
      *(uint *)(param_1 + 0xc2e0) = 0x40200000;
    }
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_40 = param_2 * *(float *)(param_1 + 0xc1d0);
  iVar4 = param_1 + 0x158;
  while (0.0 < fStack_40) {
    iVar9 = FUN_00524270();
    if (iVar9 == 100) {
      iVar9 = *(int *)(param_1 + 0xc274);
      if (iVar9 != 0) {
        *(uint *)(param_1 + 0xc274) = 0;
        FUN_004325b0(param_1,1,iVar9,0x3e4ccccd,0);
      }
    }
    else {
      FUN_00434a80();
    }
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320();
  iVar9 = FUN_00524770(iVar4);
  iVar9 = *(int *)(iVar9 + 0x24);
  iStack_1c = iVar9;
  iVar6 = FUN_00432240();
  if (iVar6 == 0) {
    switch(iVar9) {
    case 0:
      iVar9 = FUN_004a0fe0();
      if (iVar9 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))();
        if (*(int *)(param_1 + 0xc1e8) != 0) {
          FUN_005247c0(iVar4,1,1);
        }
      }
      else {
        FUN_005247c0(iVar4,1,1);
      }
      break;
    case 1:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))();
      if (*(int *)(param_1 + 0xc1e8) == 0) {
        iVar9 = FUN_004a0fe0();
        if (iVar9 == 0) {
          FUN_005247c0(iVar4,0,1);
        }
      }
      else {
        iVar4 = FUN_0041c9a0();
        if (iVar4 == 0) {
          fStack_38 = 0x40000000;
          if (*(int *)(param_1 + 0x2628) != 0) {
            fStack_38 = 0x40400000;
          }
          uStack_154 = 0;
          fStack_14c = fStack_38;
          uStack_150 = 0;
          (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))();
          iVar4 = FUN_0042ccf0();
          if (iVar4 < 0) {
            FUN_00445430(PTR_DAT_00611100,"%s gave up chase - I'm confused\n",param_1);
            FUN_005247c0(param_1 + 0x158,0,1);
          }
          else {
            fVar2 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0xc1e8) + 0x20);
            fVar3 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0xc1e8) + 0x28);
            if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2) <= fStack_38 + (float)_DAT_005d4749) &&
               (*(float *)(param_1 + 0xc1e4) <= 0.0)) {
              if (*(int *)(param_1 + 0x2628) == 0) {
                uVar7 = 2;
              }
              else {
                uVar7 = 6;
              }
              FUN_005247c0(param_1 + 0x158,uVar7,1);
              FUN_00573a80(*(uint *)(param_1 + 0xc278));
              (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
              *(uint *)(param_1 + 0xc1e4) = 0x3f800000;
            }
          }
        }
      }
      break;
    case 2:
      FUN_0042c010(auStack_270);
      uStack_26c = FUN_0040cc00();
      iStack_23c = param_1;
      iStack_238 = param_1;
      fStack_14 = (float)uStack_26c;
      FUN_005b5080();
      uStack_dc = uStack_148;
      afStack_d8[(uint)bVar10 * -2] = afStack_144[(uint)bVar10 * -2];
      afStack_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      FUN_00408b40();
      uStack_f4 = uStack_118;
      afStack_144[(uint)bVar10 * -2 + 0x15] = afStack_144[(uint)bVar10 * -2 + 0xc];
      afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
           afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
      FUN_004a0770();
      break;
    case 5:
      if ((*(int *)(param_1 + 0xc1d4) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        *(uint *)(param_1 + 0xc1d4) = 1;
      }
      break;
    case 6:
      iVar4 = *(int *)(param_1 + 0x2628);
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
        pfVar8 = afStack_1e0;
        pfVar5 = &fStack_1f8;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar5 = *pfVar8;
          pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
          pfVar5 = pfVar5 + (uint)bVar10 * -2 + 1;
        }
        fStack_178 = fStack_1f8 + fStack_1ec;
        fStack_174 = fStack_1f4 + fStack_1e8;
        fStack_170 = fStack_1f0 + fStack_1e4;
        fStack_160 = fStack_1f8 + fStack_1ec;
        afStack_1c4[(uint)bVar10 * -2 + 0x1a] = afStack_1c4[(uint)bVar10 * -2 + 0x14];
        afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1b] =
             afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x15];
        fStack_94 = fStack_160 * _DAT_005d4759;
        fStack_90 = fStack_15c * _DAT_005d4759;
        fStack_8c = fStack_158 * _DAT_005d4759;
        fStack_7c = fStack_160 * _DAT_005d4759;
        afStack_78[(uint)bVar10 * -2] = afStack_d8[(uint)bVar10 * -2 + 0x12];
        afStack_78[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
        if (afStack_d8 + 0x14 != &fStack_7c) {
          fStack_88 = fStack_7c;
          fStack_84 = afStack_78[0];
        }
        if (afStack_144 + 0x17 != afStack_d8 + 0x14) {
          fStack_e8 = fStack_88;
          fStack_e4 = fStack_84;
        }
        fStack_e0 = fStack_1f0;
        fStack_80 = fStack_1e4;
        FUN_00408b40();
        afStack_144[2] = fStack_16c;
        afStack_144[(uint)bVar10 * -2 + 3] = afStack_1c4[(uint)bVar10 * -2 + 0x17];
        afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x18];
        if (afStack_144 + 0x17 != afStack_144 + 2) {
          fStack_e8 = afStack_144[2];
          fStack_e4 = afStack_144[3];
          fStack_e0 = fStack_134;
        }
        FUN_00408b40();
        fStack_10c = fStack_1a8;
        afStack_144[(uint)bVar10 * -2 + 0xf] = afStack_1c4[(uint)bVar10 * -2 + 8];
        afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
             afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
        if (afStack_d8 + 0x14 != afStack_144 + 0xe) {
          fStack_88 = fStack_10c;
          fStack_84 = fStack_108;
          fStack_80 = fStack_104;
        }
        FUN_0042c010(auStack_234);
        uStack_230 = FUN_0040cc00();
        uStack_200 = *(uint *)(param_1 + 0x2628);
        iStack_1fc = param_1;
        fStack_14 = (float)uStack_230;
        FUN_004a0810();
      }
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x273c);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_0041bfb6:
        uVar7 = 1;
      }
      else {
LAB_0041c243:
        uVar7 = 0;
      }
      FUN_005247c0(param_1 + 0x158,uVar7,1);
    }
    else {
      if (uVar1 < 3) goto LAB_0041bfb6;
      if (uVar1 != 3) goto LAB_0041c243;
      FUN_005247c0(iVar4,0,1);
      FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  }
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  iVar4 = FUN_0042e120(param_1);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0xc1e8);
    if ((iVar4 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xf4))(iVar4), iVar4 == param_1)) {
      FUN_00559250();
    }
    FUN_0042d700();
    fStack_190 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_18c = *(float *)(param_1 + 0x251c) * param_2;
    fStack_188 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_19c = fStack_190;
    afStack_1c4[(uint)bVar10 * -2 + 0xb] = afStack_1c4[(uint)bVar10 * -2 + 0xe];
    afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xc] =
         afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xf];
    fStack_100 = fStack_19c + *(float *)(param_1 + 0x250c);
    fStack_fc = fStack_198 + *(float *)(param_1 + 0x2510);
    fStack_f8 = fStack_194 + *(float *)(param_1 + 0x2514);
    fStack_c4 = fStack_100;
    afStack_d8[(uint)bVar10 * -2 + 6] = afStack_144[(uint)bVar10 * -2 + 0x12];
    afStack_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
    fStack_130 = fStack_c4 + *(float *)(param_1 + 0x249c);
    fStack_12c = fStack_c0 + *(float *)(param_1 + 0x24a0);
    fStack_128 = fStack_bc + *(float *)(param_1 + 0x24a4);
    fStack_124 = fStack_130;
    afStack_144[(uint)bVar10 * -2 + 9] = afStack_144[(uint)bVar10 * -2 + 6];
    afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042d750();
  }
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  FUN_00433e80();
  if ((iStack_1c == 1) &&
     (iVar4 = FUN_00574010((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0x42c80000), iVar4 != 0)) {
    iVar4 = FUN_005735a0(*(uint *)(param_1 + 0xc278));
    if (iVar4 != 0) {
      return;
    }
    FUN_00572ac0();
    fStack_14 = (float)FUN_0040cc00(0,0x3f800000,2);
    FUN_00572a50((double)fStack_14);
    uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x30))();
    *(uint *)(param_1 + 0xc278) = uVar7;
    FUN_00572b40();
    return;
  }
LAB_0041be0f:
  FUN_00573a80(*(uint *)(param_1 + 0xc278));
  return;
}
