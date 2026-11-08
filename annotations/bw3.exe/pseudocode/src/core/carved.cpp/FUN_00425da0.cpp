// Name: FUN_00425da0
// Address: 00425da0
// Address Range: [[00425da0, 0042777d]]
// Convention: unknown
// Signature: void FUN_00425da0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425da0(int param_1,float param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  char *pcVar9;
  char *pcVar10;
  float *pfVar11;
  byte bVar12;
  float10 fVar13;
  float afStackY_1354 [923];
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  byte auStack_4d0 [4];
  uint uStack_4cc;
  int iStack_49c;
  int iStack_498;
  byte auStack_494 [4];
  float fStack_490;
  int iStack_460;
  int iStack_45c;
  char acStack_458 [32];
  float afStack_438 [6];
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float afStack_3e4 [3];
  float afStack_3d8 [6];
  float afStack_3c0 [6];
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float afStack_39c [3];
  float afStack_390 [6];
  uint uStack_378;
  uint uStack_374;
  float fStack_370;
  uint uStack_36c;
  float afStack_368 [4];
  float fStack_358;
  float fStack_354;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float afStack_33c [3];
  float fStack_330;
  float afStack_32c [5];
  float afStack_318 [3];
  float afStack_30c [2];
  float fStack_304;
  float fStack_300;
  float fStack_2f4;
  float afStack_2e8 [4];
  float afStack_2d8 [5];
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float afStack_294 [3];
  float fStack_288;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  uint uStack_270;
  uint uStack_264;
  float fStack_260;
  uint uStack_258;
  float afStack_24c [3];
  float afStack_240 [3];
  uint uStack_234;
  float afStack_228 [3];
  float fStack_21c;
  float afStack_218 [4];
  float fStack_208;
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
  float fStack_1d4;
  float fStack_1cc;
  uint uStack_1c8;
  float afStack_1bc [3];
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float afStack_194 [5];
  float afStack_180 [3];
  uint uStack_174;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint uStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  uint uStack_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [4];
  float afStack_f8 [5];
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  uint uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float afStack_a8 [3];
  uint uStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  double dStack_84;
  double dStack_7c;
  int iStack_6c;
  float fStack_68;
  int iStack_64;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  uint uStack_38;
  float fStack_34;
  int iStack_30;
  float fStack_2c;
  float *pfStack_28;
  int iStack_24;
  float *pfStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar12 = 0;
  iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar4 == 0) {
    FUN_00556be0(*(uint *)(param_1 + 0xd0cc));
    return;
  }
  if ((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0b8) * 4) == 0) &&
     (iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1), iVar4 == 0)) {
    iVar4 = FUN_0040cea0(0,2,1);
    FUN_004fc0d0(param_1 + 0x158,iVar4 + 0x13);
  }
  iStack_64 = *(int *)(param_1 + 0x26fc);
  if (iStack_64 != 0) {
    fStack_14 = *(float *)(iStack_64 + 0x154);
    FUN_0054dcc0(param_1 + 0x158,0);
    pfVar8 = afStack_218 + 0x17;
    afStack_1bc[0] = afStack_194[2];
    afStack_218[(uint)bVar12 * -2 + 0x18] = afStack_194[(uint)bVar12 * -2 + 3];
    afStack_218[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19] =
         afStack_194[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
    iVar4 = (**(code **)((int)fStack_14 + 0x110))(iStack_64,param_1,pfVar8);
    if (iVar4 != 0) {
      return;
    }
    *(uint *)(param_1 + 0x26fc) = 0;
    return;
  }
  if (0.0 < *(float *)(param_1 + 0xd0c0)) {
    *(float *)(param_1 + 0xd0c0) = *(float *)(param_1 + 0xd0c0) - param_2;
  }
  pfStack_28 = afStack_39c;
  fStack_68 = param_2 * *(float *)(param_1 + 0xcdcc) * *(float *)(param_1 + 0xd0d8);
  pfStack_20 = afStack_3e4;
  iStack_24 = param_1 + 0x158;
LAB_00425e3e:
  if (0.0 < fStack_68) {
    uVar5 = FUN_004fbb70(iStack_24,&fStack_68);
    if (uVar5 < 0xb) {
      if (uVar5 < 5) {
        if (uVar5 == 2) {
          iVar4 = *(int *)(param_1 + 0xd064);
          if (iVar4 != 0) {
            *(uint *)(param_1 + 0xd064) = 0;
            iVar6 = FUN_00428520(param_1,*(uint *)(param_1 + 0xd068));
            if (-1 < iVar6) {
              FUN_004319d0(param_1,iVar6,iVar4,0x3e4ccccd,0);
              FUN_00441ff0(PTR_DAT_005f1690,"%s picked up %s using hand %d\n",param_1,iVar4,iVar6)
              ;
            }
          }
        }
        else {
LAB_00425e7b:
          FUN_00433fb0(param_1,uVar5);
        }
        goto LAB_00425e3e;
      }
      if (uVar5 < 6) {
        iStack_18 = 1;
        if (*(int *)(param_1 + 0xcde4) != 0) {
          afStack_33c[2] = 0x3FA66666;
          afStack_33c[0] = 0.0;
          afStack_33c[1] = 0.0;
          FUN_00408b80(param_1,afStack_368 + 0xb);
          fStack_2a0 = fStack_288;
          afStack_2d8[(uint)bVar12 * -2 + 0xf] = afStack_2d8[(uint)bVar12 * -2 + 0x15];
          afStack_2d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
               afStack_2d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16];
          iVar4 = *(int *)(param_1 + 0xcde4);
          afStack_368[2] = fStack_2a0 - *(float *)(iVar4 + 0x20);
          afStack_368[3] = fStack_29c - *(float *)(iVar4 + 0x24);
          fStack_358 = fStack_298 - *(float *)(iVar4 + 0x28);
          fStack_d8 = afStack_368[2];
          afStack_f8[(uint)bVar12 * -2 + 9] = afStack_368[(uint)bVar12 * -2 + 3];
          afStack_f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
               afStack_368[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          uStack_d4 = 0;
          if (SQRT(fStack_d0 * fStack_d0 + fStack_d8 * fStack_d8) <= 1.0) {
            if (iStack_18 != 0) {
              afStack_108[0] = 0.0;
              afStack_108[2] = 0.0;
              afStack_108[1] = 4.0;
              FUN_00408b80(param_1,afStack_194 + 0x23);
              fStack_c0 = (float)uStack_174;
              afStack_f8[(uint)bVar12 * -2 + 0xf] = afStack_194[(uint)bVar12 * -2 + 9];
              afStack_f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
                   afStack_194[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
              pfVar8 = (float *)(*(int *)(param_1 + 0xcde4) + 0x24 + (uint)bVar12 * -8);
              fStack_144 = *(float *)(*(int *)(param_1 + 0xcde4) + 0x20);
              afStack_194[(uint)bVar12 * -2 + 0x15] = *pfVar8;
              afStack_194[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16] =
                   pfVar8[(uint)bVar12 * -2 + 1];
              uStack_140 = uStack_bc;
              FUN_0053ebe0(0x01ED78C8);
              FUN_0053ec10(0x01ED78C8,param_1);
              FUN_0053ec10(0x01ED78C8,*(uint *)(param_1 + 0xcde4));
              iVar4 = FUN_0053cbf0(0x01ED78C8,afStack_f8 + 0xe,afStack_194 + 0x14);
              if (iVar4 != 0) {
                iStack_18 = 0;
              }
              FUN_0053ebe0(0x01ED78C8);
            }
            if ((iStack_18 == 0) ||
               (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xec))
                                  (*(int *)(param_1 + 0xcde4),param_1,0), iVar4 != 0)) {
              if (iStack_18 == 0) {
                FUN_00429090(param_1);
              }
              goto LAB_00425e3e;
            }
          }
        }
        FUN_00429090(param_1);
        goto LAB_00425e3e;
      }
      if (uVar5 != 10) {
        FUN_00433fb0(param_1,uVar5);
        goto LAB_00425e3e;
      }
      if (*(int *)(param_1 + 0xcde4) != 0) {
        FUN_0054dbd0(iStack_24,*(uint *)(param_1 + 0xd078));
        puVar16 = &uStack_36c;
        uStack_36c = afStack_32c[2];
        afStack_368[(uint)bVar12 * -2] = afStack_32c[(uint)bVar12 * -2 + 3];
        afStack_368[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
             afStack_32c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
        FUN_00408b80(param_1,puVar16);
        afStack_30c[0] = fStack_354;
        afStack_32c[(uint)bVar12 * -2 + 9] = afStack_368[(uint)bVar12 * -2 + 6];
        afStack_32c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
             afStack_368[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
        if (*(int *)(param_1 + 0xd0b4) < 0) {
          fVar2 = afStack_30c[0] - *(float *)(*(int *)(param_1 + 0xcde4) + 0x20);
          fVar3 = fStack_304 - *(float *)(*(int *)(param_1 + 0xcde4) + 0x28);
          if ((float)_DAT_005b7c87 < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
            FUN_00429090(param_1);
            goto LAB_00425e3e;
          }
        }
        else {
          iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))
                            (*(int *)(param_1 + 0xcde4));
          if (iVar4 != param_1) {
            FUN_00429090(param_1);
            goto LAB_00425e3e;
          }
        }
        FUN_0042abb0(auStack_494);
        fStack_490 = (float)FUN_0040ce40(0x41700000,0x41c80000);
        iStack_460 = param_1;
        iStack_45c = param_1;
        fStack_14 = fStack_490;
        (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0x108))
                  (*(int *)(param_1 + 0xcde4),auStack_494);
        dStack_7c = (double)fStack_490;
        if (0.0 < dStack_7c) {
          fVar13 = (float10)fStack_490 * (float10)_DAT_005b7cbf * (float10)_DAT_005b7cc7;
          FUN_005a3120(0);
          iStack_6c = (int)ROUND(fVar13);
          FUN_004ce9c0(0x01D22E44,afStack_32c + 8,0,iStack_6c);
        }
        iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0x10c))
                          (*(int *)(param_1 + 0xcde4));
        if (0 < iVar4) {
          (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf0))
                    (*(int *)(param_1 + 0xcde4));
          FUN_00429090(param_1);
        }
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"ghoul-eat-?.wav");
        goto LAB_00425e3e;
      }
      FUN_00429090(param_1);
    }
    else if (uVar5 < 0xc) {
      iVar4 = FUN_00428520(param_1,2);
      if (iVar4 < 0) {
        _DAT_01d71de0 = "..\\core\\carved.cpp";
        _DAT_01d71de4 = 0x1e6;
        FUN_004e4330(&DAT_005b7b01);
      }
      iVar6 = *(int *)(iVar4 * 0x78 + param_1 + 0x25b0);
      if (iVar6 != 0) {
        FUN_00441ff0(PTR_DAT_005f1690,"%s lugging %s\n",param_1,iVar6);
        afStack_2e8[0] = 0.0;
        afStack_2e8[1] = 6.0;
        afStack_2e8[2] = 17.0;
        (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,iVar4,afStack_32c + 0x11);
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"demn_taunt__???.wav");
      }
    }
    else if (uVar5 < 0xd) {
      iStack_30 = FUN_00428520(param_1,3);
      if (iStack_30 < 0) {
        _DAT_01d71de0 = "..\\core\\carved.cpp";
        _DAT_01d71de4 = 0x1fd;
        FUN_004e4330(&DAT_005b7b3c);
      }
      iStack_1c = param_1 + iStack_30 * 0x78;
      if (*(int *)(iStack_1c + 0x25b0) != 0) {
        FUN_00441ff0(PTR_DAT_005f1690,"%s tossing %s\n",param_1,*(int *)(iStack_1c + 0x25b0));
        fStack_1a4 = 0.0;
        fStack_1a0 = 0.0;
        fStack_19c = 1.0;
        if (*(int *)(param_1 + 0xcde4) != 0) {
          (**(code **)(*(int *)(*(int *)(iStack_1c + 0x25b0) + 0x154) + 0x1c))
                    (*(int *)(iStack_1c + 0x25b0));
          pfVar8 = afStack_3d8;
          pfVar11 = &fStack_3a8;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar11 = *pfVar8;
            pfVar8 = pfVar8 + (uint)bVar12 * -2 + 1;
            pfVar11 = pfVar11 + (uint)bVar12 * -2 + 1;
          }
          fStack_15c = fStack_3a8 + *pfStack_28;
          fStack_158 = fStack_3a4 + pfStack_28[1];
          fStack_154 = fStack_3a0 + pfStack_28[2];
          fStack_cc = fStack_3a8 + *pfStack_28;
          afStack_f8[(uint)bVar12 * -2 + 0xc] = afStack_194[(uint)bVar12 * -2 + 0xf];
          iVar4 = iStack_1c;
          afStack_f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
               afStack_194[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10];
          pfVar8 = afStack_218 + 0xe;
          fStack_150 = fStack_cc * _DAT_005b7cb7;
          fStack_14c = fStack_c8 * _DAT_005b7cb7;
          fStack_148 = fStack_c4 * _DAT_005b7cb7;
          afStack_1e0[0] = fStack_cc * _DAT_005b7cb7;
          afStack_218[(uint)bVar12 * -2 + 0xf] = afStack_194[(uint)bVar12 * -2 + 0x12];
          afStack_218[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
               afStack_194[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13];
          FUN_00408b80(*(uint *)(iVar4 + 0x25b0),pfVar8);
          afStack_108[3] = afStack_f8[2];
          afStack_f8[(uint)bVar12 * -2] = afStack_f8[(uint)bVar12 * -2 + 3];
          afStack_f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               afStack_f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0x1c))
                    (*(int *)(param_1 + 0xcde4));
          pfVar8 = afStack_390;
          pfVar11 = &fStack_3f0;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar11 = *pfVar8;
            pfVar8 = pfVar8 + (uint)bVar12 * -2 + 1;
            pfVar11 = pfVar11 + (uint)bVar12 * -2 + 1;
          }
          fStack_90 = fStack_3f0 + *pfStack_20;
          fStack_8c = fStack_3ec + pfStack_20[1];
          fStack_88 = fStack_3e8 + pfStack_20[2];
          afStack_2e8[3] = fStack_3f0 + *pfStack_20;
          afStack_2d8[(uint)bVar12 * -2] = afStack_f8[(uint)bVar12 * -2 + 0x1b];
          afStack_2d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               afStack_f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1c];
          fStack_21c = afStack_2e8[3] * _DAT_005b7cb7;
          afStack_218[0] = afStack_2d8[0] * _DAT_005b7cb7;
          afStack_218[1] = afStack_2d8[1] * _DAT_005b7cb7;
          afStack_294[0] = afStack_2e8[3] * _DAT_005b7cb7;
          afStack_2d8[(uint)bVar12 * -2 + 0x12] = afStack_218[(uint)bVar12 * -2];
          afStack_2d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13] =
               afStack_218[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          FUN_00408b80(*(uint *)(param_1 + 0xcde4),afStack_2d8 + 0x11);
          fStack_138 = fStack_300;
          afStack_194[(uint)bVar12 * -2 + 0x18] = afStack_32c[(uint)bVar12 * -2 + 0xc];
          afStack_194[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19] =
               afStack_32c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
          fStack_2b8 = fStack_138 - afStack_108[3];
          fStack_2b4 = fStack_134 - afStack_f8[0];
          fStack_2b0 = fStack_130 - afStack_f8[1];
          fStack_27c = fStack_138 - afStack_108[3];
          afStack_2d8[(uint)bVar12 * -2 + 0x18] = afStack_2d8[(uint)bVar12 * -2 + 9];
          afStack_2d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19] =
               afStack_2d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
          fStack_2c = SQRT(fStack_274 * fStack_274 +
                           fStack_27c * fStack_27c + fStack_278 * fStack_278);
          if (0.0 < fStack_2c) {
            FUN_00408b40(param_1,afStack_2d8 + 0x17);
            afStack_218[2] = fStack_2f4;
            afStack_218[(uint)bVar12 * -2 + 3] = afStack_32c[(uint)bVar12 * -2 + 0xf];
            afStack_218[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
                 afStack_32c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10];
            fVar2 = 1.0 / fStack_2c;
            fStack_1ec = afStack_218[2] * fVar2;
            fStack_1e8 = afStack_218[3] * fVar2;
            fStack_1e4 = fStack_208 * fVar2;
            fStack_120 = afStack_218[2] * fVar2;
            afStack_194[(uint)bVar12 * -2 + 0x1e] = afStack_218[(uint)bVar12 * -2 + 0xc];
            afStack_194[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1f] =
                 afStack_218[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
            if (afStack_218 + 0x1d != afStack_194 + 0x1d) {
              fStack_1a4 = fStack_120;
              fStack_1a0 = fStack_11c;
              fStack_19c = fStack_118;
            }
          }
        }
        fStack_1a4 = fStack_1a4 * _DAT_005b7cbb;
        fStack_19c = fStack_19c * _DAT_005b7cbb;
        fStack_1a0 = fStack_1a0 * _DAT_005b7cbb + _DAT_005b7ccf;
        (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,iStack_30,afStack_218 + 0x1d);
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"demn_taunt__???.wav");
      }
    }
    else if (uVar5 < 0xe) {
      if (*(int *)(param_1 + 0xd06c) != 0) {
        FUN_00465060(*(int *)(param_1 + 0xd06c),0x3e99999a);
        (**(code **)(*(int *)(*(int *)(param_1 + 0xd06c) + 0x154) + 0x2c))
                  (*(int *)(param_1 + 0xd06c),"zombie-bang-door?.wav");
        *(uint *)(param_1 + 0xd06c) = 0;
      }
    }
    else {
      if (uVar5 < 0x65) goto LAB_00425e7b;
      if (uVar5 < 0x66) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"fall-?.wav");
      }
      else if (uVar5 == 0x29a) {
        FUN_0054dbd0(iStack_24,*(uint *)(param_1 + 0xd078));
        pfVar8 = afStack_f8 + 0x14;
        afStack_a8[0] = (float)uStack_9c;
        afStack_f8[(uint)bVar12 * -2 + 0x15] = afStack_f8[(uint)bVar12 * -2 + 0x18];
        afStack_f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16] =
             afStack_f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19];
        FUN_00408b80(param_1,pfVar8);
        uVar17 = 0;
        uVar15 = 3;
        uVar14 = 0;
        pfVar8 = afStack_32c + 5;
        afStack_318[0] = (float)uStack_270;
        afStack_32c[(uint)bVar12 * -2 + 6] = afStack_2d8[(uint)bVar12 * -2 + 0x1b];
        uVar7 = 0x01D22E44;
        afStack_32c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
             afStack_2d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1c];
        FUN_004ce9c0(uVar7,pfVar8,uVar14,uVar15,uVar17);
        iVar4 = FUN_0040cf40(0x3f000000);
        if (iVar4 == 0) {
          pcVar9 = "ghoul-dig-?.wav";
        }
        else {
          pcVar9 = "ghoul-eat-?.wav";
        }
        pcVar10 = acStack_458;
        do {
          cVar1 = *pcVar9;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,acStack_458);
      }
      else {
        FUN_00433fb0(param_1,uVar5);
      }
    }
    goto LAB_00425e3e;
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  if ((((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0b0) * 4) == 0) &&
       (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0a8) * 4) == 0)) ||
      (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0bc) * 4) == 0)) &&
     ((0.0 <= *(float *)(param_1 + 0xd0c4) &&
      (fVar2 = *(float *)(param_1 + 0xd0c4) + param_2, *(float *)(param_1 + 0xd0c4) = fVar2,
      (float)_DAT_005b7c7f <= fVar2)))) {
    FUN_0042abb0(auStack_4d0);
    uStack_4cc = 0x461c3f9a;
    iStack_49c = param_1;
    iStack_498 = param_1;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x108))(param_1,auStack_4d0);
    *(uint *)(param_1 + 0xd0c4) = 0xbf800000;
  }
  iVar4 = param_1 + 0x158;
  FUN_004fc070(iVar4);
  iStack_48 = 0;
  iVar6 = FUN_00431660(param_1,param_2);
  if (iVar6 != 0) {
    uVar5 = *(uint *)(param_1 + 0x273c);
    if (uVar5 < 2) {
      if (uVar5 != 1) {
LAB_00426d3d:
        uVar7 = FUN_0040cea0(0,2,1);
        FUN_004fc0d0(param_1 + 0x158,uVar7);
        goto LAB_004269b6;
      }
    }
    else if (2 < uVar5) {
      if (uVar5 == 3) {
        FUN_004fc0d0(param_1 + 0x158,0,1);
        FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
        goto LAB_004269b6;
      }
      goto LAB_00426d3d;
    }
    FUN_00429090(param_1);
    goto LAB_004269b6;
  }
  fStack_34 = -1.0;
  fStack_40 = 0.3;
  iVar6 = FUN_004fc070(iVar4);
  switch(*(uint *)(iVar6 + 0x24)) {
  case 0:
  case 1:
  case 2:
    iVar4 = FUN_0040cf40(param_2 * (float)_DAT_005b7caf);
    if (iVar4 == 0) {
      iVar4 = FUN_00489ff0(param_1,param_2);
      if (iVar4 != 0) {
        FUN_00429090(param_1);
      }
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      if (*(int *)(param_1 + 0xcde4) == 0) {
        iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
        if (iVar4 == 0) break;
        *(uint *)(0x01D2130C + 0x244) = 1;
        *(uint *)(param_1 + 0xcde4) = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      }
      if (*(int *)(param_1 + 0xcde4) != 0) {
        FUN_00429090(param_1);
        iVar4 = FUN_00556700(*(uint *)(param_1 + 0xd0cc));
        if (iVar4 == 0) {
          if (*(int *)(param_1 + 0xd074) == 0) {
            uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"demn_chase_???.wav");
            *(uint *)(param_1 + 0xd0cc) = uVar7;
          }
          else {
            uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"demn_chase_???.wav");
            *(uint *)(param_1 + 0xd0cc) = uVar7;
          }
        }
      }
    }
    else {
      uVar7 = FUN_0040cea0(0,2,1);
      FUN_004fc0d0(param_1 + 0x158,uVar7);
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
    iVar4 = *(int *)(param_1 + 0xcde4);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
    if ((*(int *)(param_1 + 0xcde4) == 0) &&
       (iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
       iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(iVar6), iVar6 != 0)) {
      *(uint *)(0x01D2130C + 0x244) = 1;
      *(uint *)(param_1 + 0xcde4) = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    }
    if (*(int *)(param_1 + 0xcde4) == 0) {
      iVar4 = FUN_00489ff0(param_1,param_2);
      if (iVar4 == 0) {
        uVar7 = FUN_0040cea0(0,2,1);
        FUN_004fc0d0(param_1 + 0x158,uVar7);
      }
    }
    else if (iVar4 == 0) {
      iVar4 = FUN_00556700(*(uint *)(param_1 + 0xd0cc));
      if (iVar4 == 0) {
        if (*(int *)(param_1 + 0xd074) == 0) {
          pcVar9 = "demn_chase_???.wav";
        }
        else {
          pcVar9 = "demn_chase_???.wav";
        }
        uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,pcVar9);
        *(uint *)(param_1 + 0xd0cc) = uVar7;
      }
      FUN_00429090(param_1);
    }
    else {
      iVar4 = FUN_0040cea0(0,0x32);
      if (iVar4 == 1) {
        FUN_00429090(param_1);
      }
      uStack_38 = (uint)(*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0a8) * 4) != 0);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0b0) * 4) != 0) {
        uStack_38 = uStack_38 + 1;
      }
      iVar4 = FUN_00427bc0(param_1,param_2);
      if (iVar4 == 0) {
        fStack_58 = 0x3FA66666;
        iStack_50 = FUN_00428520(param_1,1);
        if (((-1 < iStack_50) && (iVar4 = *(int *)(iStack_50 * 0x78 + param_1 + 0x25b0), iVar4 != 0)
            ) && (*(int *)(param_1 + 0xd068) == 1)) {
          fStack_54 = 1.0;
          if (iVar4 != 0) {
            (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
            pfVar8 = afStack_438;
            pfVar11 = &fStack_408;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *pfVar11 = *pfVar8;
              pfVar8 = pfVar8 + (uint)bVar12 * -2 + 1;
              pfVar11 = pfVar11 + (uint)bVar12 * -2 + 1;
            }
            FUN_0040d220(afStack_218 + 5);
            fStack_204 = fStack_3fc - fStack_408;
            fStack_200 = fStack_3f8 - fStack_404;
            fStack_1fc = fStack_3f4 - fStack_400;
            fStack_2ac = fStack_3fc - fStack_408;
            afStack_2d8[(uint)bVar12 * -2 + 0xc] = afStack_218[(uint)bVar12 * -2 + 6];
            afStack_2d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
                 afStack_218[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
            fStack_54 = fStack_2a4 * (float)_DAT_005b7c8f + 1.0;
          }
          fStack_58 = fStack_54;
        }
        afStack_228[0] = 0.0;
        afStack_228[2] = fStack_58;
        afStack_228[1] = 0.0;
        uVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0xcde4),afStack_2d8 + 0x2c,0x3f666666,0x3f32b8c2);
        iVar4 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar7);
        iStack_3c = param_1 + 0x158;
        if (iVar4 < 0) {
          FUN_00441ff0(PTR_DAT_005f1690,"%s gave up chase - I'm confused\n",param_1);
          uVar7 = FUN_0040cea0(0,2,1);
          FUN_004fc0d0(iStack_3c,uVar7);
        }
        else if (iVar4 < 1) {
          iStack_4c = FUN_00428520(param_1,*(uint *)(param_1 + 0xd068));
          iVar4 = *(int *)(param_1 + 0xcde4);
          fStack_1b0 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
          fStack_1ac = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
          fStack_1a8 = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
          fStack_114 = fStack_1b0;
          afStack_194[(uint)bVar12 * -2 + 0x21] = afStack_218[(uint)bVar12 * -2 + 0x1b];
          afStack_194[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x22] =
               afStack_218[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1c];
          if (SQRT(fStack_10c * fStack_10c + fStack_114 * fStack_114 + fStack_110 * fStack_110) <
              (float)_DAT_005b7c9f) {
            FUN_00408bf0(param_1,iVar4 + 0x20);
            afStack_180[0] = (float)uStack_258;
            afStack_194[(uint)bVar12 * -2 + 6] = afStack_2d8[(uint)bVar12 * -2 + 0x21];
            afStack_194[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
                 afStack_2d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x22];
            FUN_00576250(afStack_194 + 5);
            uStack_264 = uStack_1c8;
            afStack_2d8[(uint)bVar12 * -2 + 0x1e] = afStack_218[(uint)bVar12 * -2 + 0x15];
            afStack_2d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1f] =
                 afStack_218[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16];
            if ((((ABS(fStack_260) < (float)_DAT_005b7ca7) && (-1 < iStack_4c)) &&
                ((uVar5 = *(uint *)(param_1 + 0xd068), 1 < uVar5 && ((2 < uVar5 && (uVar5 == 3))))))
               && (*(int *)(param_1 + 0x25b0 + iStack_4c * 0x78) != 0)) {
              FUN_00441ff0(PTR_DAT_005f1690,"%s tossing\n",param_1);
              FUN_004fc0d0(iStack_3c,0x1a,1);
            }
          }
        }
        else if (((0 < (int)uStack_38) && (*(float *)(param_1 + 0xcde0) <= 0.0)) &&
                (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))
                                   (*(int *)(param_1 + 0xcde4)), iVar4 == 0)) {
          iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0x10c))
                            (*(int *)(param_1 + 0xcde4));
          if (iVar4 == 0) {
            if ((iStack_50 < 0) || (*(int *)(param_1 + 0x25b0 + iStack_50 * 0x78) == 0)) {
              uVar7 = 0xc;
              iVar4 = param_1 + 0x158;
            }
            else {
              uVar7 = 0xb;
              iVar4 = iStack_3c;
            }
            FUN_004fc0d0(iVar4,uVar7,1);
          }
          *(uint *)(param_1 + 0xcde0) = 0x3f4ccccd;
        }
      }
    }
    break;
  case 0xb:
    if (*(int *)(param_1 + 0xcde4) == 0) goto LAB_00427596;
    iVar4 = FUN_00428520(param_1,1);
    if ((((iVar4 < 0) ||
         (iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0x10c))
                            (*(int *)(param_1 + 0xcde4)), 0 < iVar6)) ||
        (iVar4 = param_1 + iVar4 * 0x78, *(int *)(iVar4 + 0x25b0) == 0)) ||
       (iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))
                          (*(int *)(param_1 + 0xcde4)), iVar6 != 0)) {
      FUN_00441ff0(PTR_DAT_005f1690,"%s gave up swing\n",param_1);
      FUN_00429090(param_1);
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x25b0);
      fStack_44 = 1.0;
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
        pfVar8 = afStack_3c0;
        pfVar11 = &fStack_420;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar11 = *pfVar8;
          pfVar8 = pfVar8 + (uint)bVar12 * -2 + 1;
          pfVar11 = pfVar11 + (uint)bVar12 * -2 + 1;
        }
        FUN_0040d220(afStack_368 + 8);
        fStack_348 = fStack_414 - fStack_420;
        fStack_344 = fStack_410 - fStack_41c;
        fStack_340 = fStack_40c - fStack_418;
        fStack_1d4 = fStack_414 - fStack_420;
        afStack_218[(uint)bVar12 * -2 + 0x12] = afStack_368[(uint)bVar12 * -2 + 9];
        afStack_218[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13] =
             afStack_368[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
        fStack_44 = fStack_1cc * (float)_DAT_005b7c8f + 1.0;
      }
      fStack_34 = fStack_44;
      fStack_5c = (float)FUN_004fc930(param_1 + 0x158);
      dStack_84 = (double)fStack_5c;
      fStack_14 = fStack_5c;
      if ((1.0 <= dStack_84) && (dStack_84 <= _DAT_005b7c97)) {
        iStack_48 = 1;
      }
    }
    break;
  case 0xc:
    iVar4 = *(int *)(param_1 + 0xcde4);
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), iVar4 < 1))
    {
      iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))
                        (*(int *)(param_1 + 0xcde4));
      if (iVar4 == 0) {
        fStack_40 = 3.0;
        fStack_34 = 0x3FA66666;
      }
      else if (iVar4 != param_1) {
        FUN_00429090(param_1);
      }
      iVar4 = *(int *)(param_1 + 0xcde4);
      fStack_330 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
      afStack_32c[0] = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
      afStack_32c[1] = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
      fStack_2c4 = fStack_330;
      afStack_2d8[(uint)bVar12 * -2 + 6] = afStack_32c[(uint)bVar12 * -2];
      afStack_2d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
           afStack_32c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      if (SQRT(fStack_2bc * fStack_2bc + fStack_2c4 * fStack_2c4 + fStack_2c0 * fStack_2c0) <=
          (float)_DAT_005b7c87) break;
    }
