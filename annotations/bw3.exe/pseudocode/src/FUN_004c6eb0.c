// Name: FUN_004c6eb0
// Address: 004c6eb0
// Address Range: [[004c6eb0, 004c8c89]]
// Convention: unknown
// Signature: void FUN_004c6eb0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c6eb0(int param_1,float param_2)

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
  byte auStack_4dc [104];
  float fStack_474;
  float fStack_45c;
  uint uStack_458;
  uint uStack_454;
  int iStack_444;
  int iStack_440;
  byte auStack_43c [4];
  float fStack_438;
  int iStack_408;
  int iStack_404;
  byte auStack_400 [4];
  float fStack_3fc;
  int iStack_3cc;
  int iStack_3c8;
  char acStack_3c4 [32];
  uint auStack_3a4 [6];
  uint uStack_38c;
  float fStack_388;
  float fStack_37c;
  float fStack_374;
  float afStack_370 [4];
  float fStack_360;
  uint uStack_35c;
  float afStack_358 [5];
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  uint uStack_338;
  float afStack_32c [3];
  uint uStack_320;
  uint uStack_314;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  uint uStack_2fc;
  uint uStack_2f0;
  float fStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float afStack_2cc [3];
  uint uStack_2c0;
  float afStack_2bc [5];
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float afStack_29c [3];
  uint uStack_290;
  float afStack_28c [5];
  float afStack_278 [3];
  uint uStack_26c;
  float afStack_260 [3];
  float afStack_254 [3];
  float fStack_248;
  float fStack_244;
  float fStack_240;
  uint uStack_23c;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float afStack_224 [3];
  float afStack_218 [3];
  uint uStack_20c;
  uint uStack_208;
  float fStack_204;
  float fStack_200;
  float afStack_1fc [4];
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float afStack_1d0 [3];
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float afStack_1ac [3];
  float afStack_1a0 [3];
  float afStack_194 [3];
  uint uStack_188;
  uint uStack_17c;
  uint uStack_170;
  float afStack_164 [3];
  uint uStack_158;
  float afStack_154 [5];
  float afStack_140 [3];
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint uStack_128;
  uint uStack_11c;
  uint uStack_110;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uint uStack_f8;
  uint uStack_ec;
  uint uStack_e0;
  float fStack_d4;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  int iStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  int iStack_84;
  int iStack_7c;
  float fStack_78;
  float fStack_74;
  int iStack_70;
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
  iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_94 = param_2 * *(float *)(param_1 + 0xcdcc);
  iStack_18 = param_1 + 0x158;
