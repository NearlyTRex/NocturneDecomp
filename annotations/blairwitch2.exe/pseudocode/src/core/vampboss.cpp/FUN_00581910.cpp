// Name: FUN_00581910
// Address: 00581910
// Address Range: [[00581910, 00582c8a]]
// Convention: unknown
// Signature: void FUN_00581910(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00581910(int param_1,float param_2)

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
    if (*(int *)(iVar5 + 0xc3b88) == 0) {
      _DAT_01d046a0 = "..\\core\\vampboss.cpp";
      _DAT_01d046a4 = 0xcf;
      FUN_004e4500("CVampireBoss::process - Need 4 waypoints");
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 != param_1 + 0x10);
  iVar5 = FUN_004244b0(param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0xc2f3c);
  if (iVar5 == 2) {
    FUN_00582dc0(param_1,param_2);
    FUN_00544ee0(param_1 + 0x10af8);
    FUN_005afdf0(param_1 + 0x12dac,param_1 + 0x20,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2574),param_1 + 0x10af8);
    if (*(float *)(param_1 + 0x25a8) < (float)_DAT_005eda4c) {
      *(uint *)(param_1 + 0x25a8) = 0x41c7fdf4;
      if ((*(int *)(param_1 + 0xc3b80) != 2) && (*(int *)(param_1 + 0xc3b80) != 3)) {
        FUN_005836a0(param_1);
        *(uint *)(param_1 + 0xc3b80) = 2;
        *(uint *)(param_1 + 0xc3b74) = 0x40a00000;
      }
    }
    if ((*(int *)(param_1 + 0xc3b80) != 2) && (*(int *)(param_1 + 0xc3b80) != 3)) {
      iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      fStack_124 = *(float *)(param_1 + 0x20) - *(float *)(iVar5 + 0x20);
      fStack_120 = *(float *)(param_1 + 0x24) - *(float *)(iVar5 + 0x24);
      fStack_11c = *(float *)(param_1 + 0x28) - *(float *)(iVar5 + 0x28);
      fStack_e8 = fStack_124;
      afStack_138[(uint)bVar8 * -2 + 0x15] = afStack_138[(uint)bVar8 * -2 + 6];
      afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16] =
           afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      fStack_324 = SQRT(fStack_e8 * fStack_e8 + fStack_e0 * fStack_e0);
      if (fStack_324 < (float)_DAT_005eda54) {
        *(uint *)(param_1 + 0xc3b80) = 1;
        fStack_14 = (float)(uint)(fStack_e4 < (float)_DAT_005eda5c);
        if ((float10)0 != ABS((float10)(int)fStack_14)) {
          FUN_004222d0(auStack_2e0);
          uStack_2dc = 0x41200000;
          iStack_2ac = param_1;
          iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          iStack_2a8 = param_1;
          (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x110))(iVar5,auStack_2e0);
        }
      }
      if ((float)_DAT_005eda64 < fStack_324) {
        *(uint *)(param_1 + 0xc3b70) = 0x40a00000;
        *(uint *)(param_1 + 0xc3b78) = 0;
        *(uint *)(param_1 + 0xc3b80) = 0;
      }
      if ((*(int *)(param_1 + 0xc3b80) == 0) &&
         (fVar1 = *(float *)(param_1 + 0xc3b70) - param_2, *(float *)(param_1 + 0xc3b70) = fVar1,
         fVar1 < 0.0)) {
        *(uint *)(param_1 + 0xc3b80) = 1;
        *(uint *)(param_1 + 0xc3b70) = 0;
      }
      iVar5 = FUN_005035c0(param_1 + 0x10af8);
      if ((((*(int *)(iVar5 + 0x24) == 0) && (*(int *)(param_1 + 0xc3b80) == 0)) &&
          (fStack_324 < (float)_DAT_005eda6c)) && (*(int *)(param_1 + 0xc3b78) == 0)) {
        *(uint *)(param_1 + 0xc3b78) = 1;
        iVar5 = FUN_0040d060(0x3f000000);
        if (iVar5 == 0) {
          uVar16 = 2;
        }
        else {
          uVar16 = 1;
        }
        FUN_00503620(param_1 + 0x10af8,uVar16,1);
      }
    }
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    if (afStack_15c + 5 != (float *)(iVar5 + 0x20)) {
      fStack_148 = *(float *)(iVar5 + 0x20);
      fStack_144 = *(float *)(iVar5 + 0x24);
      fStack_140 = *(float *)(iVar5 + 0x28);
    }
    if (*(int *)(param_1 + 0xc3b80) == 2) {
      *(float *)(param_1 + 0xc3b74) = *(float *)(param_1 + 0xc3b74) - param_2;
      iVar5 = *(int *)(param_1 + 0xc3b84 + (4 - *(int *)(param_1 + 0xc3b84)) * 4);
      if (afStack_15c + 5 != (float *)(iVar5 + 0x20)) {
        fStack_148 = *(float *)(iVar5 + 0x20);
        fStack_144 = *(float *)(iVar5 + 0x24);
        fStack_140 = *(float *)(iVar5 + 0x28);
      }
      if ((*(float *)(param_1 + 0xc3b74) <= 0.0) ||
         (fVar1 = fStack_148 - *(float *)(param_1 + 0x20),
         fVar2 = fStack_140 - *(float *)(param_1 + 0x28),
         SQRT(fVar2 * fVar2 + fVar1 * fVar1) < (float)_DAT_005eda7c)) {
        *(uint *)(param_1 + 0xc3b74) = 0x40a00000;
        *(uint *)(param_1 + 0xc3b80) = 3;
      }
    }
    else if (*(int *)(param_1 + 0xc3b80) == 3) {
      iVar5 = *(int *)(param_1 + 0xc3b88 + *(int *)(param_1 + 0xc3b84) * 4);
      if (afStack_15c + 5 != (float *)(iVar5 + 0x20)) {
        fStack_148 = *(float *)(iVar5 + 0x20);
        fStack_144 = *(float *)(iVar5 + 0x24);
        fStack_140 = *(float *)(iVar5 + 0x28);
      }
      fVar1 = *(float *)(param_1 + 0xc3b74) - param_2;
      *(float *)(param_1 + 0xc3b74) = fVar1;
      if ((fVar1 <= 0.0) ||
         (fVar1 = fStack_148 - *(float *)(param_1 + 0x20),
         fVar2 = fStack_140 - *(float *)(param_1 + 0x28),
         SQRT(fVar2 * fVar2 + fVar1 * fVar1) < (float)_DAT_005eda74)) {
        FUN_00583650(param_1);
      }
    }
    fStack_58 = 1.2;
    fStack_144 = fStack_144 + _DAT_005eda84;
    fStack_48 = 20.0;
    afStack_138[2] = fStack_148 - *(float *)(param_1 + 0x20);
    fStack_128 = fStack_140 - *(float *)(param_1 + 0x28);
    afStack_138[3] = fStack_144 - *(float *)(param_1 + 0x24);
    fStack_184 = afStack_138[2];
    afStack_180[(uint)bVar8 * -2] = afStack_138[(uint)bVar8 * -2 + 3];
    afStack_180[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    FUN_005b9989();
    fVar9 = SQRT((float10)fStack_184 * (float10)fStack_184 +
                 (float10)afStack_180[1] * (float10)afStack_180[1]);
    fVar10 = (float10)afStack_180[0];
    FUN_005b9989();
    fStack_30 = (float)fVar9;
    fStack_28 = (float)-fVar10;
    if (*(int *)(param_1 + 0xc3b80) == 1) {
      fStack_30 = -fStack_30;
      fStack_28 = -fStack_28;
    }
    fStack_320 = (float)FUN_0040d0c0(fStack_30 - *(float *)(param_1 + 0x34));
    fStack_328 = fStack_320 * param_2 * fStack_58;
    if (ABS(fStack_328) <= ABS(fStack_320)) {
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_328;
    }
    else {
      *(float *)(param_1 + 0x34) = fStack_30;
    }
    fStack_14 = fStack_320;
    fStack_28 = (float)FUN_0040d0c0(fStack_28 - *(float *)(param_1 + 0x30));
    fStack_3c = -0.3926991;
    fStack_34 = 0.3926991;
    *(float *)(param_1 + 0x30) = fStack_28 * param_2 * fStack_58 + *(float *)(param_1 + 0x30);
    if ((*(float *)(param_1 + 0x25a8) < (float)_DAT_005eda4c) && (*(int *)(param_1 + 0xc3b80) == 0))
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
    FUN_00408ae0(param_1);
    FUN_005487d0(param_1 + 0x10af8);
    puVar6 = auStack_1e4;
    puVar7 = &uStack_244;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    if ((uint *)(param_1 + 0x27f4) != &uStack_244) {
      *(uint *)(param_1 + 0x27f4) = uStack_244;
      *(uint *)(param_1 + 0x27f8) = uStack_240;
      *(uint *)(param_1 + 0x27fc) = uStack_23c;
    }
    if ((uint *)(param_1 + 0x2800) != &uStack_238) {
      *(uint *)(param_1 + 0x2800) = uStack_238;
      *(uint *)(param_1 + 0x2804) = uStack_234;
      *(uint *)(param_1 + 0x2808) = uStack_230;
    }
    goto LAB_00581f5f;
  }
  if (iVar5 == 1) {
    fVar1 = param_2 / _DAT_005fd82c + *(float *)(param_1 + 0xc3b6c);
    *(float *)(param_1 + 0xc3b6c) = fVar1;
    uVar16 = 0x01C38BC0;
    if (1.0 <= fVar1) {
      *(uint *)(param_1 + 0xc2f3c) = 2;
      FUN_004894f0(uVar16,"morphCompleted");
    }
    FUN_00582dc0(param_1,param_2);
    FUN_00544ee0(param_1 + 0x10af8);
    FUN_005afdf0(param_1 + 0x12dac,param_1 + 0x20,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2574),param_1 + 0x10af8);
    iVar5 = param_1 + 0x2b4;
    fStack_68 = param_2;
    while (0.0 < fStack_68) {
      FUN_005030c0(iVar5,&fStack_68);
    }
    FUN_00544ee0(iVar5);
    fStack_14 = (float)(param_1 + 0x20);
    FUN_005afdf0(param_1 + 0x4d8dc,fStack_14,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2574),iVar5);
    FUN_005afdf0(param_1 + 0x8840c,fStack_14,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2574),iVar5);
    FUN_005487d0(iVar5);
    puVar6 = auStack_1b4;
    puVar7 = &uStack_1cc;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    if ((uint *)(param_1 + 0x27f4) != &uStack_1cc) {
      *(uint *)(param_1 + 0x27f4) = uStack_1cc;
      *(uint *)(param_1 + 0x27f8) = uStack_1c8;
      *(uint *)(param_1 + 0x27fc) = uStack_1c4;
    }
    if ((uint *)(param_1 + 0x2800) != &uStack_1c0) {
      *(uint *)(param_1 + 0x2800) = uStack_1c0;
      *(uint *)(param_1 + 0x2804) = uStack_1bc;
      *(uint *)(param_1 + 0x2808) = uStack_1b8;
    }
    FUN_005487d0(param_1 + 0x10af8);
    puVar6 = auStack_28c;
    puVar7 = auStack_22c;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    FUN_0041a590(param_1 + 0x27f4,auStack_22c);
    FUN_0041a590(param_1 + 0x27f4,auStack_220);
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + param_2;
    goto LAB_00581f5f;
  }
  if (iVar5 == 3) {
    fStack_5c = param_2 / _DAT_005fd82c;
    fStack_60 = *(float *)(param_1 + 0xc3b6c);
    *(float *)(param_1 + 0xc3b6c) = fStack_60 - fStack_5c;
    uVar16 = 0x01C38BC0;
    if (0.0 < fStack_60 - fStack_5c) {
      fVar1 = (fStack_5c / fStack_60) * (*(float *)(param_1 + 0x2574) - *(float *)(param_1 + 0x24))
              + *(float *)(param_1 + 0x24);
    }
    else {
      *(uint *)(param_1 + 0xc2f3c) = 0;
      FUN_004894f0(uVar16,"backToHuman");
      fVar1 = *(float *)(param_1 + 0x2574);
      *(uint *)(param_1 + 0xc3b6c) = 0;
    }
    *(float *)(param_1 + 0x24) = fVar1;
    FUN_00582dc0(param_1,param_2);
    FUN_00544ee0(param_1 + 0x10af8);
    FUN_005afdf0(param_1 + 0x12dac,param_1 + 0x20,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2574),param_1 + 0x10af8);
    iVar5 = param_1 + 0x2b4;
    fStack_18 = param_2;
    while (0.0 < fStack_18) {
      FUN_005030c0(iVar5,&fStack_18);
    }
    FUN_00544ee0(iVar5);
    fStack_14 = (float)(param_1 + 0x20);
    FUN_005afdf0(param_1 + 0x4d8dc,fStack_14,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2574),iVar5);
    FUN_005afdf0(param_1 + 0x8840c,fStack_14,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2574),iVar5);
    FUN_005487d0(iVar5);
    puVar6 = auStack_19c;
    puVar7 = &uStack_274;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    if ((uint *)(param_1 + 0x27f4) != &uStack_274) {
      *(uint *)(param_1 + 0x27f4) = uStack_274;
      *(uint *)(param_1 + 0x27f8) = uStack_270;
      *(uint *)(param_1 + 0x27fc) = uStack_26c;
    }
    if ((uint *)(param_1 + 0x2800) != &uStack_268) {
      *(uint *)(param_1 + 0x2800) = uStack_268;
      *(uint *)(param_1 + 0x2804) = uStack_264;
      *(uint *)(param_1 + 0x2808) = uStack_260;
    }
    FUN_005487d0(param_1 + 0x10af8);
    puVar6 = auStack_214;
    puVar7 = auStack_1fc;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    FUN_0041a590(param_1 + 0x27f4,auStack_1fc);
    FUN_0041a590(param_1 + 0x27f4,auStack_1f0);
    goto LAB_00581f5f;
  }
  iStack_20 = param_1 + 0x2b4;
  fStack_6c = param_2;
  while (0.0 < fStack_6c) {
    uVar3 = FUN_005030c0(iStack_20,&fStack_6c);
    if (uVar3 < 2) {
      if (uVar3 == 1) {
        FUN_00583520(param_1);
LAB_00582508:
        *(uint *)(param_1 + 0xc3b70) = 0x3f800000;
      }
    }
    else {
      if (uVar3 < 3) {
        FUN_005835a0(param_1);
        goto LAB_00582508;
      }
      if (uVar3 < 4) {
        FUN_005834b0(param_1);
        goto LAB_00582508;
      }
      if (uVar3 == 0x29a) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,0,0);
        uStack_168 = 0x41a00000;
        uStack_164 = 0x41a00000;
        fStack_16c = 0.0;
        FUN_00408cf0(param_1,afStack_180 + 5);
        uVar17 = 0;
        pfVar15 = afStack_138 + 0x20;
        uVar16 = 0xbf800000;
        afStack_b8[0] = afStack_180[2];
        afStack_138[(uint)bVar8 * -2 + 0x21] = afStack_180[(uint)bVar8 * -2 + 3];
        iVar5 = param_1;
        afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x22] =
             afStack_180[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        FUN_00427360(iVar5,pfVar15,uVar16,uVar17);
        iStack_1c = 0;
        iVar5 = 0;
        while (iStack_1c < *(int *)(0x01E661B8 + 0x150fec)) {
          iVar4 = FUN_0040c8f0(*(uint *)(iVar5 + 0x150ff0 + 0x01E661B8),_DAT_026536cc);
          if ((iVar4 == 0) || (*(int *)(iVar4 + 0x10ca0) == 0)) {
            iStack_1c = iStack_1c + 1;
            iVar5 = iVar5 + 4;
          }
          else {
            FUN_004222d0(auStack_31c);
            uStack_318 = 0x4479c000;
            (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x110))(iVar4,auStack_31c);
            iStack_1c = iStack_1c + 1;
            iVar5 = iVar5 + 4;
          }
        }
      }
    }
  }
  FUN_005487d0(iStack_20);
  puVar6 = auStack_25c;
  puVar7 = &uStack_2a4;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  if ((uint *)(param_1 + 0x27f4) != &uStack_2a4) {
    *(uint *)(param_1 + 0x27f4) = uStack_2a4;
    *(uint *)(param_1 + 0x27f8) = uStack_2a0;
    *(uint *)(param_1 + 0x27fc) = uStack_29c;
  }
  if ((uint *)(param_1 + 0x2800) != &uStack_298) {
    *(uint *)(param_1 + 0x2800) = uStack_298;
    *(uint *)(param_1 + 0x2804) = uStack_294;
    *(uint *)(param_1 + 0x2808) = uStack_290;
  }
  iVar4 = FUN_005035c0(param_1 + 0x2b4);
  iVar5 = 0x01CB6900;
  iStack_64 = *(int *)(iVar4 + 0x24);
  switch(*(int *)(iVar4 + 0x24)) {
  case 0:
    *(float *)(param_1 + 0x2598) = _DAT_005fd834 * param_2;
    uVar16 = 0x01C38BC0;
    if (*(int *)(iVar5 + 0x244) == 0) {
      *(float *)(param_1 + 0x2594) = _DAT_005fd830 * param_2;
      FUN_00428260(param_1,*(uint *)(param_1 + 0xc3b88 + *(int *)(param_1 + 0xc3b84) * 4),
                   0x3e4ccccd,0x497423f0,param_1 + 0xc3b98);
      switch(*(uint *)(param_1 + 0xc3b98)) {
      default:
        fVar1 = (*(float *)(param_1 + 0x25ac) * param_2) / _DAT_005fd838 +
                *(float *)(param_1 + 0x25a8);
        *(float *)(param_1 + 0x25a8) = fVar1;
        if ((float)_DAT_005eda8c < fVar1) goto LAB_00582605;
        iVar5 = FUN_004ce100((float *)(param_1 + 0x20),0x41400000);
        if (iVar5 == 0) {
          iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          fStack_160 = *(float *)(iVar5 + 0x20) - *(float *)(param_1 + 0x20);
          afStack_15c[0] = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24);
          afStack_15c[1] = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28);
          afStack_dc[0] = fStack_160;
          afStack_138[(uint)bVar8 * -2 + 0x18] = afStack_15c[(uint)bVar8 * -2];
          afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19] =
               afStack_15c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          FUN_005838f0(afStack_138 + 0x17);
          uStack_d0 = afStack_15c[2];
          afStack_138[(uint)bVar8 * -2 + 0x1b] = afStack_15c[(uint)bVar8 * -2 + 3];
          afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c] =
               afStack_15c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          fStack_14 = (float)FUN_0040d0c0(fStack_cc - *(float *)(param_1 + 0x34));
          *(float *)(param_1 + 0x2578) = fStack_14;
          fStack_2c = *(float *)(param_1 + 0x2578);
          fStack_4c = *(float *)(param_1 + 0x2598);
          fStack_14 = (float)FUN_0040d0c0(fStack_2c);
          fStack_2c = fStack_14;
          fStack_38 = -fStack_4c;
          fStack_50 = fStack_38;
          if ((fStack_38 <= fStack_14) && (fStack_38 = fStack_14, fStack_4c < fStack_14)) {
            fStack_38 = fStack_4c;
          }
          fVar1 = *(float *)(param_1 + 0xc3b70) - param_2;
          *(float *)(param_1 + 0x2578) = fStack_38;
          *(float *)(param_1 + 0xc3b70) = fVar1;
          if (fVar1 <= 0.0) {
            *(uint *)(param_1 + 0xc3b70) = 0;
            iVar4 = FUN_0040cfc0(0,2);
            iVar5 = param_1 + 0x2b4;
            if (iVar4 == 0) {
              FUN_00503620(iVar5,4,1);
            }
            else if (iVar4 == 1) {
              FUN_00503620(iVar5,5,1);
            }
            else if (iVar4 == 2) {
              FUN_00503620(iVar5,6,1);
            }
          }
        }
        else {
          FUN_005836a0(param_1);
        }
        break;
      case 1:
      case 2:
        *(uint *)(param_1 + 0xc3b70) = 0x40400000;
      }
    }
    else {
      *(uint *)(param_1 + 0xc3b70) = 0x40400000;
      iVar5 = FUN_0048e340(uVar16,"morphToBat");
      if (iVar5 == 0) {
        iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        fStack_13c = *(float *)(iVar5 + 0x20) - *(float *)(param_1 + 0x20);
        afStack_138[0] = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24);
        afStack_138[1] = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28);
        afStack_c4[0] = fStack_13c;
        afStack_138[(uint)bVar8 * -2 + 0x1e] = afStack_138[(uint)bVar8 * -2];
        afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f] =
             afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        FUN_005838f0(afStack_138 + 0x1d);
        uStack_10c = uStack_100;
        afStack_138[(uint)bVar8 * -2 + 0xc] = afStack_138[(uint)bVar8 * -2 + 0xf];
        afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
             afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
        fStack_14 = (float)FUN_0040d0c0(fStack_108 - *(float *)(param_1 + 0x34));
        *(float *)(param_1 + 0x2578) = fStack_14;
        fStack_24 = *(float *)(param_1 + 0x2578);
        fStack_44 = *(float *)(param_1 + 0x2598);
        fStack_14 = (float)FUN_0040d0c0(fStack_24);
        fStack_24 = fStack_14;
        fStack_40 = -fStack_44;
        fStack_54 = fStack_40;
        if ((fStack_40 <= fStack_14) && (fStack_40 = fStack_14, fStack_44 < fStack_14)) {
          fStack_40 = fStack_44;
        }
        *(float *)(param_1 + 0x2578) = fStack_40;
      }
      else {
LAB_00582605:
        FUN_00583610(param_1);
      }
    }
    break;
  case 2:
    iVar5 = FUN_0048e340(0x01C38BC0,"flyout");
    if (iVar5 != 0) {
      FUN_00503620(param_1 + 0x2b4,0,1);
    }
  }
  if ((*(int *)(0x01CB6900 + 0x244) == 0) && (iStack_64 != 2)) {
    fStack_118 = *(float *)(param_1 + 0x257c) + *(float *)(param_1 + 0x2508);
    fStack_114 = *(float *)(param_1 + 0x2580) + *(float *)(param_1 + 0x250c);
    fStack_110 = *(float *)(param_1 + 0x2584) + *(float *)(param_1 + 0x2510);
    fStack_f4 = fStack_118;
    afStack_138[(uint)bVar8 * -2 + 0x12] = afStack_138[(uint)bVar8 * -2 + 9];
    afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
         afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
    fStack_f0 = fStack_f0 - param_2 * (float)_DAT_005eda94;
    FUN_00423a60(param_1,afStack_138 + 0x11);
  }
  *(uint *)(param_1 + 0x2584) = 0;
  *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
  *(uint *)(param_1 + 0x257c) = *(uint *)(param_1 + 0x2580);
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  FUN_00424470(param_1);
  iVar5 = param_1 + 0x2b4;
  FUN_00544f00(iVar5);
  FUN_00429e90(param_1,param_2);
  fStack_14 = (float)(param_1 + 0x20);
  FUN_005afdf0(param_1 + 0x4d8dc,fStack_14,param_1 + 0x30,param_2,*(uint *)(param_1 + 0x2574),
               iVar5);
  FUN_005afdf0(param_1 + 0x8840c,fStack_14,param_1 + 0x30,param_2,*(uint *)(param_1 + 0x2574),
               iVar5);
LAB_00581f5f:
  iVar5 = FUN_005035c0(param_1 + 0x2b4);
  if ((*(int *)(iVar5 + 0x24) != 2) && (*(int *)(0x01CB6900 + 0x244) == 0)) {
    FUN_004bb8d0(0x01CB6900,param_1 + 0x25b4,
                 *(float *)(param_1 + 0x25a8) / *(float *)(param_1 + 0x25ac),0x3f000000);
    return;
  }
  return;
}
