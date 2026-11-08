// Name: FUN_005114f0
// Address: 005114f0
// Address Range: [[005114f0, 00512014]]
// Convention: unknown
// Signature: void FUN_005114f0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005114f0(int param_1,float param_2)

{
  char cVar1;
  float fVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  uint *puVar11;
  char *pcVar12;
  uint *puVar13;
  bool bVar14;
  byte bVar15;
  float afStackY_10e4 [841];
  float *pfVar16;
  char acStack_3a4 [256];
  byte auStack_2a4 [48];
  byte auStack_274 [48];
  uint auStack_244 [3];
  float fStack_238;
  uint uStack_228;
  uint uStack_218;
  byte auStack_214 [48];
  uint auStack_1e4 [12];
  uint auStack_1b4 [12];
  uint auStack_184 [12];
  uint auStack_154 [5];
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  uint auStack_12c [6];
  uint uStack_114;
  float fStack_110;
  float fStack_104;
  float fStack_fc;
  float afStack_f8 [4];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint uStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float afStack_a8 [3];
  float fStack_9c;
  float fStack_90;
  uint uStack_8c;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  float fStack_5c;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint uStack_48;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float *pfStack_18;
  
  bVar15 = 0;
  if (1 < *(int *)(param_1 + 0x4c0)) {
    return;
  }
  bVar14 = false;
  fStack_38 = *(float *)(param_1 + 0x2dc);
  iStack_30 = 0;
  iStack_34 = 0;
  switch(*(uint *)(param_1 + 0x2d4)) {
  case 0:
    iVar6 = FUN_00491aa0(0x01C6E360,param_1 + 0x3b8);
    bVar14 = iVar6 != 0;
    if (bVar14) {
      FUN_00512020(param_1,0x3f800000,1.0 / *(float *)(param_1 + 0x2e8));
    }
    *(uint *)(param_1 + 0x2dc) = 0;
    break;
  case 1:
    iVar6 = FUN_00491aa0(0x01C6E360,param_1 + 0x354);
    bVar14 = iVar6 != 0;
    if (bVar14) {
      FUN_00512020(param_1,0,1.0 / *(float *)(param_1 + 0x2ec));
    }
    *(uint *)(param_1 + 0x2dc) = 0x3f800000;
    break;
  case 2:
    iVar6 = FUN_00491aa0(0x01C6E360,param_1 + 0x3b8);
    if (iVar6 == 0) {
      iVar6 = FUN_00491aa0(0x01C6E360,param_1 + 0x354);
      if (iVar6 != 0) {
        FUN_00512020(param_1,0,1.0 / *(float *)(param_1 + 0x2ec));
      }
    }
    else {
      FUN_00512020(param_1,0x3f800000,1.0 / *(float *)(param_1 + 0x2e8));
    }
    break;
  case 3:
    iVar6 = FUN_00491aa0(0x01C6E360,param_1 + 0x41c);
    if (iVar6 != 0) {
      *(uint *)(param_1 + 0x2d4) = 2;
      if (*(char *)(param_1 + 0x494) != '\0') {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x494);
      }
      break;
    }
    fVar2 = param_2 * *(float *)(param_1 + 0x2e4) + *(float *)(param_1 + 0x2dc);
    *(float *)(param_1 + 0x2dc) = fVar2;
    if (fVar2 <= *(float *)(param_1 + 0x2e0)) {
LAB_00511982:
      iStack_34 = 1;
      break;
    }
    *(uint *)(param_1 + 0x2dc) = *(uint *)(param_1 + 0x2e0);
    if (1.0 <= *(float *)(param_1 + 0x2dc)) {
      *(uint *)(param_1 + 0x2d4) = 1;
      if (*(int *)(param_1 + 0x4c0) != 0) {
        *(uint *)(param_1 + 0x4c0) = 2;
      }
      iStack_30 = 1;
      break;
    }
    goto LAB_00511970;
  case 4:
    iVar6 = FUN_00491aa0(0x01C6E360,param_1 + 0x41c);
    if (iVar6 != 0) {
      *(uint *)(param_1 + 0x2d4) = 2;
      if (*(char *)(param_1 + 0x494) != '\0') {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x494);
      }
      break;
    }
    fVar2 = *(float *)(param_1 + 0x2dc) - param_2 * *(float *)(param_1 + 0x2e4);
    *(float *)(param_1 + 0x2dc) = fVar2;
    if (*(float *)(param_1 + 0x2e0) <= fVar2) goto LAB_00511982;
    *(uint *)(param_1 + 0x2dc) = *(uint *)(param_1 + 0x2e0);
    if (*(float *)(param_1 + 0x2dc) <= 0.0) {
      *(uint *)(param_1 + 0x2d4) = 0;
      if (*(int *)(param_1 + 0x4c0) != 0) {
        *(uint *)(param_1 + 0x4c0) = 2;
      }
      iStack_30 = 1;
      break;
    }