switchD_004c795a_caseD_e:
  if (0.0 < fStack_94) {
    uVar6 = FUN_004fbb70(iStack_18,&fStack_94);
    switch(uVar6) {
    case 5:
      iStack_1c = 1;
      if ((((*(int *)(param_1 + 0xcde4) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0x10c))(),
           iVar4 == 0)) &&
          (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))(), iVar4 == 0)
          ) && (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xe8))
                                  (*(int *)(param_1 + 0xcde4),param_1), iVar4 != 0)) {
        fStack_64 = 0x40200000;
        uStack_20c = 0;
        uStack_208 = 0;
        fStack_204 = 0x40200000;
        FUN_00408b80();
        fStack_2a8 = fStack_1e8;
        afStack_2bc[(uint)bVar13 * -2 + 6] = afStack_1fc[(uint)bVar13 * -2 + 6];
        afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
             afStack_1fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
        fVar2 = fStack_2a8 - *(float *)(*(int *)(param_1 + 0xcde4) + 0x20);
        fVar3 = fStack_2a0 - *(float *)(*(int *)(param_1 + 0xcde4) + 0x28);
        if (1.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
          iStack_1c = 0;
        }
        iVar4 = *(int *)(param_1 + 0xcde4);
        if (((ABS(fStack_2a4 - *(float *)(iVar4 + 0x24)) <= (float)_DAT_005c42bd) &&
            ((iStack_1c == 0 ||
             (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xec))(iVar4), iVar4 != 0)))) &&
           (iStack_1c != 0)) break;
      }
      FUN_004fc0d0(iStack_18);
      break;
    default:
      FUN_00433fb0();
      break;
    case 10:
      if (*(int *)(param_1 + 0xcde4) == 0) {
        FUN_004fc0d0(iStack_18);
      }
      else {
        iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))();
        if (iVar4 == param_1) {
          iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0x10c))();
          if (iVar4 == 0) {
            (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0x1c))();
            puVar7 = auStack_3a4;
            puVar10 = &uStack_38c;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar10 = *puVar7;
              puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
              puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
            }
            fVar2 = fStack_37c - fStack_388;
            pfVar8 = (float *)(*(int *)(param_1 + 0xcde4) + 0x24 + (uint)bVar13 * -8);
            afStack_154[2] = *(float *)(*(int *)(param_1 + 0xcde4) + 0x20);
            afStack_154[(uint)bVar13 * -2 + 3] = *pfVar8;
            afStack_154[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] = pfVar8[(uint)bVar13 * -2 + 1];
            afStack_154[3] = fVar2 * (float)_DAT_005c430d + afStack_154[3];
            FUN_0042abb0();
            fStack_474 = (float)FUN_0040ce40(0x41700000);
            fStack_14 = fStack_474;
            FUN_00408bf0(*(uint *)(param_1 + 0xcde4));
            fStack_2e4 = fStack_d4;
            afStack_358[(uint)bVar13 * -2 + 0x1e] = afStack_154[(uint)bVar13 * -2 + 0x21];
            afStack_358[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f] =
                 afStack_154[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
            if (&fStack_45c != afStack_358 + 0x1d) {
              fStack_45c = fStack_2e4;
              uStack_458 = uStack_2e0;
              uStack_454 = uStack_2dc;
            }
            iStack_444 = param_1;
            iStack_440 = param_1;
            (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0x108))
                      (*(int *)(param_1 + 0xcde4));
            dStack_c8 = (double)fStack_474;
            if (0.0 < dStack_c8) {
              fVar15 = (float10)fStack_474 * (float10)_DAT_005c4315 * (float10)_DAT_005c4305;
              FUN_005a3120();
              iStack_84 = (int)ROUND(fVar15);
              FUN_004ce9c0(0x01D22E44,afStack_154 + 2,0,iStack_84);
            }
            if (*(float *)(*(int *)(param_1 + 0xcde4) + 0x2538) <= 0.0) {
              (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf0))();
              FUN_004fc0d0(iStack_18,1);
            }
            (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
          }
          else {
            (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf0))();
            FUN_004fc0d0(iStack_18);
          }
        }
        else {
          FUN_004fc0d0(iStack_18);
        }
      }
      break;
    case 0xb:
    case 0xc:
      FUN_0054c130();
      FUN_0054dbd0(iStack_18);
      uStack_110 = uStack_188;
      afStack_154[(uint)bVar13 * -2 + 0x12] = afStack_1fc[(uint)bVar13 * -2 + 0x1e];
      afStack_154[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
           afStack_1fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f];
      FUN_00408b80(param_1);
      uVar16 = 0x4140000041000000;
      afStack_1ac[0] = (float)uStack_ec;
      afStack_1fc[(uint)bVar13 * -2 + 0x15] = afStack_154[(uint)bVar13 * -2 + 0x1b];
      afStack_1fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
           afStack_154[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c];
      fStack_14 = (float)FUN_0040ce40(uVar16);
      fVar15 = (float10)fStack_14 * (float10)_DAT_005c4305;
      FUN_005a3120();
      iStack_70 = (int)ROUND(fVar15);
      FUN_004ce9c0(0x01D22E44,afStack_1fc + 0x14,0,iStack_70);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
      break;
    case 0xd:
      FUN_0054c130();
      FUN_0054dbd0(iStack_18);
      uStack_35c = uStack_26c;
      afStack_358[(uint)bVar13 * -2] = afStack_28c[(uint)bVar13 * -2 + 9];
      afStack_358[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
      FUN_00408b80(param_1);
      uVar16 = 0x4140000041000000;
      afStack_140[0] = (float)uStack_338;
      afStack_154[(uint)bVar13 * -2 + 6] = afStack_358[(uint)bVar13 * -2 + 9];
      afStack_154[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           afStack_358[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
      fStack_14 = (float)FUN_0040ce40(uVar16);
      fVar15 = (float10)fStack_14 * (float10)_DAT_005c4305;
      FUN_005a3120();
      iStack_7c = (int)ROUND(fVar15);
      FUN_004ce9c0(0x01D22E44,afStack_154 + 5,0,iStack_7c);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      FUN_0054c130();
      FUN_0054dbd0(iStack_18);
      uStack_320 = uStack_2fc;
      afStack_358[(uint)bVar13 * -2 + 0xf] = afStack_358[(uint)bVar13 * -2 + 0x18];
      afStack_358[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
           afStack_358[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
      FUN_00408b80(param_1);
      uVar16 = 0x4140000041000000;
      afStack_32c[0] = (float)uStack_2f0;
      afStack_358[(uint)bVar13 * -2 + 0xc] = afStack_358[(uint)bVar13 * -2 + 0x1b];
      afStack_358[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           afStack_358[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c];
      fStack_14 = (float)FUN_0040ce40(uVar16);
      fVar15 = (float10)fStack_14 * (float10)_DAT_005c4305;
      FUN_005a3120();
      iStack_98 = (int)ROUND(fVar15);
      FUN_004ce9c0(0x01D22E44,afStack_358 + 0xb,0,iStack_98);
      iVar4 = FUN_0040cf40();
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
    goto switchD_004c795a_caseD_e;
  }
  fStack_14 = (float)FUN_004fc350(iStack_18,1);
  dStack_a8 = (double)param_2;
  *(float *)(param_1 + 0x2524) =
       fStack_14 * (float)_DAT_005c42ad * param_2 * *(float *)(param_1 + 0xcdcc);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  iVar4 = FUN_004fc070();
  iStack_34 = *(int *)(iVar4 + 0x24);
  if (iStack_34 == 0x11) {
    fVar15 = (float10)_DAT_005c42b5;
    *(float *)(param_1 + 0x2528) = *(float *)(param_1 + 0x2528) * (float)_DAT_005c42bd;
    *(float *)(param_1 + 0x2524) =
         (float)((float10)dStack_a8 * fVar15 * (float10)*(float *)(param_1 + 0xcdcc));
  }
  iVar4 = FUN_00431660(param_1,param_2);
  if (iVar4 == 0) {
    fStack_28 = -1.0;
    iVar4 = param_1 + 0x158;
    iVar5 = FUN_004fc070();
    switch(*(uint *)(iVar5 + 0x24)) {
    case 0:
      if (*(float *)(param_1 + 0xd0b0) <= 0.0) {
        iVar4 = *(int *)(param_1 + 0xd0b4);
        if (iVar4 == 0) {
          iVar4 = FUN_00489ff0(param_1,param_2);
          if (iVar4 != 0) goto LAB_004c7fd6;
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          if (*(int *)(param_1 + 0xcde4) != 0) {
            FUN_004fc0d0(param_1 + 0x158,1,1);
            iVar4 = FUN_00556700();
            if ((iVar4 == 0) || (iVar4 = FUN_00556700(), iVar4 == 0)) {
              uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                (param_1,"ghoul-alert-?.wav");
              *(uint *)(param_1 + 0xd0a4) = uVar6;
            }
          }
        }
        else {
          fStack_230 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_22c = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_228 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          afStack_358[2] = fStack_230;
          afStack_358[(uint)bVar13 * -2 + 3] = afStack_28c[(uint)bVar13 * -2 + 0x18];
          afStack_358[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
               afStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
          fStack_344 = afStack_358[2];
          afStack_358[(uint)bVar13 * -2 + 6] = afStack_358[(uint)bVar13 * -2 + 3];
          afStack_358[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
               afStack_358[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
          fStack_90 = fStack_33c * fStack_33c + fStack_344 * fStack_344 + fStack_340 * fStack_340;
          if (SQRT(fStack_90) < (float)_DAT_005c42bd) {
            fVar2 = *(float *)(param_1 + 0x2538) + param_2;
            *(float *)(param_1 + 0xd0b8) = *(float *)(param_1 + 0xd0b8) - param_2;
            *(float *)(param_1 + 0x2538) = fVar2;
            if ((float)_DAT_005c42fd < fVar2) {
              *(uint *)(param_1 + 0x2538) = 0x42c80000;
            }
            if (*(float *)(param_1 + 0xd0b8) < 0.0) {
              *(uint *)(param_1 + 0xd0b8) = 0;
              *(uint *)(param_1 + 0xd0b4) = 0;
            }
          }
        }
      }
      else {
        *(float *)(param_1 + 0xd0b0) = *(float *)(param_1 + 0xd0b0) - param_2;
      }
      break;
    case 1:
    case 0x11:
      if ((*(int *)(param_1 + 0xd0bc) != 0) && (iStack_34 == 1)) {
        FUN_004fc0d0(param_1 + 0x158,0x11,1);
      }
      if (0.0 < *(float *)(param_1 + 0xd0b0)) {
        *(float *)(param_1 + 0xd0b0) = *(float *)(param_1 + 0xd0b0) - param_2;
        FUN_004fc0d0(param_1 + 0x158,0,1);
      }
      else {
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        uStack_24 = (uint)(*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd07c) * 4) != 0);
        if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd084) * 4) != 0) {
          uStack_24 = uStack_24 + 1;
        }
        iVar5 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) + 0x10c))();
        iVar4 = 0x01D2130C;
        if (iVar5 == 0) {
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          iVar4 = *(int *)(param_1 + 0xcde4);
          if (iVar4 == 0) {
            iVar4 = FUN_00489ff0(param_1,param_2);
            if (iVar4 == 0) {
              FUN_004fc0d0(param_1 + 0x158,0,1);
            }
          }
          else {
            fStack_248 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_244 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_240 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
            fStack_308 = fStack_248;
            afStack_358[(uint)bVar13 * -2 + 0x15] = afStack_28c[(uint)bVar13 * -2 + 0x12];
            afStack_358[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
                 afStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
            fStack_304 = 0.0;
            if (((*(float *)(param_1 + 0x2538) < (float)_DAT_005c42e5) && (0 < (int)uStack_24)) &&
               (*(int *)(param_1 + 0xd0b4) == 0)) {
              FUN_004c6c80(param_1,param_2);
            }
            iVar4 = *(int *)(param_1 + 0xd0b4);
            if (iVar4 == 0) {
              afStack_164[0] = 0.0;
              afStack_164[2] = 0x40200000;
              afStack_164[1] = 0.0;
              uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                                (*(int *)(param_1 + 0xcde4),afStack_1fc + 0x26,0x3f800000,0x3e32b8c2
                                );
              iVar4 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar6);
              if (iVar4 < 0) {
                FUN_004fc0d0(param_1 + 0x158,0,1);
              }
              else if (((0 < iVar4) && (0 < (int)uStack_24)) &&
                      ((*(float *)(param_1 + 0xcde0) <= 0.0 &&
                       ((iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))
                                           (), iVar4 == 0 && (*(float *)(param_1 + 0xd068) <= 0.0)))
                       ))) {
                fStack_44 = SQRT(fStack_300 * fStack_300 +
                                 fStack_308 * fStack_308 + fStack_304 * fStack_304);
                fStack_2c = 0.0;
                fStack_40 = 0.0;
                fStack_48 = 0.0;
                if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd084) * 4) != 0) {
                  fStack_2c = (1.0 - ABS(fStack_44 - 0x4059999A) / 0x4059999A) *
                              (float)_DAT_005c42ed;
                }
                if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd07c) * 4) != 0) {
                  fStack_40 = (1.0 - ABS(fStack_44 - 0x40200000) / 0x40200000) *
                              (float)_DAT_005c42f5;
                }
                fStack_3c = fStack_44;
                iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xe8))
                                  (*(int *)(param_1 + 0xcde4),param_1,0);
                if (iVar4 != 0) {
                  fStack_48 = (1.0 - ABS(fStack_3c - 0x40200000) / 0x40200000) *
                              (float)_DAT_005c42ed;
                }
                fStack_4c = fStack_2c + fStack_40;
                fStack_54 = fStack_4c + fStack_48;
                if (0.0 < fStack_54) {
                  fStack_50 = (float)FUN_0040ce40(0,fStack_54);
                  if (fStack_2c <= fStack_50) {
                    if (fStack_4c <= fStack_50) {
                      uVar16 = 0x10000000b;
                    }
                    else {
                      uVar16 = 0x10000000c;
                    }
                  }
                  else {
                    uVar16 = 0x100000002;
                  }
                  fStack_14 = fStack_50;
                  FUN_004fc0d0(param_1 + 0x158,uVar16);
                  *(uint *)(param_1 + 0xcde0) = 0x3f333333;
                }
              }
            }
            else {
              uVar6 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xc4))
                                (iVar4,&DAT_02cfd900,0x40400000,0);
              iVar4 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xd0b4) + 0x20,uVar6);
              if (0 < iVar4) {
                FUN_004fc0d0(param_1 + 0x158,0,1);
                fStack_14 = (float)FUN_0040ce40(0x41200000,0x41f00000);
                *(float *)(param_1 + 0xd0b8) = fStack_14;
              }
              if (iVar4 < 0) {
                *(uint *)(param_1 + 0xd0b8) = 0x41f00000;
                *(uint *)(param_1 + 0xd0b4) = 0;
              }
              if (iStack_34 == 1) {
                FUN_004fc0d0(param_1 + 0x158,0x11,1);
              }
            }
          }
        }
        else {
          if (*(int *)(param_1 + 0xd064) < 0) {
            cVar12 = *(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd07c) * 4) != 0;
            if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd084) * 4) != 0) {
              cVar12 = cVar12 + '\x01';
            }
            if (cVar12 != '\0') {
              if (cVar12 == '\x01') {
                *(uint *)(param_1 + 0xd064) = 0xe;
                *(uint *)(iVar4 + 0x244) = 1;
              }
              else {
                iVar4 = FUN_0040cf40();
                *(uint *)(param_1 + 0xd064) = (iVar4 == 0) + 0xd;
                *(uint *)(0x01D2130C + 0x244) = 1;
              }
              goto LAB_004c84bd;
            }
            *(uint *)(param_1 + 0xd064) = 0;
          }
          else {
LAB_004c84bd:
            if (*(int *)(param_1 + 0xd064) != 0) {
              uStack_38 = 0x40000000;
              if (*(int *)(param_1 + 0xd064) == 0xe) {
                uStack_38 = 0x40B00000;
              }
              afStack_29c[2] = (float)uStack_38;
              afStack_29c[0] = 0.0;
              iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              afStack_29c[1] = 0.0;
              uVar6 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xc4))
                                (iVar4,afStack_2bc + 8,0x3f000000,0x3db2b8c2);
              FUN_0054dbd0(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x158,0,uVar6);
              pfVar8 = afStack_28c + 0x1d;
              afStack_218[0] = (float)uStack_17c;
              afStack_28c[(uint)bVar13 * -2 + 0x1e] = afStack_1fc[(uint)bVar13 * -2 + 0x21];
              afStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f] =
                   afStack_1fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
              FUN_00408b80(*(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),pfVar8);
              puVar7 = &uStack_290;
              uStack_290 = uStack_170;
              afStack_28c[(uint)bVar13 * -2] = afStack_1fc[(uint)bVar13 * -2 + 0x24];
              iVar4 = param_1;
              afStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                   afStack_1fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25];
              iVar4 = FUN_0042b9e0(iVar4,puVar7);
              if (((0 < iVar4) &&
                  (iVar4 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) +
                                       0x10c))(), iVar4 == 2)) &&
                 (FUN_004fc0d0(param_1 + 0x158,*(uint *)(param_1 + 0xd064),1),
                 *(int *)(param_1 + 0xd064) == 0xd)) {
                iVar4 = *(int *)(param_1 + 0x154);
                fStack_14 = (float)FUN_0040ce40(0x3f000000,0x3f99999a);
                (**(code **)(iVar4 + 0x34))(param_1,"ghoul-scream-!-?.wav",fStack_14);
              }
              break;
            }
          }
          FUN_004fc0d0(param_1 + 0x158,0,1);
        }
      }
      break;
    case 2:
      if (*(int *)(param_1 + 0xcde4) == 0) {
LAB_004c7fd6:
        FUN_004fc0d0(param_1 + 0x158,1,1);
      }
      else {
        iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))();
        if (iVar5 == 0) {
          fStack_14 = (float)FUN_0040ce40(0x3e4ccccd,0x3f000000);
          *(float *)(param_1 + 0xcde0) = fStack_14;
          if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd084) * 4) != 0) {
            fStack_5c = (float)FUN_004fc930();
            dStack_b8 = (double)fStack_5c;
            fStack_14 = fStack_5c;
            if ((fStack_5c <= (float)_DAT_005c42cd) && (fStack_28 = 0x4059999A, 1.0 <= dStack_b8))
            {
              FUN_0042abb0();
              fStack_14 = (float)FUN_0040ce40(0x40e00000,0x41700000);
              fStack_438 = fStack_14;
              if (*(int *)(param_1 + 0xd0bc) != 0) {
                fStack_438 = fStack_14 * (float)_DAT_005c42cd;
              }
              iStack_408 = param_1;
              iStack_404 = param_1;
              FUN_00583260(&DAT_01d22d58,_DAT_01d22da8 * 0x30 + param_1 + 0xfd8,0x3e4ccccd,
                           auStack_43c);
              pfVar8 = afStack_28c + 0xe;
              afStack_254[0] = (float)uStack_11c;
              afStack_28c[(uint)bVar13 * -2 + 0xf] = afStack_154[(uint)bVar13 * -2 + 0xf];
              afStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
                   afStack_154[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
              FUN_00408b80(param_1,pfVar8);
              pfVar8 = afStack_1fc + 0xb;
              afStack_1d0[0] = (float)uStack_128;
              afStack_1fc[(uint)bVar13 * -2 + 0xc] = afStack_154[(uint)bVar13 * -2 + 0xc];
              iVar4 = param_1;
              afStack_1fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
                   afStack_154[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
              iVar4 = FUN_004893f0(iVar4,pfVar8);
              if (iVar4 != 0) {
                (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"gh-hits?.wav");
              }
            }
          }
        }
        else {
          FUN_004fc0d0(iVar4,1,1);
        }
      }
      break;
    case 10:
      if (((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xd070) < 1)) &&
         (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_0054dbd0(iVar4,0);
        pfVar8 = afStack_1fc + 0x1a;
        afStack_194[0] = (float)uStack_2c0;
        afStack_1fc[(uint)bVar13 * -2 + 0x1b] = afStack_2bc[(uint)bVar13 * -2];
        afStack_1fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] =
             afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        FUN_00408b80(param_1,pfVar8);
        uVar17 = ZEXT48(afStack_1fc + 0x17);
        afStack_1a0[0] = (float)uStack_f8;
        afStack_1fc[(uint)bVar13 * -2 + 0x18] = afStack_154[(uint)bVar13 * -2 + 0x18];
        uVar6 = 0x01D22E44;
        afStack_1fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
             afStack_154[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
        FUN_004cec40(uVar6,uVar17);
        *(uint *)(param_1 + 0xcdd0) = 1;
      }
      *(uint *)(param_1 + 0xd0bc) = 0;
      if (((0 < *(int *)(param_1 + 0xd074)) || (0 < *(int *)(param_1 + 0xd070))) &&
         (iVar4 = *(int *)(param_1 + 0xd05c) - _DAT_01c5fad0, *(int *)(param_1 + 0xd05c) = iVar4,
         iVar4 < 1)) {
        if (*(int *)(param_1 + 0xd070) < 1) {
          *(int *)(param_1 + 0xd074) = *(int *)(param_1 + 0xd074) + -1;
        }
        if ((0 < *(int *)(param_1 + 0xd074)) || (0 < *(int *)(param_1 + 0xd070))) {
          fStack_14 = (float)FUN_0040ce40(0x3f800000,0x41400000);
          fVar15 = (float10)fStack_14 * (float10)_DAT_005c42c5;
          uVar6 = FUN_005a3120(0xf,1);
          *(int *)(param_1 + 0xd05c) = (int)ROUND(fVar15);
          FUN_004fc0d0(uVar6);
        }
      }
      if (0 < *(int *)(param_1 + 0xd070)) {
        iVar4 = *(int *)(param_1 + 0xd060);
        if (iVar4 < 1) {
          iVar4 = iVar4 + _DAT_01c5fad0;
          iStack_58 = 0;
          *(int *)(param_1 + 0xd060) = iVar4;
          if (iVar4 < 0) {
            (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
            iVar4 = *(int *)(param_1 + 0xcde4);
            if (iVar4 != 0) {
              fStack_2d8 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
              fStack_2d4 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
              fStack_2d0 = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
              afStack_1fc[2] = fStack_2d8;
              afStack_1fc[(uint)bVar13 * -2 + 3] = afStack_358[(uint)bVar13 * -2 + 0x21];
              afStack_1fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
                   afStack_358[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
              if (afStack_370 + 2 != afStack_1fc + 2) {
                afStack_370[2] = afStack_1fc[2];
                afStack_370[3] = afStack_1fc[3];
                fStack_360 = fStack_1ec;
              }
              fStack_78 = fStack_360 * fStack_360 +
                          afStack_370[2] * afStack_370[2] + afStack_370[3] * afStack_370[3];
              fStack_74 = (float)(((int)fStack_78 >> 1) + _DAT_01d1a0a4);
              if (fStack_74 < (float)_DAT_005c42b5) goto LAB_004c7c47;
            }
            if (iStack_58 == 0) break;
          }
          else {
            *(uint *)(param_1 + 0xd060) = 0;
          }
LAB_004c7c47:
          fStack_20 = *(float *)(param_1 + 0x3280);
          if (fStack_20 < *(float *)(param_1 + 0x327c)) {
            fStack_20 = *(float *)(param_1 + 0x2490);
          }
          if (fStack_20 < *(float *)(param_1 + 0x327c)) {
            fStack_20 = *(float *)(param_1 + 0x327c) + (float)_DAT_005c42d5;
          }
          iVar4 = 0;
          do {
            fStack_8c = (float)iVar4 * _DAT_005c431d * _DAT_005c4321;
            fStack_14 = (float)iVar4;
            FUN_0053ebe0();
            FUN_0053ec10(0x01ED78C8,param_1);
            fVar15 = (float10)fcos((float10)fStack_8c);
            fVar14 = (float10)fsin((float10)fStack_8c);
            fStack_30 = (float)FUN_0053de10(0x01ED78C8,*(uint *)(param_1 + 0x20),
                                            *(uint *)(param_1 + 0x28),
                                            (float)(fVar14 * (float10)_DAT_005c4325),
                                            (float)(fVar15 * (float10)_DAT_005c4325),
                                            *(uint *)(param_1 + 0x3270),
                                            *(float *)(param_1 + 0x24) +
                                            *(float *)(param_1 + 0x327c));
            fStack_14 = fStack_30;
            FUN_0053ebe0();
            if (fStack_30 < 1.0) break;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 4);
          if (iVar4 < 4) {
            *(uint *)(param_1 + 0xd060) = 3;
            *(uint *)(param_1 + 0xcde4) = 0;
          }
          else {
            fStack_14 = (float)(*(int *)(param_1 + 0xd070) + 1);
            fStack_14 = (float)FUN_0040ce40(0x41200000,(float)(int)fStack_14 * (float)_DAT_005c432d)
            ;
            *(float *)(param_1 + 0x2538) = fStack_14;
            FUN_004fc0d0(param_1 + 0x158,0x10,1);
          }
        }
        else {
          iVar4 = iVar4 - _DAT_01c5fad0;
          *(int *)(param_1 + 0xd060) = iVar4;
          if (iVar4 < 1) {
            fStack_14 = (float)FUN_0040ce40(0,0x41f00000);
            fVar15 = -(float10)fStack_14 * (float10)_DAT_005c42dd;
            FUN_005a3120();
            *(int *)(param_1 + 0xd060) = (int)ROUND(fVar15);
          }
        }
      }
      break;
    case 0xb:
      if (*(int *)(param_1 + 0xcde4) == 0) {
LAB_004c887a:
        FUN_004fc0d0(iVar4,1,1);
      }
      else {
        iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))();
        if (iVar5 == 0) {
          fStack_28 = 0x40200000;
        }
        else {
          iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))();
          if (iVar5 != param_1) {
            FUN_004fc0d0(iVar4,1,1);
          }
        }
      }
      break;
    case 0xc:
      if ((*(int *)(param_1 + 0xcde4) == 0) ||
         (iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))(), iVar5 != 0))
      goto LAB_004c887a;
      fStack_14 = (float)FUN_0040ce40(0x3e4ccccd,0x3f000000);
      *(float *)(param_1 + 0xcde0) = fStack_14;
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd07c) * 4) != 0) {
        fStack_60 = (float)FUN_004fc930();
        dStack_b0 = (double)fStack_60;
        fStack_14 = fStack_60;
        if (fStack_60 <= (float)_DAT_005c42cd) {
          fStack_28 = 0x40200000;
          if (1.0 <= dStack_b0) {
            FUN_0042abb0();
            fStack_14 = (float)FUN_0040ce40(0x40e00000,0x41700000);
            fStack_3fc = fStack_14;
            if (*(int *)(param_1 + 0xd0bc) != 0) {
              fStack_3fc = fStack_14 * (float)_DAT_005c42cd;
            }
            iStack_3cc = param_1;
            iStack_3c8 = param_1;
            FUN_00583260(&DAT_01d22d4c,_DAT_01d22da4 * 0x30 + param_1 + 0xfd8,0x3ecccccd,auStack_400
                        );
            pfVar8 = afStack_28c + 2;
            afStack_28c[2] = (float)uStack_23c;
            afStack_28c[(uint)bVar13 * -2 + 3] = afStack_28c[(uint)bVar13 * -2 + 0x15];
            afStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
                 afStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
            FUN_00408b80(param_1,pfVar8);
            pfVar8 = afStack_28c + 5;
            afStack_278[0] = (float)uStack_e0;
            afStack_28c[(uint)bVar13 * -2 + 6] = afStack_154[(uint)bVar13 * -2 + 0x1e];
            iVar4 = param_1;
            afStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
                 afStack_154[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f];
            iVar4 = FUN_004893f0(iVar4,pfVar8);
            if (iVar4 != 0) {
              (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"gh-hits?.wav");
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar4 = *(int *)(param_1 + 0xd058) - _DAT_01c5fad0;
      *(int *)(param_1 + 0xd058) = iVar4;
      if (iVar4 < 1) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"burp[1,2].wav");
        fStack_14 = (float)FUN_0040ce40(0x41700000,0x41f00000);
        fVar15 = (float10)fStack_14 * (float10)_DAT_005c42c5;
        FUN_005a3120();
        *(int *)(param_1 + 0xd058) = (int)ROUND(fVar15);
      }
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      if (*(int *)(param_1 + 0xcde4) != 0) {
        FUN_004fc0d0(param_1 + 0x158,0,1);
      }
    }
    if (((0.0 <= fStack_28) && (*(float *)(param_1 + 0xd068) <= 0.0)) &&
       (*(int *)(param_1 + 0xcde4) != 0)) {
      afStack_2cc[0] = 0.0;
      afStack_2cc[2] = fStack_28;
      afStack_2cc[1] = 0.0;
      uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                        (*(int *)(param_1 + 0xcde4),afStack_358 + 0x23,0x40400000,0x3f060a92);
      FUN_0054dbd0(*(int *)(param_1 + 0xcde4) + 0x158,0,uVar6);
      afStack_260[0] = (float)uStack_314;
      afStack_28c[(uint)bVar13 * -2 + 0xc] = afStack_358[(uint)bVar13 * -2 + 0x12];
      afStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           afStack_358[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
      FUN_00408b80(*(uint *)(param_1 + 0xcde4),afStack_28c + 0xb);
      pfVar8 = afStack_2bc + 2;
      afStack_2bc[2] = (float)uStack_158;
      afStack_2bc[(uint)bVar13 * -2 + 3] = afStack_154[(uint)bVar13 * -2];
      iVar4 = param_1;
      afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_154[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      iVar4 = FUN_0042b9e0(iVar4,pfVar8);
      if (iVar4 != 1) {
        FUN_004fc0d0(param_1 + 0x158,1,1);
        *(uint *)(param_1 + 0x2508) = 0;
      }
    }
    goto LAB_004c7010;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
      uVar16 = 0x100000001;
    }
    else {
LAB_004c799c:
      uVar16 = 0x100000000;
    }
LAB_004c6fe9:
    FUN_004fc0d0(param_1 + 0x158,uVar16);
  }
  else {
    if (uVar1 < 3) {
      uVar16 = 0x100000011;
      goto LAB_004c6fe9;
    }
    if (uVar1 != 3) goto LAB_004c799c;
    FUN_004fc0d0(param_1 + 0x158,0,1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
LAB_004c7010:
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  FUN_0042cd30();
  iVar4 = FUN_0042ccf0();
  if (iVar4 != 0) {
    if ((*(int *)(param_1 + 0xcde4) != 0) &&
       (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))(),
       iVar4 == param_1)) {
      FUN_0053ec10(0x01ED78C8,*(uint *)(param_1 + 0xcde4));
    }
    FUN_0042c1e0(param_1,param_2);
    fStack_200 = *(float *)(param_1 + 0x2518) * param_2;
    afStack_1fc[0] = *(float *)(param_1 + 0x251c) * param_2;
    afStack_1fc[1] = *(float *)(param_1 + 0x2520) * param_2;
    fStack_104 = fStack_200;
    afStack_154[(uint)bVar13 * -2 + 0x15] = afStack_1fc[(uint)bVar13 * -2];
    afStack_154[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
         afStack_1fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    fStack_134 = fStack_104 + *(float *)(param_1 + 0x250c);
    fStack_130 = fStack_100 + *(float *)(param_1 + 0x2510);
    fStack_12c = fStack_fc + *(float *)(param_1 + 0x2514);
    fStack_1c4 = fStack_134;
    afStack_1fc[(uint)bVar13 * -2 + 0xf] = afStack_154[(uint)bVar13 * -2 + 9];
    afStack_1fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
         afStack_154[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
    fStack_1b8 = fStack_1c4 + *(float *)(param_1 + 0x249c);
    fStack_1b4 = fStack_1c0 + *(float *)(param_1 + 0x24a0);
    fStack_1b0 = fStack_1bc + *(float *)(param_1 + 0x24a4);
    afStack_224[0] = fStack_1b8;
    afStack_28c[(uint)bVar13 * -2 + 0x1b] = afStack_1fc[(uint)bVar13 * -2 + 0x12];
    afStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] =
         afStack_1fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(float *)(param_1 + 0x24a0) = *(float *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a4);
    FUN_0042c230(param_1,afStack_28c + 0x1a);
  }
  FUN_0054c130();
  dStack_c0 = (double)*(float *)(param_1 + 0xd068);
  if (0.0 < dStack_c0) {
    fStack_6c = (float)FUN_004fca20(param_1 + 0x158,*(uint *)(param_1 + 0xd06c),
                                    1.0 - *(float *)(param_1 + 0xd068));
    fVar2 = 1.0 - *(float *)(param_1 + 0xd068);
    fStack_68 = 1.0 - fVar2 * fVar2 * fVar2;
    fStack_14 = fStack_6c;
    FUN_0054cc90(param_1 + 0x158,*(uint *)(param_1 + 0xd06c),fStack_6c,fStack_68,_DAT_01d22dc4
                 ,&LAB_0054bef0);
    fVar2 = *(float *)(param_1 + 0xd068) - param_2 / _DAT_005e0a3c;
    *(float *)(param_1 + 0xd068) = fVar2;
    if (fVar2 < 0.0) {
      *(uint *)(param_1 + 0xd068) = 0;
    }
  }
  FUN_00433350(param_1,param_2);
  if (((float)_DAT_005c4335 < ABS(*(float *)(param_1 + 0x2508))) ||
     ((float)_DAT_005c4335 <
      SQRT(*(float *)(param_1 + 0x2514) * *(float *)(param_1 + 0x2514) +
           *(float *)(param_1 + 0x250c) * *(float *)(param_1 + 0x250c) +
           *(float *)(param_1 + 0x2510) * *(float *)(param_1 + 0x2510)))) {
    iVar4 = FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0xd054));
    if (iVar4 == 0) {
      FUN_005a28c0(auStack_4dc,"ghoul-walk-?.wav *%f",(double)*(float *)(param_1 + 0xcdcc));
      uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x30))(param_1,auStack_4dc);
      *(uint *)(param_1 + 0xd054) = uVar6;
    }
  }
  else {
    FUN_00560b00(0x02CF5680,*(uint *)(param_1 + 0xd054));
  }
  if (*(int *)(param_1 + 0xcdd0) == 0) {
    iVar4 = *(int *)(param_1 + 0xd09c);
    if (*(int *)(param_1 + 0x2298 + iVar4 * 4) == 0) {
      uVar16 = CONCAT44(0x3f000000,_DAT_01d22dc8);
    }
    else {
      FUN_0042fdc0(param_1,*(uint *)(param_1 + 0xd078),_DAT_01d22db4,0x3e4ccccd);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd078) * 4) != 0) {
        FUN_0042fdc0(param_1,*(uint *)(param_1 + 0xd07c),_DAT_01d22dac,0x3e4ccccd);
      }
      FUN_0042fdc0(param_1,*(uint *)(param_1 + 0xd080),_DAT_01d22db8,0x3e4ccccd);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd080) * 4) != 0) {
        FUN_0042fdc0(param_1,*(uint *)(param_1 + 0xd084),_DAT_01d22db0,0x3e4ccccd);
      }
      uVar16 = CONCAT44(0x3f333333,_DAT_01d22da0);
      iVar4 = *(int *)(param_1 + 0xd0a0);
    }
    FUN_0042fe90(param_1,iVar4,uVar16);
    FUN_0042fc90();
  }
  if ((*(int *)(param_1 + 0xd0b4) != 0) && (iStack_34 == 0x11)) {
    fStack_1dc = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0xd0c4);
    fStack_1d8 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0xd0c8);
    fStack_1d4 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0xd0cc);
    fStack_374 = fStack_1dc;
    afStack_370[(uint)bVar13 * -2] = afStack_1fc[(uint)bVar13 * -2 + 9];
    afStack_370[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_1fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
    if (param_2 * (float)_DAT_005c42d5 <=
        SQRT(afStack_370[1] * afStack_370[1] + fStack_374 * fStack_374)) {
      *(uint *)(param_1 + 0xd0c0) = 0x3f800000;
    }
    else {
      param_2 = *(float *)(param_1 + 0xd0c0) - param_2;
      *(float *)(param_1 + 0xd0c0) = param_2;
      if (param_2 < 0.0) {
        *(uint *)(param_1 + 0xd0b8) = 0x41f00000;
        *(uint *)(param_1 + 0xd0b4) = 0;
        *(uint *)(param_1 + 0xd0bc) = 0;
      }
    }
  }
  if ((uint *)(param_1 + 0xd0c4) == (uint *)(param_1 + 0x20)) {
    return;
  }
  *(uint *)(param_1 + 0xd0c4) = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0xd0c8) = *(uint *)(param_1 + 0x24);
  *(uint *)(param_1 + 0xd0cc) = *(uint *)(param_1 + 0x28);
  return;
}
