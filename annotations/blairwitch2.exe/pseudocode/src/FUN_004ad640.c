// Name: FUN_004ad640
// Address: 004ad640
// Address Range: [[004ad640, 004aeaff]]
// Convention: unknown
// Signature: void FUN_004ad640(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ad640(int param_1,float param_2)

{
  byte bVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  bool bVar9;
  byte bVar10;
  float afStackY_1294 [990];
  uint uVar11;
  char *pcVar12;
  byte auStack_304 [40];
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float afStack_2c4 [6];
  float fStack_2ac;
  float afStack_2a8 [5];
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float afStack_288 [3];
  uint uStack_27c;
  uint uStack_278;
  uint uStack_270;
  uint uStack_264;
  float fStack_258;
  uint uStack_24c;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  uint uStack_234;
  uint uStack_228;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  uint uStack_210;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float afStack_1e0 [3];
  float afStack_1d4 [3];
  float afStack_1c8 [4];
  float afStack_1b8 [5];
  uint uStack_1a4;
  float afStack_1a0 [5];
  float fStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_174;
  float fStack_16c;
  uint uStack_168;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float afStack_144 [3];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  uint uStack_12c;
  uint uStack_120;
  float fStack_11c;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float afStack_f0 [3];
  float afStack_e4 [3];
  float afStack_d8 [4];
  float afStack_c8 [5];
  float fStack_b4;
  uint uStack_a8;
  float fStack_9c;
  uint uStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [3];
  float fStack_78;
  double dStack_6c;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  float fStack_50;
  float fStack_4c;
  uint *puStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  float fStack_34;
  int iStack_30;
  float fStack_2c;
  uint *puStack_28;
  uint *puStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  uint *puStack_14;
  
  bVar10 = 0;
  iVar4 = FUN_004244b0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10a64) == 2) {
    FUN_004aeb00(param_1,param_2);
  }
  fVar3 = *(float *)(param_1 + 0x10a60) - param_2;
  *(float *)(param_1 + 0x10a60) = fVar3;
  if (fVar3 < 0.0) {
    *(uint *)(param_1 + 0x10a60) = 0;
  }
  FUN_004af960(param_1);
  pfVar7 = afStack_2a8 + 8;
  afStack_288[0] = (float)uStack_234;
  afStack_2a8[(uint)bVar10 * -2 + 9] = afStack_2a8[(uint)bVar10 * -2 + 0x1e];
  afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
       afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f];
  FUN_00408d70(param_1,pfVar7);
  fStack_294 = fStack_258;
  afStack_2a8[(uint)bVar10 * -2 + 6] = afStack_2a8[(uint)bVar10 * -2 + 0x15];
  afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
       afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  FUN_004af410(param_1,param_2);
  uStack_18 = (uint)(*(float *)(param_1 + 0x25a8) <= 0.0);
  if (*(int *)(param_1 + 0x276c) != 0) {
    uStack_18 = 1;
  }
  if (*(int *)(param_1 + 0x2560c) != 0) {
    uStack_18 = 1;
  }
  if (*(int *)(param_1 + 0x25614) != 0) {
    uStack_18 = 1;
  }
  puStack_14 = (uint *)FUN_005038a0(param_1 + 0x2b4,8);
  if (0.0 < (float)puStack_14) {
    uStack_18 = 1;
  }
  puStack_14 = (uint *)FUN_005038a0(param_1 + 0x2b4,0xb);
  if (0.0 < (float)puStack_14) {
    uStack_18 = 1;
  }
  puStack_14 = (uint *)FUN_005038a0(param_1 + 0x2b4,0xc);
  if (0.0 < (float)puStack_14) {
    uStack_18 = 1;
  }
  puStack_14 = (uint *)FUN_005038a0(param_1 + 0x2b4,0x12);
  if (0.0 < (float)puStack_14) {
    uStack_18 = 1;
  }
  *(uint *)(param_1 + 0x2598) = 0;
  *(uint *)(param_1 + 0x2594) = 0;
  fStack_20 = 0.0;
  if (*(int *)(param_1 + 0x2570) != 0) {
    iVar4 = param_1 + 0x2b4;
    puStack_14 = (uint *)FUN_005038a0(iVar4,1);
    *(float *)(param_1 + 0x2594) = (float)puStack_14 * _DAT_01cb0638 + *(float *)(param_1 + 0x2594);
    puStack_14 = (uint *)FUN_005038a0(iVar4,2);
    *(float *)(param_1 + 0x2594) = (float)puStack_14 * _DAT_01cb063c + *(float *)(param_1 + 0x2594);
    puStack_14 = (uint *)FUN_005038a0(iVar4,3);
    *(float *)(param_1 + 0x2594) = *(float *)(param_1 + 0x2594) - (float)puStack_14 * _DAT_01cb0640;
    puStack_14 = (uint *)FUN_005038a0(iVar4,0x14);
    fStack_20 = 0.0 - (float)puStack_14 * _DAT_005f7368;
    puStack_14 = (uint *)FUN_005038a0(iVar4,0x15);
    fStack_20 = (float)puStack_14 * _DAT_005f7368 + fStack_20;
    FUN_0042b2a0(param_1,param_2);
  }
  fStack_20 = fStack_20 * param_2;
  iVar4 = *(int *)(param_1 + 0x25614);
  *(float *)(param_1 + 0x2594) = *(float *)(param_1 + 0x2594) * param_2;
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x276c) != 0) {
      if (*(int *)(param_1 + 0x2770) == 0) {
        FUN_00408de0(param_1,*(int *)(param_1 + 0x276c) + 0x20);
        afStack_84[0] = (float)uStack_24c;
        afStack_c8[(uint)bVar10 * -2 + 0x12] = afStack_2a8[(uint)bVar10 * -2 + 0x18];
        afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
             afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
        FUN_005838f0(afStack_c8 + 0x11);
        uStack_27c = uStack_180;
        afStack_2a8[(uint)bVar10 * -2 + 0xc] = afStack_1a0[(uint)bVar10 * -2 + 9];
        afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
             afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        puStack_14 = (uint *)FUN_0040d0c0(uStack_278);
        fStack_1c = (float)puStack_14;
        if ((float)puStack_14 < _DAT_005d6f87) {
          fStack_1c = (float)puStack_14 + _DAT_005d6f83;
        }
        if (_DAT_005d6f8b < fStack_1c) {
          fStack_1c = fStack_1c + _DAT_005d6f8f;
        }
        fStack_2c = param_2 * _DAT_005d6f83;
        fStack_4c = -fStack_2c;
        if (fStack_1c < fStack_4c) {
          fStack_1c = fStack_4c;
        }
        if (fStack_2c < fStack_1c) {
          fStack_1c = fStack_2c;
        }
        *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_1c;
        FUN_00408ae0(param_1);
      }
      iStack_30 = *(int *)(param_1 + 0x276c);
      puStack_14 = *(uint **)(iStack_30 + 0x2b0);
      iStack_54 = param_1 + 0x2b4;
      FUN_00546a90(iStack_54,0);
      puVar5 = puStack_14;
      iVar4 = iStack_30;
      pfVar7 = afStack_1a0 + 0x17;
      afStack_144[0] = (float)uStack_210;
      afStack_1a0[(uint)bVar10 * -2 + 0x18] = afStack_2a8[(uint)bVar10 * -2 + 0x27];
      iVar6 = param_1;
      afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
           afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x28];
      iVar4 = (*(code *)puVar5[0x46])(iVar4,iVar6,pfVar7);
      if (iVar4 == 0) {
        *(uint *)(param_1 + 0x276c) = 0;
      }
      else if (*(int *)(param_1 + 0x276c) != 0) {
        if (*(int *)(param_1 + 0x10a74) != 0) {
          uVar11 = 7;
          iVar4 = iStack_54;
          goto LAB_004ad9df;
        }
        goto LAB_004ad9e7;
      }
      goto LAB_004ad9d8;
    }
    iVar6 = *(int *)(param_1 + 0x2560c);
    if (iVar6 == 0) {
      iVar6 = FUN_004287f0(param_1,param_2);
      iVar4 = param_1 + 0x2b4;
      if (iVar6 == 0) {
        if (uStack_18 == 0) {
          iVar6 = FUN_005035c0(iVar4);
          uVar2 = *(uint *)(iVar6 + 0x24);
          if (uVar2 < 0xe) {
            if ((((uVar2 == 0) || (uVar2 < 2)) || (uVar2 < 3)) || (uVar2 == 3)) goto LAB_004ae449;
          }
          else if (uVar2 < 0xf) {
            iVar6 = FUN_0040c8f0(*(uint *)(param_1 + 0x25608),DAT_007bc3e0);
            if (iVar6 != 0) {
              puStack_14 = (uint *)FUN_00503e60(iVar4);
              FUN_0040e600(iVar6,puStack_14);
            }
          }
          else if (uVar2 < 0x11) {
            if (uVar2 == 0x10) {
LAB_004ae449:
              if (*(int *)(param_1 + 0x2570) != 0) {
                iVar4 = 0;
                if (*(int *)(param_1 + 0x10a68) != 0) {
                  if (*(int *)(param_1 + 0x10a70) == 0) {
                    iVar4 = 1;
                  }
                  else {
                    iVar4 = 2;
                  }
                }
                if (*(int *)(param_1 + 0x10a6c) != 0) {
                  iVar4 = 3;
                }
                *(float *)(param_1 + 0x2578) =
                     *(float *)(param_1 + 0x10a90) * *(float *)(param_1 + 0x2598);
                *(float *)(param_1 + 0x2584) =
                     *(float *)(param_1 + 0x2594) + *(float *)(param_1 + 0x2584);
                *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x257c) + fStack_20;
                iVar6 = FUN_005035c0(param_1 + 0x2b4);
                if (iVar4 != *(int *)(iVar6 + 0x24)) {
                  FUN_00503620(param_1 + 0x2b4,iVar4,1);
                }
                if ((*(int *)(param_1 + 0x10a78) != 0) &&
                   (iVar4 = FUN_004b05b0(param_1), iVar4 == 0)) {
                  FUN_004b0f70(param_1);
                }
              }
            }
          }
          else if ((uVar2 < 0x12) || ((0x13 < uVar2 && ((uVar2 < 0x15 || (uVar2 == 0x15))))))
          goto LAB_004ae449;
        }
        goto LAB_004ad9e7;
      }
      uVar2 = *(uint *)(param_1 + 0x27ac);
      if (uVar2 < 2) {
        if (uVar2 != 1) goto LAB_004ad9d8;
        uVar11 = 1;
      }
      else {
        if (2 < uVar2) {
          if (uVar2 == 3) {
            FUN_00503620(iVar4,0,1);
            FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
            goto LAB_004ad9e7;
          }
          goto LAB_004ad9d8;
        }
        uVar11 = 2;
      }
      goto LAB_004ad9df;
    }
    iStack_58 = iVar4;
    if (*(int *)(param_1 + 0x10a74) != 0) {
      (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x24))(iVar6);
      pfVar7 = afStack_2c4;
      pfVar8 = &fStack_2dc;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar8 = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
        pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
      }
      fStack_204 = fStack_2dc + fStack_2d0;
      fStack_200 = fStack_2d8 + fStack_2cc;
      fStack_1fc = fStack_2d4 + fStack_2c8;
      fStack_90 = fStack_2dc + fStack_2d0;
      afStack_c8[(uint)bVar10 * -2 + 0xf] = afStack_2a8[(uint)bVar10 * -2 + 0x2a];
      afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
           afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2b];
      fStack_240 = fStack_90 * _DAT_005d6f67;
      fStack_23c = fStack_8c * _DAT_005d6f67;
      fStack_238 = fStack_88 * _DAT_005d6f67;
      afStack_1d4[0] = fStack_90 * _DAT_005d6f67;
      afStack_2a8[(uint)bVar10 * -2 + 0x36] = afStack_2a8[(uint)bVar10 * -2 + 0x1b];
      afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x37] =
           afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
      FUN_00408d70(*(uint *)(param_1 + 0x2560c),afStack_2a8 + 0x35);
      pfVar7 = afStack_2a8 + 0x32;
      afStack_1e0[0] = (float)uStack_228;
      afStack_2a8[(uint)bVar10 * -2 + 0x33] = afStack_2a8[(uint)bVar10 * -2 + 0x21];
      afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x34] =
           afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22];
      FUN_00408de0(param_1,pfVar7);
      afStack_1c8[3] = (float)uStack_168;
      afStack_1b8[(uint)bVar10 * -2] = afStack_1a0[(uint)bVar10 * -2 + 0xf];
      afStack_1b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
      FUN_005838f0(afStack_2a8 + 0x3b);
      afStack_1a0[2] = (float)uStack_264;
      afStack_1a0[(uint)bVar10 * -2 + 3] = afStack_2a8[(uint)bVar10 * -2 + 0x12];
      afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
      puVar5 = (uint *)FUN_0040d0c0(afStack_1a0[3]);
      fStack_1f8 = fStack_2d0 - fStack_2dc;
      fStack_1f4 = fStack_2cc - fStack_2d8;
      fStack_1f0 = fStack_2c8 - fStack_2d4;
      fStack_fc = fStack_2d0 - fStack_2dc;
      afStack_1a0[(uint)bVar10 * -2 + 0x2a] = afStack_2a8[(uint)bVar10 * -2 + 0x2d];
      afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2b] =
           afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2e];
      fStack_21c = fStack_fc * _DAT_005d6f67;
      fStack_218 = fStack_f8 * _DAT_005d6f67;
      fStack_214 = fStack_f4 * _DAT_005d6f67;
      fStack_9c = fStack_fc * _DAT_005d6f67;
      afStack_c8[(uint)bVar10 * -2 + 0xc] = afStack_2a8[(uint)bVar10 * -2 + 0x24];
      afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
           afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25];
      uStack_98 = 0;
      puStack_24 = puVar5;
      puStack_14 = puVar5;
      if ((((afStack_1b8[1] - SQRT(fStack_94 * fStack_94 + fStack_9c * fStack_9c) <
             (float)_DAT_005d6f6b) && (dStack_6c = (double)afStack_1b8[0], 1.0 < dStack_6c)) &&
          (dStack_6c < _DAT_005d6f73)) && (ABS((float)puVar5) < (float)_DAT_005d6f7b)) {
        puStack_28 = (uint *)(param_2 * _DAT_005d6f83);
        if ((float)puVar5 < -(float)puStack_28) {
          puStack_24 = (uint *)-(float)puStack_28;
        }
        if ((float)puStack_28 < (float)puStack_24) {
          puStack_24 = puStack_28;
        }
        *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + (float)puStack_24;
        goto LAB_004ad9e7;
      }
    }
    if (iStack_58 == 0) {
      FUN_00503620(param_1 + 0x2b4,0,1);
      FUN_004cf830(param_1);
    }
  }
  else {
    FUN_00408d70(iVar4,iVar4 + 0x430);
    uStack_120 = uStack_1a4;
    afStack_1a0[(uint)bVar10 * -2 + 0x21] = afStack_1a0[(uint)bVar10 * -2];
    afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22] =
         afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    if (*(float *)(param_1 + 0x24) <= fStack_11c) goto LAB_004ad9e7;
    *(uint *)(param_1 + 0x25614) = 0;
    afStack_d8[0] = 0.0;
    afStack_d8[2] = 4.0;
    afStack_d8[1] = 0.5;
    FUN_00408cf0(param_1,afStack_1a0 + 0x32);
    fStack_114 = afStack_c8[2];
    afStack_1a0[(uint)bVar10 * -2 + 0x24] = afStack_c8[(uint)bVar10 * -2 + 3];
    afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25] =
         afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    *(float *)(param_1 + 0x20) = fStack_114 + *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x24) = fStack_110 + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = fStack_10c + *(float *)(param_1 + 0x28);
    puStack_14 = (uint *)
                 (**(code **)(*(int *)(param_1 + 0x2b0) + 0x48))
                           (param_1,*(uint *)(param_1 + 0x3430),0);
    *(uint **)(param_1 + 0x2574) = puStack_14;
    *(uint *)(param_1 + 0x2570) =
         (uint)(*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2574) + (float)_DAT_005d6f93);