LAB_00511970:
    *(uint *)(param_1 + 0x2d4) = 2;
  }
  if (*(int *)(param_1 + 0x4c8) != 0) {
    if (bVar14) {
      pcVar12 = acStack_3a4;
      pcVar10 = (char *)(param_1 + 0x4cc);
      pcVar9 = acStack_3a4;
      do {
        cVar1 = *pcVar10;
        *pcVar12 = cVar1;
        pcVar3 = pcVar9;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
joined_r0x005115d9:
      if (acStack_3a4[0] != '\0') {
        if (*pcVar9 == ';') {
          *pcVar9 = '\0';
          iVar6 = FUN_00535360(0x01ED78C8,pcVar3);
          if ((iVar6 != -1) && (iVar6 != *(int *)(0x01ED78C8 + 0x15aeb8))) {
            FUN_00540ba0(0x01ED78C8,iVar6,0x4479c000);
            *(uint *)(param_1 + 0x724) = 0;
            goto LAB_00511630;
          }
          pcVar9 = pcVar9 + 1;
          acStack_3a4[0] = *pcVar9;
          pcVar3 = pcVar9;
        }
        else {
          pcVar9 = pcVar9 + 1;
          acStack_3a4[0] = *pcVar9;
        }
        goto joined_r0x005115d9;
      }
LAB_00511630:
      iVar6 = FUN_00535360(0x01ED78C8,pcVar3);
      if ((iVar6 != -1) && (iVar6 != *(int *)(0x01ED78C8 + 0x15aeb8))) {
        FUN_00540ba0(0x01ED78C8,iVar6,0x4479c000);
        *(uint *)(param_1 + 0x724) = 0;
      }
    }
    if (iStack_30 != 0) {
      FUN_00540bc0(0x01ED78C8);
    }
  }
  if (*(float *)(param_1 + 0x2dc) != fStack_38) {
    if ((iStack_34 == 0) || (*(char *)(param_1 + 0x4a8) == '\0')) {
      FUN_00560b00(0x02CF5680,*(uint *)(param_1 + 0x4bc));
    }
    else {
      iVar6 = FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0x4bc));
      if (iVar6 == 0) {
        uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x30))(param_1,param_1 + 0x4a8);
        *(uint *)(param_1 + 0x4bc) = uVar7;
      }
    }
    fStack_3c = *(float *)(param_1 + 0x24);
    FUN_00583800(auStack_274,param_1 + 0x20,param_1 + 0x30);
    FUN_00511340(param_1);
    FUN_00583940(auStack_2a4,param_1 + 0x20,param_1 + 0x30);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    puVar11 = auStack_12c;
    puVar13 = &uStack_114;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
    }
    iStack_28 = 0;
    for (iStack_20 = 0; iStack_20 < *(int *)(0x01ED78C8 + 0x14f0a8); iStack_20 = iStack_20 + 1) {
      iVar6 = *(int *)(0x01ED78C8 + iStack_28 + 0x14f0ac);
      iVar8 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(iVar6);
      if ((iVar8 < 1) && (iVar8 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x70))(iVar6), iVar8 == 0))
      {
        if (*(int *)(param_1 + 0x510) == 0) {
          if ((*(float *)(param_1 + 0x24) < fStack_3c) &&
             (iVar8 = FUN_005127f0(param_1,iVar6), iVar8 != 0)) {
            (**(code **)(*(int *)(iVar6 + 0x154) + 0xdc))(iVar6,8,0,0xbf800000);
          }
        }
        else {
          FUN_00408bf0(param_1,iVar6 + 0x20);
          fStack_cc = fStack_9c;
          afStack_f8[(uint)bVar15 * -2 + 0xc] = afStack_f8[(uint)bVar15 * -2 + 0x18];
          afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
               afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19];
          if ((fStack_c8 <= fStack_104) && (fStack_110 + (float)_DAT_005cc28b <= fStack_c8)) {
            FUN_0041ee30(&uStack_114,afStack_f8 + 0xb);
            fVar4 = fStack_c8;
            fVar2 = fStack_cc;
            fStack_b4 = fStack_c0;
            afStack_f8[(uint)bVar15 * -2 + 0x12] = afStack_f8[(uint)bVar15 * -2 + 0xf];
            afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
                 afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
            afStack_f8[2] = fVar2 - fStack_b4;
            afStack_f8[3] = fVar4 - fStack_b0;
            fStack_e8 = fStack_c4 - fStack_ac;
            fStack_54 = fVar2 - fStack_b4;
            afStack_f8[(uint)bVar15 * -2 + 0x2a] = afStack_f8[(uint)bVar15 * -2 + 3];
            afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x2b] =
                 afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
            if ((ABS(fStack_54) <= (float)_DAT_005cc293) && (ABS(fStack_4c) <= (float)_DAT_005cc293)
               ) {
              fStack_50 = 0.0;
              FUN_0053ed80(auStack_154);
              auStack_154[0] = 0;
              iVar8 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x3c))(iVar6,auStack_154);
              if ((((iVar8 == 2) && (fStack_c8 + fStack_140 <= fStack_104)) &&
                  (fStack_110 <= fStack_c8 + fStack_13c)) &&
                 ((fVar2 = fStack_54 * fStack_54 + fStack_4c * fStack_4c,
                  fVar2 <= fStack_138 * fStack_138 && (fVar2 = SQRT(fVar2), 0.0 < fVar2)))) {
                fStack_1c = (fStack_138 + (float)_DAT_005cc29b) / fVar2;
                fStack_54 = fStack_54 * fStack_1c;
                fStack_4c = fStack_4c * fStack_1c;
                pfVar16 = afStack_f8 + 0x14;
                fStack_50 = fStack_1c * 0.0;
                fStack_78 = fStack_b4 + fStack_54;
                fStack_74 = fStack_b0 + fStack_1c * 0.0;
                fStack_70 = fStack_ac + fStack_4c;
                afStack_a8[0] = fStack_78;
                afStack_f8[(uint)bVar15 * -2 + 0x15] = afStack_f8[(uint)bVar15 * -2 + 0x21];
                afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16] =
                     afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x22];
                FUN_00408b80(param_1,pfVar16);
                fStack_90 = (float)uStack_48;
                afStack_f8[(uint)bVar15 * -2 + 0x1b] = afStack_f8[(uint)bVar15 * -2 + 0x2d];
                afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c] =
                     afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x2e];
                uStack_8c = *(uint *)(iVar6 + 0x24);
                (**(code **)(*(int *)(iVar6 + 0x154) + 0x68))(iVar6,afStack_f8 + 0x1a,iVar6 + 0x30);
              }
            }
          }
        }
      }
      iStack_28 = iStack_28 + 4;
    }
    iStack_2c = 0;
    for (iStack_24 = 0; iStack_24 < *(int *)(0x01ED78C8 + 0x14d164); iStack_24 = iStack_24 + 1) {
      iVar6 = *(int *)(0x01ED78C8 + iStack_2c + 0x14d168);
      if (param_1 == *(int *)(iVar6 + 0xdc)) {
        pfStack_18 = (float *)(iVar6 + 0x20);
        FUN_00583940(auStack_214,pfStack_18,iVar6 + 0x30);
        FUN_005833e0(auStack_214,auStack_274);
        puVar11 = auStack_1b4;
        puVar13 = auStack_1e4;
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
          puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
        }
        FUN_005833e0(auStack_1e4,auStack_2a4);
        puVar11 = auStack_184;
        puVar13 = auStack_244;
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
          puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
        }
        fStack_84 = fStack_238;
        uStack_80 = uStack_228;
        uStack_7c = uStack_218;
        fStack_6c = fStack_238;
        afStack_f8[(uint)bVar15 * -2 + 0x24] = afStack_f8[(uint)bVar15 * -2 + 0x1e];
        afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x25] =
             afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1f];
        FUN_00583b10(auStack_244);
        fVar5 = fStack_64;
        fVar4 = fStack_68;
        fVar2 = fStack_6c;
        uStack_60 = uStack_d8;
        afStack_f8[(uint)bVar15 * -2 + 0x27] = afStack_f8[(uint)bVar15 * -2 + 9];
        afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x28] =
             afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
        fStack_e4 = fVar2 - *pfStack_18;
        fStack_e0 = fVar4 - pfStack_18[1];
        fStack_dc = fVar5 - pfStack_18[2];
        fStack_fc = fVar2 - *pfStack_18;
        afStack_f8[(uint)bVar15 * -2] = afStack_f8[(uint)bVar15 * -2 + 6];
        afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
        if ((float *)(iVar6 + 0xe0) != &fStack_fc) {
          *(float *)(iVar6 + 0xe0) = fStack_fc;
          *(float *)(iVar6 + 0xe4) = afStack_f8[0];
          *(float *)(iVar6 + 0xe8) = afStack_f8[1];
        }
        *(uint *)(iVar6 + 0xec) = 0;
        *(uint *)(iVar6 + 0xf4) = 0;
        pfStack_18 = (float *)FUN_0040cfa0(fStack_5c - *(float *)(iVar6 + 0x34));
        *(float **)(iVar6 + 0xf0) = pfStack_18;
      }
      iStack_2c = iStack_2c + 4;
    }
    FUN_00512be0(param_1);
  }
  return;
}
