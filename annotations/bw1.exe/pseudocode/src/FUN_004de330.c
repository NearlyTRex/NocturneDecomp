// Name: FUN_004de330
// Address: 004de330
// Address Range: [[004de330, 004e00fa]]
// Convention: unknown
// Signature: void FUN_004de330(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004de330(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  float *pfVar8;
  char *pcVar9;
  uint *puVar10;
  char *pcVar11;
  char cVar12;
  byte bVar13;
  float10 fVar14;
  float10 fVar15;
  float afStackY_135c [920];
  ulonglong uVar16;
  ulonglong uVar17;
  byte auStack_4dc [100];
  byte auStack_478 [4];
  float fStack_474;
  int iStack_444;
  int iStack_440;
  byte auStack_43c [4];
  float fStack_438;
  int iStack_408;
  int iStack_404;
  float fStack_3fc;
  float fStack_3e4;
  uint uStack_3e0;
  uint uStack_3dc;
  int iStack_3cc;
  int iStack_3c8;
  char acStack_3c4 [32];
  uint auStack_3a4 [6];
  uint uStack_38c;
  float fStack_388;
  float fStack_37c;
  uint uStack_374;
  float afStack_370 [5];
  float afStack_35c [3];
  float fStack_350;
  float afStack_34c [5];
  uint uStack_338;
  float afStack_334 [5];
  uint uStack_320;
  float afStack_314 [3];
  uint uStack_308;
  uint uStack_2fc;
  float afStack_2f0 [3];
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  uint uStack_2d8;
  float afStack_2cc [3];
  uint uStack_2c0;
  float afStack_2bc [4];
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float afStack_29c [3];
  float afStack_290 [3];
  float afStack_284 [3];
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float afStack_26c [3];
  float afStack_260 [3];
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  uint uStack_248;
  uint uStack_23c;
  float afStack_230 [3];
  float fStack_224;
  uint uStack_218;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float afStack_200 [3];
  float fStack_1f4;
  float afStack_1e8 [3];
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  uint uStack_1b8;
  uint uStack_1ac;
  float afStack_1a0 [3];
  uint uStack_194;
  uint uStack_188;
  float afStack_17c [3];
  uint uStack_170;
  float afStack_16c [4];
  float fStack_15c;
  uint uStack_158;
  float fStack_14c;
  float fStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float afStack_130 [5];
  float afStack_11c [3];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  uint uStack_f8;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  uint uStack_e0;
  float fStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_a8;
  double dStack_a0;
  int iStack_98;
  float fStack_94;
  float fStack_90;
  int iStack_8c;
  int iStack_80;
  float fStack_7c;
  float fStack_78;
  int iStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  int iStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  float fStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar13 = 0;
  iVar4 = FUN_0042e1a0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_70 = param_2 * *(float *)(param_1 + 0xc1d0);
  iStack_18 = param_1 + 0x158;
