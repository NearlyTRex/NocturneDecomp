// Name: FUN_004c1bb0
// Address: 004c1bb0
// Address Range: [[004c1bb0, 004c397a]]
// Convention: unknown
// Signature: void FUN_004c1bb0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c1bb0(int param_1,float param_2)

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
  iVar4 = FUN_004244b0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  fStack_70 = param_2 * *(float *)(param_1 + 0x10a60);
  iStack_18 = param_1 + 0x2b4;
switchD_004c2644_caseD_e:
  if (0.0 < fStack_70) {
    uVar6 = FUN_005030c0(iStack_18,&fStack_70);
    switch(uVar6) {
    case 5:
      iStack_1c = 1;
      if ((((*(int *)(param_1 + 0x10a78) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0x114))(),
           iVar4 == 0)) &&
          (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xfc))(), iVar4 == 0
          )) && (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xf0))
                                   (*(int *)(param_1 + 0x10a78),param_1), iVar4 != 0)) {
        fStack_64 = 0x40200000;
        afStack_34c[2] = 0.0;
        afStack_34c[3] = 0.0;
        afStack_34c[4] = 0x40200000;
        FUN_00408d70();
        afStack_2bc[2] = fStack_1f4;
        afStack_2bc[(uint)bVar13 * -2 + 3] = afStack_2bc[(uint)bVar13 * -2 + 0x33];
        afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
             afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x34];
        fVar2 = afStack_2bc[2] - *(float *)(*(int *)(param_1 + 0x10a78) + 0x20);
        fVar3 = fStack_2ac - *(float *)(*(int *)(param_1 + 0x10a78) + 0x28);
        if (1.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
          iStack_1c = 0;
        }
        iVar4 = *(int *)(param_1 + 0x10a78);
        if (((ABS(afStack_2bc[3] - *(float *)(iVar4 + 0x24)) <= (float)_DAT_005d90f7) &&
            ((iStack_1c == 0 ||
             (iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xf4))(iVar4), iVar4 != 0)))) &&
           (iStack_1c != 0)) break;
      }
      FUN_00503620(iStack_18);
      break;
    default:
      FUN_0042aa00();
      break;
    case 10:
      if (*(int *)(param_1 + 0x10a78) == 0) {
        FUN_00503620(iStack_18);
      }
      else {
        iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xfc))();
        if (iVar4 == param_1) {
          iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0x114))();
          if (iVar4 == 0) {
            (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0x24))();
            puVar7 = auStack_3a4;
            puVar10 = &uStack_38c;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar10 = *puVar7;
              puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
              puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
            }
            fVar2 = fStack_37c - fStack_388;
            pfVar8 = (float *)(*(int *)(param_1 + 0x10a78) + 0x24 + (uint)bVar13 * -8);
            fStack_14c = *(float *)(*(int *)(param_1 + 0x10a78) + 0x20);
            afStack_16c[(uint)bVar13 * -2 + 9] = *pfVar8;
            afStack_16c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] = pfVar8[(uint)bVar13 * -2 + 1];
            fStack_148 = fVar2 * (float)_DAT_005d9147 + fStack_148;
            FUN_004222d0();
            fStack_3fc = (float)FUN_0040cf60(0x41700000);
            fStack_14 = fStack_3fc;
            FUN_00408de0(*(uint *)(param_1 + 0x10a78));
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
            (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0x110))
                      (*(int *)(param_1 + 0x10a78));
            dStack_c8 = (double)fStack_3fc;
            if (0.0 < dStack_c8) {
              fVar15 = (float10)fStack_3fc * (float10)_DAT_005d914f * (float10)_DAT_005d913f;
              FUN_005b7ff0();
              iStack_8c = (int)ROUND(fVar15);
              FUN_004c9850(0x01CB8284,afStack_16c + 8,0,iStack_8c);
            }
            if (*(float *)(*(int *)(param_1 + 0x10a78) + 0x25a8) <= 0.0) {
              (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xf8))();
              FUN_00503620(iStack_18,1);
            }
            (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))();
          }
          else {
            (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xf8))();
            FUN_00503620(iStack_18);
          }
        }
        else {
          FUN_00503620(iStack_18);
        }
      }
      break;
    case 0xb:
    case 0xc:
      FUN_00544f00();
      FUN_005469a0(iStack_18);
      afStack_130[2] = (float)uStack_1ac;
      afStack_130[(uint)bVar13 * -2 + 3] = afStack_2bc[(uint)bVar13 * -2 + 0x45];
      afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x46];
      FUN_00408d70(param_1);
      uVar16 = 0x4140000041000000;
      afStack_1e8[0] = (float)uStack_e0;
      afStack_2bc[(uint)bVar13 * -2 + 0x36] = afStack_130[(uint)bVar13 * -2 + 0x15];
      afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x37] =
           afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
      fStack_14 = (float)FUN_0040cf60(uVar16);
      fVar15 = (float10)fStack_14 * (float10)_DAT_005d913f;
      FUN_005b7ff0();
      iStack_74 = (int)ROUND(fVar15);
      FUN_004c9850(0x01CB8284,afStack_2bc + 0x35,0,iStack_74);
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))();
      break;
    case 0xd:
      FUN_00544f00();
      FUN_005469a0(iStack_18);
      afStack_370[2] = (float)uStack_2d8;
      afStack_370[(uint)bVar13 * -2 + 3] = afStack_334[(uint)bVar13 * -2 + 0x18];
      afStack_370[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
      FUN_00408d70(param_1);
      uVar16 = 0x4140000041000000;
      afStack_314[0] = (float)uStack_374;
      afStack_334[(uint)bVar13 * -2 + 9] = afStack_370[(uint)bVar13 * -2];
      afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
           afStack_370[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      fStack_14 = (float)FUN_0040cf60(uVar16);
      fVar15 = (float10)fStack_14 * (float10)_DAT_005d913f;
      FUN_005b7ff0();
      iStack_80 = (int)ROUND(fVar15);
      FUN_004c9850(0x01CB8284,afStack_334 + 8,0,iStack_80);
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))();
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      FUN_00544f00();
      FUN_005469a0(iStack_18);
      afStack_334[2] = (float)uStack_308;
      afStack_334[(uint)bVar13 * -2 + 3] = afStack_334[(uint)bVar13 * -2 + 0xc];
      afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      FUN_00408d70(param_1);
      uVar16 = 0x4140000041000000;
      uStack_338 = uStack_2fc;
      afStack_334[(uint)bVar13 * -2] = afStack_334[(uint)bVar13 * -2 + 0xf];
      afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
      fStack_14 = (float)FUN_0040cf60(uVar16);
      fVar15 = (float10)fStack_14 * (float10)_DAT_005d913f;
      FUN_005b7ff0();
      iStack_98 = (int)ROUND(fVar15);
      FUN_004c9850(0x01CB8284,&uStack_338,0,iStack_98);
      iVar4 = FUN_0040d060();
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
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))();
    }
    goto switchD_004c2644_caseD_e;
  }
  fStack_14 = (float)FUN_005038a0(iStack_18,1);
  dStack_a0 = (double)param_2;
  *(float *)(param_1 + 0x2594) =
       fStack_14 * (float)_DAT_005d90e7 * param_2 * *(float *)(param_1 + 0x10a60);
  FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
  iVar4 = FUN_005035c0();
  iStack_34 = *(int *)(iVar4 + 0x24);
  if (iStack_34 == 0x11) {
    fVar15 = (float10)_DAT_005d90ef;
    *(float *)(param_1 + 0x2598) = *(float *)(param_1 + 0x2598) * (float)_DAT_005d90f7;
    *(float *)(param_1 + 0x2594) =
         (float)((float10)dStack_a0 * fVar15 * (float10)*(float *)(param_1 + 0x10a60));
  }
  iVar4 = FUN_004287f0(param_1,param_2);
  if (iVar4 == 0) {
    fStack_28 = -1.0;
    iVar4 = param_1 + 0x2b4;
    iVar5 = FUN_005035c0();
    switch(*(uint *)(iVar5 + 0x24)) {
    case 0:
      if (*(float *)(param_1 + 0x10b54) <= 0.0) {
        iVar4 = *(int *)(param_1 + 0x10b58);
        if (iVar4 == 0) {
          iVar4 = FUN_00488970(param_1,param_2);
          if (iVar4 != 0) goto LAB_004c2cc5;
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
          if (*(int *)(param_1 + 0x10a78) != 0) {
            FUN_00503620(param_1 + 0x2b4,1,1);
            iVar4 = FUN_00550b70();
            if ((iVar4 == 0) || (iVar4 = FUN_00550b70(), iVar4 == 0)) {
              uVar6 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                                (param_1,"ghoul-alert-?.wav");
              *(uint *)(param_1 + 0x10b48) = uVar6;
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
          if (SQRT(fStack_94) < (float)_DAT_005d90f7) {
            fVar2 = *(float *)(param_1 + 0x25a8) + param_2;
            *(float *)(param_1 + 0x10b5c) = *(float *)(param_1 + 0x10b5c) - param_2;
            *(float *)(param_1 + 0x25a8) = fVar2;
            if ((float)_DAT_005d9137 < fVar2) {
              *(uint *)(param_1 + 0x25a8) = 0x42c80000;
            }
            if (*(float *)(param_1 + 0x10b5c) < 0.0) {
              *(uint *)(param_1 + 0x10b5c) = 0;
              *(uint *)(param_1 + 0x10b58) = 0;
            }
          }
        }
      }
      else {
        *(float *)(param_1 + 0x10b54) = *(float *)(param_1 + 0x10b54) - param_2;
      }
      break;
    case 1:
    case 0x11:
      if ((*(int *)(param_1 + 0x10b60) != 0) && (iStack_34 == 1)) {
        FUN_00503620(param_1 + 0x2b4,0x11,1);
      }
      if (0.0 < *(float *)(param_1 + 0x10b54)) {
        *(float *)(param_1 + 0x10b54) = *(float *)(param_1 + 0x10b54) - param_2;
        FUN_00503620(param_1 + 0x2b4,0,1);
      }
      else {
        *(uint *)(param_1 + 0x2510) = 0;
        *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
        *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
        uStack_24 = (uint)(*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b20) * 4) != 0);
        if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b28) * 4) != 0) {
          uStack_24 = uStack_24 + 1;
        }
        iVar5 = (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) + 0x114))();
        iVar4 = 0x01CB6900;
        if (iVar5 == 0) {
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
          iVar4 = *(int *)(param_1 + 0x10a78);
          if (iVar4 == 0) {
            iVar4 = FUN_00488970(param_1,param_2);
            if (iVar4 == 0) {
              FUN_00503620(param_1 + 0x2b4,0,1);
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
            if (((*(float *)(param_1 + 0x25a8) < (float)_DAT_005d911f) && (0 < (int)uStack_24)) &&
               (*(int *)(param_1 + 0x10b58) == 0)) {
              FUN_004c1980(param_1,param_2);
            }
            iVar4 = *(int *)(param_1 + 0x10b58);
            if (iVar4 == 0) {
              afStack_17c[0] = 0.0;
              afStack_17c[2] = 0x40200000;
              afStack_17c[1] = 0.0;
              uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))
                                (*(int *)(param_1 + 0x10a78),afStack_2bc + 0x50,0x3f800000,
                                 0x3e32b8c2);
              iVar4 = FUN_00423000(param_1,*(int *)(param_1 + 0x10a78) + 0x20,uVar6);
              if (iVar4 < 0) {
                FUN_00503620(param_1 + 0x2b4,0,1);
              }
              else if (((0 < iVar4) && (0 < (int)uStack_24)) &&
                      ((*(float *)(param_1 + 0x10a74) <= 0.0 &&
                       ((iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xfc))
                                           (), iVar4 == 0 && (*(float *)(param_1 + 0x10b0c) <= 0.0))
                       )))) {
                fStack_48 = SQRT(afStack_34c[1] * afStack_34c[1] +
                                 fStack_350 * fStack_350 + afStack_34c[0] * afStack_34c[0]);
                fStack_30 = 0.0;
                fStack_40 = 0.0;
                fStack_54 = 0.0;
                if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b28) * 4) != 0) {
                  fStack_30 = (1.0 - ABS(fStack_48 - 0x4059999A) / 0x4059999A) *
                              (float)_DAT_005d9127;
                }
                if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b20) * 4) != 0) {
                  fStack_40 = (1.0 - ABS(fStack_48 - 0x40200000) / 0x40200000) *
                              (float)_DAT_005d912f;
                }
                fStack_3c = fStack_48;
                iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xf0))
                                  (*(int *)(param_1 + 0x10a78),param_1,0);
                if (iVar4 != 0) {
                  fStack_54 = (1.0 - ABS(fStack_3c - 0x40200000) / 0x40200000) *
                              (float)_DAT_005d9127;
                }
                fStack_50 = fStack_30 + fStack_40;
                fStack_4c = fStack_50 + fStack_54;
                if (0.0 < fStack_4c) {
                  fStack_44 = (float)FUN_0040cf60(0,fStack_4c);
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
                  FUN_00503620(param_1 + 0x2b4,uVar16);
                  *(uint *)(param_1 + 0x10a74) = 0x3f333333;
                }
              }
            }
            else {
              uVar6 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xcc))
                                (iVar4,&DAT_0265370c,0x40400000,0);
              iVar4 = FUN_00423000(param_1,*(int *)(param_1 + 0x10b58) + 0x20,uVar6);
              if (0 < iVar4) {
                FUN_00503620(param_1 + 0x2b4,0,1);
                fStack_14 = (float)FUN_0040cf60(0x41200000,0x41f00000);
                *(float *)(param_1 + 0x10b5c) = fStack_14;
              }
              if (iVar4 < 0) {
                *(uint *)(param_1 + 0x10b5c) = 0x41f00000;
                *(uint *)(param_1 + 0x10b58) = 0;
              }
              if (iStack_34 == 1) {
                FUN_00503620(param_1 + 0x2b4,0x11,1);
              }
            }
          }
        }
        else {
          if (*(int *)(param_1 + 0x10b08) < 0) {
            cVar12 = *(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b20) * 4) != 0;
            if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b28) * 4) != 0) {
              cVar12 = cVar12 + '\x01';
            }
            if (cVar12 != '\0') {
              if (cVar12 == '\x01') {
                *(uint *)(param_1 + 0x10b08) = 0xe;
                *(uint *)(iVar4 + 0x23c) = 1;
              }
              else {
                iVar4 = FUN_0040d060();
                *(uint *)(param_1 + 0x10b08) = (iVar4 == 0) + 0xd;
                *(uint *)(0x01CB6900 + 0x23c) = 1;
              }
              goto LAB_004c31ac;
            }
            *(uint *)(param_1 + 0x10b08) = 0;
          }
          else {
LAB_004c31ac:
            if (*(int *)(param_1 + 0x10b08) != 0) {
              uStack_38 = 0x40000000;
              if (*(int *)(param_1 + 0x10b08) == 0xe) {
                uStack_38 = 0x40B00000;
              }
              afStack_2cc[2] = (float)uStack_38;
              afStack_2cc[0] = 0.0;
              iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
              afStack_2cc[1] = 0.0;
              uVar6 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xcc))
                                (iVar4,afStack_334 + 0x1a,0x3f000000,0x3db2b8c2);
              FUN_005469a0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b4,0,uVar6);
              pfVar8 = afStack_334 + 0x11;
              afStack_2f0[0] = (float)uStack_1b8;
              afStack_334[(uint)bVar13 * -2 + 0x12] = afStack_2bc[(uint)bVar13 * -2 + 0x42];
              afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
                   afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x43];
              FUN_00408d70(*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),pfVar8);
              pfVar8 = afStack_2bc + 8;
              afStack_29c[0] = (float)uStack_218;
              afStack_2bc[(uint)bVar13 * -2 + 9] = afStack_2bc[(uint)bVar13 * -2 + 0x2a];
              iVar4 = param_1;
              afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
                   afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2b];
              iVar4 = FUN_00423000(iVar4,pfVar8);
              if (((0 < iVar4) &&
                  (iVar4 = (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) +
                                       0x114))(), iVar4 == 2)) &&
                 (FUN_00503620(param_1 + 0x2b4,*(uint *)(param_1 + 0x10b08),1),
                 *(int *)(param_1 + 0x10b08) == 0xd)) {
                iVar4 = *(int *)(param_1 + 0x2b0);
                fStack_14 = (float)FUN_0040cf60(0x3f000000,0x3f99999a);
                (**(code **)(iVar4 + 0x3c))(param_1,"ghoul-scream-!-?.wav",fStack_14);
              }
              break;
            }
          }
          FUN_00503620(param_1 + 0x2b4,0,1);
        }
      }
      break;
    case 2:
      if (*(int *)(param_1 + 0x10a78) == 0) {
LAB_004c2cc5:
        FUN_00503620(param_1 + 0x2b4,1,1);
      }
      else {
        iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xfc))();
        if (iVar5 == 0) {
          fStack_14 = (float)FUN_0040cf60(0x3e4ccccd,0x3f000000);
          *(float *)(param_1 + 0x10a74) = fStack_14;
          if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b28) * 4) != 0) {
            fStack_5c = (float)FUN_00503e60();
            dStack_c0 = (double)fStack_5c;
            fStack_14 = fStack_5c;
            if ((fStack_5c <= (float)_DAT_005d9107) && (fStack_28 = 0x4059999A, 1.0 <= dStack_c0))
            {
              FUN_004222d0();
              fStack_14 = (float)FUN_0040cf60(0x40e00000,0x41700000);
              fStack_438 = fStack_14;
              if (*(int *)(param_1 + 0x10b60) != 0) {
                fStack_438 = fStack_14 * (float)_DAT_005d9107;
              }
              iStack_408 = param_1;
              iStack_404 = param_1;
              FUN_00591530(&DAT_01cb81d4,_DAT_01cb8224 * 0x30 + param_1 + 0x1134,0x3e4ccccd,
                           auStack_43c);
              pfVar8 = afStack_2bc + 0x17;
              afStack_260[0] = (float)uStack_188;
              afStack_2bc[(uint)bVar13 * -2 + 0x18] = afStack_2bc[(uint)bVar13 * -2 + 0x4e];
              afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
                   afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x4f];
              FUN_00408d70(param_1,pfVar8);
              pfVar8 = afStack_130 + 5;
              afStack_11c[0] = (float)uStack_170;
              afStack_130[(uint)bVar13 * -2 + 6] = afStack_16c[(uint)bVar13 * -2];
              iVar4 = param_1;
              afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
                   afStack_16c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
              iVar4 = FUN_00488110(iVar4,pfVar8);
              if (iVar4 != 0) {
                (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"gh-hits?.wav");
              }
            }
          }
        }
        else {
          FUN_00503620(iVar4,1,1);
        }
      }
      break;
    case 10:
      if (((*(int *)(param_1 + 0x10a64) == 0) && (*(int *)(param_1 + 0x10b14) < 1)) &&
         (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_005469a0(iVar4,0);
        pfVar8 = afStack_2bc + 0x47;
        afStack_1a0[0] = (float)uStack_23c;
        afStack_2bc[(uint)bVar13 * -2 + 0x48] = afStack_2bc[(uint)bVar13 * -2 + 0x21];
        afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x49] =
             afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
        FUN_00408d70(param_1,pfVar8);
        uVar17 = ZEXT48(afStack_2bc + 0x2f);
        afStack_200[0] = (float)uStack_158;
        afStack_2bc[(uint)bVar13 * -2 + 0x30] = afStack_16c[(uint)bVar13 * -2 + 6];
        uVar6 = 0x01CB8284;
        afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x31] =
             afStack_16c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
        FUN_004c9ad0(uVar6,uVar17);
        *(uint *)(param_1 + 0x10a64) = 1;
      }
      *(uint *)(param_1 + 0x10b60) = 0;
      if (((0 < *(int *)(param_1 + 0x10b18)) || (0 < *(int *)(param_1 + 0x10b14))) &&
         (iVar4 = *(int *)(param_1 + 0x10b00) - _DAT_01c2a370, *(int *)(param_1 + 0x10b00) = iVar4,
         iVar4 < 1)) {
        if (*(int *)(param_1 + 0x10b14) < 1) {
          *(int *)(param_1 + 0x10b18) = *(int *)(param_1 + 0x10b18) + -1;
        }
        if ((0 < *(int *)(param_1 + 0x10b18)) || (0 < *(int *)(param_1 + 0x10b14))) {
          fStack_14 = (float)FUN_0040cf60(0x3f800000,0x41400000);
          fVar15 = (float10)fStack_14 * (float10)_DAT_005d90ff;
          uVar6 = FUN_005b7ff0(0xf,1);
          *(int *)(param_1 + 0x10b00) = (int)ROUND(fVar15);
          FUN_00503620(uVar6);
        }
      }
      if (0 < *(int *)(param_1 + 0x10b14)) {
        iVar4 = *(int *)(param_1 + 0x10b04);
        if (iVar4 < 1) {
          iVar4 = iVar4 + _DAT_01c2a370;
          iStack_58 = 0;
          *(int *)(param_1 + 0x10b04) = iVar4;
          if (iVar4 < 0) {
            (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
            iVar4 = *(int *)(param_1 + 0x10a78);
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
              fStack_78 = (float)(((int)fStack_7c >> 1) + _DAT_01caf5b4);
              if (fStack_78 < (float)_DAT_005d90ef) goto LAB_004c293b;
            }
            if (iStack_58 == 0) break;
          }
          else {
            *(uint *)(param_1 + 0x10b04) = 0;
          }
LAB_004c293b:
          fStack_20 = *(float *)(param_1 + 0x3444);
          if (fStack_20 < *(float *)(param_1 + 0x3440)) {
            fStack_20 = *(float *)(param_1 + 0x24fc);
          }
          if (fStack_20 < *(float *)(param_1 + 0x3440)) {
            fStack_20 = *(float *)(param_1 + 0x3440) + (float)_DAT_005d910f;
          }
          iVar4 = 0;
          do {
            fStack_90 = (float)iVar4 * _DAT_005d9157 * _DAT_005d915b;
            fStack_14 = (float)iVar4;
            FUN_00537e00();
            FUN_00537e30(0x01E661B8,param_1);
            fVar15 = (float10)fcos((float10)fStack_90);
            fVar14 = (float10)fsin((float10)fStack_90);
            fStack_2c = (float)FUN_00537030(0x01E661B8,*(uint *)(param_1 + 0x20),
                                            *(uint *)(param_1 + 0x28),
                                            (float)(fVar14 * (float10)_DAT_005d915f),
                                            (float)(fVar15 * (float10)_DAT_005d915f),
                                            *(uint *)(param_1 + 0x3434),
                                            *(float *)(param_1 + 0x24) +
                                            *(float *)(param_1 + 0x3440));
            fStack_14 = fStack_2c;
            FUN_00537e00();
            if (fStack_2c < 1.0) break;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 4);
          if (iVar4 < 4) {
            *(uint *)(param_1 + 0x10b04) = 3;
            *(uint *)(param_1 + 0x10a78) = 0;
          }
          else {
            fStack_14 = (float)(*(int *)(param_1 + 0x10b14) + 1);
            fStack_14 = (float)FUN_0040cf60(0x41200000,(float)(int)fStack_14 * (float)_DAT_005d9167)
            ;
            *(float *)(param_1 + 0x25a8) = fStack_14;
            FUN_00503620(param_1 + 0x2b4,0x10,1);
          }
        }
        else {
          iVar4 = iVar4 - _DAT_01c2a370;
          *(int *)(param_1 + 0x10b04) = iVar4;
          if (iVar4 < 1) {
            fStack_14 = (float)FUN_0040cf60(0,0x41f00000);
            fVar15 = -(float10)fStack_14 * (float10)_DAT_005d9117;
            FUN_005b7ff0();
            *(int *)(param_1 + 0x10b04) = (int)ROUND(fVar15);
          }
        }
      }
      break;
    case 0xb:
      if (*(int *)(param_1 + 0x10a78) == 0) {
LAB_004c3569:
        FUN_00503620(iVar4,1,1);
      }
      else {
        iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xfc))();
        if (iVar5 == 0) {
          fStack_28 = 0x40200000;
        }
        else {
          iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xfc))();
          if (iVar5 != param_1) {
            FUN_00503620(iVar4,1,1);
          }
        }
      }
      break;
    case 0xc:
      if ((*(int *)(param_1 + 0x10a78) == 0) ||
         (iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xfc))(), iVar5 != 0)
         ) goto LAB_004c3569;
      fStack_14 = (float)FUN_0040cf60(0x3e4ccccd,0x3f000000);
      *(float *)(param_1 + 0x10a74) = fStack_14;
      if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b20) * 4) != 0) {
        fStack_60 = (float)FUN_00503e60();
        dStack_a8 = (double)fStack_60;
        fStack_14 = fStack_60;
        if (fStack_60 <= (float)_DAT_005d9107) {
          fStack_28 = 0x40200000;
          if (1.0 <= dStack_a8) {
            FUN_004222d0();
            fStack_14 = (float)FUN_0040cf60(0x40e00000,0x41700000);
            fStack_474 = fStack_14;
            if (*(int *)(param_1 + 0x10b60) != 0) {
              fStack_474 = fStack_14 * (float)_DAT_005d9107;
            }
            iStack_444 = param_1;
            iStack_440 = param_1;
            FUN_00591530(&DAT_01cb81c8,param_1 + 0x1134 + _DAT_01cb8220 * 0x30,0x3ecccccd,
                         auStack_478);
            pfVar8 = afStack_2bc + 0xb;
            afStack_290[0] = (float)uStack_248;
            afStack_2bc[(uint)bVar13 * -2 + 0xc] = afStack_2bc[(uint)bVar13 * -2 + 0x1e];
            afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
                 afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f];
            FUN_00408d70(param_1,pfVar8);
            pfVar8 = afStack_2bc + 0xe;
            afStack_284[0] = (float)uStack_f8;
            afStack_2bc[(uint)bVar13 * -2 + 0xf] = afStack_130[(uint)bVar13 * -2 + 0xf];
            iVar4 = param_1;
            afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
                 afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
            iVar4 = FUN_00488110(iVar4,pfVar8);
            if (iVar4 != 0) {
              (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"gh-hits?.wav");
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar4 = *(int *)(param_1 + 0x10afc) - _DAT_01c2a370;
      *(int *)(param_1 + 0x10afc) = iVar4;
      if (iVar4 < 1) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"burp[1,2].wav");
        fStack_14 = (float)FUN_0040cf60(0x41700000,0x41f00000);
        fVar15 = (float10)fStack_14 * (float10)_DAT_005d90ff;
        FUN_005b7ff0();
        *(int *)(param_1 + 0x10afc) = (int)ROUND(fVar15);
      }
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      if (*(int *)(param_1 + 0x10a78) != 0) {
        FUN_00503620(param_1 + 0x2b4,0,1);
      }
    }
    if (((0.0 <= fStack_28) && (*(float *)(param_1 + 0x10b0c) <= 0.0)) &&
       (*(int *)(param_1 + 0x10a78) != 0)) {
      afStack_35c[0] = 0.0;
      afStack_35c[2] = fStack_28;
      afStack_35c[1] = 0.0;
      uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))
                        (*(int *)(param_1 + 0x10a78),afStack_370 + 5,0x40400000,0x3f060a92);
      FUN_005469a0(*(int *)(param_1 + 0x10a78) + 0x2b4,0,uVar6);
      afStack_26c[0] = (float)uStack_320;
      afStack_2bc[(uint)bVar13 * -2 + 0x15] = afStack_334[(uint)bVar13 * -2 + 6];
      afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
           afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
      FUN_00408d70(*(uint *)(param_1 + 0x10a78),afStack_2bc + 0x14);
      puVar7 = &uStack_2c0;
      uStack_2c0 = uStack_194;
      afStack_2bc[(uint)bVar13 * -2] = afStack_2bc[(uint)bVar13 * -2 + 0x4b];
      iVar4 = param_1;
      afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x4c];
      iVar4 = FUN_00423000(iVar4,puVar7);
      if (iVar4 != 1) {
        FUN_00503620(param_1 + 0x2b4,1,1);
        *(uint *)(param_1 + 0x2578) = 0;
      }
    }
    goto LAB_004c1d09;
  }
  uVar1 = *(uint *)(param_1 + 0x27ac);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
      uVar16 = 0x100000001;
    }
    else {
LAB_004c2686:
      uVar16 = 0x100000000;
    }
