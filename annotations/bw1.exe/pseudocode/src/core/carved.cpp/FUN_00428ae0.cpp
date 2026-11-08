// Name: FUN_00428ae0
// Address: 00428ae0
// Address Range: [[00428ae0, 0042a4ed]]
// Convention: unknown
// Signature: void FUN_00428ae0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428ae0(int param_1,float param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  char *pcVar8;
  char *pcVar9;
  float *pfVar10;
  byte bVar11;
  float10 fVar12;
  float afStackY_1354 [923];
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  byte auStack_4d0 [4];
  float fStack_4cc;
  int iStack_49c;
  int iStack_498;
  byte auStack_494 [4];
  uint uStack_490;
  int iStack_460;
  int iStack_45c;
  char acStack_458 [32];
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float afStack_3fc [3];
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float afStack_3e4 [3];
  float afStack_3d8 [6];
  float afStack_3c0 [6];
  float afStack_3a8 [6];
  float afStack_390 [6];
  uint uStack_378;
  uint uStack_374;
  float fStack_370;
  float fStack_36c;
  float afStack_368 [4];
  float fStack_358;
  float fStack_354;
  float afStack_348 [3];
  uint uStack_33c;
  float afStack_338 [5];
  float afStack_324 [3];
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  uint uStack_2f4;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float afStack_2dc [3];
  float afStack_2d0 [2];
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float afStack_2a0 [3];
  float fStack_294;
  float afStack_288 [4];
  float afStack_278 [5];
  float fStack_264;
  float afStack_258 [3];
  float afStack_24c [3];
  uint uStack_240;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
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
  uint uStack_1e0;
  uint uStack_1d4;
  float afStack_1c8 [3];
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float afStack_1ac [4];
  float fStack_19c;
  uint uStack_198;
  float afStack_18c [3];
  float fStack_180;
  float afStack_17c [6];
  float afStack_164 [5];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  uint uStack_144;
  uint uStack_138;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float afStack_f0 [3];
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  float fStack_88;
  double dStack_84;
  double dStack_7c;
  int iStack_6c;
  int iStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  int iStack_54;
  float fStack_50;
  int iStack_4c;
  int iStack_48;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  float fStack_38;
  uint uStack_34;
  int iStack_30;
  float fStack_2c;
  float *pfStack_28;
  int iStack_24;
  float *pfStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar11 = 0;
  iVar4 = FUN_0042e1a0(param_1,param_2);
  if (iVar4 == 0) {
    FUN_00573a80(*(uint *)(param_1 + 0xc2e0));
    return;
  }
  if ((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2cc) * 4) == 0) &&
     (iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1), iVar4 == 0)) {
    iVar4 = FUN_0040cc60(0,2,1);
    FUN_005247c0(param_1 + 0x158,iVar4 + 0x13);
  }
  iStack_68 = *(int *)(param_1 + 0x26fc);
  if (iStack_68 != 0) {
    fStack_14 = *(float *)(iStack_68 + 0x154);
    FUN_00569130(param_1 + 0x158,0);
    pfVar7 = afStack_278 + 0x2c;
    afStack_1c8[0] = (float)uStack_198;
    afStack_278[(uint)bVar11 * -2 + 0x2d] = afStack_1ac[(uint)bVar11 * -2 + 6];
    afStack_278[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2e] =
         afStack_1ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    iVar4 = (**(code **)((int)fStack_14 + 0x110))(iStack_68,param_1,pfVar7);
    if (iVar4 != 0) {
      return;
    }
    *(uint *)(param_1 + 0x26fc) = 0;
    return;
  }
  if (0.0 < *(float *)(param_1 + 0xc2d4)) {
    *(float *)(param_1 + 0xc2d4) = *(float *)(param_1 + 0xc2d4) - param_2;
  }
  pfStack_28 = afStack_3e4;
  fStack_60 = param_2 * *(float *)(param_1 + 0xc1d0) * *(float *)(param_1 + 0xc2f0);
  pfStack_20 = afStack_3fc;
  iStack_24 = param_1 + 0x158;