switchD_004dedc4_caseD_e:
  if (0.0 < fStack_70) {
    uVar6 = FUN_00524270(iStack_18,&fStack_70);
    switch(uVar6) {
    case 5:
      iStack_1c = 1;
      if ((((*(int *)(param_1 + 0xc1e8) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0x10c))(),
           iVar4 == 0)) &&
          (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))(), iVar4 == 0)
          ) && (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xe8))
                                  (*(int *)(param_1 + 0xc1e8),param_1), iVar4 != 0)) {
        fStack_64 = 0x40200000;
        afStack_34c[2] = 0.0;
        afStack_34c[3] = 0.0;
        afStack_34c[4] = 0x40200000;
        FUN_00408b40();
        afStack_2bc[2] = fStack_1f4;
        afStack_2bc[(uint)bVar13 * -2 + 3] = afStack_2bc[(uint)bVar13 * -2 + 0x33];
        afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
             afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x34];
        fVar2 = afStack_2bc[2] - *(float *)(*(int *)(param_1 + 0xc1e8) + 0x20);
        fVar3 = fStack_2ac - *(float *)(*(int *)(param_1 + 0xc1e8) + 0x28);
        if (1.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
          iStack_1c = 0;
        }
        iVar4 = *(int *)(param_1 + 0xc1e8);
        if (((ABS(afStack_2bc[3] - *(float *)(iVar4 + 0x24)) <= (float)_DAT_005e3cb1) &&
            ((iStack_1c == 0 ||
             (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xec))(iVar4), iVar4 != 0)))) &&
           (iStack_1c != 0)) break;
      }
      FUN_005247c0(iStack_18);
      break;
    default:
      FUN_00434a80();
      break;
    case 10:
      if (*(int *)(param_1 + 0xc1e8) == 0) {
        FUN_005247c0(iStack_18);
      }
      else {
        iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))();
        if (iVar4 == param_1) {
          iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0x10c))();
          if (iVar4 == 0) {
            (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0x1c))();
            puVar7 = auStack_3a4;
            puVar10 = &uStack_38c;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar10 = *puVar7;
              puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
              puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
            }
            fVar2 = fStack_37c - fStack_388;
            pfVar8 = (float *)(*(int *)(param_1 + 0xc1e8) + 0x24 + (uint)bVar13 * -8);
            fStack_14c = *(float *)(*(int *)(param_1 + 0xc1e8) + 0x20);
            afStack_16c[(uint)bVar13 * -2 + 9] = *pfVar8;
            afStack_16c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] = pfVar8[(uint)bVar13 * -2 + 1];
            fStack_148 = fVar2 * (float)_DAT_005e3d01 + fStack_148;
            FUN_0042c010();
            fStack_3fc = (float)FUN_0040cc00(0x41700000);
            fStack_14 = fStack_3fc;
            FUN_00408bb0(*(uint *)(param_1 + 0xc1e8));
            fStack_d4 = fStack_104;
            afStack_130[(uint)bVar13 * -2 + 0x18] = afStack_130[(uint)bVar13 * -2 + 0xc];
            afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
                 afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
            if (&fStack_3e4 != afStack_130 + 0x17) {
              fStack_3e4 = fStack_d4;
              uStack_3e0 = uStack_d0;
              uStack_3dc = uStack_cc;
            }
            iStack_3cc = param_1;
            iStack_3c8 = param_1;
            (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0x108))
                      (*(int *)(param_1 + 0xc1e8));
            dStack_c8 = (double)fStack_3fc;
            if (0.0 < dStack_c8) {
              fVar15 = (float10)fStack_3fc * (float10)_DAT_005e3d09 * (float10)_DAT_005e3cf9;
              FUN_005c03a0();
              iStack_8c = (int)ROUND(fVar15);
              FUN_004e6060(0x01CD0E3C,afStack_16c + 8,0,iStack_8c);
            }
            if (*(float *)(*(int *)(param_1 + 0xc1e8) + 0x2538) <= 0.0) {
              (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf0))();
              FUN_005247c0(iStack_18,1);
            }
            (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
          }
          else {
            (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf0))();
            FUN_005247c0(iStack_18);
          }
        }
        else {
          FUN_005247c0(iStack_18);
        }
      }
      break;
    case 0xb:
    case 0xc:
      FUN_005675a0();
      FUN_00569040(iStack_18);
      afStack_130[2] = (float)uStack_1ac;
      afStack_130[(uint)bVar13 * -2 + 3] = afStack_2bc[(uint)bVar13 * -2 + 0x45];
      afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x46];
      FUN_00408b40(param_1);
      uVar16 = 0x4140000041000000;
      afStack_1e8[0] = (float)uStack_e0;
      afStack_2bc[(uint)bVar13 * -2 + 0x36] = afStack_130[(uint)bVar13 * -2 + 0x15];
      afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x37] =
           afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
      fStack_14 = (float)FUN_0040cc00(uVar16);
      fVar15 = (float10)fStack_14 * (float10)_DAT_005e3cf9;
      FUN_005c03a0();
      iStack_74 = (int)ROUND(fVar15);
      FUN_004e6060(0x01CD0E3C,afStack_2bc + 0x35,0,iStack_74);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
      break;
    case 0xd:
      FUN_005675a0();
      FUN_00569040(iStack_18);
      afStack_370[2] = (float)uStack_2d8;
      afStack_370[(uint)bVar13 * -2 + 3] = afStack_334[(uint)bVar13 * -2 + 0x18];
      afStack_370[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
      FUN_00408b40(param_1);
      uVar16 = 0x4140000041000000;
      afStack_314[0] = (float)uStack_374;
      afStack_334[(uint)bVar13 * -2 + 9] = afStack_370[(uint)bVar13 * -2];
      afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
           afStack_370[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      fStack_14 = (float)FUN_0040cc00(uVar16);
      fVar15 = (float10)fStack_14 * (float10)_DAT_005e3cf9;
      FUN_005c03a0();
      iStack_80 = (int)ROUND(fVar15);
      FUN_004e6060(0x01CD0E3C,afStack_334 + 8,0,iStack_80);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      FUN_005675a0();
      FUN_00569040(iStack_18);
      afStack_334[2] = (float)uStack_308;
      afStack_334[(uint)bVar13 * -2 + 3] = afStack_334[(uint)bVar13 * -2 + 0xc];
      afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      FUN_00408b40(param_1);
      uVar16 = 0x4140000041000000;
      uStack_338 = uStack_2fc;
      afStack_334[(uint)bVar13 * -2] = afStack_334[(uint)bVar13 * -2 + 0xf];
      afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
      fStack_14 = (float)FUN_0040cc00(uVar16);
      fVar15 = (float10)fStack_14 * (float10)_DAT_005e3cf9;
      FUN_005c03a0();
      iStack_98 = (int)ROUND(fVar15);
      FUN_004e6060(0x01CD0E3C,&uStack_338,0,iStack_98);
      iVar4 = FUN_0040cd00();
      if (iVar4 == 0) {
        pcVar9 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar9 = "ghoul-eat-?.wav @1.3";
      }
      pcVar11 = acStack_3c4;
      do {
        cVar12 = *pcVar9;
        *pcVar11 = cVar12;
        if (cVar12 == '\0') break;
        cVar12 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar11[1] = cVar12;
        pcVar11 = pcVar11 + 2;
      } while (cVar12 != '\0');
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
    }
    goto switchD_004dedc4_caseD_e;
  }
  fStack_14 = (float)FUN_00524a40(iStack_18,1);
  dStack_a0 = (double)param_2;
  *(float *)(param_1 + 0x2524) =
       fStack_14 * (float)_DAT_005e3ca1 * param_2 * *(float *)(param_1 + 0xc1d0);
  FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
  iVar4 = FUN_00524770();
  iStack_34 = *(int *)(iVar4 + 0x24);
  if (iStack_34 == 0x11) {
    fVar15 = (float10)_DAT_005e3ca9;
    *(float *)(param_1 + 0x2528) = *(float *)(param_1 + 0x2528) * (float)_DAT_005e3cb1;
    *(float *)(param_1 + 0x2524) =
         (float)((float10)dStack_a0 * fVar15 * (float10)*(float *)(param_1 + 0xc1d0));
  }
  iVar4 = FUN_00432240(param_1,param_2);
  if (iVar4 == 0) {
    fStack_28 = -1.0;
    iVar4 = param_1 + 0x158;
    iVar5 = FUN_00524770();
    switch(*(uint *)(iVar5 + 0x24)) {
    case 0:
      if (*(float *)(param_1 + 0xc2c4) <= 0.0) {
        iVar4 = *(int *)(param_1 + 0xc2c8);
        if (iVar4 == 0) {
          iVar4 = FUN_004a0fe0(param_1,param_2);
          if (iVar4 != 0) goto LAB_004df445;
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          if (*(int *)(param_1 + 0xc1e8) != 0) {
            FUN_005247c0(param_1 + 0x158,1,1);
            iVar4 = FUN_005735a0();
            if ((iVar4 == 0) || (iVar4 = FUN_005735a0(), iVar4 == 0)) {
              uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                (param_1,"ghoul-alert-?.wav");
              *(uint *)(param_1 + 0xc2b8) = uVar6;
            }
          }
        }
        else {
          fStack_2a8 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_2a4 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_2a0 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_224 = fStack_2a8;
          afStack_2bc[(uint)bVar13 * -2 + 0x27] = afStack_2bc[(uint)bVar13 * -2 + 6];
          afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28] =
               afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
          fStack_20c = fStack_224;
          afStack_2bc[(uint)bVar13 * -2 + 0x2d] = afStack_2bc[(uint)bVar13 * -2 + 0x27];
          afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2e] =
               afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28];
          fStack_94 = fStack_204 * fStack_204 + fStack_20c * fStack_20c + fStack_208 * fStack_208;
          if (SQRT(fStack_94) < (float)_DAT_005e3cb1) {
            fVar2 = *(float *)(param_1 + 0x2538) + param_2;
            *(float *)(param_1 + 0xc2cc) = *(float *)(param_1 + 0xc2cc) - param_2;
            *(float *)(param_1 + 0x2538) = fVar2;
            if ((float)_DAT_005e3cf1 < fVar2) {
              *(uint *)(param_1 + 0x2538) = 0x42c80000;
            }
            if (*(float *)(param_1 + 0xc2cc) < 0.0) {
              *(uint *)(param_1 + 0xc2cc) = 0;
              *(uint *)(param_1 + 0xc2c8) = 0;
            }
          }
        }
      }
      else {
        *(float *)(param_1 + 0xc2c4) = *(float *)(param_1 + 0xc2c4) - param_2;
      }
      break;
    case 1:
    case 0x11:
      if ((*(int *)(param_1 + 0xc2d0) != 0) && (iStack_34 == 1)) {
        FUN_005247c0(param_1 + 0x158,0x11,1);
      }
      if (0.0 < *(float *)(param_1 + 0xc2c4)) {
        *(float *)(param_1 + 0xc2c4) = *(float *)(param_1 + 0xc2c4) - param_2;
        FUN_005247c0(param_1 + 0x158,0,1);
      }
      else {
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        uStack_24 = (uint)(*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc290) * 4) != 0);
        if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc298) * 4) != 0) {
          uStack_24 = uStack_24 + 1;
        }
        iVar5 = (**(code **)(*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x154) + 0x10c))();
        iVar4 = 0x01CCF390;
        if (iVar5 == 0) {
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          iVar4 = *(int *)(param_1 + 0xc1e8);
          if (iVar4 == 0) {
            iVar4 = FUN_004a0fe0(param_1,param_2);
            if (iVar4 == 0) {
              FUN_005247c0(param_1 + 0x158,0,1);
            }
          }
          else {
            fStack_254 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_250 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_24c = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
            fStack_350 = fStack_254;
            afStack_34c[(uint)bVar13 * -2] = afStack_2bc[(uint)bVar13 * -2 + 0x1b];
            afStack_34c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                 afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c];
            afStack_34c[0] = 0.0;
            if (((*(float *)(param_1 + 0x2538) < (float)_DAT_005e3cd9) && (0 < (int)uStack_24)) &&
               (*(int *)(param_1 + 0xc2c8) == 0)) {
              FUN_004de100(param_1,param_2);
            }
            iVar4 = *(int *)(param_1 + 0xc2c8);
            if (iVar4 == 0) {
              afStack_17c[0] = 0.0;
              afStack_17c[2] = 0x40200000;
              afStack_17c[1] = 0.0;
              uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                                (*(int *)(param_1 + 0xc1e8),afStack_2bc + 0x50,0x3f800000,0x3e32b8c2
                                );
              iVar4 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar6);
              if (iVar4 < 0) {
                FUN_005247c0(param_1 + 0x158,0,1);
              }
              else if (((0 < iVar4) && (0 < (int)uStack_24)) &&
                      ((*(float *)(param_1 + 0xc1e4) <= 0.0 &&
                       ((iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))
                                           (), iVar4 == 0 && (*(float *)(param_1 + 0xc27c) <= 0.0)))
                       ))) {
                fStack_48 = SQRT(afStack_34c[1] * afStack_34c[1] +
                                 fStack_350 * fStack_350 + afStack_34c[0] * afStack_34c[0]);
                fStack_30 = 0.0;
                fStack_40 = 0.0;
                fStack_54 = 0.0;
                if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc298) * 4) != 0) {
                  fStack_30 = (1.0 - ABS(fStack_48 - 0x4059999A) / 0x4059999A) *
                              (float)_DAT_005e3ce1;
                }
                if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc290) * 4) != 0) {
                  fStack_40 = (1.0 - ABS(fStack_48 - 0x40200000) / 0x40200000) *
                              (float)_DAT_005e3ce9;
                }
                fStack_3c = fStack_48;
                iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xe8))
                                  (*(int *)(param_1 + 0xc1e8),param_1,0);
                if (iVar4 != 0) {
                  fStack_54 = (1.0 - ABS(fStack_3c - 0x40200000) / 0x40200000) *
                              (float)_DAT_005e3ce1;
                }
                fStack_50 = fStack_30 + fStack_40;
                fStack_4c = fStack_50 + fStack_54;
                if (0.0 < fStack_4c) {
                  fStack_44 = (float)FUN_0040cc00(0,fStack_4c);
                  if (fStack_30 <= fStack_44) {
                    if (fStack_50 <= fStack_44) {
                      uVar16 = 0x10000000b;
                    }
                    else {
                      uVar16 = 0x10000000c;
                    }
                  }
                  else {
                    uVar16 = 0x100000002;
                  }
                  fStack_14 = fStack_44;
                  FUN_005247c0(param_1 + 0x158,uVar16);
                  *(uint *)(param_1 + 0xc1e4) = 0x3f333333;
                }
              }
            }
            else {
              uVar6 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xc4))
                                (iVar4,&DAT_02c8af28,0x40400000,0);
              iVar4 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc2c8) + 0x20,uVar6);
              if (0 < iVar4) {
                FUN_005247c0(param_1 + 0x158,0,1);
                fStack_14 = (float)FUN_0040cc00(0x41200000,0x41f00000);
                *(float *)(param_1 + 0xc2cc) = fStack_14;
              }
              if (iVar4 < 0) {
                *(uint *)(param_1 + 0xc2cc) = 0x41f00000;
                *(uint *)(param_1 + 0xc2c8) = 0;
              }
              if (iStack_34 == 1) {
                FUN_005247c0(param_1 + 0x158,0x11,1);
              }
            }
          }
        }
        else {
          if (*(int *)(param_1 + 0xc278) < 0) {
            cVar12 = *(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc290) * 4) != 0;
            if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc298) * 4) != 0) {
              cVar12 = cVar12 + '\x01';
            }
            if (cVar12 != '\0') {
              if (cVar12 == '\x01') {
                *(uint *)(param_1 + 0xc278) = 0xe;
                *(uint *)(iVar4 + 0x23c) = 1;
              }
              else {
                iVar4 = FUN_0040cd00();
                *(uint *)(param_1 + 0xc278) = (iVar4 == 0) + 0xd;
                *(uint *)(0x01CCF390 + 0x23c) = 1;
              }
              goto LAB_004df92c;
            }
            *(uint *)(param_1 + 0xc278) = 0;
          }
          else {
LAB_004df92c:
            if (*(int *)(param_1 + 0xc278) != 0) {
              uStack_38 = 0x40000000;
              if (*(int *)(param_1 + 0xc278) == 0xe) {
                uStack_38 = 0x40B00000;
              }
              afStack_2cc[2] = (float)uStack_38;
              afStack_2cc[0] = 0.0;
              iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
              afStack_2cc[1] = 0.0;
              uVar6 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xc4))
                                (iVar4,afStack_334 + 0x1a,0x3f000000,0x3db2b8c2);
              FUN_00569040(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x158,0,uVar6);
              pfVar8 = afStack_334 + 0x11;
              afStack_2f0[0] = (float)uStack_1b8;
              afStack_334[(uint)bVar13 * -2 + 0x12] = afStack_2bc[(uint)bVar13 * -2 + 0x42];
              afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
                   afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x43];
              FUN_00408b40(*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),pfVar8);
              pfVar8 = afStack_2bc + 8;
              afStack_29c[0] = (float)uStack_218;
              afStack_2bc[(uint)bVar13 * -2 + 9] = afStack_2bc[(uint)bVar13 * -2 + 0x2a];
              iVar4 = param_1;
              afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
                   afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2b];
              iVar4 = FUN_0042ccf0(iVar4,pfVar8);
              if (((0 < iVar4) &&
                  (iVar4 = (**(code **)(*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x154) +
                                       0x10c))(), iVar4 == 2)) &&
                 (FUN_005247c0(param_1 + 0x158,*(uint *)(param_1 + 0xc278),1),
                 *(int *)(param_1 + 0xc278) == 0xd)) {
                iVar4 = *(int *)(param_1 + 0x154);
                fStack_14 = (float)FUN_0040cc00(0x3f000000,0x3f99999a);
                (**(code **)(iVar4 + 0x34))(param_1,"ghoul-scream-!-?.wav",fStack_14);
              }
              break;
            }
          }
          FUN_005247c0(param_1 + 0x158,0,1);
        }
      }
      break;
    case 2:
      if (*(int *)(param_1 + 0xc1e8) == 0) {
LAB_004df445:
        FUN_005247c0(param_1 + 0x158,1,1);
      }
      else {
        iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))();
        if (iVar5 == 0) {
          fStack_14 = (float)FUN_0040cc00(0x3e4ccccd,0x3f000000);
          *(float *)(param_1 + 0xc1e4) = fStack_14;
          if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc298) * 4) != 0) {
            fStack_5c = (float)FUN_00525020();
            dStack_c0 = (double)fStack_5c;
            fStack_14 = fStack_5c;
            if ((fStack_5c <= (float)_DAT_005e3cc1) && (fStack_28 = 0x4059999A, 1.0 <= dStack_c0))
            {
              FUN_0042c010();
              fStack_14 = (float)FUN_0040cc00(0x40e00000,0x41700000);
              fStack_438 = fStack_14;
              if (*(int *)(param_1 + 0xc2d0) != 0) {
                fStack_438 = fStack_14 * (float)_DAT_005e3cc1;
              }
              iStack_408 = param_1;
              iStack_404 = param_1;
              FUN_005b5080(&DAT_01cd0d50,_DAT_01cd0da0 * 0x30 + param_1 + 0xfd8,0x3e4ccccd,
                           auStack_43c);
              pfVar8 = afStack_2bc + 0x17;
              afStack_260[0] = (float)uStack_188;
              afStack_2bc[(uint)bVar13 * -2 + 0x18] = afStack_2bc[(uint)bVar13 * -2 + 0x4e];
              afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
                   afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x4f];
              FUN_00408b40(param_1,pfVar8);
              pfVar8 = afStack_130 + 5;
              afStack_11c[0] = (float)uStack_170;
              afStack_130[(uint)bVar13 * -2 + 6] = afStack_16c[(uint)bVar13 * -2];
              iVar4 = param_1;
              afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
                   afStack_16c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
              iVar4 = FUN_004a0770(iVar4,pfVar8);
              if (iVar4 != 0) {
                (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"gh-hits?.wav");
              }
            }
          }
        }
        else {
          FUN_005247c0(iVar4,1,1);
        }
      }
      break;
    case 10:
      if (((*(int *)(param_1 + 0xc1d4) == 0) && (*(int *)(param_1 + 0xc284) < 1)) &&
         (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_00569040(iVar4,0);
        pfVar8 = afStack_2bc + 0x47;
        afStack_1a0[0] = (float)uStack_23c;
        afStack_2bc[(uint)bVar13 * -2 + 0x48] = afStack_2bc[(uint)bVar13 * -2 + 0x21];
        afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x49] =
             afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
        FUN_00408b40(param_1,pfVar8);
        uVar17 = ZEXT48(afStack_2bc + 0x2f);
        afStack_200[0] = (float)uStack_158;
        afStack_2bc[(uint)bVar13 * -2 + 0x30] = afStack_16c[(uint)bVar13 * -2 + 6];
        uVar6 = 0x01CD0E3C;
        afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x31] =
             afStack_16c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
        FUN_004e62e0(uVar6,uVar17);
        *(uint *)(param_1 + 0xc1d4) = 1;
      }
      *(uint *)(param_1 + 0xc2d0) = 0;
      if (((0 < *(int *)(param_1 + 0xc288)) || (0 < *(int *)(param_1 + 0xc284))) &&
         (iVar4 = *(int *)(param_1 + 0xc270) - _DAT_01c43530, *(int *)(param_1 + 0xc270) = iVar4,
         iVar4 < 1)) {
        if (*(int *)(param_1 + 0xc284) < 1) {
          *(int *)(param_1 + 0xc288) = *(int *)(param_1 + 0xc288) + -1;
        }
        if ((0 < *(int *)(param_1 + 0xc288)) || (0 < *(int *)(param_1 + 0xc284))) {
          fStack_14 = (float)FUN_0040cc00(0x3f800000,0x41400000);
          fVar15 = (float10)fStack_14 * (float10)_DAT_005e3cb9;
          uVar6 = FUN_005c03a0(0xf,1);
          *(int *)(param_1 + 0xc270) = (int)ROUND(fVar15);
          FUN_005247c0(uVar6);
        }
      }
      if (0 < *(int *)(param_1 + 0xc284)) {
        iVar4 = *(int *)(param_1 + 0xc274);
        if (iVar4 < 1) {
          iVar4 = iVar4 + _DAT_01c43530;
          iStack_58 = 0;
          *(int *)(param_1 + 0xc274) = iVar4;
          if (iVar4 < 0) {
            (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
            iVar4 = *(int *)(param_1 + 0xc1e8);
            if (iVar4 != 0) {
              fStack_2e4 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
              fStack_2e0 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
              fStack_2dc = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
              fStack_110 = fStack_2e4;
              afStack_130[(uint)bVar13 * -2 + 9] = afStack_334[(uint)bVar13 * -2 + 0x15];
              afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
                   afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
              if (afStack_16c + 0xb != afStack_130 + 8) {
                fStack_140 = fStack_110;
                fStack_13c = fStack_10c;
                fStack_138 = fStack_108;
              }
              fStack_7c = fStack_138 * fStack_138 +
                          fStack_140 * fStack_140 + fStack_13c * fStack_13c;
              fStack_78 = (float)(((int)fStack_7c >> 1) + _DAT_01cc804c);
              if (fStack_78 < (float)_DAT_005e3ca9) goto LAB_004df0bb;
            }
            if (iStack_58 == 0) break;
          }
          else {
            *(uint *)(param_1 + 0xc274) = 0;
          }
LAB_004df0bb:
          fStack_20 = *(float *)(param_1 + 0x3000);
          if (fStack_20 < *(float *)(param_1 + 0x2ffc)) {
            fStack_20 = *(float *)(param_1 + 0x2490);
          }
          if (fStack_20 < *(float *)(param_1 + 0x2ffc)) {
            fStack_20 = *(float *)(param_1 + 0x2ffc) + (float)_DAT_005e3cc9;
          }
          iVar4 = 0;
          do {
            fStack_90 = (float)iVar4 * _DAT_005e3d11 * _DAT_005e3d15;
            fStack_14 = (float)iVar4;
            FUN_00559220();
            FUN_00559250(0x01E82168,param_1);
            fVar15 = (float10)fcos((float10)fStack_90);
            fVar14 = (float10)fsin((float10)fStack_90);
            fStack_2c = (float)FUN_00558450(0x01E82168,*(uint *)(param_1 + 0x20),
                                            *(uint *)(param_1 + 0x28),
                                            (float)(fVar14 * (float10)_DAT_005e3d19),
                                            (float)(fVar15 * (float10)_DAT_005e3d19),
                                            *(uint *)(param_1 + 0x2ff0),
                                            *(float *)(param_1 + 0x24) +
                                            *(float *)(param_1 + 0x2ffc));
            fStack_14 = fStack_2c;
            FUN_00559220();
            if (fStack_2c < 1.0) break;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 4);
          if (iVar4 < 4) {
            *(uint *)(param_1 + 0xc274) = 3;
            *(uint *)(param_1 + 0xc1e8) = 0;
          }
          else {
            fStack_14 = (float)(*(int *)(param_1 + 0xc284) + 1);
            fStack_14 = (float)FUN_0040cc00(0x41200000,(float)(int)fStack_14 * (float)_DAT_005e3d21)
            ;
            *(float *)(param_1 + 0x2538) = fStack_14;
            FUN_005247c0(param_1 + 0x158,0x10,1);
          }
        }
        else {
          iVar4 = iVar4 - _DAT_01c43530;
          *(int *)(param_1 + 0xc274) = iVar4;
          if (iVar4 < 1) {
            fStack_14 = (float)FUN_0040cc00(0,0x41f00000);
            fVar15 = -(float10)fStack_14 * (float10)_DAT_005e3cd1;
            FUN_005c03a0();
            *(int *)(param_1 + 0xc274) = (int)ROUND(fVar15);
          }
        }
      }
      break;
    case 0xb:
      if (*(int *)(param_1 + 0xc1e8) == 0) {
LAB_004dfce9:
        FUN_005247c0(iVar4,1,1);
      }
      else {
        iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))();
        if (iVar5 == 0) {
          fStack_28 = 0x40200000;
        }
        else {
          iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))();
          if (iVar5 != param_1) {
            FUN_005247c0(iVar4,1,1);
          }
        }
      }
      break;
    case 0xc:
      if ((*(int *)(param_1 + 0xc1e8) == 0) ||
         (iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))(), iVar5 != 0))
      goto LAB_004dfce9;
      fStack_14 = (float)FUN_0040cc00(0x3e4ccccd,0x3f000000);
      *(float *)(param_1 + 0xc1e4) = fStack_14;
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc290) * 4) != 0) {
        fStack_60 = (float)FUN_00525020();
        dStack_a8 = (double)fStack_60;
        fStack_14 = fStack_60;
        if (fStack_60 <= (float)_DAT_005e3cc1) {
          fStack_28 = 0x40200000;
          if (1.0 <= dStack_a8) {
            FUN_0042c010();
            fStack_14 = (float)FUN_0040cc00(0x40e00000,0x41700000);
            fStack_474 = fStack_14;
            if (*(int *)(param_1 + 0xc2d0) != 0) {
              fStack_474 = fStack_14 * (float)_DAT_005e3cc1;
            }
            iStack_444 = param_1;
            iStack_440 = param_1;
            FUN_005b5080(&DAT_01cd0d44,param_1 + 0xfd8 + _DAT_01cd0d9c * 0x30,0x3ecccccd,auStack_478
                        );
            pfVar8 = afStack_2bc + 0xb;
            afStack_290[0] = (float)uStack_248;
            afStack_2bc[(uint)bVar13 * -2 + 0xc] = afStack_2bc[(uint)bVar13 * -2 + 0x1e];
            afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
                 afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f];
            FUN_00408b40(param_1,pfVar8);
            pfVar8 = afStack_2bc + 0xe;
            afStack_284[0] = (float)uStack_f8;
            afStack_2bc[(uint)bVar13 * -2 + 0xf] = afStack_130[(uint)bVar13 * -2 + 0xf];
            iVar4 = param_1;
            afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
                 afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
            iVar4 = FUN_004a0770(iVar4,pfVar8);
            if (iVar4 != 0) {
              (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"gh-hits?.wav");
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar4 = *(int *)(param_1 + 0xc26c) - _DAT_01c43530;
      *(int *)(param_1 + 0xc26c) = iVar4;
      if (iVar4 < 1) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"burp[1,2].wav");
        fStack_14 = (float)FUN_0040cc00(0x41700000,0x41f00000);
        fVar15 = (float10)fStack_14 * (float10)_DAT_005e3cb9;
        FUN_005c03a0();
        *(int *)(param_1 + 0xc26c) = (int)ROUND(fVar15);
      }
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      if (*(int *)(param_1 + 0xc1e8) != 0) {
        FUN_005247c0(param_1 + 0x158,0,1);
      }
    }
    if (((0.0 <= fStack_28) && (*(float *)(param_1 + 0xc27c) <= 0.0)) &&
       (*(int *)(param_1 + 0xc1e8) != 0)) {
      afStack_35c[0] = 0.0;
      afStack_35c[2] = fStack_28;
      afStack_35c[1] = 0.0;
      uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                        (*(int *)(param_1 + 0xc1e8),afStack_370 + 5,0x40400000,0x3f060a92);
      FUN_00569040(*(int *)(param_1 + 0xc1e8) + 0x158,0,uVar6);
      afStack_26c[0] = (float)uStack_320;
      afStack_2bc[(uint)bVar13 * -2 + 0x15] = afStack_334[(uint)bVar13 * -2 + 6];
      afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
           afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
      FUN_00408b40(*(uint *)(param_1 + 0xc1e8),afStack_2bc + 0x14);
      puVar7 = &uStack_2c0;
      uStack_2c0 = uStack_194;
      afStack_2bc[(uint)bVar13 * -2] = afStack_2bc[(uint)bVar13 * -2 + 0x4b];
      iVar4 = param_1;
      afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x4c];
      iVar4 = FUN_0042ccf0(iVar4,puVar7);
      if (iVar4 != 1) {
        FUN_005247c0(param_1 + 0x158,1,1);
        *(uint *)(param_1 + 0x2508) = 0;
      }
    }
    goto LAB_004de489;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
      uVar16 = 0x100000001;
    }
    else {
LAB_004dee06:
      uVar16 = 0x100000000;
    }
