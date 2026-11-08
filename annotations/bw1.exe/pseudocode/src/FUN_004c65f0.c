// Name: FUN_004c65f0
// Address: 004c65f0
// Address Range: [[004c65f0, 004c7a95]]
// Convention: unknown
// Signature: void FUN_004c65f0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c65f0(int param_1,float param_2)

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
  float afStack_2a8 [4];
  float fStack_298;
  float afStack_294 [3];
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  uint uStack_270;
  uint uStack_26c;
  uint uStack_264;
  float afStack_258 [3];
  float fStack_24c;
  uint uStack_240;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  uint uStack_210;
  uint uStack_204;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float afStack_1ec [4];
  float afStack_1dc [5];
  float afStack_1c8 [3];
  float afStack_1bc [3];
  float fStack_1b0;
  float afStack_1ac [4];
  float fStack_19c;
  float afStack_198 [3];
  uint uStack_18c;
  uint uStack_188;
  float fStack_180;
  uint uStack_174;
  uint uStack_168;
  uint uStack_15c;
  uint uStack_150;
  float afStack_144 [3];
  float afStack_138 [3];
  uint uStack_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  uint uStack_114;
  float fStack_110;
  uint uStack_108;
  float fStack_fc;
  uint uStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float afStack_d8 [4];
  float afStack_c8 [5];
  uint uStack_b4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [3];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  double dStack_6c;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  float fStack_50;
  int iStack_4c;
  uint *puStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  float fStack_30;
  uint *puStack_2c;
  uint *puStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_1c;
  float fStack_18;
  uint *puStack_14;
  
  bVar10 = 0;
  iVar4 = FUN_0042e1a0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc1d4) == 2) {
    FUN_004c7aa0(param_1,param_2);
  }
  fVar3 = *(float *)(param_1 + 0xc1d0) - param_2;
  *(float *)(param_1 + 0xc1d0) = fVar3;
  if (fVar3 < 0.0) {
    *(uint *)(param_1 + 0xc1d0) = 0;
  }
  FUN_004c8900(param_1);
  pfVar7 = afStack_1ac + 0x1d;
  afStack_138[0] = (float)uStack_264;
  afStack_1ac[(uint)bVar10 * -2 + 0x1e] = afStack_2a8[(uint)bVar10 * -2 + 0x12];
  afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f] =
       afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
  FUN_00408b40(param_1,pfVar7);
  fStack_27c = fStack_228;
  afStack_2a8[(uint)bVar10 * -2 + 0xc] = afStack_2a8[(uint)bVar10 * -2 + 0x21];
  afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
       afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22];
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  FUN_004c83b0(param_1,param_2);
  uStack_1c = (uint)(*(float *)(param_1 + 0x2538) <= 0.0);
  if (*(int *)(param_1 + 0x26fc) != 0) {
    uStack_1c = 1;
  }
  if (*(int *)(param_1 + 0x1ff7c) != 0) {
    uStack_1c = 1;
  }
  if (*(int *)(param_1 + 0x1ff84) != 0) {
    uStack_1c = 1;
  }
  puStack_14 = (uint *)FUN_00524a40(param_1 + 0x158,8);
  if (0.0 < (float)puStack_14) {
    uStack_1c = 1;
  }
  puStack_14 = (uint *)FUN_00524a40(param_1 + 0x158,0xb);
  if (0.0 < (float)puStack_14) {
    uStack_1c = 1;
  }
  puStack_14 = (uint *)FUN_00524a40(param_1 + 0x158,0xc);
  if (0.0 < (float)puStack_14) {
    uStack_1c = 1;
  }
  puStack_14 = (uint *)FUN_00524a40(param_1 + 0x158,0x12);
  if (0.0 < (float)puStack_14) {
    uStack_1c = 1;
  }
  *(uint *)(param_1 + 0x2528) = 0;
  *(uint *)(param_1 + 0x2524) = 0;
  fStack_24 = 0.0;
  if (*(int *)(param_1 + 0x2500) != 0) {
    iVar4 = param_1 + 0x158;
    puStack_14 = (uint *)FUN_00524a40(iVar4,1);
    *(float *)(param_1 + 0x2524) = (float)puStack_14 * _DAT_01cc90c8 + *(float *)(param_1 + 0x2524);
    puStack_14 = (uint *)FUN_00524a40(iVar4,2);
    *(float *)(param_1 + 0x2524) = (float)puStack_14 * _DAT_01cc90cc + *(float *)(param_1 + 0x2524);
    puStack_14 = (uint *)FUN_00524a40(iVar4,3);
    *(float *)(param_1 + 0x2524) = *(float *)(param_1 + 0x2524) - (float)puStack_14 * _DAT_01cc90d0;
    puStack_14 = (uint *)FUN_00524a40(iVar4,0x14);
    fStack_24 = 0.0 - (float)puStack_14 * _DAT_00600d88;
    puStack_14 = (uint *)FUN_00524a40(iVar4,0x15);
    fStack_24 = (float)puStack_14 * _DAT_00600d88 + fStack_24;
    FUN_00435320(param_1,param_2);
  }
  fStack_24 = fStack_24 * param_2;
  iVar4 = *(int *)(param_1 + 0x1ff84);
  *(float *)(param_1 + 0x2524) = *(float *)(param_1 + 0x2524) * param_2;
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x26fc) != 0) {
      if (*(int *)(param_1 + 0x2700) == 0) {
        FUN_00408bb0(param_1,*(int *)(param_1 + 0x26fc) + 0x20);
        afStack_258[0] = (float)uStack_240;
        afStack_2a8[(uint)bVar10 * -2 + 0x15] = afStack_2a8[(uint)bVar10 * -2 + 0x1b];
        afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
             afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
        FUN_005a7520(afStack_2a8 + 0x14);
        uStack_270 = uStack_174;
        afStack_2a8[(uint)bVar10 * -2 + 0xf] = afStack_1ac[(uint)bVar10 * -2 + 0xf];
        afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
             afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
        puStack_14 = (uint *)FUN_0040cd60(uStack_26c);
        fStack_20 = (float)puStack_14;
        if ((float)puStack_14 < _DAT_005e1000) {
          fStack_20 = (float)puStack_14 + _DAT_005e0ffc;
        }
        if (_DAT_005e1004 < fStack_20) {
          fStack_20 = fStack_20 + _DAT_005e1008;
        }
        fStack_30 = param_2 * _DAT_005e0ffc;
        fStack_44 = -fStack_30;
        if (fStack_20 < fStack_44) {
          fStack_20 = fStack_44;
        }
        if (fStack_30 < fStack_20) {
          fStack_20 = fStack_30;
        }
        *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_20;
        FUN_004088b0(param_1);
      }
      iStack_5c = *(int *)(param_1 + 0x26fc);
      puStack_14 = *(uint **)(iStack_5c + 0x154);
      iStack_34 = param_1 + 0x158;
      FUN_00569130(iStack_34,0);
      puVar5 = puStack_14;
      iVar4 = iStack_5c;
      pfVar7 = afStack_2a8 + 5;
      afStack_294[0] = (float)uStack_b4;
      afStack_2a8[(uint)bVar10 * -2 + 6] = afStack_c8[(uint)bVar10 * -2 + 6];
      iVar6 = param_1;
      afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      iVar4 = (*(code *)puVar5[0x44])(iVar4,iVar6,pfVar7);
      if (iVar4 == 0) {
        *(uint *)(param_1 + 0x26fc) = 0;
      }
      else if (*(int *)(param_1 + 0x26fc) != 0) {
        if (*(int *)(param_1 + 0xc1e4) != 0) {
          uVar11 = 7;
          iVar4 = iStack_34;
          goto LAB_004c698f;
        }
        goto LAB_004c6997;
      }
      goto LAB_004c6988;
    }
    iVar6 = *(int *)(param_1 + 0x1ff7c);
    if (iVar6 == 0) {
      iVar6 = FUN_00432240(param_1,param_2);
      iVar4 = param_1 + 0x158;
      if (iVar6 == 0) {
        if (uStack_1c == 0) {
          iVar6 = FUN_00524770(iVar4);
          uVar2 = *(uint *)(iVar6 + 0x24);
          if (uVar2 < 0xe) {
            if ((((uVar2 == 0) || (uVar2 < 2)) || (uVar2 < 3)) || (uVar2 == 3)) goto LAB_004c73cb;
          }
          else if (uVar2 < 0xf) {
            iVar6 = FUN_0040c600(*(uint *)(param_1 + 0x1ff78),DAT_007c33e0);
            if (iVar6 != 0) {
              puStack_14 = (uint *)FUN_00525020(iVar4);
              FUN_0040e1a0(iVar6,puStack_14);
            }
          }
          else if (uVar2 < 0x11) {
            if (uVar2 == 0x10) {
LAB_004c73cb:
              if (*(int *)(param_1 + 0x2500) != 0) {
                iVar4 = 0;
                if (*(int *)(param_1 + 0xc1d8) != 0) {
                  if (*(int *)(param_1 + 0xc1e0) == 0) {
                    iVar4 = 1;
                  }
                  else {
                    iVar4 = 2;
                  }
                }
                if (*(int *)(param_1 + 0xc1dc) != 0) {
                  iVar4 = 3;
                }
                *(float *)(param_1 + 0x2508) =
                     *(float *)(param_1 + 0xc200) * *(float *)(param_1 + 0x2528);
                *(float *)(param_1 + 0x2514) =
                     *(float *)(param_1 + 0x2524) + *(float *)(param_1 + 0x2514);
                *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x250c) + fStack_24;
                iVar6 = FUN_00524770(param_1 + 0x158);
                if (iVar4 != *(int *)(iVar6 + 0x24)) {
                  FUN_005247c0(param_1 + 0x158,iVar4,1);
                }
                if ((*(int *)(param_1 + 0xc1e8) != 0) && (iVar4 = FUN_004c9500(param_1), iVar4 == 0)
                   ) {
                  FUN_004c9eb0(param_1);
                }
              }
            }
          }
          else if ((uVar2 < 0x12) || ((0x13 < uVar2 && ((uVar2 < 0x15 || (uVar2 == 0x15))))))
          goto LAB_004c73cb;
        }
        goto LAB_004c6997;
      }
      uVar2 = *(uint *)(param_1 + 0x273c);
      if (uVar2 < 2) {
        if (uVar2 != 1) goto LAB_004c6988;
        uVar11 = 1;
      }
      else {
        if (2 < uVar2) {
          if (uVar2 == 3) {
            FUN_005247c0(iVar4,0,1);
            FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
            goto LAB_004c6997;
          }
          goto LAB_004c6988;
        }
        uVar11 = 2;
      }
      goto LAB_004c698f;
    }
    iStack_54 = iVar4;
    if (*(int *)(param_1 + 0xc1e4) != 0) {
      (**(code **)(*(int *)(iVar6 + 0x154) + 0x1c))(iVar6);
      pfVar7 = afStack_2c4;
      pfVar8 = &fStack_2dc;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar8 = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
        pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
      }
      fStack_f0 = fStack_2dc + fStack_2d0;
      fStack_ec = fStack_2d8 + fStack_2cc;
      fStack_e8 = fStack_2d4 + fStack_2c8;
      fStack_e4 = fStack_2dc + fStack_2d0;
      afStack_1ac[(uint)bVar10 * -2 + 0x33] = afStack_1ac[(uint)bVar10 * -2 + 0x30];
      afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x34] =
           afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x31];
      fStack_1f8 = fStack_e4 * _DAT_005e0fe0;
      fStack_1f4 = fStack_e0 * _DAT_005e0fe0;
      fStack_1f0 = fStack_dc * _DAT_005e0fe0;
      afStack_1c8[0] = fStack_e4 * _DAT_005e0fe0;
      afStack_1dc[(uint)bVar10 * -2 + 6] = afStack_2a8[(uint)bVar10 * -2 + 0x2d];
      afStack_1dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2e];
      FUN_00408b40(*(uint *)(param_1 + 0x1ff7c),afStack_1dc + 5);
      pfVar7 = afStack_1dc + 2;
      afStack_1dc[2] = (float)uStack_168;
      afStack_1dc[(uint)bVar10 * -2 + 3] = afStack_1ac[(uint)bVar10 * -2 + 0x12];
      afStack_1dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
      FUN_00408bb0(param_1,pfVar7);
      afStack_1ac[2] = (float)uStack_210;
      afStack_1ac[(uint)bVar10 * -2 + 3] = afStack_2a8[(uint)bVar10 * -2 + 0x27];
      afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x28];
      FUN_005a7520(afStack_1ac + 2);
      uStack_18c = uStack_204;
      afStack_1ac[(uint)bVar10 * -2 + 9] = afStack_2a8[(uint)bVar10 * -2 + 0x2a];
      afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
           afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2b];
      puVar5 = (uint *)FUN_0040cd60(uStack_188);
      fStack_a8 = fStack_2d0 - fStack_2dc;
      fStack_a4 = fStack_2cc - fStack_2d8;
      fStack_a0 = fStack_2c8 - fStack_2d4;
      fStack_90 = fStack_2d0 - fStack_2dc;
      afStack_c8[(uint)bVar10 * -2 + 0xf] = afStack_c8[(uint)bVar10 * -2 + 9];
      afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
           afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      fStack_120 = fStack_90 * _DAT_005e0fe0;
      fStack_11c = fStack_8c * _DAT_005e0fe0;
      fStack_118 = fStack_88 * _DAT_005e0fe0;
      fStack_fc = fStack_90 * _DAT_005e0fe0;
      afStack_1ac[(uint)bVar10 * -2 + 0x2d] = afStack_1ac[(uint)bVar10 * -2 + 0x24];
      afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2e] =
           afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25];
      uStack_f8 = 0;
      puStack_28 = puVar5;
      puStack_14 = puVar5;
      if ((((fStack_19c - SQRT(fStack_f4 * fStack_f4 + fStack_fc * fStack_fc) < (float)_DAT_005e0fe4
            ) && (dStack_6c = (double)afStack_1ac[3], 1.0 < dStack_6c)) &&
          (dStack_6c < _DAT_005e0fec)) && (ABS((float)puVar5) < (float)_DAT_005e0ff4)) {
        puStack_2c = (uint *)(param_2 * _DAT_005e0ffc);
        if ((float)puVar5 < -(float)puStack_2c) {
          puStack_28 = (uint *)-(float)puStack_2c;
        }
        if ((float)puStack_2c < (float)puStack_28) {
          puStack_28 = puStack_2c;
        }
        *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + (float)puStack_28;
        goto LAB_004c6997;
      }
    }
    if (iStack_54 == 0) {
      FUN_005247c0(param_1 + 0x158,0,1);
      FUN_004ebbe0(param_1);
    }
  }
  else {
    FUN_00408b40(iVar4,iVar4 + 0x2d4);
    uStack_114 = uStack_150;
    afStack_1ac[(uint)bVar10 * -2 + 0x27] = afStack_1ac[(uint)bVar10 * -2 + 0x18];
    afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x28] =
         afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
    if (*(float *)(param_1 + 0x24) <= fStack_110) goto LAB_004c6997;
    *(uint *)(param_1 + 0x1ff84) = 0;
    afStack_d8[0] = 0.0;
    afStack_d8[2] = 4.0;
    afStack_d8[1] = 0.5;
    FUN_00408ac0(param_1,afStack_1ac + 0x35);
    fStack_21c = afStack_c8[2];
    afStack_2a8[(uint)bVar10 * -2 + 0x24] = afStack_c8[(uint)bVar10 * -2 + 3];
    afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25] =
         afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    *(float *)(param_1 + 0x20) = fStack_21c + *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x24) = fStack_218 + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = fStack_214 + *(float *)(param_1 + 0x28);
    puStack_14 = (uint *)
                 (**(code **)(*(int *)(param_1 + 0x154) + 0x40))
                           (param_1,*(uint *)(param_1 + 0x2fec),0);
    *(uint **)(param_1 + 0x2504) = puStack_14;
    *(uint *)(param_1 + 0x2500) =
         (uint)(*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2504) + (float)_DAT_005e100c);