LAB_00427596:
    FUN_00429090(param_1);
    break;
  case 0x16:
    if ((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
      FUN_0054dbd0(iVar4,0);
      pfVar8 = afStack_2d8 + 0x26;
      afStack_240[0] = (float)uStack_234;
      afStack_2d8[(uint)bVar12 * -2 + 0x27] = afStack_2d8[(uint)bVar12 * -2 + 0x2a];
      afStack_2d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x28] =
           afStack_2d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x2b];
      FUN_00408b80(param_1,pfVar8);
      uVar14 = 0;
      pfVar8 = afStack_2d8 + 0x23;
      afStack_24c[0] = (float)uStack_12c;
      afStack_2d8[(uint)bVar12 * -2 + 0x24] = afStack_194[(uint)bVar12 * -2 + 0x1b];
      uVar7 = 0x01D22E44;
      afStack_2d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x25] =
           afStack_194[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1c];
      FUN_004cec40(uVar7,pfVar8,uVar14);
      uVar7 = 0x01C6E360;
      *(uint *)(param_1 + 0xcdd0) = 1;
      FUN_0048c150(uVar7,"CarvedDead");
    }
  }
  if ((0.0 <= fStack_34) && (*(int *)(param_1 + 0xcde4) != 0)) {
    *(float *)(param_1 + 0x2524) = fStack_40 * *(float *)(param_1 + 0xcdcc) * param_2;
    FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
    uStack_378 = 0;
    fStack_370 = fStack_34;
    uStack_374 = 0;
    uVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                      (*(int *)(param_1 + 0xcde4),&uStack_378,0x40400000,0x3f490fdb);
    iVar4 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar7);
    if (iVar4 != 1) {
      FUN_00441ff0(PTR_DAT_005f1690,"%s giving up attack\n",param_1);
      FUN_00429090(param_1);
      *(uint *)(param_1 + 0x2508) = 0;
    }
  }