LAB_004ad9d8:
    uVar11 = 0;
    iVar4 = param_1 + 0x2b4;
LAB_004ad9df:
    FUN_00503620(iVar4,uVar11,1);
  }
LAB_004ad9e7:
  if (*(int *)(param_1 + 0x25614) == 0) {
    if (((uStack_18 == 0) || (iVar4 = FUN_005035c0(param_1 + 0x2b4), *(int *)(iVar4 + 0x24) == 0xd))
       || (*(int *)(param_1 + 0xdc) != 0)) {
      iVar4 = param_1 + 0x2b4;
      pfVar7 = (float *)(param_1 + 0x2580 + (uint)bVar10 * -8);
      afStack_d8[3] = *(float *)(param_1 + 0x257c);
      afStack_c8[(uint)bVar10 * -2] = *pfVar7;
      afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] = pfVar7[(uint)bVar10 * -2 + 1];
      iVar4 = FUN_005035c0(iVar4);
      uVar2 = *(uint *)(iVar4 + 0x24);
      if (uVar2 < 3) {
        if (uVar2 == 0) {
          bVar9 = true;
LAB_004ae5e2:
          if (!bVar9) {
LAB_004ae5e4:
            afStack_d8[3] = afStack_d8[3] + *(float *)(param_1 + 0x2508);
            afStack_c8[0] = afStack_c8[0] + *(float *)(param_1 + 0x250c);
            afStack_c8[1] = afStack_c8[1] + *(float *)(param_1 + 0x2510);
          }
        }
      }
      else if (3 < uVar2) {
        if (uVar2 < 0x11) {
          bVar9 = uVar2 == 0x10;
          goto LAB_004ae5e2;
        }
        if (0x11 < uVar2) {
          if (uVar2 < 0x14) goto LAB_004ae5e4;
          if (0x14 < uVar2) {
            bVar9 = uVar2 == 0x15;
            goto LAB_004ae5e2;
          }
        }
      }
      FUN_00423a10(param_1,param_2);
      fStack_2ac = *(float *)(param_1 + 0x2588) * param_2;
      pfVar7 = afStack_1a0 + 0x35;
      afStack_2a8[0] = *(float *)(param_1 + 0x258c) * param_2;
      afStack_2a8[1] = *(float *)(param_1 + 0x2590) * param_2;
      fStack_138 = fStack_2ac;
      afStack_1a0[(uint)bVar10 * -2 + 0x1b] = afStack_2a8[(uint)bVar10 * -2];
      afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c] =
           afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      afStack_d8[3] = afStack_d8[3] + fStack_138;
      afStack_c8[0] = afStack_c8[0] + fStack_134;
      afStack_c8[1] = afStack_c8[1] + fStack_130;
      FUN_00423a60(param_1,pfVar7);
    }
  }
  else {
    puStack_14 = (uint *)(param_1 + 0x2508);
    FUN_00408cf0(param_1,puStack_14);
    fStack_15c = fStack_b4;
    afStack_1a0[(uint)bVar10 * -2 + 0x12] = afStack_c8[(uint)bVar10 * -2 + 6];
    afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
         afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_15c;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_158;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_154;
    puStack_14[2] = 0;
    puStack_14[1] = puStack_14[2];
    *puStack_14 = puStack_14[1];
  }
  uVar2 = uStack_18;
  FUN_00424470(param_1);
  if (((uVar2 == 0) && (*(int *)(param_1 + 0x10a80) != 0)) &&
     (*(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4) != 0)) {
    bVar1 = *(byte *)(param_1 + 0x25640);
    if ((bVar1 & 3) == 0) {
      *(byte *)(param_1 + 0x25640) = bVar1 | 2;
    }
    else {
      *(byte *)(param_1 + 0x25640) = bVar1 & 0xfc;
    }
  }
  iVar4 = FUN_0040c8f0(*(uint *)(param_1 + 0x2620),DAT_007bcc84);
  if (iVar4 != 0) {
    if (((*(int *)(param_1 + 0x10a7c) != 0) && (uStack_18 == 0)) &&
       (*(uint *)(iVar4 + 0x248c) = (uint)(*(int *)(iVar4 + 0x248c) == 0),
       *(int *)(iVar4 + 0x7d4) == 1)) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"flashlit.wav");
    }
    if (*(int *)(iVar4 + 0x248c) != 0) {
      *(float *)(param_1 + 0x25654) =
           *(float *)(param_1 + 0x10a94) * _DAT_005d6f83 * (float)_DAT_005d6f9b * param_2 +
           *(float *)(param_1 + 0x25654);
      fStack_44 = (float)FUN_004af900(param_1);
      puStack_14 = (uint *)fStack_44;
      puStack_48 = (uint *)FUN_004af950(param_1);
      if (*(float *)(param_1 + 0x25654) < fStack_44) {
        *(float *)(param_1 + 0x25654) = fStack_44;
      }
      puStack_14 = puStack_48;
      if ((float)puStack_48 < *(float *)(param_1 + 0x25654)) {
        *(uint **)(param_1 + 0x25654) = puStack_48;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x25640) & 1) == 0) {
    fVar3 = *(float *)(param_1 + 0x25644) - param_2 / _DAT_005f732c;
    *(float *)(param_1 + 0x25644) = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)(param_1 + 0x25644) = 0;
    }
  }
  else {
    fVar3 = param_2 / _DAT_005f7328 + *(float *)(param_1 + 0x25644);
    *(float *)(param_1 + 0x25644) = fVar3;
    if (1.0 < fVar3) {
      *(uint *)(param_1 + 0x25644) = 0x3f800000;
    }
  }
  if ((*(byte *)(param_1 + 0x25640) & 2) == 0) {
    fStack_34 = *(float *)(param_1 + 0x25648);
    fVar3 = fStack_34 - param_2 / _DAT_005f732c;
    *(float *)(param_1 + 0x25648) = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)(param_1 + 0x25648) = 0;
    }
    fStack_40 = _DAT_005f7334 + (float)_DAT_005d6fa3;
    if ((fStack_40 <= fStack_34) && (*(float *)(param_1 + 0x25648) < fStack_40)) {
      pcVar12 = "undraw-s.wav @ .7";
      goto LAB_004adbdc;
    }
  }
  else {
    fStack_3c = *(float *)(param_1 + 0x25648);
    fVar3 = param_2 / _DAT_005f7328 + fStack_3c;
    *(float *)(param_1 + 0x25648) = fVar3;
    if (1.0 < fVar3) {
      *(uint *)(param_1 + 0x25648) = 0x3f800000;
    }
    fStack_50 = _DAT_005f7334 + (float)_DAT_005d6fab;
    if ((fStack_3c <= fStack_50) && (fStack_50 < *(float *)(param_1 + 0x25648))) {
      FUN_004bb890(0x01CB6900);
      pcVar12 = "draw-f.wav @ 1.5";
LAB_004adbdc:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,pcVar12);
    }
  }
  if ((*(byte *)(param_1 + 0x25640) & 3) == 0) {
    fVar3 = *(float *)(param_1 + 0x2564c) - param_2 / _DAT_005f732c;
    *(float *)(param_1 + 0x2564c) = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)(param_1 + 0x2564c) = 0;
    }
  }
  else {
    fVar3 = param_2 / _DAT_005f7328 + *(float *)(param_1 + 0x2564c);
    *(float *)(param_1 + 0x2564c) = fVar3;
    if (1.0 < fVar3) {
      *(uint *)(param_1 + 0x2564c) = 0x3f800000;
    }
  }
  if (uStack_18 == 0) {
    if (((iVar4 == 0) || (*(int *)(iVar4 + 0x248c) == 0)) ||
       (iVar4 = FUN_005035c0(param_1 + 0x2b4), *(int *)(iVar4 + 0x24) == 5)) {
      fVar3 = param_2 / _DAT_005f732c;
      goto LAB_004adc3d;
    }
    fVar3 = param_2 / _DAT_005f7328 + *(float *)(param_1 + 0x25650);
  }
  else {
    fVar3 = (param_2 / _DAT_005f732c) * (float)_DAT_005d6f6b;
LAB_004adc3d:
    fVar3 = *(float *)(param_1 + 0x25650) - fVar3;
  }
  uVar2 = uStack_18;
  *(float *)(param_1 + 0x25650) = fVar3;
  if (*(float *)(param_1 + 0x25650) < 0.0) {
    *(uint *)(param_1 + 0x25650) = 0;
  }
  if ((float)_DAT_005d6fb3 < *(float *)(param_1 + 0x25650)) {
    *(uint *)(param_1 + 0x25650) = 0x3f666666;
  }
  FUN_004b1530(param_1,param_2,uStack_18);
  fVar3 = *(float *)(param_1 + 0x25678) - param_2 / _DAT_005f733c;
  *(float *)(param_1 + 0x25678) = fVar3;
  if (((fVar3 <= 0.0) && (*(uint *)(param_1 + 0x25678) = 0, uVar2 == 0)) &&
     ((*(int *)(param_1 + 0x10a74) != 0 && (*(int *)(param_1 + 0x25658) == 0)))) {
    if (*(int *)(param_1 + 0x25640) == 0) {
      if ((*(float *)(param_1 + 0x25648) <= 0.0) && (iVar4 = FUN_004cec50(param_1), iVar4 == 0)) {
        iVar4 = FUN_004cf030(param_1,0);
        switch(iVar4) {
        case 0:
        case 1:
          break;
        case 2:
        case 3:
          FUN_00503620(param_1 + 0x2b4,0x12,1);
          break;
        default:
          FUN_004cf230(param_1);
        }
        if ((iVar4 == 0) && (iVar4 = FUN_004cee90(param_1), iVar4 == 0)) {
          iVar4 = FUN_004cf4e0(param_1);
          if (iVar4 == 0) {
            iVar4 = FUN_004cf2b0(param_1);
            if (iVar4 == 0) {
              FUN_004b0a90(param_1);
            }
            else {
              FUN_004cf440(param_1);
            }
          }
          else {
            FUN_00503620(param_1 + 0x2b4,0xd,1);
          }
        }
      }
    }
    else {
      *(uint *)(param_1 + 0x25658) = 3;
    }
  }
  uVar2 = uStack_18;
  FUN_004afa20(param_1);
  FUN_004b1e00(param_1,param_2,uVar2 == 0);
  FUN_00429e90(param_1,param_2);
  puStack_14 = (uint *)FUN_005038a0(param_1 + 0x2b4,0xd);
  if ((float)puStack_14 <= 0.0) {
    FUN_004cf830(param_1);
  }
  else {
    puStack_14 = (uint *)FUN_00503e60(param_1 + 0x2b4);
    if ((1.0 < (float)puStack_14) &&
       (iStack_38 = FUN_0040c8f0(*(uint *)(param_1 + 0x2560c),DAT_007bc9e8), iStack_38 != 0))
    {
      FUN_004af960(param_1);
      pfVar7 = afStack_2a8 + 2;
      afStack_2a8[2] = (float)uStack_270;
      afStack_2a8[(uint)bVar10 * -2 + 3] = afStack_2a8[(uint)bVar10 * -2 + 0xf];
      afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
      FUN_00408d70(param_1,pfVar7);
      pfVar7 = afStack_1a0 + 0x2c;
      fStack_1ec = fStack_108;
      afStack_2a8[(uint)bVar10 * -2 + 0x30] = afStack_1a0[(uint)bVar10 * -2 + 0x27];
      afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x31] =
           afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x28];
      fStack_150 = fStack_1ec - fStack_294;
      fStack_14c = fStack_1e8 - fStack_290;
      fStack_148 = fStack_1e4 - fStack_28c;
      afStack_f0[0] = fStack_1ec - fStack_294;
      afStack_1a0[(uint)bVar10 * -2 + 0x2d] = afStack_1a0[(uint)bVar10 * -2 + 0x15];
      afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2e] =
           afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
      afStack_f0[1] = 0.0;
      FUN_00408d30(param_1,pfVar7);
      uStack_174 = uStack_a8;
      afStack_1a0[(uint)bVar10 * -2 + 0xc] = afStack_c8[(uint)bVar10 * -2 + 9];
      afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
           afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      if (0.0 < fStack_16c) {
        FUN_0041cb40(iStack_38,afStack_2a8 + 5,afStack_1a0 + 0x2c);
      }
    }
  }
  FUN_004b0210(param_1,param_2);
  if (*(int *)(param_1 + 0x25658) == 3) {
    iStack_5c = FUN_0040c8f0(*(uint *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4),
                             _DAT_01c225d8);
    if (iStack_5c != 0) {
      if (*(int *)(param_1 + 0x10a74) == 0) {
        *(uint *)(param_1 + 0x25658) = 2;
      }
      else {
        fVar3 = param_2 * (float)_DAT_005d6fbb + *(float *)(param_1 + 0x601b0);
        *(float *)(param_1 + 0x601b0) = fVar3;
        if (0x42700000 < fVar3) {
          *(uint *)(param_1 + 0x10a74) = 0;
          *(uint *)(param_1 + 0x25658) = 2;
          *(float *)(param_1 + 0x601b0) = 0x42700000;
        }
      }
      afStack_1c8[0] = *(float *)(param_1 + 0x25670);
      afStack_1c8[2] = 0.0;
      afStack_1c8[1] = 0.0;
      FUN_00449280(auStack_304,afStack_2a8 + 0x38);
      afStack_1b8[4] = *(float *)(param_1 + 0x601b0);
      afStack_1b8[2] = 0.0;
      afStack_1b8[3] = 0.0;
      FUN_00449530(auStack_304,afStack_1b8 + 2);
      pfVar7 = afStack_1a0 + 0x2f;
      afStack_e4[0] = (float)uStack_12c;
      afStack_1a0[(uint)bVar10 * -2 + 0x30] = afStack_1a0[(uint)bVar10 * -2 + 0x1e];
      afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x31] =
           afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f];
      FUN_00408cf0(param_1,pfVar7);
      fStack_18c = fStack_78;
      afStack_1a0[(uint)bVar10 * -2 + 6] = afStack_c8[(uint)bVar10 * -2 + 0x15];
      afStack_1a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
      if ((float *)(iStack_5c + 0x6d8) != afStack_1a0 + 5) {
        *(float *)(iStack_5c + 0x6d8) = fStack_18c;
        *(uint *)(iStack_5c + 0x6dc) = uStack_188;
        *(uint *)(iStack_5c + 0x6e0) = uStack_184;
      }
      goto LAB_004aeab5;
    }
    *(uint *)(param_1 + 0x25658) = 2;
LAB_004ade7e:
    *(uint *)(param_1 + 0x601b0) = _DAT_005f736c;
    iVar4 = FUN_004b0e80(param_1);
    if (iVar4 == 0) goto LAB_004aeac2;
    *(uint *)(param_1 + 0x25658) = 1;
  }
  else {
LAB_004aeab5:
    if (*(int *)(param_1 + 0x25658) == 2) goto LAB_004ade7e;
LAB_004aeac2:
    if (*(int *)(param_1 + 0x25658) != 1) goto LAB_004aded9;
  }
  *(uint *)(param_1 + 0x25658) = 0;
  FUN_004b0ef0(param_1);
  if (*(int *)(*(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4) + 0x448) == 0) {
    *(uint *)(param_1 + 0x10a74) = 0;
  }
LAB_004aded9:
  iVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
  if (iVar4 != 2) {
    FUN_005afdf0(param_1 + 0x25680,param_1 + 0x20,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2574),param_1 + 0x2b4);
  }
  iVar4 = *(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4);
  (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x14))(iVar4,param_2);
  if (*(int *)(*(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4) + 0xfc) == 0) {
    return;
  }
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