LAB_004c6988:
    uVar11 = 0;
    iVar4 = param_1 + 0x158;
LAB_004c698f:
    FUN_005247c0(iVar4,uVar11,1);
  }
LAB_004c6997:
  if (*(int *)(param_1 + 0x1ff84) == 0) {
    if (((uStack_1c == 0) || (iVar4 = FUN_00524770(param_1 + 0x158), *(int *)(iVar4 + 0x24) == 0xd))
       || (*(int *)(param_1 + 0xdc) != 0)) {
      iVar4 = param_1 + 0x158;
      pfVar7 = (float *)(param_1 + 0x2510 + (uint)bVar10 * -8);
      afStack_2a8[2] = *(float *)(param_1 + 0x250c);
      afStack_2a8[(uint)bVar10 * -2 + 3] = *pfVar7;
      afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] = pfVar7[(uint)bVar10 * -2 + 1];
      iVar4 = FUN_00524770(iVar4);
      uVar2 = *(uint *)(iVar4 + 0x24);
      if (uVar2 < 3) {
        if (uVar2 == 0) {
          bVar9 = true;
LAB_004c7567:
          if (!bVar9) {
LAB_004c7569:
            afStack_2a8[2] = afStack_2a8[2] + *(float *)(param_1 + 0x249c);
            afStack_2a8[3] = afStack_2a8[3] + *(float *)(param_1 + 0x24a0);
            fStack_298 = fStack_298 + *(float *)(param_1 + 0x24a4);
          }
        }
      }
      else if (3 < uVar2) {
        if (uVar2 < 0x11) {
          bVar9 = uVar2 == 0x10;
          goto LAB_004c7567;
        }
        if (0x11 < uVar2) {
          if (uVar2 < 0x14) goto LAB_004c7569;
          if (0x14 < uVar2) {
            bVar9 = uVar2 == 0x15;
            goto LAB_004c7567;
          }
        }
      }
      FUN_0042d700(param_1,param_2);
      fStack_288 = *(float *)(param_1 + 0x2518) * param_2;
      pfVar7 = afStack_2a8 + 2;
      fStack_284 = *(float *)(param_1 + 0x251c) * param_2;
      fStack_280 = *(float *)(param_1 + 0x2520) * param_2;
      fStack_78 = fStack_288;
      afStack_c8[(uint)bVar10 * -2 + 0x15] = afStack_2a8[(uint)bVar10 * -2 + 9];
      afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
           afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      afStack_2a8[2] = afStack_2a8[2] + fStack_78;
      afStack_2a8[3] = afStack_2a8[3] + fStack_74;
      fStack_298 = fStack_298 + fStack_70;
      FUN_0042d750(param_1,pfVar7);
    }
  }
  else {
    puStack_14 = (uint *)(param_1 + 0x249c);
    FUN_00408ac0(param_1,puStack_14);
    afStack_1ec[3] = fStack_1b0;
    afStack_1dc[(uint)bVar10 * -2] = afStack_1ac[(uint)bVar10 * -2];
    afStack_1dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + afStack_1ec[3];
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + afStack_1dc[0];
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + afStack_1dc[1];
    puStack_14[2] = 0;
    puStack_14[1] = puStack_14[2];
    *puStack_14 = puStack_14[1];
  }
  uVar2 = uStack_1c;
  FUN_0042e160(param_1);
  if (((uVar2 == 0) && (*(int *)(param_1 + 0xc1f0) != 0)) && (*(int *)(param_1 + 0x1fe20) != 0)) {
    bVar1 = *(byte *)(param_1 + 0x1ffac);
    if ((bVar1 & 3) == 0) {
      *(byte *)(param_1 + 0x1ffac) = bVar1 | 2;
    }
    else {
      *(byte *)(param_1 + 0x1ffac) = bVar1 & 0xfc;
    }
  }
  iVar4 = FUN_0040c600(*(uint *)(param_1 + 0x25b0),DAT_007c5330);
  if (iVar4 != 0) {
    if (((*(int *)(param_1 + 0xc1ec) != 0) && (uStack_1c == 0)) &&
       (*(uint *)(iVar4 + 0x2330) = (uint)(*(int *)(iVar4 + 0x2330) == 0),
       *(int *)(iVar4 + 0x678) == 1)) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"flashlit.wav");
    }
    if (*(int *)(iVar4 + 0x2330) != 0) {
      *(float *)(param_1 + 0x1ffc0) =
           *(float *)(param_1 + 0xc204) * _DAT_005e0ffc * (float)_DAT_005e1014 * param_2 +
           *(float *)(param_1 + 0x1ffc0);
      fStack_3c = (float)FUN_004c88a0(param_1);
      puStack_14 = (uint *)fStack_3c;
      puStack_48 = (uint *)FUN_004c88f0(param_1);
      if (*(float *)(param_1 + 0x1ffc0) < fStack_3c) {
        *(float *)(param_1 + 0x1ffc0) = fStack_3c;
      }
      puStack_14 = puStack_48;
      if ((float)puStack_48 < *(float *)(param_1 + 0x1ffc0)) {
        *(uint **)(param_1 + 0x1ffc0) = puStack_48;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x1ffac) & 1) == 0) {
    fVar3 = *(float *)(param_1 + 0x1ffb0) - param_2 / _DAT_00600d4c;
    *(float *)(param_1 + 0x1ffb0) = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)(param_1 + 0x1ffb0) = 0;
    }
  }
  else {
    fVar3 = param_2 / _DAT_00600d48 + *(float *)(param_1 + 0x1ffb0);
    *(float *)(param_1 + 0x1ffb0) = fVar3;
    if (1.0 < fVar3) {
      *(uint *)(param_1 + 0x1ffb0) = 0x3f800000;
    }
  }
  if ((*(byte *)(param_1 + 0x1ffac) & 2) == 0) {
    fStack_38 = *(float *)(param_1 + 0x1ffb4);
    fVar3 = fStack_38 - param_2 / _DAT_00600d4c;
    *(float *)(param_1 + 0x1ffb4) = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)(param_1 + 0x1ffb4) = 0;
    }
    fStack_18 = _DAT_00600d54 + (float)_DAT_005e101c;
    if ((fStack_18 <= fStack_38) && (*(float *)(param_1 + 0x1ffb4) < fStack_18)) {
      pcVar12 = "undraw-s.wav @ .7";
      goto LAB_004c6b92;
    }
  }
  else {
    fStack_40 = *(float *)(param_1 + 0x1ffb4);
    fVar3 = param_2 / _DAT_00600d48 + fStack_40;
    *(float *)(param_1 + 0x1ffb4) = fVar3;
    if (1.0 < fVar3) {
      *(uint *)(param_1 + 0x1ffb4) = 0x3f800000;
    }
    fStack_50 = _DAT_00600d54 + (float)_DAT_005e1024;
    if ((fStack_40 <= fStack_50) && (fStack_50 < *(float *)(param_1 + 0x1ffb4))) {
      FUN_004d6300(0x01CCF390);
      pcVar12 = "draw-f.wav @ 1.5";
LAB_004c6b92:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,pcVar12);
    }
  }
  if ((*(byte *)(param_1 + 0x1ffac) & 3) == 0) {
    fVar3 = *(float *)(param_1 + 0x1ffb8) - param_2 / _DAT_00600d4c;
    *(float *)(param_1 + 0x1ffb8) = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)(param_1 + 0x1ffb8) = 0;
    }
  }
  else {
    fVar3 = param_2 / _DAT_00600d48 + *(float *)(param_1 + 0x1ffb8);
    *(float *)(param_1 + 0x1ffb8) = fVar3;
    if (1.0 < fVar3) {
      *(uint *)(param_1 + 0x1ffb8) = 0x3f800000;
    }
  }
  if (uStack_1c == 0) {
    if (((iVar4 == 0) || (*(int *)(iVar4 + 0x2330) == 0)) ||
       (iVar4 = FUN_00524770(param_1 + 0x158), *(int *)(iVar4 + 0x24) == 5)) {
      fVar3 = param_2 / _DAT_00600d4c;
      goto LAB_004c6bf3;
    }
    fVar3 = param_2 / _DAT_00600d48 + *(float *)(param_1 + 0x1ffbc);
  }
  else {
    fVar3 = (param_2 / _DAT_00600d4c) * (float)_DAT_005e0fe4;
LAB_004c6bf3:
    fVar3 = *(float *)(param_1 + 0x1ffbc) - fVar3;
  }
  uVar2 = uStack_1c;
  *(float *)(param_1 + 0x1ffbc) = fVar3;
  if (*(float *)(param_1 + 0x1ffbc) < 0.0) {
    *(uint *)(param_1 + 0x1ffbc) = 0;
  }
  if ((float)_DAT_005e102c < *(float *)(param_1 + 0x1ffbc)) {
    *(uint *)(param_1 + 0x1ffbc) = 0x3f666666;
  }
  FUN_004ca450(param_1,param_2,uStack_1c);
  fVar3 = *(float *)(param_1 + 0x1ffe4) - param_2 / _DAT_00600d5c;
  *(float *)(param_1 + 0x1ffe4) = fVar3;
  if (((fVar3 <= 0.0) && (*(uint *)(param_1 + 0x1ffe4) = 0, uVar2 == 0)) &&
     ((*(int *)(param_1 + 0xc1e4) != 0 && (*(int *)(param_1 + 0x1ffc4) == 0)))) {
    if (*(int *)(param_1 + 0x1ffac) == 0) {
      if ((*(float *)(param_1 + 0x1ffb4) <= 0.0) && (iVar4 = FUN_004eb090(param_1), iVar4 == 0)) {
        iVar4 = FUN_004eb3e0(param_1,0);
        switch(iVar4) {
        case 0:
        case 1:
          break;
        case 2:
        case 3:
          FUN_005247c0(param_1 + 0x158,0x12,1);
          break;
        default:
          FUN_004eb5e0(param_1);
        }
        if ((iVar4 == 0) && (iVar4 = FUN_004eb240(param_1), iVar4 == 0)) {
          iVar4 = FUN_004eb890(param_1);
          if (iVar4 == 0) {
            iVar4 = FUN_004eb660(param_1);
            if (iVar4 == 0) {
              FUN_004c99e0(param_1);
            }
            else {
              FUN_004eb7f0(param_1);
            }
          }
          else {
            FUN_005247c0(param_1 + 0x158,0xd,1);
          }
        }
      }
    }
    else {
      *(uint *)(param_1 + 0x1ffc4) = 3;
    }
  }
  uVar2 = uStack_1c;
  FUN_004c89c0(param_1);
  FUN_004cad20(param_1,param_2,uVar2 == 0);
  FUN_00433e80(param_1,param_2);
  puStack_14 = (uint *)FUN_00524a40(param_1 + 0x158,0xd);
  if ((float)puStack_14 <= 0.0) {
    FUN_004ebbe0(param_1);
  }
  else {
    puStack_14 = (uint *)FUN_00525020(param_1 + 0x158);
    if ((1.0 < (float)puStack_14) &&
       (iStack_4c = FUN_0040c600(*(uint *)(param_1 + 0x1ff7c),DAT_007c5094), iStack_4c != 0))
    {
      FUN_004c8900(param_1);
      pfVar7 = afStack_1ac + 0x1a;
      afStack_144[0] = (float)uStack_108;
      afStack_1ac[(uint)bVar10 * -2 + 0x1b] = afStack_1ac[(uint)bVar10 * -2 + 0x2a];
      afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c] =
           afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2b];
      FUN_00408b40(param_1,pfVar7);
      pfVar7 = afStack_c8 + 0xb;
      fStack_234 = fStack_24c;
      afStack_2a8[(uint)bVar10 * -2 + 0x1e] = afStack_2a8[(uint)bVar10 * -2 + 0x18];
      afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f] =
           afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
      fStack_2ac = fStack_234 - fStack_27c;
      afStack_2a8[0] = fStack_230 - fStack_278;
      afStack_2a8[1] = fStack_22c - fStack_274;
      afStack_9c[0] = fStack_234 - fStack_27c;
      afStack_c8[(uint)bVar10 * -2 + 0xc] = afStack_2a8[(uint)bVar10 * -2];
      afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
           afStack_2a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      afStack_9c[1] = 0.0;
      FUN_00408b00(param_1,pfVar7);
      afStack_d8[3] = (float)uStack_15c;
      afStack_c8[(uint)bVar10 * -2] = afStack_1ac[(uint)bVar10 * -2 + 0x15];
      afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
      if (0.0 < afStack_c8[1]) {
        FUN_00422ab0(iStack_4c,afStack_2a8 + 0xb,afStack_c8 + 0xb);
      }
    }
  }
  FUN_004c91b0(param_1,param_2);
  if (*(int *)(param_1 + 0x1ffc4) == 3) {
    iStack_58 = FUN_0040c600(*(uint *)(param_1 + 0x1fe20),_DAT_01c3db94);
    if (iStack_58 != 0) {
      if (*(int *)(param_1 + 0xc1e4) == 0) {
        *(uint *)(param_1 + 0x1ffc4) = 2;
      }
      else {
        fVar3 = param_2 * (float)_DAT_005e1034 + *(float *)(param_1 + 0x5ab1c);
        *(float *)(param_1 + 0x5ab1c) = fVar3;
        if (0x42700000 < fVar3) {
          *(uint *)(param_1 + 0xc1e4) = 0;
          *(uint *)(param_1 + 0x1ffc4) = 2;
          *(float *)(param_1 + 0x5ab1c) = 0x42700000;
        }
      }
      afStack_1ec[0] = *(float *)(param_1 + 0x1ffdc);
      afStack_1ec[2] = 0.0;
      afStack_1ec[1] = 0.0;
      FUN_0045f3e0(auStack_304,afStack_2a8 + 0x2f);
      afStack_1bc[2] = *(float *)(param_1 + 0x5ab1c);
      afStack_1bc[0] = 0.0;
      afStack_1bc[1] = 0.0;
      FUN_0045f690(auStack_304,afStack_1dc + 8);
      pfVar7 = afStack_1ac + 5;
      afStack_198[0] = (float)uStack_12c;
      afStack_1ac[(uint)bVar10 * -2 + 6] = afStack_1ac[(uint)bVar10 * -2 + 0x21];
      afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22];
      FUN_00408ac0(param_1,pfVar7);
      fStack_84 = fStack_180;
      afStack_c8[(uint)bVar10 * -2 + 0x12] = afStack_1ac[(uint)bVar10 * -2 + 0xc];
      afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
           afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
      if ((float *)(iStack_58 + 0x57c) != afStack_c8 + 0x11) {
        *(float *)(iStack_58 + 0x57c) = fStack_84;
        *(uint *)(iStack_58 + 0x580) = uStack_80;
        *(uint *)(iStack_58 + 0x584) = uStack_7c;
      }
      goto LAB_004c7a4b;
    }
    *(uint *)(param_1 + 0x1ffc4) = 2;