LAB_004269b6:
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  iVar4 = FUN_0042ccf0(param_1);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0xcde4);
    if ((iVar4 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xf4))(iVar4), iVar4 == param_1)) {
      FUN_0053ec10(0x01ED78C8,*(uint *)(param_1 + 0xcde4));
    }
    FUN_0042c1e0(param_1,param_2);
    fStack_168 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_164 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_160 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_1f8 = fStack_168;
    afStack_218[(uint)bVar12 * -2 + 9] = afStack_194[(uint)bVar12 * -2 + 0xc];
    afStack_218[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
         afStack_194[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
    fStack_b4 = fStack_1f8 + *(float *)(param_1 + 0x250c);
    fStack_b0 = fStack_1f4 + *(float *)(param_1 + 0x2510);
    fStack_ac = fStack_1f0 + *(float *)(param_1 + 0x2514);
    fStack_e4 = fStack_b4;
    afStack_f8[(uint)bVar12 * -2 + 6] = afStack_f8[(uint)bVar12 * -2 + 0x12];
    afStack_f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
         afStack_f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13];
    fStack_198 = fStack_e4 + *(float *)(param_1 + 0x249c);
    afStack_194[0] = fStack_e0 + *(float *)(param_1 + 0x24a0);
    afStack_194[1] = fStack_dc + *(float *)(param_1 + 0x24a4);
    afStack_2d8[2] = fStack_198;
    afStack_2d8[(uint)bVar12 * -2 + 3] = afStack_194[(uint)bVar12 * -2];
    afStack_2d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
         afStack_194[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042c230(param_1,afStack_2d8 + 2);
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  if (*(int *)(param_1 + 0xcdd0) == 0) {
    iVar4 = *(int *)(param_1 + 0xd0b8);
    if (*(int *)(param_1 + 0x2298 + iVar4 * 4) == 0) {
      uVar7 = *(uint *)(param_1 + 0xd0a0);
      uVar14 = 0x3f000000;
    }
    else {
      FUN_0042fdc0(param_1,*(uint *)(param_1 + 0xd0a4),*(uint *)(param_1 + 0xd08c),
                   0x3e4ccccd);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0a4) * 4) != 0) {
        FUN_0042fdc0(param_1,*(uint *)(param_1 + 0xd0a8),*(uint *)(param_1 + 0xd084),
                     0x3e4ccccd);
      }
      FUN_0042fdc0(param_1,*(uint *)(param_1 + 0xd0ac),*(uint *)(param_1 + 0xd090),
                   0x3e4ccccd);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0ac) * 4) != 0) {
        FUN_0042fdc0(param_1,*(uint *)(param_1 + 0xd0b0),*(uint *)(param_1 + 0xd088),
                     0x3e4ccccd);
      }
      uVar7 = *(uint *)(param_1 + 0xd078);
      uVar14 = 0x3f333333;
      iVar4 = *(int *)(param_1 + 0xd0bc);
    }
    FUN_0042fe90(param_1,iVar4,uVar7,uVar14);
    FUN_0042fc90(param_1);
  }
  iVar4 = FUN_00428520(param_1,1);
  if (((iStack_48 != 0) && (-1 < iVar4)) &&
     (iVar4 = *(int *)(param_1 + iVar4 * 0x78 + 0x25b0), iVar4 != 0)) {
    (**(code **)(*(int *)(iVar4 + 0x154) + 0x78))(iVar4,2);
    return;
  }
  return;
}