LAB_004de462:
    FUN_005247c0(param_1 + 0x158,uVar16);
  }
  else {
    if (uVar1 < 3) {
      uVar16 = 0x100000011;
      goto LAB_004de462;
    }
    if (uVar1 != 3) goto LAB_004dee06;
    FUN_005247c0(param_1 + 0x158,0,1);
    FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
LAB_004de489:
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  FUN_0042e160();
  iVar4 = FUN_0042e120();
  if (iVar4 != 0) {
    if ((*(int *)(param_1 + 0xc1e8) != 0) &&
       (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))(),
       iVar4 == param_1)) {
      FUN_00559250(0x01E82168,*(uint *)(param_1 + 0xc1e8));
    }
    FUN_0042d700(param_1,param_2);
    fStack_134 = *(float *)(param_1 + 0x2518) * param_2;
    afStack_130[0] = *(float *)(param_1 + 0x251c) * param_2;
    afStack_130[1] = *(float *)(param_1 + 0x2520) * param_2;
    fStack_1dc = fStack_134;
    afStack_2bc[(uint)bVar13 * -2 + 0x39] = afStack_130[(uint)bVar13 * -2];
    afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x3a] =
         afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    fStack_1d0 = fStack_1dc + *(float *)(param_1 + 0x250c);
    fStack_1cc = fStack_1d8 + *(float *)(param_1 + 0x2510);
    fStack_1c8 = fStack_1d4 + *(float *)(param_1 + 0x2514);
    fStack_ec = fStack_1d0;
    afStack_130[(uint)bVar13 * -2 + 0x12] = afStack_2bc[(uint)bVar13 * -2 + 0x3c];
    afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
         afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x3d];
    fStack_1c4 = fStack_ec + *(float *)(param_1 + 0x249c);
    fStack_1c0 = fStack_e8 + *(float *)(param_1 + 0x24a0);
    fStack_1bc = fStack_e4 + *(float *)(param_1 + 0x24a4);
    afStack_230[0] = fStack_1c4;
    afStack_2bc[(uint)bVar13 * -2 + 0x24] = afStack_2bc[(uint)bVar13 * -2 + 0x3f];
    afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25] =
         afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x40];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(float *)(param_1 + 0x24a0) = *(float *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a4);
    FUN_0042d750(param_1,afStack_2bc + 0x23);
  }
  FUN_005675a0();
  dStack_b8 = (double)*(float *)(param_1 + 0xc27c);
  if (0.0 < dStack_b8) {
    fStack_6c = (float)FUN_00525110(param_1 + 0x158,*(uint *)(param_1 + 0xc280),
                                    1.0 - *(float *)(param_1 + 0xc27c));
    fVar2 = 1.0 - *(float *)(param_1 + 0xc27c);
    fStack_68 = 1.0 - fVar2 * fVar2 * fVar2;
    fStack_14 = fStack_6c;
    FUN_00568100(param_1 + 0x158,*(uint *)(param_1 + 0xc280),fStack_6c,fStack_68,_DAT_01cd0dbc
                 ,&LAB_00567360);
    fVar2 = *(float *)(param_1 + 0xc27c) - param_2 / _DAT_006012cc;
    *(float *)(param_1 + 0xc27c) = fVar2;
    if (fVar2 < 0.0) {
      *(uint *)(param_1 + 0xc27c) = 0;
    }
  }
  FUN_00433e80(param_1,param_2);
  if (((float)_DAT_005e3d29 < ABS(*(float *)(param_1 + 0x2508))) ||
     ((float)_DAT_005e3d29 <
      SQRT(*(float *)(param_1 + 0x2514) * *(float *)(param_1 + 0x2514) +
           *(float *)(param_1 + 0x250c) * *(float *)(param_1 + 0x250c) +
           *(float *)(param_1 + 0x2510) * *(float *)(param_1 + 0x2510)))) {
    iVar4 = FUN_0057d9c0(0x02C82A60,*(uint *)(param_1 + 0xc268));
    if (iVar4 == 0) {
      FUN_005bfb40(auStack_4dc,"ghoul-walk-?.wav *%f",(double)*(float *)(param_1 + 0xc1d0));
      uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x30))(param_1,auStack_4dc);
      *(uint *)(param_1 + 0xc268) = uVar6;
    }
  }
  else {
    FUN_0057d9d0(0x02C82A60,*(uint *)(param_1 + 0xc268));
  }
  if (*(int *)(param_1 + 0xc1d4) == 0) {
    iVar4 = *(int *)(param_1 + 0xc2b0);
    if (*(int *)(param_1 + 0x2298 + iVar4 * 4) == 0) {
      uVar16 = CONCAT44(0x3f000000,_DAT_01cd0dc0);
    }
    else {
      FUN_00430a90(param_1,*(uint *)(param_1 + 0xc28c),_DAT_01cd0dac,0x3e4ccccd);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc28c) * 4) != 0) {
        FUN_00430a90(param_1,*(uint *)(param_1 + 0xc290),_DAT_01cd0da4,0x3e4ccccd);
      }
      FUN_00430a90(param_1,*(uint *)(param_1 + 0xc294),_DAT_01cd0db0,0x3e4ccccd);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc294) * 4) != 0) {
        FUN_00430a90(param_1,*(uint *)(param_1 + 0xc298),_DAT_01cd0da8,0x3e4ccccd);
      }
      uVar16 = CONCAT44(0x3f333333,_DAT_01cd0d98);
      iVar4 = *(int *)(param_1 + 0xc2b4);
    }
    FUN_00430b60(param_1,iVar4,uVar16);
    FUN_00430960();
  }
  if ((*(int *)(param_1 + 0xc2c8) != 0) && (iStack_34 == 0x11)) {
    fStack_278 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0xc2d8);
    fStack_274 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0xc2dc);
    fStack_270 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0xc2e0);
    afStack_16c[2] = fStack_278;
    afStack_16c[(uint)bVar13 * -2 + 3] = afStack_2bc[(uint)bVar13 * -2 + 0x12];
    afStack_16c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
    if (param_2 * (float)_DAT_005e3cc9 <=
        SQRT(fStack_15c * fStack_15c + afStack_16c[2] * afStack_16c[2])) {
      *(uint *)(param_1 + 0xc2d4) = 0x3f800000;
    }
    else {
      param_2 = *(float *)(param_1 + 0xc2d4) - param_2;
      *(float *)(param_1 + 0xc2d4) = param_2;
      if (param_2 < 0.0) {
        *(uint *)(param_1 + 0xc2cc) = 0x41f00000;
        *(uint *)(param_1 + 0xc2c8) = 0;
        *(uint *)(param_1 + 0xc2d0) = 0;
      }
    }
  }
  if ((uint *)(param_1 + 0xc2d8) == (uint *)(param_1 + 0x20)) {
    return;
  }
  *(uint *)(param_1 + 0xc2d8) = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0xc2dc) = *(uint *)(param_1 + 0x24);
  *(uint *)(param_1 + 0xc2e0) = *(uint *)(param_1 + 0x28);
  return;
}