LAB_004c6e2d:
    *(uint *)(param_1 + 0x5ab1c) = _DAT_00600d8c;
    iVar4 = FUN_004c9dd0(param_1);
    if (iVar4 == 0) goto LAB_004c7a58;
    *(uint *)(param_1 + 0x1ffc4) = 1;
  }
  else {
LAB_004c7a4b:
    if (*(int *)(param_1 + 0x1ffc4) == 2) goto LAB_004c6e2d;
LAB_004c7a58:
    if (*(int *)(param_1 + 0x1ffc4) != 1) goto LAB_004c6e81;
  }
  *(uint *)(param_1 + 0x1ffc4) = 0;
  FUN_004c9e40(param_1);
  if (*(int *)(*(int *)(param_1 + 0x1fe20) + 0x2ec) == 0) {
    *(uint *)(param_1 + 0xc1e4) = 0;
  }
LAB_004c6e81:
  iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (iVar4 != 2) {
    FUN_00440610(param_1 + 0x1ffec,param_1 + 0x20,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2504),param_1 + 0x158);
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x1fe20) + 0x154) + 0xc))
            (*(int *)(param_1 + 0x1fe20),param_2);
  if (*(int *)(*(int *)(param_1 + 0x1fe20) + 0xfc) == 0) {
    return;
  }
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
