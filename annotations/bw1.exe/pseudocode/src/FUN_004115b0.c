// Name: FUN_004115b0
// Address: 004115b0
// Address Range: [[004115b0, 00412100]]
// Convention: unknown
// Signature: void FUN_004115b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004115b0(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float afStackY_11ac [982];
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  byte auStack_23c [4];
  float fStack_238;
  int iStack_208;
  int iStack_204;
  byte auStack_200 [4];
  uint uStack_1fc;
  int iStack_1cc;
  int iStack_1c8;
  float fStack_1c4;
  float afStack_1c0 [5];
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint uStack_188;
  float afStack_17c [3];
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  uint uStack_164;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [3];
  float afStack_134 [3];
  uint uStack_128;
  float afStack_124 [4];
  float fStack_114;
  float afStack_110 [3];
  uint uStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  uint uStack_ec;
  float fStack_e8;
  uint uStack_e0;
  float afStack_d4 [3];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float afStack_b0 [3];
  float afStack_a4 [3];
  uint uStack_98;
  uint uStack_8c;
  float fStack_88;
  uint uStack_80;
  float afStack_74 [3];
  float afStack_68 [3];
  float fStack_5c;
  uint uStack_58;
  float fStack_54;
  uint uStack_50;
  uint uStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  iVar3 = FUN_0042e1a0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_38 = param_2 * *(float *)(param_1 + 0xc1d0);
  while (0.0 < fStack_38) {
    uVar6 = FUN_00524270(param_1 + 0x158,afStack_124 + 0x3b);
    FUN_00434a80(param_1,uVar6);
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
  if ((((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc298) * 4) == 0) &&
       (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc290) * 4) == 0)) ||
      (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc26c) * 4) == 0)) &&
     ((0.0 <= *(float *)(param_1 + 0xc268) &&
      (fVar2 = *(float *)(param_1 + 0xc268) + param_2, *(float *)(param_1 + 0xc268) = fVar2,
      (float)_DAT_005d3861 <= fVar2)))) {
    FUN_0042c010(auStack_200);
    uStack_1fc = 0x461c3f9a;
    iStack_1cc = param_1;
    iStack_1c8 = param_1;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x108))(param_1,auStack_200);
    *(uint *)(param_1 + 0xc268) = 0xbf800000;
  }
  iStack_1c = param_1 + 0x158;
  iVar3 = FUN_00524770(iStack_1c);
  iStack_28 = *(int *)(iVar3 + 0x24);
  iVar3 = FUN_00432240(param_1,param_2);
  if (iVar3 == 0) {
    switch(iStack_28) {
    case 0:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar3 = *(int *)(param_1 + 0xc1e8);
      if (iVar3 == 0) {
        iVar3 = FUN_004a0fe0(param_1,param_2);
        if (iVar3 != 0) {
          FUN_005247c0(iStack_1c,1,1);
        }
      }
      else {
        fStack_170 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_16c = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_168 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_194 = fStack_170;
        afStack_1c0[(uint)bVar4 * -2 + 0xc] = afStack_1c0[(uint)bVar4 * -2 + 0x15];
        afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
             afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
        fStack_34 = SQRT(fStack_18c * fStack_18c + fStack_194 * fStack_194 + fStack_190 * fStack_190
                        );
        fStack_24 = fStack_34;
        if (fStack_34 < 0x40600000) {
          FUN_005a7520(afStack_1c0 + 0xb);
          uStack_ec = uStack_e0;
          afStack_124[(uint)bVar4 * -2 + 0xf] = afStack_124[(uint)bVar4 * -2 + 0x12];
          afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
               afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
          fStack_14 = (float)FUN_0040cd60(fStack_e8 - *(float *)(param_1 + 0x34));
          if (ABS(fStack_14) < (float)_DAT_005d3869) {
            FUN_005247c0(iStack_1c,3,1);
            iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc2a8));
            if ((iVar3 == 0) &&
               (iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc2ac)), iVar3 == 0)) {
              uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                (param_1,"batman-attack?.wav");
              *(uint *)(param_1 + 0xc2ac) = uVar6;
            }
          }
        }
        if (fStack_34 < *(float *)(param_1 + 0xc1e0)) {
          iStack_20 = param_1 + 0x158;
          if (fStack_34 < _DAT_005fbfd8) {
            uVar6 = 1;
            *(uint *)(param_1 + 0xc1e4) = 0;
          }
          else {
            *(uint *)(param_1 + 0xc1e4) = 0;
            iVar3 = FUN_0040cd00(0x3dcccccd);
            if (iVar3 == 0) {
              uVar6 = 1;
            }
            else {
              iVar3 = *(int *)(param_1 + 0xc1e8);
              fStack_1c4 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
              afStack_1c0[0] = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
              afStack_1c0[1] = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
              afStack_140[0] = fStack_1c4;
              afStack_1c0[(uint)bVar4 * -2 + 0x21] = afStack_1c0[(uint)bVar4 * -2];
              afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x22] =
                   afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
              FUN_005a7520(afStack_1c0 + 0x20);
              uStack_8c = uStack_98;
              afStack_124[(uint)bVar4 * -2 + 0x27] = afStack_124[(uint)bVar4 * -2 + 0x24];
              afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x28] =
                   afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x25];
              fStack_14 = (float)FUN_0040cd60(fStack_88 - *(float *)(param_1 + 0x34));
              if ((float)_DAT_005d3869 <= ABS(fStack_14)) {
                uVar6 = 1;
              }
              else if ((float)_DAT_005d3871 <=
                       ABS(*(float *)(*(int *)(param_1 + 0xc1e8) + 0x24) -
                           *(float *)(param_1 + 0x24))) {
                uVar6 = 1;
              }
              else {
                uVar6 = 2;
              }
            }
          }
          FUN_005247c0(iStack_20,uVar6,1);
          if ((((*(int *)(param_1 + 0xc2b0) == 0) &&
               (iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc2a8)), iVar3 == 0)) &&
              (iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc2ac)), iVar3 == 0)) &&
             (iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc2a4)), iVar3 == 0)) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"batman-alert.wav");
            *(uint *)(param_1 + 0xc2b0) = 1;
            *(uint *)(param_1 + 0xc2a4) = uVar6;
          }
        }
      }
      break;
    case 1:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      fVar2 = 0x40600000;
      if (*(int *)(param_1 + 0xc1e8) == 0) {
        iVar3 = FUN_004a0fe0(param_1,param_2);
        if (iVar3 == 0) {
          FUN_005247c0(iStack_1c,0,1);
        }
        else {
          FUN_005247c0(iStack_1c,1,1);
        }
      }
      else {
        fStack_30 = 0x40600000;
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_134[0] = 0.0;
        afStack_134[2] = fVar2;
        afStack_134[1] = 0.0;
        uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0xc1e8),afStack_1c0 + 0x23,0x3f000000,0x3e32b8c2);
        iVar3 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar6);
        if (-1 < iVar3) {
          iVar3 = *(int *)(param_1 + 0xc1e8);
          fStack_14c = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
          fStack_148 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
          fStack_144 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
          fStack_5c = fStack_14c;
          afStack_124[(uint)bVar4 * -2 + 0x33] = afStack_1c0[(uint)bVar4 * -2 + 0x1e];
          afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x34] =
               afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1f];
          fStack_18 = SQRT(fStack_54 * fStack_54 + fStack_5c * fStack_5c);
          uStack_58 = 0;
          fStack_2c = fStack_18;
          if ((_DAT_005fbfd8 < fStack_18) && (*(uint *)(param_1 + 0xc1e4) = 0, iStack_28 == 1)
             ) {
            iVar3 = *(int *)(param_1 + 0xc1e8);
            fStack_1ac = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_1a8 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_1a4 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_d4[0] = fStack_1ac;
            afStack_124[(uint)bVar4 * -2 + 0x15] = afStack_1c0[(uint)bVar4 * -2 + 6];
            afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16] =
                 afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
            FUN_005a7520(afStack_124 + 0x14);
            uStack_104 = uStack_50;
            afStack_124[(uint)bVar4 * -2 + 9] = afStack_124[(uint)bVar4 * -2 + 0x36];
            afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
                 afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x37];
            fStack_14 = (float)FUN_0040cd60(fStack_100 - *(float *)(param_1 + 0x34));
            if ((ABS(fStack_14) < (float)_DAT_005d3869) &&
               (ABS(*(float *)(*(int *)(param_1 + 0xc1e8) + 0x24) - *(float *)(param_1 + 0x24)) <
                (float)_DAT_005d3871)) {
              FUN_005247c0(iStack_1c,2,1);
              *(uint *)(param_1 + 0xc1e4) = 0;
              iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc2a8));
              if ((iVar3 == 0) &&
                 (iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc2ac)), iVar3 == 0)) {
                uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                  (param_1,"batman-attack?.wav");
                *(uint *)(param_1 + 0xc2ac) = uVar6;
              }
            }
          }
          if ((fStack_2c <= fStack_30) && (*(float *)(param_1 + 0xc1e4) <= 0.0)) {
            iVar3 = *(int *)(param_1 + 0xc1e8);
            fStack_bc = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_b8 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_b4 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_74[0] = fStack_bc;
            afStack_124[(uint)bVar4 * -2 + 0x2d] = afStack_124[(uint)bVar4 * -2 + 0x1b];
            afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x2e] =
                 afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c];
            FUN_005a7520(afStack_124 + 0x2c);
            uStack_128 = uStack_44;
            afStack_124[(uint)bVar4 * -2] = afStack_124[(uint)bVar4 * -2 + 0x39];
            afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                 afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x3a];
            fStack_14 = (float)FUN_0040cd60(afStack_124[0] - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005d3869) {
              FUN_005247c0(param_1 + 0x158,3,1);
              *(uint *)(param_1 + 0xc1e4) = 0x3f800000;
              iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc2a8));
              if ((iVar3 == 0) &&
                 (iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc2ac)), iVar3 == 0)) {
                uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                  (param_1,"batman-attack?.wav");
                *(uint *)(param_1 + 0xc2ac) = uVar6;
              }
            }
          }
          if (*(float *)(param_1 + 0xc1e0) < fStack_2c) {
            FUN_005247c0(param_1 + 0x158,0,1);
          }
        }
      }
      break;
    case 3:
      FUN_0042c010(auStack_23c);
      fStack_238 = (float)FUN_0040cc00(0x40e00000,0x41700000);
      iStack_208 = param_1;
      iStack_204 = param_1;
      fStack_14 = fStack_238;
      FUN_005b5080(&DAT_02c8af28,DAT_007c3754 * 0x30 + param_1 + 0xfd8,0x3ecccccd,auStack_23c);
      pfVar5 = afStack_124 + 0x1d;
      afStack_b0[0] = (float)uStack_188;
      afStack_124[(uint)bVar4 * -2 + 0x1e] = afStack_1c0[(uint)bVar4 * -2 + 0xf];
      afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1f] =
           afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
      FUN_00408b40(param_1,pfVar5);
      pfVar5 = afStack_124 + 0x20;
      afStack_a4[0] = afStack_1c0[2];
      afStack_124[(uint)bVar4 * -2 + 0x21] = afStack_1c0[(uint)bVar4 * -2 + 3];
      iVar3 = param_1;
      afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x22] =
           afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      FUN_004a0770(iVar3,pfVar5);
      break;
    case 8:
      if ((*(int *)(param_1 + 0xc1d4) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_00569040(iStack_1c,0);
        pfVar5 = afStack_1c0 + 0x11;
        afStack_17c[0] = (float)uStack_80;
        afStack_1c0[(uint)bVar4 * -2 + 0x12] = afStack_124[(uint)bVar4 * -2 + 0x2a];
        afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
             afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x2b];
        FUN_00408b40(param_1,pfVar5);
        uVar7 = 0;
        pfVar5 = afStack_124 + 5;
        afStack_110[0] = (float)uStack_164;
        afStack_124[(uint)bVar4 * -2 + 6] = afStack_1c0[(uint)bVar4 * -2 + 0x18];
        uVar6 = 0x01CD0E3C;
        afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
             afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
        FUN_004e62e0(uVar6,pfVar5,uVar7);
        *(uint *)(param_1 + 0xc1d4) = 1;
      }
    }
    goto switchD_004120fa_caseD_2;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004116b0:
      uVar6 = 1;
    }
    else {
LAB_0041191c:
      uVar6 = 0;
    }
    FUN_005247c0(param_1 + 0x158,uVar6,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004116b0;
    if (uVar1 != 3) goto LAB_0041191c;
    FUN_005247c0(iStack_1c,0,1);
    FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_004120fa_caseD_2:
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  iVar3 = FUN_0042e120(param_1);
  if (iVar3 != 0) {
    FUN_0042d700(param_1,param_2);
    fStack_c8 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_c4 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_c0 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_158 = fStack_c8;
    afStack_1c0[(uint)bVar4 * -2 + 0x1b] = afStack_124[(uint)bVar4 * -2 + 0x18];
    afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c] =
         afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
    afStack_124[2] = fStack_158 + *(float *)(param_1 + 0x250c);
    afStack_124[3] = fStack_154 + *(float *)(param_1 + 0x2510);
    fStack_114 = fStack_150 + *(float *)(param_1 + 0x2514);
    fStack_f8 = afStack_124[2];
    afStack_124[(uint)bVar4 * -2 + 0xc] = afStack_124[(uint)bVar4 * -2 + 3];
    afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
         afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    fStack_1a0 = fStack_f8 + *(float *)(param_1 + 0x249c);
    fStack_19c = fStack_f4 + *(float *)(param_1 + 0x24a0);
    fStack_198 = fStack_f0 + *(float *)(param_1 + 0x24a4);
    afStack_68[0] = fStack_1a0;
    afStack_124[(uint)bVar4 * -2 + 0x30] = afStack_1c0[(uint)bVar4 * -2 + 9];
    afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x31] =
         afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042d750(param_1,afStack_124 + 0x2f);
  }
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  FUN_00433e80(param_1,param_2);
  return;
}
