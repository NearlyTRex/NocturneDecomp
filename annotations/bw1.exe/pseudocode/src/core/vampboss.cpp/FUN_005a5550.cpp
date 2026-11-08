// Name: FUN_005a5550
// Address: 005a5550
// Address Range: [[005a5550, 005a68ca]]
// Convention: unknown
// Signature: void FUN_005a5550(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a5550(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float afStackY_116c [907];
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  byte auStack_31c [4];
  uint uStack_318;
  byte auStack_2e0 [4];
  uint uStack_2dc;
  int iStack_2ac;
  int iStack_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  uint uStack_298;
  uint uStack_294;
  uint uStack_290;
  uint auStack_28c [6];
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  uint uStack_268;
  uint uStack_264;
  uint uStack_260;
  uint auStack_25c [6];
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  uint uStack_238;
  uint uStack_234;
  uint uStack_230;
  uint auStack_22c [3];
  byte auStack_220 [12];
  uint auStack_214 [6];
  uint auStack_1fc [3];
  byte auStack_1f0 [12];
  uint auStack_1e4 [6];
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint auStack_1b4 [6];
  uint auStack_19c [6];
  float fStack_184;
  float afStack_180 [5];
  float fStack_16c;
  uint uStack_168;
  uint uStack_164;
  float fStack_160;
  float afStack_15c [5];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float afStack_138 [4];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  uint uStack_10c;
  float fStack_108;
  uint uStack_100;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [3];
  uint uStack_d0;
  float fStack_cc;
  float afStack_c4 [3];
  float afStack_b8 [19];
  float fStack_6c;
  float fStack_68;
  int iStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar5 = param_1;
  do {
    if (*(int *)(iVar5 + 0xbf3e8) == 0) {
      _DAT_01d1d400 = "..\\core\\vampboss.cpp";
      _DAT_01d1d404 = 0xcf;
      FUN_005030e0("CVampireBoss::process - Need 4 waypoints");
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 != param_1 + 0x10);
  iVar5 = FUN_0042e1a0(param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0xbe79c);
  if (iVar5 == 2) {
    FUN_005a6a00(param_1,param_2);
    FUN_00567580(param_1 + 0xc268);
    FUN_00440610(param_1 + 0xe60c,param_1 + 0x20,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2504),param_1 + 0xc268);
    if (*(float *)(param_1 + 0x2538) < (float)_DAT_005f8da8) {
      *(uint *)(param_1 + 0x2538) = 0x41c7fdf4;
      if ((*(int *)(param_1 + 0xbf3e0) != 2) && (*(int *)(param_1 + 0xbf3e0) != 3)) {
        FUN_005a72e0(param_1);
        *(uint *)(param_1 + 0xbf3e0) = 2;
        *(uint *)(param_1 + 0xbf3d4) = 0x40a00000;
      }
    }
    if ((*(int *)(param_1 + 0xbf3e0) != 2) && (*(int *)(param_1 + 0xbf3e0) != 3)) {
      iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      fStack_124 = *(float *)(param_1 + 0x20) - *(float *)(iVar5 + 0x20);
      fStack_120 = *(float *)(param_1 + 0x24) - *(float *)(iVar5 + 0x24);
      fStack_11c = *(float *)(param_1 + 0x28) - *(float *)(iVar5 + 0x28);
      fStack_e8 = fStack_124;
      afStack_138[(uint)bVar8 * -2 + 0x15] = afStack_138[(uint)bVar8 * -2 + 6];
      afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16] =
           afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      fStack_324 = SQRT(fStack_e8 * fStack_e8 + fStack_e0 * fStack_e0);
      if (fStack_324 < (float)_DAT_005f8db0) {
        *(uint *)(param_1 + 0xbf3e0) = 1;
        fStack_14 = (float)(uint)(fStack_e4 < (float)_DAT_005f8db8);
        if ((float10)0 != ABS((float10)(int)fStack_14)) {
          FUN_0042c010(auStack_2e0);
          uStack_2dc = 0x41200000;
          iStack_2ac = param_1;
          iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          iStack_2a8 = param_1;
          (**(code **)(*(int *)(iVar5 + 0x154) + 0x108))(iVar5,auStack_2e0);
        }
      }
      if ((float)_DAT_005f8dc0 < fStack_324) {
        *(uint *)(param_1 + 0xbf3d0) = 0x40a00000;
        *(uint *)(param_1 + 0xbf3d8) = 0;
        *(uint *)(param_1 + 0xbf3e0) = 0;
      }
      if ((*(int *)(param_1 + 0xbf3e0) == 0) &&
         (fVar1 = *(float *)(param_1 + 0xbf3d0) - param_2, *(float *)(param_1 + 0xbf3d0) = fVar1,
         fVar1 < 0.0)) {
        *(uint *)(param_1 + 0xbf3e0) = 1;
        *(uint *)(param_1 + 0xbf3d0) = 0;
      }
      iVar5 = FUN_00524770(param_1 + 0xc268);
      if ((((*(int *)(iVar5 + 0x24) == 0) && (*(int *)(param_1 + 0xbf3e0) == 0)) &&
          (fStack_324 < (float)_DAT_005f8dc8)) && (*(int *)(param_1 + 0xbf3d8) == 0)) {
        *(uint *)(param_1 + 0xbf3d8) = 1;
        iVar5 = FUN_0040cd00(0x3f000000);
        if (iVar5 == 0) {
          uVar16 = 2;
        }
        else {
          uVar16 = 1;
        }
        FUN_005247c0(param_1 + 0xc268,uVar16,1);
      }
    }
    iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    if (afStack_15c + 5 != (float *)(iVar5 + 0x20)) {
      fStack_148 = *(float *)(iVar5 + 0x20);
      fStack_144 = *(float *)(iVar5 + 0x24);
      fStack_140 = *(float *)(iVar5 + 0x28);
    }
    if (*(int *)(param_1 + 0xbf3e0) == 2) {
      *(float *)(param_1 + 0xbf3d4) = *(float *)(param_1 + 0xbf3d4) - param_2;
      iVar5 = *(int *)(param_1 + 0xbf3e4 + (4 - *(int *)(param_1 + 0xbf3e4)) * 4);
      if (afStack_15c + 5 != (float *)(iVar5 + 0x20)) {
        fStack_148 = *(float *)(iVar5 + 0x20);
        fStack_144 = *(float *)(iVar5 + 0x24);
        fStack_140 = *(float *)(iVar5 + 0x28);
      }
      if ((*(float *)(param_1 + 0xbf3d4) <= 0.0) ||
         (fVar1 = fStack_148 - *(float *)(param_1 + 0x20),
         fVar2 = fStack_140 - *(float *)(param_1 + 0x28),
         SQRT(fVar2 * fVar2 + fVar1 * fVar1) < (float)_DAT_005f8dd8)) {
        *(uint *)(param_1 + 0xbf3d4) = 0x40a00000;
        *(uint *)(param_1 + 0xbf3e0) = 3;
      }
    }
    else if (*(int *)(param_1 + 0xbf3e0) == 3) {
      iVar5 = *(int *)(param_1 + 0xbf3e8 + *(int *)(param_1 + 0xbf3e4) * 4);
      if (afStack_15c + 5 != (float *)(iVar5 + 0x20)) {
        fStack_148 = *(float *)(iVar5 + 0x20);
        fStack_144 = *(float *)(iVar5 + 0x24);
        fStack_140 = *(float *)(iVar5 + 0x28);
      }
      fVar1 = *(float *)(param_1 + 0xbf3d4) - param_2;
      *(float *)(param_1 + 0xbf3d4) = fVar1;
      if ((fVar1 <= 0.0) ||
         (fVar1 = fStack_148 - *(float *)(param_1 + 0x20),
         fVar2 = fStack_140 - *(float *)(param_1 + 0x28),
         SQRT(fVar2 * fVar2 + fVar1 * fVar1) < (float)_DAT_005f8dd0)) {
        FUN_005a7290(param_1);
      }
    }
    fStack_58 = 1.2;
    fStack_144 = fStack_144 + _DAT_005f8de0;
    fStack_48 = 20.0;
    afStack_138[2] = fStack_148 - *(float *)(param_1 + 0x20);
    fStack_128 = fStack_140 - *(float *)(param_1 + 0x28);
    afStack_138[3] = fStack_144 - *(float *)(param_1 + 0x24);
    fStack_184 = afStack_138[2];
    afStack_180[(uint)bVar8 * -2] = afStack_138[(uint)bVar8 * -2 + 3];
    afStack_180[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    FUN_005c1d69();
    fVar9 = SQRT((float10)fStack_184 * (float10)fStack_184 +
                 (float10)afStack_180[1] * (float10)afStack_180[1]);
    fVar10 = (float10)afStack_180[0];
    FUN_005c1d69();
    fStack_30 = (float)fVar9;
    fStack_28 = (float)-fVar10;
    if (*(int *)(param_1 + 0xbf3e0) == 1) {
      fStack_30 = -fStack_30;
      fStack_28 = -fStack_28;
    }
    fStack_320 = (float)FUN_0040cd60(fStack_30 - *(float *)(param_1 + 0x34));
    fStack_328 = fStack_320 * param_2 * fStack_58;
    if (ABS(fStack_328) <= ABS(fStack_320)) {
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_328;
    }
    else {
      *(float *)(param_1 + 0x34) = fStack_30;
    }
    fStack_14 = fStack_320;
    fStack_28 = (float)FUN_0040cd60(fStack_28 - *(float *)(param_1 + 0x30));
    fStack_3c = -0.3926991;
    fStack_34 = 0.3926991;
    *(float *)(param_1 + 0x30) = fStack_28 * param_2 * fStack_58 + *(float *)(param_1 + 0x30);
    if ((*(float *)(param_1 + 0x2538) < (float)_DAT_005f8da8) && (*(int *)(param_1 + 0xbf3e0) == 0))
    {
      fStack_34 = 1.5707964;
      fStack_3c = -1.5707964;
    }
    if (*(float *)(param_1 + 0x30) < fStack_3c) {
      *(float *)(param_1 + 0x30) = fStack_3c;
    }
    if (fStack_34 < *(float *)(param_1 + 0x30)) {
      *(float *)(param_1 + 0x30) = fStack_34;
    }
    fVar9 = (float10)fsin((float10)*(float *)(param_1 + 0x30));
    fVar10 = (float10)fsin((float10)*(float *)(param_1 + 0x34));
    fVar11 = (float10)fcos((float10)*(float *)(param_1 + 0x30));
    fVar12 = (float10)fcos((float10)*(float *)(param_1 + 0x34));
    fVar13 = (float10)fStack_48;
    fVar14 = (float10)param_2;
    fVar9 = -fVar9 * fVar13 * fVar14 + (float10)*(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x24) = (float)fVar9;
    *(float *)(param_1 + 0x20) =
         (float)(fVar10 * fVar11 * fVar13 * fVar14 + (float10)*(float *)(param_1 + 0x20));
    *(float *)(param_1 + 0x28) =
         (float)(fVar12 * fVar11 * fVar13 * fVar14 + (float10)*(float *)(param_1 + 0x28));
    if (fVar9 < (float10)fStack_144) {
      *(float *)(param_1 + 0x24) = fStack_144;
    }
    fStack_14 = fStack_28;
    FUN_004088b0(param_1);
    FUN_0056ae70(param_1 + 0xc268);
    puVar6 = auStack_1e4;
    puVar7 = &uStack_244;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    if ((uint *)(param_1 + 0x2788) != &uStack_244) {
      *(uint *)(param_1 + 0x2788) = uStack_244;
      *(uint *)(param_1 + 0x278c) = uStack_240;
      *(uint *)(param_1 + 0x2790) = uStack_23c;
    }
    if ((uint *)(param_1 + 0x2794) != &uStack_238) {
      *(uint *)(param_1 + 0x2794) = uStack_238;
      *(uint *)(param_1 + 0x2798) = uStack_234;
      *(uint *)(param_1 + 0x279c) = uStack_230;
    }
    goto LAB_005a5b9f;
  }
  if (iVar5 == 1) {
    fVar1 = param_2 / _DAT_006077ac + *(float *)(param_1 + 0xbf3cc);
    *(float *)(param_1 + 0xbf3cc) = fVar1;
    uVar16 = 0x01C51D80;
    if (1.0 <= fVar1) {
      *(uint *)(param_1 + 0xbe79c) = 2;
      FUN_004a1b70(uVar16,"morphCompleted");
    }
    FUN_005a6a00(param_1,param_2);
    FUN_00567580(param_1 + 0xc268);
    FUN_00440610(param_1 + 0xe60c,param_1 + 0x20,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2504),param_1 + 0xc268);
    iVar5 = param_1 + 0x158;
    fStack_68 = param_2;
    while (0.0 < fStack_68) {
      FUN_00524270(iVar5,&fStack_68);
    }
    FUN_00567580(iVar5);
    fStack_14 = (float)(param_1 + 0x20);
    FUN_00440610(param_1 + 0x4913c,fStack_14,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2504),iVar5);
    FUN_00440610(param_1 + 0x83c6c,fStack_14,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2504),iVar5);
    FUN_0056ae70(iVar5);
    puVar6 = auStack_1b4;
    puVar7 = &uStack_1cc;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    if ((uint *)(param_1 + 0x2788) != &uStack_1cc) {
      *(uint *)(param_1 + 0x2788) = uStack_1cc;
      *(uint *)(param_1 + 0x278c) = uStack_1c8;
      *(uint *)(param_1 + 0x2790) = uStack_1c4;
    }
    if ((uint *)(param_1 + 0x2794) != &uStack_1c0) {
      *(uint *)(param_1 + 0x2794) = uStack_1c0;
      *(uint *)(param_1 + 0x2798) = uStack_1bc;
      *(uint *)(param_1 + 0x279c) = uStack_1b8;
    }
    FUN_0056ae70(param_1 + 0xc268);
    puVar6 = auStack_28c;
    puVar7 = auStack_22c;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    FUN_00420500(param_1 + 0x2788,auStack_22c);
    FUN_00420500(param_1 + 0x2788,auStack_220);
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + param_2;
    goto LAB_005a5b9f;
  }
  if (iVar5 == 3) {
    fStack_5c = param_2 / _DAT_006077ac;
    fStack_60 = *(float *)(param_1 + 0xbf3cc);
    *(float *)(param_1 + 0xbf3cc) = fStack_60 - fStack_5c;
    uVar16 = 0x01C51D80;
    if (0.0 < fStack_60 - fStack_5c) {
      fVar1 = (fStack_5c / fStack_60) * (*(float *)(param_1 + 0x2504) - *(float *)(param_1 + 0x24))
              + *(float *)(param_1 + 0x24);
    }
    else {
      *(uint *)(param_1 + 0xbe79c) = 0;
      FUN_004a1b70(uVar16,"backToHuman");
      fVar1 = *(float *)(param_1 + 0x2504);
      *(uint *)(param_1 + 0xbf3cc) = 0;
    }
    *(float *)(param_1 + 0x24) = fVar1;
    FUN_005a6a00(param_1,param_2);
    FUN_00567580(param_1 + 0xc268);
    FUN_00440610(param_1 + 0xe60c,param_1 + 0x20,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2504),param_1 + 0xc268);
    iVar5 = param_1 + 0x158;
    fStack_18 = param_2;
    while (0.0 < fStack_18) {
      FUN_00524270(iVar5,&fStack_18);
    }
    FUN_00567580(iVar5);
    fStack_14 = (float)(param_1 + 0x20);
    FUN_00440610(param_1 + 0x4913c,fStack_14,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2504),iVar5);
    FUN_00440610(param_1 + 0x83c6c,fStack_14,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2504),iVar5);
    FUN_0056ae70(iVar5);
    puVar6 = auStack_19c;
    puVar7 = &uStack_274;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    if ((uint *)(param_1 + 0x2788) != &uStack_274) {
      *(uint *)(param_1 + 0x2788) = uStack_274;
      *(uint *)(param_1 + 0x278c) = uStack_270;
      *(uint *)(param_1 + 0x2790) = uStack_26c;
    }
    if ((uint *)(param_1 + 0x2794) != &uStack_268) {
      *(uint *)(param_1 + 0x2794) = uStack_268;
      *(uint *)(param_1 + 0x2798) = uStack_264;
      *(uint *)(param_1 + 0x279c) = uStack_260;
    }
    FUN_0056ae70(param_1 + 0xc268);
    puVar6 = auStack_214;
    puVar7 = auStack_1fc;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    FUN_00420500(param_1 + 0x2788,auStack_1fc);
    FUN_00420500(param_1 + 0x2788,auStack_1f0);
    goto LAB_005a5b9f;
  }
  iStack_20 = param_1 + 0x158;
  fStack_6c = param_2;
  while (0.0 < fStack_6c) {
    uVar3 = FUN_00524270(iStack_20,&fStack_6c);
    if (uVar3 < 2) {
      if (uVar3 == 1) {
        FUN_005a7160(param_1);
LAB_005a6148:
        *(uint *)(param_1 + 0xbf3d0) = 0x3f800000;
      }
    }
    else {
      if (uVar3 < 3) {
        FUN_005a71e0(param_1);
        goto LAB_005a6148;
      }
      if (uVar3 < 4) {
        FUN_005a70f0(param_1);
        goto LAB_005a6148;
      }
      if (uVar3 == 0x29a) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
        uStack_168 = 0x41a00000;
        uStack_164 = 0x41a00000;
        fStack_16c = 0.0;
        FUN_00408ac0(param_1,afStack_180 + 5);
        uVar17 = 0;
        pfVar15 = afStack_138 + 0x20;
        uVar16 = 0xbf800000;
        afStack_b8[0] = afStack_180[2];
        afStack_138[(uint)bVar8 * -2 + 0x21] = afStack_180[(uint)bVar8 * -2 + 3];
        iVar5 = param_1;
        afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x22] =
             afStack_180[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        FUN_00430d90(iVar5,pfVar15,uVar16,uVar17);
        iStack_1c = 0;
        iVar5 = 0;
        while (iStack_1c < *(int *)(0x01E82168 + 0x150fec)) {
          iVar4 = FUN_0040c600(*(uint *)(iVar5 + 0x150ff0 + 0x01E82168),_DAT_02c8aee8);
          if ((iVar4 == 0) || (*(int *)(iVar4 + 0xc410) == 0)) {
            iStack_1c = iStack_1c + 1;
            iVar5 = iVar5 + 4;
          }
          else {
            FUN_0042c010(auStack_31c);
            uStack_318 = 0x4479c000;
            (**(code **)(*(int *)(iVar4 + 0x154) + 0x108))(iVar4,auStack_31c);
            iStack_1c = iStack_1c + 1;
            iVar5 = iVar5 + 4;
          }
        }
      }
    }
  }
  FUN_0056ae70(iStack_20);
  puVar6 = auStack_25c;
  puVar7 = &uStack_2a4;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  if ((uint *)(param_1 + 0x2788) != &uStack_2a4) {
    *(uint *)(param_1 + 0x2788) = uStack_2a4;
    *(uint *)(param_1 + 0x278c) = uStack_2a0;
    *(uint *)(param_1 + 0x2790) = uStack_29c;
  }
  if ((uint *)(param_1 + 0x2794) != &uStack_298) {
    *(uint *)(param_1 + 0x2794) = uStack_298;
    *(uint *)(param_1 + 0x2798) = uStack_294;
    *(uint *)(param_1 + 0x279c) = uStack_290;
  }
  iVar4 = FUN_00524770(param_1 + 0x158);
  iVar5 = 0x01CCF390;
  iStack_64 = *(int *)(iVar4 + 0x24);
  switch(*(int *)(iVar4 + 0x24)) {
  case 0:
    *(float *)(param_1 + 0x2528) = _DAT_006077b4 * param_2;
    uVar16 = 0x01C51D80;
    if (*(int *)(iVar5 + 0x244) == 0) {
      *(float *)(param_1 + 0x2524) = _DAT_006077b0 * param_2;
      FUN_00431cc0(param_1,*(uint *)(param_1 + 0xbf3e8 + *(int *)(param_1 + 0xbf3e4) * 4),
                   0x3e4ccccd,0x497423f0,param_1 + 0xbf3f8);
      switch(*(uint *)(param_1 + 0xbf3f8)) {
      default:
        fVar1 = (*(float *)(param_1 + 0x253c) * param_2) / _DAT_006077b8 +
                *(float *)(param_1 + 0x2538);
        *(float *)(param_1 + 0x2538) = fVar1;
        if ((float)_DAT_005f8de8 < fVar1) goto LAB_005a6245;
        iVar5 = FUN_004ea6f0((float *)(param_1 + 0x20),0x41400000);
        if (iVar5 == 0) {
          iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          fStack_160 = *(float *)(iVar5 + 0x20) - *(float *)(param_1 + 0x20);
          afStack_15c[0] = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24);
          afStack_15c[1] = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28);
          afStack_dc[0] = fStack_160;
          afStack_138[(uint)bVar8 * -2 + 0x18] = afStack_15c[(uint)bVar8 * -2];
          afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19] =
               afStack_15c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          FUN_005a7520(afStack_138 + 0x17);
          uStack_d0 = afStack_15c[2];
          afStack_138[(uint)bVar8 * -2 + 0x1b] = afStack_15c[(uint)bVar8 * -2 + 3];
          afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c] =
               afStack_15c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          fStack_14 = (float)FUN_0040cd60(fStack_cc - *(float *)(param_1 + 0x34));
          *(float *)(param_1 + 0x2508) = fStack_14;
          fStack_2c = *(float *)(param_1 + 0x2508);
          fStack_4c = *(float *)(param_1 + 0x2528);
          fStack_14 = (float)FUN_0040cd60(fStack_2c);
          fStack_2c = fStack_14;
          fStack_38 = -fStack_4c;
          fStack_50 = fStack_38;
          if ((fStack_38 <= fStack_14) && (fStack_38 = fStack_14, fStack_4c < fStack_14)) {
            fStack_38 = fStack_4c;
          }
          fVar1 = *(float *)(param_1 + 0xbf3d0) - param_2;
          *(float *)(param_1 + 0x2508) = fStack_38;
          *(float *)(param_1 + 0xbf3d0) = fVar1;
          if (fVar1 <= 0.0) {
            *(uint *)(param_1 + 0xbf3d0) = 0;
            iVar4 = FUN_0040cc60(0,2);
            iVar5 = param_1 + 0x158;
            if (iVar4 == 0) {
              FUN_005247c0(iVar5,4,1);
            }
            else if (iVar4 == 1) {
              FUN_005247c0(iVar5,5,1);
            }
            else if (iVar4 == 2) {
              FUN_005247c0(iVar5,6,1);
            }
          }
        }
        else {
          FUN_005a72e0(param_1);
        }
        break;
      case 1:
      case 2:
        *(uint *)(param_1 + 0xbf3d0) = 0x40400000;
      }
    }
    else {
      *(uint *)(param_1 + 0xbf3d0) = 0x40400000;
      iVar5 = FUN_004a6c30(uVar16,"morphToBat");
      if (iVar5 == 0) {
        iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        fStack_13c = *(float *)(iVar5 + 0x20) - *(float *)(param_1 + 0x20);
        afStack_138[0] = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24);
        afStack_138[1] = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28);
        afStack_c4[0] = fStack_13c;
        afStack_138[(uint)bVar8 * -2 + 0x1e] = afStack_138[(uint)bVar8 * -2];
        afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f] =
             afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        FUN_005a7520(afStack_138 + 0x1d);
        uStack_10c = uStack_100;
        afStack_138[(uint)bVar8 * -2 + 0xc] = afStack_138[(uint)bVar8 * -2 + 0xf];
        afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
             afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
        fStack_14 = (float)FUN_0040cd60(fStack_108 - *(float *)(param_1 + 0x34));
        *(float *)(param_1 + 0x2508) = fStack_14;
        fStack_24 = *(float *)(param_1 + 0x2508);
        fStack_44 = *(float *)(param_1 + 0x2528);
        fStack_14 = (float)FUN_0040cd60(fStack_24);
        fStack_24 = fStack_14;
        fStack_40 = -fStack_44;
        fStack_54 = fStack_40;
        if ((fStack_40 <= fStack_14) && (fStack_40 = fStack_14, fStack_44 < fStack_14)) {
          fStack_40 = fStack_44;
        }
        *(float *)(param_1 + 0x2508) = fStack_40;
      }
      else {
LAB_005a6245:
        FUN_005a7250(param_1);
      }
    }
    break;
  case 2:
    iVar5 = FUN_004a6c30(0x01C51D80,"flyout");
    if (iVar5 != 0) {
      FUN_005247c0(param_1 + 0x158,0,1);
    }
  }
  if ((*(int *)(0x01CCF390 + 0x244) == 0) && (iStack_64 != 2)) {
    fStack_118 = *(float *)(param_1 + 0x250c) + *(float *)(param_1 + 0x249c);
    fStack_114 = *(float *)(param_1 + 0x2510) + *(float *)(param_1 + 0x24a0);
    fStack_110 = *(float *)(param_1 + 0x2514) + *(float *)(param_1 + 0x24a4);
    fStack_f4 = fStack_118;
    afStack_138[(uint)bVar8 * -2 + 0x12] = afStack_138[(uint)bVar8 * -2 + 9];
    afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
         afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
    fStack_f0 = fStack_f0 - param_2 * (float)_DAT_005f8df0;
    FUN_0042d750(param_1,afStack_138 + 0x11);
  }
  *(uint *)(param_1 + 0x2514) = 0;
  *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  FUN_0042e160(param_1);
  iVar5 = param_1 + 0x158;
  FUN_005675a0(iVar5);
  FUN_00433e80(param_1,param_2);
  fStack_14 = (float)(param_1 + 0x20);
  FUN_00440610(param_1 + 0x4913c,fStack_14,param_1 + 0x30,param_2,*(uint *)(param_1 + 0x2504),
               iVar5);
  FUN_00440610(param_1 + 0x83c6c,fStack_14,param_1 + 0x30,param_2,*(uint *)(param_1 + 0x2504),
               iVar5);
LAB_005a5b9f:
  iVar5 = FUN_00524770(param_1 + 0x158);
  if ((*(int *)(iVar5 + 0x24) != 2) && (*(int *)(0x01CCF390 + 0x244) == 0)) {
    FUN_004d6340(0x01CCF390,param_1 + 0x2544,
                 *(float *)(param_1 + 0x2538) / *(float *)(param_1 + 0x253c),0x3f000000);
    return;
  }
  return;
}