LAB_00428b77:
  if (0.0 < fStack_60) {
    uVar5 = FUN_00524270(iStack_24,&fStack_60);
    if (uVar5 < 0xb) {
      if (uVar5 < 5) {
        if (uVar5 == 2) {
          iVar4 = *(int *)(param_1 + 0xc278);
          if (iVar4 != 0) {
            *(uint *)(param_1 + 0xc278) = 0;
            iVar6 = FUN_0042b290(param_1,*(uint *)(param_1 + 0xc27c));
            if (-1 < iVar6) {
              FUN_004325b0(param_1,iVar6,iVar4,0x3e4ccccd,0);
              FUN_00445430(PTR_DAT_00611100,"%s picked up %s using hand %d\n",param_1,iVar4,iVar6)
              ;
            }
          }
        }
        else {
LAB_00428bb4:
          FUN_00434a80(param_1,uVar5);
        }
        goto LAB_00428b77;
      }
      if (uVar5 < 6) {
        iStack_18 = 1;
        if (*(int *)(param_1 + 0xc1e8) != 0) {
          afStack_348[2] = 0x3FB9999A;
          afStack_348[0] = 0.0;
          afStack_348[1] = 0.0;
          FUN_00408b40(param_1,afStack_368 + 8);
          fStack_2ac = fStack_294;
          afStack_338[(uint)bVar11 * -2 + 0x24] = afStack_338[(uint)bVar11 * -2 + 0x2a];
          afStack_338[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25] =
               afStack_338[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b];
          iVar4 = *(int *)(param_1 + 0xc1e8);
          fStack_1ec = fStack_2ac - *(float *)(iVar4 + 0x20);
          fStack_1e8 = fStack_2a8 - *(float *)(iVar4 + 0x24);
          fStack_1e4 = fStack_2a4 - *(float *)(iVar4 + 0x28);
          fStack_90 = fStack_1ec;
          afStack_164[(uint)bVar11 * -2 + 0x36] = afStack_278[(uint)bVar11 * -2 + 0x24];
          afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x37] =
               afStack_278[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25];
          uStack_8c = 0;
          if (SQRT(fStack_88 * fStack_88 + fStack_90 * fStack_90) <= 1.0) {
            if (iStack_18 != 0) {
              afStack_17c[2] = 0.0;
              afStack_17c[3] = 4.0;
              afStack_17c[4] = 0.0;
              FUN_00408b40(param_1,afStack_17c + 2);
              fStack_a8 = (float)uStack_144;
              afStack_164[(uint)bVar11 * -2 + 0x30] = afStack_164[(uint)bVar11 * -2 + 9];
              afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x31] =
                   afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
              uVar13 = uStack_a4;
              pfVar7 = (float *)(*(int *)(param_1 + 0xc1e8) + 0x24 + (uint)bVar11 * -8);
              afStack_164[2] = *(float *)(*(int *)(param_1 + 0xc1e8) + 0x20);
              afStack_164[(uint)bVar11 * -2 + 3] = *pfVar7;
              afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] = pfVar7[(uint)bVar11 * -2 + 1]
              ;
              afStack_164[3] = (float)uVar13;
              FUN_00559220(0x01E82168);
              FUN_00559250(0x01E82168,param_1);
              FUN_00559250(0x01E82168,*(uint *)(param_1 + 0xc1e8));
              iVar4 = FUN_00557230(0x01E82168,afStack_164 + 0x2f,afStack_164 + 2);
              if (iVar4 != 0) {
                iStack_18 = 0;
              }
              FUN_00559220(0x01E82168);
            }
            if ((iStack_18 == 0) ||
               (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xec))
                                  (*(int *)(param_1 + 0xc1e8),param_1,0), iVar4 != 0)) {
              if (iStack_18 == 0) {
                FUN_0042be20(param_1);
              }
              goto LAB_00428b77;
            }
          }
        }
        FUN_0042be20(param_1);
        goto LAB_00428b77;
      }
      if (uVar5 != 10) {
        FUN_00434a80(param_1,uVar5);
        goto LAB_00428b77;
      }
      if (*(int *)(param_1 + 0xc1e8) != 0) {
        FUN_00569040(iStack_24,*(uint *)(param_1 + 0xc28c));
        puVar15 = &uStack_33c;
        uStack_33c = afStack_338[2];
        afStack_338[(uint)bVar11 * -2] = afStack_338[(uint)bVar11 * -2 + 3];
        afStack_338[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_338[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        FUN_00408b40(param_1,puVar15);
        afStack_2d0[0] = fStack_264;
        afStack_338[(uint)bVar11 * -2 + 0x1b] = afStack_278[(uint)bVar11 * -2 + 6];
        afStack_338[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c] =
             afStack_278[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
        if (*(int *)(param_1 + 0xc2c8) < 0) {
          fVar2 = afStack_2d0[0] - *(float *)(*(int *)(param_1 + 0xc1e8) + 0x20);
          fVar3 = fStack_2c8 - *(float *)(*(int *)(param_1 + 0xc1e8) + 0x28);
          if ((float)_DAT_005d548d < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
            FUN_0042be20(param_1);
            goto LAB_00428b77;
          }
        }
        else {
          iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))
                            (*(int *)(param_1 + 0xc1e8));
          if (iVar4 != param_1) {
            FUN_0042be20(param_1);
            goto LAB_00428b77;
          }
        }
        FUN_0042c010(auStack_4d0);
        fStack_4cc = (float)FUN_0040cc00(0x41700000,0x41c80000);
        iStack_49c = param_1;
        iStack_498 = param_1;
        fStack_14 = fStack_4cc;
        (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0x108))
                  (*(int *)(param_1 + 0xc1e8),auStack_4d0);
        dStack_84 = (double)fStack_4cc;
        if (0.0 < dStack_84) {
          fVar12 = (float10)fStack_4cc * (float10)_DAT_005d54c5 * (float10)_DAT_005d54cd;
          FUN_005c03a0(0);
          iStack_6c = (int)ROUND(fVar12);
          FUN_004e6060(0x01CD0E3C,afStack_338 + 0x1a,0,iStack_6c);
        }
        iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0x10c))
                          (*(int *)(param_1 + 0xc1e8));
        if (0 < iVar4) {
          (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf0))
                    (*(int *)(param_1 + 0xc1e8));
          FUN_0042be20(param_1);
        }
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"ghoul-eat-?.wav");
        goto LAB_00428b77;
      }
      FUN_0042be20(param_1);
    }
    else if (uVar5 < 0xc) {
      iVar4 = FUN_0042b290(param_1,2);
      if (iVar4 < 0) {
        _DAT_01d1d400 = "..\\core\\carved.cpp";
        _DAT_01d1d404 = 0x1de;
        FUN_005030e0(&DAT_005d531f);
      }
      iVar6 = *(int *)(iVar4 * 0x78 + param_1 + 0x25b0);
      if (iVar6 != 0) {
        FUN_00445430(PTR_DAT_00611100,"%s lugging %s\n",param_1,iVar6);
        afStack_288[2] = 17.0;
        afStack_288[0] = 0.0;
        afStack_288[1] = 6.0;
        (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,iVar4,afStack_338 + 0x2c);
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"carved-groan?.wav");
      }
    }
    else if (uVar5 < 0xd) {
      iStack_30 = FUN_0042b290(param_1,3);
      if (iStack_30 < 0) {
        _DAT_01d1d400 = "..\\core\\carved.cpp";
        _DAT_01d1d404 = 0x1f5;
        FUN_005030e0(&DAT_005d5358);
      }
      iStack_1c = param_1 + iStack_30 * 0x78;
      if (*(int *)(iStack_1c + 0x25b0) != 0) {
        FUN_00445430(PTR_DAT_00611100,"%s tossing %s\n",param_1,*(int *)(iStack_1c + 0x25b0));
        fStack_1bc = 0.0;
        fStack_1b8 = 0.0;
        fStack_1b4 = 1.0;
        if (*(int *)(param_1 + 0xc1e8) != 0) {
          (**(code **)(*(int *)(*(int *)(iStack_1c + 0x25b0) + 0x154) + 0x1c))
                    (*(int *)(iStack_1c + 0x25b0));
          pfVar7 = afStack_3a8;
          pfVar10 = &fStack_3f0;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar10 = *pfVar7;
            pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
            pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
          }
          fStack_e4 = fStack_3f0 + *pfStack_28;
          fStack_e0 = fStack_3ec + pfStack_28[1];
          fStack_dc = fStack_3e8 + pfStack_28[2];
          fStack_c0 = fStack_3f0 + *pfStack_28;
          afStack_164[(uint)bVar11 * -2 + 0x2a] = afStack_164[(uint)bVar11 * -2 + 0x21];
          iVar4 = iStack_1c;
          afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b] =
               afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22];
          pfVar7 = afStack_164 + 0x1d;
          fStack_150 = fStack_c0 * _DAT_005d54bd;
          fStack_14c = fStack_bc * _DAT_005d54bd;
          fStack_148 = fStack_b8 * _DAT_005d54bd;
          afStack_f0[0] = fStack_c0 * _DAT_005d54bd;
          afStack_164[(uint)bVar11 * -2 + 0x1e] = afStack_164[(uint)bVar11 * -2 + 6];
          afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
               afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
          FUN_00408b40(*(uint *)(iVar4 + 0x25b0),pfVar7);
          fStack_300 = fStack_fc;
          afStack_338[(uint)bVar11 * -2 + 0xf] = afStack_164[(uint)bVar11 * -2 + 0x1b];
          afStack_338[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
               afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c];
          (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0x1c))
                    (*(int *)(param_1 + 0xc1e8));
          pfVar7 = afStack_3c0;
          pfVar10 = &fStack_408;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar10 = *pfVar7;
            pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
            pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
          }
          fStack_9c = fStack_408 + *pfStack_20;
          fStack_98 = fStack_404 + pfStack_20[1];
          fStack_94 = fStack_400 + pfStack_20[2];
          fStack_2e8 = fStack_408 + *pfStack_20;
          afStack_338[(uint)bVar11 * -2 + 0x15] = afStack_164[(uint)bVar11 * -2 + 0x33];
          afStack_338[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
               afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x34];
          fStack_228 = fStack_2e8 * _DAT_005d54bd;
          fStack_224 = fStack_2e4 * _DAT_005d54bd;
          fStack_220 = fStack_2e0 * _DAT_005d54bd;
          afStack_2a0[0] = fStack_2e8 * _DAT_005d54bd;
          afStack_338[(uint)bVar11 * -2 + 0x27] = afStack_278[(uint)bVar11 * -2 + 0x15];
          afStack_338[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28] =
               afStack_278[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
          FUN_00408b40(*(uint *)(param_1 + 0xc1e8),afStack_338 + 0x26);
          fStack_108 = fStack_30c;
          afStack_164[(uint)bVar11 * -2 + 0x18] = afStack_338[(uint)bVar11 * -2 + 0xc];
          afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
               afStack_338[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
          fStack_2c4 = fStack_108 - fStack_300;
          fStack_2c0 = fStack_104 - fStack_2fc;
          fStack_2bc = fStack_100 - fStack_2f8;
          afStack_17c[5] = fStack_108 - fStack_300;
          afStack_164[(uint)bVar11 * -2] = afStack_338[(uint)bVar11 * -2 + 0x1e];
          afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_338[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f];
          fStack_2c = SQRT(afStack_164[1] * afStack_164[1] +
                           afStack_17c[5] * afStack_17c[5] + afStack_164[0] * afStack_164[0]);
          if (0.0 < fStack_2c) {
            FUN_00408b00(param_1,afStack_17c + 5);
            fStack_21c = fStack_354;
            afStack_278[(uint)bVar11 * -2 + 0x18] = afStack_368[(uint)bVar11 * -2 + 6];
            afStack_278[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
                 afStack_368[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
            fVar2 = 1.0 / fStack_2c;
            fStack_1f8 = fStack_21c * fVar2;
            fStack_1f4 = fStack_218 * fVar2;
            fStack_1f0 = fStack_214 * fVar2;
            fStack_12c = fStack_21c * fVar2;
            afStack_164[(uint)bVar11 * -2 + 0xf] = afStack_278[(uint)bVar11 * -2 + 0x21];
            afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
                 afStack_278[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22];
            if (afStack_278 + 0x2f != afStack_164 + 0xe) {
              fStack_1bc = fStack_12c;
              fStack_1b8 = fStack_128;
              fStack_1b4 = fStack_124;
            }
          }
        }
        fStack_1bc = fStack_1bc * _DAT_005d54c1;
        fStack_1b4 = fStack_1b4 * _DAT_005d54c1;
        fStack_1b8 = fStack_1b8 * _DAT_005d54c1 + _DAT_005d54d5;
        (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,iStack_30,afStack_278 + 0x2f);
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"carved-groan?.wav");
      }
    }
    else if (uVar5 < 0xe) {
      if (*(int *)(param_1 + 0xc280) != 0) {
        FUN_00478820(*(int *)(param_1 + 0xc280),0x3e99999a);
        (**(code **)(*(int *)(*(int *)(param_1 + 0xc280) + 0x154) + 0x2c))
                  (*(int *)(param_1 + 0xc280),"zombie-bang-door?.wav");
        *(uint *)(param_1 + 0xc280) = 0;
      }
    }
    else {
      if (uVar5 < 0x65) goto LAB_00428bb4;
      if (uVar5 < 0x66) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"fall-?.wav");
      }
      else if (uVar5 == 0x29a) {
        FUN_00569040(iStack_24,*(uint *)(param_1 + 0xc28c));
        pfVar7 = afStack_278 + 0x32;
        fStack_1b0 = (float)uStack_210;
        afStack_1ac[(uint)bVar11 * -2] = afStack_278[(uint)bVar11 * -2 + 0x1b];
        afStack_1ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_278[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c];
        FUN_00408b40(param_1,pfVar7);
        uVar16 = 0;
        uVar14 = 3;
        uVar13 = 0;
        afStack_324[0] = (float)uStack_2f4;
        afStack_338[(uint)bVar11 * -2 + 6] = afStack_338[(uint)bVar11 * -2 + 0x12];
        afStack_338[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             afStack_338[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
        FUN_004e6060(0x01CD0E3C,afStack_338 + 5,uVar13,uVar14,uVar16);
        iVar4 = FUN_0040cd00(0x3f000000);
        if (iVar4 == 0) {
          pcVar8 = "ghoul-dig-?.wav";
        }
        else {
          pcVar8 = "ghoul-eat-?.wav";
        }
        pcVar9 = acStack_458;
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,acStack_458);
      }
      else {
        FUN_00434a80(param_1,uVar5);
      }
    }
    goto LAB_00428b77;
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
  if ((((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2c4) * 4) == 0) &&
       (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2bc) * 4) == 0)) ||
      (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2d0) * 4) == 0)) &&
     ((0.0 <= *(float *)(param_1 + 0xc2d8) &&
      (fVar2 = *(float *)(param_1 + 0xc2d8) + param_2, *(float *)(param_1 + 0xc2d8) = fVar2,
      (float)_DAT_005d5485 <= fVar2)))) {
    FUN_0042c010(auStack_494);
    uStack_490 = 0x461c3f9a;
    iStack_460 = param_1;
    iStack_45c = param_1;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x108))(param_1,auStack_494);
    *(uint *)(param_1 + 0xc2d8) = 0xbf800000;
  }
  iVar4 = param_1 + 0x158;
  FUN_00524770(iVar4);
  iStack_54 = 0;
  iVar6 = FUN_00432240(param_1,param_2);
  if (iVar6 != 0) {
    uVar5 = *(uint *)(param_1 + 0x273c);
    if (uVar5 < 2) {
      if (uVar5 != 1) {
LAB_00429a81:
        uVar13 = FUN_0040cc60(0,2,1);
        FUN_005247c0(param_1 + 0x158,uVar13);
        goto LAB_004296f2;
      }
    }
    else if (2 < uVar5) {
      if (uVar5 == 3) {
        FUN_005247c0(param_1 + 0x158,0,1);
        FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
        goto LAB_004296f2;
      }
      goto LAB_00429a81;
    }
    FUN_0042be20(param_1);
    goto LAB_004296f2;
  }
  fStack_38 = -1.0;
  fStack_58 = 0.3;
  iVar6 = FUN_00524770(iVar4);
  switch(*(uint *)(iVar6 + 0x24)) {
  case 0:
  case 1:
  case 2:
    iVar4 = FUN_0040cd00(param_2 * (float)_DAT_005d54b5);
    if (iVar4 == 0) {
      iVar4 = FUN_004a0fe0(param_1,param_2);
      if (iVar4 != 0) {
        FUN_0042be20(param_1);
      }
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      if (*(int *)(param_1 + 0xc1e8) == 0) {
        iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
        if (iVar4 == 0) break;
        *(uint *)(0x01CCF390 + 0x23c) = 1;
        *(uint *)(param_1 + 0xc1e8) = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      }
      if (*(int *)(param_1 + 0xc1e8) != 0) {
        FUN_0042be20(param_1);
        iVar4 = FUN_005735a0(*(uint *)(param_1 + 0xc2e0));
        if (iVar4 == 0) {
          uVar13 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                             (param_1,"carved-groan?.wav");
          *(uint *)(param_1 + 0xc2e0) = uVar13;
        }
      }
    }
    else {
      uVar13 = FUN_0040cc60(0,2,1);
      FUN_005247c0(param_1 + 0x158,uVar13);
    }
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    *(float *)(param_1 + 0xc2ec) = *(float *)(param_1 + 0xc2ec) - param_2;
    if ((*(float *)(param_1 + 0xc2ec) <= 0.0) &&
       (iVar4 = FUN_005735a0(*(uint *)(param_1 + 0xc2e0)), iVar4 == 0)) {
      fStack_14 = (float)FUN_0040cc00(0x40400000,0x40c00000);
      *(float *)(param_1 + 0xc2ec) = fStack_14;
      uVar13 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"carved-groan?.wav");
      *(uint *)(param_1 + 0xc2e0) = uVar13;
    }
    iVar4 = *(int *)(param_1 + 0xc1e8);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
    if ((*(int *)(param_1 + 0xc1e8) == 0) &&
       (iVar6 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),
       iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(iVar6), iVar6 != 0)) {
      *(uint *)(0x01CCF390 + 0x23c) = 1;
      *(uint *)(param_1 + 0xc1e8) = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    }
    if (*(int *)(param_1 + 0xc1e8) == 0) {
      iVar4 = FUN_004a0fe0(param_1,param_2);
      if (iVar4 == 0) {
        uVar13 = FUN_0040cc60(0,2,1);
        FUN_005247c0(param_1 + 0x158,uVar13);
      }
    }
    else if (iVar4 == 0) {
      iVar4 = FUN_005735a0(*(uint *)(param_1 + 0xc2e0));
      if (iVar4 == 0) {
        uVar13 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                           (param_1,"carved-groan?.wav");
        *(uint *)(param_1 + 0xc2e0) = uVar13;
      }
      FUN_0042be20(param_1);
    }
    else {
      iVar4 = FUN_0040cc60(0,0x32);
      if (iVar4 == 1) {
        FUN_0042be20(param_1);
      }
      uStack_34 = (uint)(*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2bc) * 4) != 0);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2c4) * 4) != 0) {
        uStack_34 = uStack_34 + 1;
      }
      iVar4 = FUN_0042a930(param_1,param_2);
      if (iVar4 == 0) {
        fStack_40 = 0x3FB9999A;
        iStack_4c = FUN_0042b290(param_1,1);
        if (((-1 < iStack_4c) && (iVar4 = *(int *)(iStack_4c * 0x78 + param_1 + 0x25b0), iVar4 != 0)
            ) && (*(int *)(param_1 + 0xc27c) == 1)) {
          fStack_50 = 1.0;
          if (iVar4 != 0) {
            (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
            pfVar7 = afStack_3d8;
            pfVar10 = &fStack_420;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *pfVar10 = *pfVar7;
              pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
              pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
            }
            FUN_0040cfe0(afStack_338 + 8);
            fStack_318 = fStack_414 - fStack_420;
            fStack_314 = fStack_410 - fStack_41c;
            fStack_310 = fStack_40c - fStack_418;
            fStack_2b8 = fStack_414 - fStack_420;
            afStack_338[(uint)bVar11 * -2 + 0x21] = afStack_338[(uint)bVar11 * -2 + 9];
            afStack_338[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22] =
                 afStack_338[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
            fStack_50 = fStack_2b0 * (float)_DAT_005d5495 + 1.0;
          }
          fStack_40 = fStack_50;
        }
        afStack_18c[0] = 0.0;
        afStack_18c[2] = fStack_40;
        afStack_18c[1] = 0.0;
        uVar13 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                           (*(int *)(param_1 + 0xc1e8),afStack_1ac + 8,0x3f666666,0x3f32b8c2);
        iVar4 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar13);
        iStack_3c = param_1 + 0x158;
        if (iVar4 < 0) {
          FUN_00445430(PTR_DAT_00611100,"%s gave up chase - I'm confused\n",param_1);
          uVar13 = FUN_0040cc60(0,2,1);
          FUN_005247c0(iStack_3c,uVar13);
        }
        else if (iVar4 < 1) {
          iStack_48 = FUN_0042b290(param_1,*(uint *)(param_1 + 0xc27c));
          iVar4 = *(int *)(param_1 + 0xc1e8);
          fStack_d8 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
          fStack_d4 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
          fStack_d0 = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
          fStack_120 = fStack_d8;
          afStack_164[(uint)bVar11 * -2 + 0x12] = afStack_164[(uint)bVar11 * -2 + 0x24];
          afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
               afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25];
          if (SQRT(fStack_118 * fStack_118 + fStack_120 * fStack_120 + fStack_11c * fStack_11c) <
              (float)_DAT_005d54a5) {
            FUN_00408bb0(param_1,iVar4 + 0x20);
            afStack_288[3] = (float)uStack_1e0;
            afStack_278[(uint)bVar11 * -2] = afStack_278[(uint)bVar11 * -2 + 0x27];
            afStack_278[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 afStack_278[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28];
            FUN_005a7520(afStack_338 + 0x2f);
            afStack_278[2] = (float)uStack_1d4;
            afStack_278[(uint)bVar11 * -2 + 3] = afStack_278[(uint)bVar11 * -2 + 0x2a];
            afStack_278[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                 afStack_278[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b];
            if ((((ABS(afStack_278[3]) < (float)_DAT_005d54ad) && (-1 < iStack_48)) &&
                ((uVar5 = *(uint *)(param_1 + 0xc27c), 1 < uVar5 && ((2 < uVar5 && (uVar5 == 3))))))
               && (*(int *)(param_1 + 0x25b0 + iStack_48 * 0x78) != 0)) {
              FUN_00445430(PTR_DAT_00611100,"%s tossing\n",param_1);
              FUN_005247c0(iStack_3c,0x1a,1);
            }
          }
        }
        else if (((0 < (int)uStack_34) && (*(float *)(param_1 + 0xc1e4) <= 0.0)) &&
                (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))
                                   (*(int *)(param_1 + 0xc1e8)), iVar4 == 0)) {
          iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0x10c))
                            (*(int *)(param_1 + 0xc1e8));
          if (iVar4 == 0) {
            if ((iStack_4c < 0) || (*(int *)(param_1 + 0x25b0 + iStack_4c * 0x78) == 0)) {
              uVar13 = 0xc;
              iVar4 = param_1 + 0x158;
            }
            else {
              uVar13 = 0xb;
              iVar4 = iStack_3c;
            }
            FUN_005247c0(iVar4,uVar13,1);
          }
          *(uint *)(param_1 + 0xc1e4) = 0x3f4ccccd;
        }
      }
    }
    break;
  case 0xb:
    if (*(int *)(param_1 + 0xc1e8) == 0) goto LAB_0042a30b;
    iVar4 = FUN_0042b290(param_1,1);
    if ((((iVar4 < 0) ||
         (iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0x10c))
                            (*(int *)(param_1 + 0xc1e8)), 0 < iVar6)) ||
        (iVar4 = param_1 + iVar4 * 0x78, *(int *)(iVar4 + 0x25b0) == 0)) ||
       (iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))
                          (*(int *)(param_1 + 0xc1e8)), iVar6 != 0)) {
      FUN_00445430(PTR_DAT_00611100,"%s gave up swing\n",param_1);
      FUN_0042be20(param_1);
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x25b0);
      fStack_44 = 1.0;
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
        pfVar7 = afStack_390;
        pfVar10 = &fStack_438;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar10 = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
          pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
        }
        FUN_0040cfe0(afStack_368 + 2);
        afStack_368[2] = fStack_42c - fStack_438;
        afStack_368[3] = fStack_428 - fStack_434;
        fStack_358 = fStack_424 - fStack_430;
        fStack_cc = fStack_42c - fStack_438;
        afStack_164[(uint)bVar11 * -2 + 0x27] = afStack_368[(uint)bVar11 * -2 + 3];
        afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28] =
             afStack_368[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        fStack_44 = fStack_c4 * (float)_DAT_005d5495 + 1.0;
      }
      fStack_38 = fStack_44;
      fStack_5c = (float)FUN_00525020(param_1 + 0x158);
      dStack_7c = (double)fStack_5c;
      fStack_14 = fStack_5c;
      if ((1.0 <= dStack_7c) && (dStack_7c <= _DAT_005d549d)) {
        iStack_54 = 1;
      }
    }
    break;
  case 0xc:
    iVar4 = *(int *)(param_1 + 0xc1e8);
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), iVar4 < 1))
    {
      iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))
                        (*(int *)(param_1 + 0xc1e8));
      if (iVar4 == 0) {
        fStack_58 = 3.0;
        fStack_38 = 0x3FB9999A;
      }
      else if (iVar4 != param_1) {
        FUN_0042be20(param_1);
      }
      iVar4 = *(int *)(param_1 + 0xc1e8);
      fStack_234 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
      fStack_230 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
      fStack_22c = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
      fStack_36c = fStack_234;
      afStack_368[(uint)bVar11 * -2] = afStack_278[(uint)bVar11 * -2 + 0x12];
      afStack_368[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           afStack_278[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
      if (SQRT(afStack_368[1] * afStack_368[1] +
               fStack_36c * fStack_36c + afStack_368[0] * afStack_368[0]) <= (float)_DAT_005d548d)
      break;
    }
LAB_0042a30b:
    FUN_0042be20(param_1);
    break;
  case 0x16:
    if ((*(int *)(param_1 + 0xc1d4) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
      FUN_00569040(iVar4,0);
      pfVar7 = afStack_278 + 0xb;
      afStack_24c[0] = (float)uStack_240;
      afStack_278[(uint)bVar11 * -2 + 0xc] = afStack_278[(uint)bVar11 * -2 + 0xf];
      afStack_278[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
           afStack_278[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
      FUN_00408b40(param_1,pfVar7);
      uVar14 = 0;
      pfVar7 = afStack_278 + 8;
      afStack_258[0] = (float)uStack_138;
      afStack_278[(uint)bVar11 * -2 + 9] = afStack_164[(uint)bVar11 * -2 + 0xc];
      uVar13 = 0x01CD0E3C;
      afStack_278[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
           afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
      FUN_004e62e0(uVar13,pfVar7,uVar14);
      uVar13 = 0x01C51D80;
      *(uint *)(param_1 + 0xc1d4) = 1;
      FUN_004a1b70(uVar13,"CarvedDead");
    }
  }
  if ((0.0 <= fStack_38) && (*(int *)(param_1 + 0xc1e8) != 0)) {
    *(float *)(param_1 + 0x2524) = fStack_58 * *(float *)(param_1 + 0xc1d0) * param_2;
    FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
    uStack_378 = 0;
    uStack_374 = 0;
    fStack_370 = fStack_38;
    uVar13 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                       (*(int *)(param_1 + 0xc1e8),&uStack_378,0x40400000,0x3f490fdb);
    iVar4 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar13);
    if (iVar4 != 1) {
      FUN_00445430(PTR_DAT_00611100,"%s giving up attack\n",param_1);
      FUN_0042be20(param_1);
      *(uint *)(param_1 + 0x2508) = 0;
    }
  }
LAB_004296f2:
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  iVar4 = FUN_0042e120(param_1);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0xc1e8);
    if ((iVar4 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xf4))(iVar4), iVar4 == param_1)) {
      FUN_00559250(0x01E82168,*(uint *)(param_1 + 0xc1e8));
    }
    FUN_0042d700(param_1,param_2);
    fStack_b4 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_b0 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_ac = *(float *)(param_1 + 0x2520) * param_2;
    fStack_180 = fStack_b4;
    afStack_17c[(uint)bVar11 * -2] = afStack_164[(uint)bVar11 * -2 + 0x2d];
    afStack_17c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2e];
    fStack_114 = fStack_180 + *(float *)(param_1 + 0x250c);
    fStack_110 = afStack_17c[0] + *(float *)(param_1 + 0x2510);
    fStack_10c = afStack_17c[1] + *(float *)(param_1 + 0x2514);
    fStack_204 = fStack_114;
    afStack_278[(uint)bVar11 * -2 + 0x1e] = afStack_164[(uint)bVar11 * -2 + 0x15];
    afStack_278[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
         afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
    afStack_1ac[2] = fStack_204 + *(float *)(param_1 + 0x249c);
    afStack_1ac[3] = fStack_200 + *(float *)(param_1 + 0x24a0);
    fStack_19c = fStack_1fc + *(float *)(param_1 + 0x24a4);
    afStack_2dc[0] = afStack_1ac[2];
    afStack_338[(uint)bVar11 * -2 + 0x18] = afStack_1ac[(uint)bVar11 * -2 + 3];
    afStack_338[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
         afStack_1ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(float *)(param_1 + 0x24a0) = *(float *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a4);
    FUN_0042d750(param_1,afStack_338 + 0x17);
  }
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  FUN_00433e80(param_1,param_2);
  if (*(int *)(param_1 + 0xc1d4) == 0) {
    iVar4 = *(int *)(param_1 + 0xc2cc);
    if (*(int *)(param_1 + 0x2298 + iVar4 * 4) == 0) {
      uVar13 = *(uint *)(param_1 + 0xc2b4);
      uVar14 = 0x3f000000;
    }
    else {
      FUN_00430a90(param_1,*(uint *)(param_1 + 0xc2b8),*(uint *)(param_1 + 0xc2a0),
                   0x3e4ccccd);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2b8) * 4) != 0) {
        FUN_00430a90(param_1,*(uint *)(param_1 + 0xc2bc),*(uint *)(param_1 + 0xc298),
                     0x3e4ccccd);
      }
      FUN_00430a90(param_1,*(uint *)(param_1 + 0xc2c0),*(uint *)(param_1 + 0xc2a4),
                   0x3e4ccccd);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2c0) * 4) != 0) {
        FUN_00430a90(param_1,*(uint *)(param_1 + 0xc2c4),*(uint *)(param_1 + 0xc29c),
                     0x3e4ccccd);
      }
      uVar13 = *(uint *)(param_1 + 0xc28c);
      uVar14 = 0x3f333333;
      iVar4 = *(int *)(param_1 + 0xc2d0);
    }
    FUN_00430b60(param_1,iVar4,uVar13,uVar14);
    FUN_00430960(param_1);
  }
  iVar4 = iStack_54;
  iVar6 = FUN_0042b290(param_1,1);
  if (((iVar4 != 0) && (-1 < iVar6)) &&
     (iVar4 = *(int *)(param_1 + iVar6 * 0x78 + 0x25b0), iVar4 != 0)) {
    (**(code **)(*(int *)(iVar4 + 0x154) + 0x78))(iVar4,2);
    return;
  }
  return;
}