LAB_004c1ce2:
    FUN_00503620(param_1 + 0x2b4,uVar16);
  }
  else {
    if (uVar1 < 3) {
      uVar16 = 0x100000011;
      goto LAB_004c1ce2;
    }
    if (uVar1 != 3) goto LAB_004c2686;
    FUN_00503620(param_1 + 0x2b4,0,1);
    FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
LAB_004c1d09:
  if (0.0 < *(float *)(param_1 + 0x10a74)) {
    *(float *)(param_1 + 0x10a74) = *(float *)(param_1 + 0x10a74) - param_2;
  }
  FUN_00424470();
  iVar4 = FUN_00424430();
  if (iVar4 != 0) {
    if ((*(int *)(param_1 + 0x10a78) != 0) &&
       (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xfc))(),
       iVar4 == param_1)) {
      FUN_00537e30(0x01E661B8,*(uint *)(param_1 + 0x10a78));
    }
    FUN_00423a10(param_1,param_2);
    fStack_134 = *(float *)(param_1 + 0x2588) * param_2;
    afStack_130[0] = *(float *)(param_1 + 0x258c) * param_2;
    afStack_130[1] = *(float *)(param_1 + 0x2590) * param_2;
    fStack_1dc = fStack_134;
    afStack_2bc[(uint)bVar13 * -2 + 0x39] = afStack_130[(uint)bVar13 * -2];
    afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x3a] =
         afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    fStack_1d0 = fStack_1dc + *(float *)(param_1 + 0x257c);
    fStack_1cc = fStack_1d8 + *(float *)(param_1 + 0x2580);
    fStack_1c8 = fStack_1d4 + *(float *)(param_1 + 0x2584);
    fStack_ec = fStack_1d0;
    afStack_130[(uint)bVar13 * -2 + 0x12] = afStack_2bc[(uint)bVar13 * -2 + 0x3c];
    afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
         afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x3d];
    fStack_1c4 = fStack_ec + *(float *)(param_1 + 0x2508);
    fStack_1c0 = fStack_e8 + *(float *)(param_1 + 0x250c);
    fStack_1bc = fStack_e4 + *(float *)(param_1 + 0x2510);
    afStack_230[0] = fStack_1c4;
    afStack_2bc[(uint)bVar13 * -2 + 0x24] = afStack_2bc[(uint)bVar13 * -2 + 0x3f];
    afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25] =
         afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x40];
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    *(uint *)(param_1 + 0x2510) = 0;
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x2510);
    FUN_00423a60(param_1,afStack_2bc + 0x23);
  }
  FUN_00544f00();
  dStack_b8 = (double)*(float *)(param_1 + 0x10b0c);
  if (0.0 < dStack_b8) {
    fStack_6c = (float)FUN_00503f50(param_1 + 0x2b4,*(uint *)(param_1 + 0x10b10),
                                    1.0 - *(float *)(param_1 + 0x10b0c));
    fVar2 = 1.0 - *(float *)(param_1 + 0x10b0c);
    fStack_68 = 1.0 - fVar2 * fVar2 * fVar2;
    fStack_14 = fStack_6c;
    FUN_00545a60(param_1 + 0x2b4,*(uint *)(param_1 + 0x10b10),fStack_6c,fStack_68,
                 _DAT_01cb8240,&LAB_00544cc0);
    fVar2 = *(float *)(param_1 + 0x10b0c) - param_2 / _DAT_005f78cc;
    *(float *)(param_1 + 0x10b0c) = fVar2;
    if (fVar2 < 0.0) {
      *(uint *)(param_1 + 0x10b0c) = 0;
    }
  }
  FUN_00429e90(param_1,param_2);
  if (((float)_DAT_005d916f < ABS(*(float *)(param_1 + 0x2578))) ||
     ((float)_DAT_005d916f <
      SQRT(*(float *)(param_1 + 0x2584) * *(float *)(param_1 + 0x2584) +
           *(float *)(param_1 + 0x257c) * *(float *)(param_1 + 0x257c) +
           *(float *)(param_1 + 0x2580) * *(float *)(param_1 + 0x2580)))) {
    iVar4 = FUN_0055af70(0x0264B290,*(uint *)(param_1 + 0x10af8));
    if (iVar4 == 0) {
      FUN_005b7790(auStack_4dc,"ghoul-walk-?.wav *%f",(double)*(float *)(param_1 + 0x10a60));
      uVar6 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x38))(param_1,auStack_4dc);
      *(uint *)(param_1 + 0x10af8) = uVar6;
    }
  }
  else {
    FUN_0055af80(0x0264B290,*(uint *)(param_1 + 0x10af8));
  }
  if (*(int *)(param_1 + 0x10a64) == 0) {
    iVar4 = *(int *)(param_1 + 0x10b40);
    if (*(int *)(param_1 + 0x23f4 + iVar4 * 4) == 0) {
      uVar16 = CONCAT44(0x3f000000,_DAT_01cb8244);
    }
    else {
      FUN_00427060(param_1,*(uint *)(param_1 + 0x10b1c),_DAT_01cb8230,0x3e4ccccd);
      if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b1c) * 4) != 0) {
        FUN_00427060(param_1,*(uint *)(param_1 + 0x10b20),_DAT_01cb8228,0x3e4ccccd);
      }
      FUN_00427060(param_1,*(uint *)(param_1 + 0x10b24),_DAT_01cb8234,0x3e4ccccd);
      if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b24) * 4) != 0) {
        FUN_00427060(param_1,*(uint *)(param_1 + 0x10b28),_DAT_01cb822c,0x3e4ccccd);
      }
      uVar16 = CONCAT44(0x3f333333,_DAT_01cb821c);
      iVar4 = *(int *)(param_1 + 0x10b44);
    }
    FUN_00427130(param_1,iVar4,uVar16);
    FUN_00426f30();
  }
  if ((*(int *)(param_1 + 0x10b58) != 0) && (iStack_34 == 0x11)) {
    fStack_278 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x10b68);
    fStack_274 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x10b6c);
    fStack_270 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x10b70);
    afStack_16c[2] = fStack_278;
    afStack_16c[(uint)bVar13 * -2 + 3] = afStack_2bc[(uint)bVar13 * -2 + 0x12];
    afStack_16c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
    if (param_2 * (float)_DAT_005d910f <=
        SQRT(fStack_15c * fStack_15c + afStack_16c[2] * afStack_16c[2])) {
      *(uint *)(param_1 + 0x10b64) = 0x3f800000;
    }
    else {
      param_2 = *(float *)(param_1 + 0x10b64) - param_2;
      *(float *)(param_1 + 0x10b64) = param_2;
      if (param_2 < 0.0) {
        *(uint *)(param_1 + 0x10b5c) = 0x41f00000;
        *(uint *)(param_1 + 0x10b58) = 0;
        *(uint *)(param_1 + 0x10b60) = 0;
      }
    }
  }
  if ((uint *)(param_1 + 0x10b68) == (uint *)(param_1 + 0x20)) {
    return;
  }
  *(uint *)(param_1 + 0x10b68) = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x10b6c) = *(uint *)(param_1 + 0x24);
  *(uint *)(param_1 + 0x10b70) = *(uint *)(param_1 + 0x28);
  return;
}
