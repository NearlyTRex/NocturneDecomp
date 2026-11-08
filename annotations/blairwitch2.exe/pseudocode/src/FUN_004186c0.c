// Name: FUN_004186c0
// Address: 004186c0
// Address Range: [[004186c0, 0041929b]]
// Convention: unknown
// Signature: void FUN_004186c0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004186c0(int param_1,float param_2)

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
  iVar4 = FUN_0048e340();
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x25a8) = 0;
    *(uint *)(param_1 + 0x10a64) = 1;
    *(uint *)(param_1 + 0x1111c) = 0;
    if (*(int *)(param_1 + 0x11118) == 0) {
      FUN_0041a0c0(param_1);
    }
    FUN_00503980(param_1 + 0x2b4,5,0);
  }
  iVar4 = FUN_004244b0();
  if (iVar4 == 0) goto LAB_0041898f;
  if ((*(int *)(param_1 + 0x11118) == 1) && (0.0 < *(float *)(param_1 + 0x25a8))) {
    fVar2 = *(float *)(param_1 + 0x1111c) + param_2;
    *(float *)(param_1 + 0x1111c) = fVar2;
    if (fVar2 <= *(float *)(param_1 + 0x10b70)) {
      return;
    }
    FUN_0041a2e0(param_1);
  }
  if (*(int *)(param_1 + 0x11118) == 2) {
    fVar2 = param_2 / _DAT_005f3838 + *(float *)(param_1 + 0x1111c);
    *(float *)(param_1 + 0x1111c) = fVar2;
    if (fVar2 < 1.0) {
      iStack_24 = 0;
      if (*(int *)(param_1 + 0x10b74) < 1) {
        return;
      }
      iStack_34 = param_1 + 0x10b78;
      pfStack_30 = (float *)(param_1 + 0x1111c);
      iStack_28 = param_1 + 0x10b90;
      iStack_2c = param_1 + 0x10ba0;
      pfStack_20 = (float *)(param_1 + 0x10bb0);
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
        FUN_00593df0(iStack_28,iStack_2c,*(uint *)(param_1 + 0x1111c));
        uStack_1c8 = afStack_1c4[3];
        afStack_1c4[(uint)bVar10 * -2] = afStack_1c4[(uint)bVar10 * -2 + 4];
        afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
        (afStack_1c4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
             (afStack_1c4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
        FUN_005940b0(&uStack_1c8);
        fStack_ac = fStack_b8;
        afStack_d8[(uint)bVar10 * -2 + 0xc] = afStack_d8[(uint)bVar10 * -2 + 9];
        afStack_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
             afStack_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        fStack_ac = *(float *)(param_1 + 0x1111c) * (float)_DAT_005cc1ea + fStack_ac;
        *(float *)((int)fStack_44 + 0x20) = afStack_d8[2];
        *(float *)((int)fStack_44 + 0x24) = afStack_d8[3];
        *(uint *)((int)fStack_44 + 0x28) = uStack_c8;
        if ((float *)((int)fStack_44 + 0x30) != afStack_d8 + 0xb) {
          *(float *)((int)fStack_44 + 0x30) = fStack_ac;
          *(uint *)((int)fStack_44 + 0x34) = uStack_a8;
          *(uint *)((int)fStack_44 + 0x38) = uStack_a4;
        }
        if ((float *)((int)fStack_44 + 0x10e0) != afStack_d8 + 2) {
          *(float *)((int)fStack_44 + 0x10e0) = afStack_d8[2];
          *(float *)((int)fStack_44 + 0x10e4) = afStack_d8[3];
          *(uint *)((int)fStack_44 + 0x10e8) = uStack_c8;
        }
        if ((float *)((int)fStack_44 + 0x10ec) != afStack_d8 + 0xb) {
          *(float *)((int)fStack_44 + 0x10ec) = fStack_ac;
          *(uint *)((int)fStack_44 + 0x10f0) = uStack_a8;
          *(uint *)((int)fStack_44 + 0x10f4) = uStack_a4;
        }
        iStack_24 = iStack_24 + 1;
        iStack_28 = iStack_28 + 0x48;
        iStack_2c = iStack_2c + 0x48;
        pfStack_20 = pfStack_20 + 0x12;
      } while (iStack_24 < *(int *)(param_1 + 0x10b74));
      return;
    }
    iVar9 = 0;
    FUN_00547440(param_1 + 0x2b4);
    iVar4 = param_1;
    if (0 < *(int *)(param_1 + 0x10b74)) {
      do {
        FUN_004fc7b0(0x01D182F0,*(uint *)(iVar4 + 0x10bbc),1);
        *(uint *)(iVar4 + 0x10bbc) = 0;
        iVar9 = iVar9 + 1;
        iVar4 = iVar4 + 0x48;
      } while (iVar9 < *(int *)(param_1 + 0x10b74));
    }
    *(uint *)(param_1 + 0x11118) = 0;
    fVar2 = *(float *)(param_1 + 0x10b70) * (float)_DAT_005cc1d2;
    *(uint *)(param_1 + 0x25a8) = 0x42c80000;
    *(float *)(param_1 + 0x10b70) = fVar2;
    if (fVar2 <= (float)_DAT_005cc1da) {
      *(uint *)(param_1 + 0x10b70) = 0x40200000;
    }
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  fStack_40 = param_2 * *(float *)(param_1 + 0x10a60);
  iVar4 = param_1 + 0x2b4;
  while (0.0 < fStack_40) {
    iVar9 = FUN_005030c0();
    if (iVar9 == 100) {
      iVar9 = *(int *)(param_1 + 0x10b04);
      if (iVar9 != 0) {
        *(uint *)(param_1 + 0x10b04) = 0;
        FUN_00428b10(param_1,1,iVar9,0x3e4ccccd,0);
      }
    }
    else {
      FUN_0042aa00();
    }
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0();
  iVar9 = FUN_005035c0(iVar4);
  iVar9 = *(int *)(iVar9 + 0x24);
  iStack_1c = iVar9;
  iVar6 = FUN_004287f0();
  if (iVar6 == 0) {
    switch(iVar9) {
    case 0:
      iVar9 = FUN_00488970();
      if (iVar9 == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))();
        if (*(int *)(param_1 + 0x10a78) != 0) {
          FUN_00503620(iVar4,1,1);
        }
      }
      else {
        FUN_00503620(iVar4,1,1);
      }
      break;
    case 1:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))();
      if (*(int *)(param_1 + 0x10a78) == 0) {
        iVar9 = FUN_00488970();
        if (iVar9 == 0) {
          FUN_00503620(iVar4,0,1);
        }
      }
      else {
        iVar4 = FUN_00419520();
        if (iVar4 == 0) {
          fStack_38 = 0x40000000;
          if (*(int *)(param_1 + 0x2698) != 0) {
            fStack_38 = 0x40400000;
          }
          uStack_154 = 0;
          fStack_14c = fStack_38;
          uStack_150 = 0;
          (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))();
          iVar4 = FUN_00423000();
          if (iVar4 < 0) {
            FUN_00436710(PTR_DAT_00609ed0,"%s gave up chase - I'm confused\n",param_1);
            FUN_00503620(param_1 + 0x2b4,0,1);
          }
          else {
            fVar2 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0x10a78) + 0x20);
            fVar3 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0x10a78) + 0x28);
            if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2) <= fStack_38 + (float)_DAT_005cc1d2) &&
               (*(float *)(param_1 + 0x10a74) <= 0.0)) {
              if (*(int *)(param_1 + 0x2698) == 0) {
                uVar7 = 2;
              }
              else {
                uVar7 = 6;
              }
              FUN_00503620(param_1 + 0x2b4,uVar7,1);
              FUN_00551050(*(uint *)(param_1 + 0x10b08));
              (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))();
              *(uint *)(param_1 + 0x10a74) = 0x3f800000;
            }
          }
        }
      }
      break;
    case 2:
      FUN_004222d0(auStack_270);
      uStack_26c = FUN_0040cf60();
      iStack_23c = param_1;
      iStack_238 = param_1;
      fStack_14 = (float)uStack_26c;
      FUN_00591530();
      uStack_dc = uStack_148;
      afStack_d8[(uint)bVar10 * -2] = afStack_144[(uint)bVar10 * -2];
      afStack_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      FUN_00408d70();
      uStack_f4 = uStack_118;
      afStack_144[(uint)bVar10 * -2 + 0x15] = afStack_144[(uint)bVar10 * -2 + 0xc];
      afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
           afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
      FUN_00488110();
      break;
    case 5:
      if ((*(int *)(param_1 + 0x10a64) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        *(uint *)(param_1 + 0x10a64) = 1;
      }
      break;
    case 6:
      iVar4 = *(int *)(param_1 + 0x2698);
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x24))(iVar4);
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
        fStack_94 = fStack_160 * _DAT_005cc1e2;
        fStack_90 = fStack_15c * _DAT_005cc1e2;
        fStack_8c = fStack_158 * _DAT_005cc1e2;
        fStack_7c = fStack_160 * _DAT_005cc1e2;
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
        FUN_00408d70();
        afStack_144[2] = fStack_16c;
        afStack_144[(uint)bVar10 * -2 + 3] = afStack_1c4[(uint)bVar10 * -2 + 0x17];
        afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x18];
        if (afStack_144 + 0x17 != afStack_144 + 2) {
          fStack_e8 = afStack_144[2];
          fStack_e4 = afStack_144[3];
          fStack_e0 = fStack_134;
        }
        FUN_00408d70();
        fStack_10c = fStack_1a8;
        afStack_144[(uint)bVar10 * -2 + 0xf] = afStack_1c4[(uint)bVar10 * -2 + 8];
        afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
             afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
        if (afStack_d8 + 0x14 != afStack_144 + 0xe) {
          fStack_88 = fStack_10c;
          fStack_84 = fStack_108;
          fStack_80 = fStack_104;
        }
        FUN_004222d0(auStack_234);
        uStack_230 = FUN_0040cf60();
        uStack_200 = *(uint *)(param_1 + 0x2698);
        iStack_1fc = param_1;
        fStack_14 = (float)uStack_230;
        FUN_004881b0();
      }
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x27ac);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_00418b36:
        uVar7 = 1;
      }
      else {
LAB_00418dc3:
        uVar7 = 0;
      }
      FUN_00503620(param_1 + 0x2b4,uVar7,1);
    }
    else {
      if (uVar1 < 3) goto LAB_00418b36;
      if (uVar1 != 3) goto LAB_00418dc3;
      FUN_00503620(iVar4,0,1);
      FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  }
  if (0.0 < *(float *)(param_1 + 0x10a74)) {
    *(float *)(param_1 + 0x10a74) = *(float *)(param_1 + 0x10a74) - param_2;
  }
  iVar4 = FUN_00424430(param_1);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0x10a78);
    if ((iVar4 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xfc))(iVar4), iVar4 == param_1)) {
      FUN_00537e30();
    }
    FUN_00423a10();
    fStack_190 = *(float *)(param_1 + 0x2588) * param_2;
    fStack_18c = *(float *)(param_1 + 0x258c) * param_2;
    fStack_188 = *(float *)(param_1 + 0x2590) * param_2;
    fStack_19c = fStack_190;
    afStack_1c4[(uint)bVar10 * -2 + 0xb] = afStack_1c4[(uint)bVar10 * -2 + 0xe];
    afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xc] =
         afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xf];
    fStack_100 = fStack_19c + *(float *)(param_1 + 0x257c);
    fStack_fc = fStack_198 + *(float *)(param_1 + 0x2580);
    fStack_f8 = fStack_194 + *(float *)(param_1 + 0x2584);
    fStack_c4 = fStack_100;
    afStack_d8[(uint)bVar10 * -2 + 6] = afStack_144[(uint)bVar10 * -2 + 0x12];
    afStack_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
    fStack_130 = fStack_c4 + *(float *)(param_1 + 0x2508);
    fStack_12c = fStack_c0 + *(float *)(param_1 + 0x250c);
    fStack_128 = fStack_bc + *(float *)(param_1 + 0x2510);
    fStack_124 = fStack_130;
    afStack_144[(uint)bVar10 * -2 + 9] = afStack_144[(uint)bVar10 * -2 + 6];
    afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
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
  FUN_00429e90();
  if ((iStack_1c == 1) &&
     (iVar4 = FUN_005515e0((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0x42c80000), iVar4 != 0)) {
    iVar4 = FUN_00550b70(*(uint *)(param_1 + 0x10b08));
    if (iVar4 != 0) {
      return;
    }
    FUN_00550450();
    fStack_14 = (float)FUN_0040cf60(0,0x3f800000,2);
    FUN_005503e0((double)fStack_14);
    uVar7 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x38))();
    *(uint *)(param_1 + 0x10b08) = uVar7;
    FUN_005504d0();
    return;
  }
LAB_0041898f:
  FUN_00551050(*(uint *)(param_1 + 0x10b08));
  return;
}
