// Name: FUN_00559f80
// Address: 00559f80
// Address Range: [[00559f80, 0055b1d5]]
// Convention: unknown
// Signature: undefined4 FUN_00559f80(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00559f80(int *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  byte *puVar4;
  byte *puVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  byte *puVar11;
  uint *puVar12;
  float *pfVar13;
  float *pfVar14;
  int *piVar15;
  uint *puVar16;
  uint *puVar17;
  byte bVar18;
  float10 fVar19;
  float afStackY_1188 [883];
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  int aiStack_2dc [24];
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  byte auStack_270 [4];
  uint uStack_26c;
  uint uStack_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  uint auStack_248 [6];
  uint uStack_230;
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200 [6];
  uint auStack_1e8 [6];
  float afStack_1d0 [6];
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float afStack_19c [5];
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  uint uStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  int iStack_130;
  uint uStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  float fStack_11c;
  float afStack_118 [4];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float afStack_ec [3];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  uint local_cc;
  int iStack_c8;
  uint uStack_c4;
  uint local_c0;
  float *pfStack_bc;
  float fStack_b8;
  int *piStack_a8;
  int iStack_a4;
  byte *puStack_a0;
  int iStack_9c;
  int *piStack_98;
  float fStack_94;
  uint uStack_90;
  uint uStack_8c;
  int iStack_88;
  int iStack_84;
  float fStack_80;
  float fStack_7c;
  uint local_6c;
  float fStack_68;
  int iStack_64;
  uint uStack_60;
  uint uStack_5c;
  int iStack_58;
  float *pfStack_54;
  float fStack_50;
  int iStack_40;
  uint *puStack_3c;
  float *pfStack_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar18 = 0;
  local_cc = 0;
  if (param_2 == 0) {
    if (param_1[0x56bae] < 0) {
      FUN_0054f0d0(param_1,0);
    }
    return 1;
  }
  if (param_1[0x56bae] < 0) {
    param_1[0x56bb2] = -1;
    param_1[0x56bb3] = 0;
    param_3 = 1;
  }
  else if (1 < param_3) goto LAB_00559fef;
  if (0.0 < (float)param_1[0x56bb3]) {
    fVar8 = (float)param_1[0x56bb3] - *(float *)(0x01CCF390 + 0x294);
    param_1[0x56bb3] = (int)fVar8;
    if (0.0 < fVar8) {
      if ((-1 < param_1[0x56bb2]) && (param_1[0x56bb2] != param_1[0x56bae])) {
        FUN_0054f0d0(param_1,param_1[0x56bb2]);
        return 1;
      }
      return 0;
    }
    param_3 = 1;
  }
LAB_00559fef:
  piVar15 = DAT_00612560;
  param_1[0x56bb3] = 0;
  local_c0 = _DAT_01c50948;
  _DAT_01c50948 = 0;
  local_6c = FUN_00483e60(piVar15);
  FUN_00483e40(DAT_00612560,0);
  FUN_00483c10(DAT_00612560,0,0,0x40,0x30);
  (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))(param_2);
  iStack_18 = 0;
  piStack_34 = aiStack_2dc;
  pfVar13 = local_200;
  pfVar14 = &fStack_218;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar14 = *pfVar13;
    pfVar13 = pfVar13 + (uint)bVar18 * -2 + 1;
    pfVar14 = pfVar14 + (uint)bVar18 * -2 + 1;
  }
  do {
    FUN_00420570(&fStack_218,iStack_18);
    fStack_e0 = fStack_f8;
    afStack_118[(uint)bVar18 * -2 + 0xf] = afStack_118[(uint)bVar18 * -2 + 9];
    afStack_118[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10] =
         afStack_118[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
    *piStack_34 = (int)ROUND(fStack_e0 * _DAT_00605120);
    piStack_34[1] = (int)ROUND(fStack_dc * _DAT_00605120);
    piStack_34[2] = (int)ROUND(fStack_d8 * _DAT_00605120);
    iStack_18 = iStack_18 + 1;
    piStack_34 = piStack_34 + 3;
  } while (iStack_18 < 8);
  fStack_140 = fStack_218 + fStack_20c;
  fStack_13c = fStack_214 + fStack_208;
  fStack_138 = fStack_210 + fStack_204;
  fStack_164 = fStack_218 + fStack_20c;
  afStack_19c[(uint)bVar18 * -2 + 0xf] = afStack_19c[(uint)bVar18 * -2 + 0x18];
  afStack_19c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10] =
       afStack_19c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x19];
  fStack_170 = fStack_164 * _DAT_005f0fdd;
  fStack_16c = fStack_160 * _DAT_005f0fdd;
  fStack_168 = fStack_15c * _DAT_005f0fdd;
  fStack_104 = fStack_164 * _DAT_005f0fdd;
  afStack_118[(uint)bVar18 * -2 + 6] = afStack_19c[(uint)bVar18 * -2 + 0xc];
  afStack_118[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
       afStack_19c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
  iStack_27c = (int)ROUND(fStack_104 * _DAT_00605120);
  iStack_278 = (int)ROUND(fStack_100 * _DAT_00605120);
  iStack_274 = (int)ROUND(fStack_fc * _DAT_00605120);
  puVar4 = &DAT_00622fdc;
  do {
    iVar9 = *(int *)(puVar4 + 0x18);
    puVar5 = puVar4 + 0x48;
    *(int *)(puVar4 + 0x14) =
         aiStack_2dc[iVar9 * 3 + 1] * *(int *)(puVar4 + 0xc) +
         *(int *)(puVar4 + 8) * aiStack_2dc[iVar9 * 3] +
         *(int *)(puVar4 + 0x10) * aiStack_2dc[iVar9 * 3 + 2];
    puVar4 = puVar5;
  } while (puVar5 != &DAT_0062318c);
  if (param_3 == 0) {
    fStack_14 = (float)(*param_1 * 10);
    fVar19 = (float10)(int)fStack_14 * (float10)*(float *)(0x01CCF390 + 0x294);
    FUN_005c03a0();
    iStack_c8 = (int)ROUND(fVar19);
    if (iStack_c8 < 3) {
      iStack_c8 = 3;
    }
    if (*param_1 < iStack_c8) {
      iStack_c8 = *param_1;
    }
    fVar8 = (float)param_1[0x56bb0] - *(float *)(0x01CCF390 + 0x294);
    param_1[0x56bb0] = (int)fVar8;
    if (fVar8 <= 0.0) {
      param_1[0x56baf] = -1;
      param_1[0x56bb0] = 0;
    }
  }
  else {
    iStack_c8 = *param_1;
    param_1[0x56baf] = -1;
    _DAT_020b28ec = 0;
    param_1[0x56bb0] = 0;
  }
  (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))(param_2);
  pfVar13 = afStack_1d0;
  pfVar14 = &fStack_1b8;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar14 = *pfVar13;
    pfVar13 = pfVar13 + (uint)bVar18 * -2 + 1;
    pfVar14 = pfVar14 + (uint)bVar18 * -2 + 1;
  }
  fStack_14 = (float)FUN_00421620(&fStack_1b8);
  pfVar13 = &fStack_1a0;
  fStack_68 = fStack_14 * (float)_DAT_005f0fe5 + 1.0;
  pfVar14 = (float *)(param_2 + 0x24 + (uint)bVar18 * -8);
  fStack_1a0 = *(float *)(param_2 + 0x20);
  afStack_19c[(uint)bVar18 * -2] = *pfVar14;
  afStack_19c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] = pfVar14[(uint)bVar18 * -2 + 1];
  afStack_19c[0] = afStack_19c[0] + _DAT_005f0fed;
  uVar6 = FUN_0055c060(param_1,pfVar13);
  fStack_158 = fStack_1b8 + fStack_1ac;
  fStack_154 = fStack_1b4 + fStack_1a8;
  fStack_150 = fStack_1b0 + fStack_1a4;
  fStack_11c = fStack_1b8 + fStack_1ac;
  afStack_118[(uint)bVar18 * -2] = afStack_19c[(uint)bVar18 * -2 + 0x12];
  afStack_118[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
       afStack_19c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x13];
  uStack_c4 = uVar6;
  pfVar13 = afStack_118 + 0xb;
  afStack_118[2] = fStack_11c * _DAT_005f0fdd;
  afStack_118[3] = afStack_118[0] * _DAT_005f0fdd;
  fStack_108 = afStack_118[1] * _DAT_005f0fdd;
  afStack_ec[0] = fStack_11c * _DAT_005f0fdd;
  afStack_118[(uint)bVar18 * -2 + 0xc] = afStack_118[(uint)bVar18 * -2 + 3];
  afStack_118[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd] =
       afStack_118[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
  FUN_00408b40(param_2,pfVar13);
  fStack_14c = afStack_19c[2];
  afStack_19c[(uint)bVar18 * -2 + 0x15] = afStack_19c[(uint)bVar18 * -2 + 3];
  afStack_19c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x16] =
       afStack_19c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
  if (&fStack_1a0 != afStack_19c + 0x14) {
    fStack_1a0 = fStack_14c;
    afStack_19c[0] = fStack_148;
    afStack_19c[1] = (float)uStack_144;
  }
  if (uStack_c4 != _DAT_020b28f0) {
    iStack_c8 = *param_1;
    param_3 = 1;
    param_1[0x56baf] = -1;
    _DAT_020b28ec = 0;
    param_1[0x56bb0] = 0;
  }
  _DAT_020b28f0 = uStack_c4;
  _DAT_0269c7ac = (uint)(uStack_c4 == 0xffffffff);
  iVar9 = 0;
  do {
    iVar7 = iVar9 + 4;
    *(uint *)(&stack0xfffffc64 + iVar9) = *(uint *)(&DAT_01c4480c + iVar9);
    iVar9 = iVar7;
  } while (iVar7 != 0xc0);
  _DAT_0268ece8 = 0;
  iStack_30 = 0;
  fStack_b8 = _DAT_0060513c * _DAT_0060513c;
  pfStack_bc = (float *)(param_2 + 0x20);
  for (iStack_20 = 0; iStack_20 < *(int *)(0x01E82168 + 0x14d164); iStack_20 = iStack_20 + 1) {
    iVar9 = *(int *)(0x01E82168 + iStack_30 + 0x14d168);
    iVar7 = (**(code **)(*(int *)(iVar9 + 0x154) + 0x48))(iVar9);
    if (((iVar7 != 0) && (iVar9 != param_2)) &&
       (fVar8 = *(float *)(iVar9 + 0x20) - *pfStack_bc,
       fVar2 = *(float *)(iVar9 + 0x24) - pfStack_bc[1],
       fVar1 = *(float *)(iVar9 + 0x28) - pfStack_bc[2],
       fVar1 * fVar1 + fVar2 * fVar2 + fVar8 * fVar8 <= fStack_b8)) {
      *(int *)(&DAT_0268ecec + _DAT_0268ece8 * 4) = iVar9;
      (**(code **)(*(int *)(iVar9 + 0x154) + 0x1c))(iVar9);
      iVar7 = _DAT_0268ece8 * 0x18;
      puVar12 = auStack_248;
      puVar16 = &uStack_230;
      for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar16 = *puVar12;
        puVar12 = puVar12 + (uint)bVar18 * -2 + 1;
        puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
      }
      if ((uint *)(iVar7 + 0x2690c2c) != &uStack_230) {
        *(uint *)(iVar7 + 0x2690c2c) = uStack_230;
        *(uint *)(iVar7 + 0x2690c30) = uStack_22c;
        *(uint *)(iVar7 + 0x2690c34) = uStack_228;
      }
      if ((uint *)(iVar7 + 0x2690c38) != &uStack_224) {
        *(uint *)(iVar7 + 0x2690c38) = uStack_224;
        *(uint *)(iVar7 + 0x2690c3c) = uStack_220;
        *(uint *)(iVar7 + 0x2690c40) = uStack_21c;
      }
      _DAT_0268ece8 = _DAT_0268ece8 + 1;
    }
    iStack_30 = iStack_30 + 4;
  }
  pfStack_38 = (float *)(param_2 + 0x20);
  fStack_50 = _DAT_0060513c * _DAT_0060513c;
  fStack_7c = _DAT_00605138 * _DAT_00605138;
  piStack_a8 = param_1 + 1;
  while ((0 < iStack_c8 && (_DAT_020b28ec < *param_1))) {
    if (uStack_c4 == param_1[_DAT_020b28ec * 0x69 + 0x68]) {
      iStack_a4 = param_2;
      piVar15 = piStack_a8 + _DAT_020b28ec * 0x69;
      puStack_a0 = &DAT_00622fdc;
      iStack_9c = _DAT_020b28ec;
      piStack_98 = piVar15;
      if ((piVar15[0x68] == 0) ||
         (fVar8 = (float)piVar15[0x40] - *pfStack_38,
         fStack_7c <
         ((float)piVar15[0x42] - pfStack_38[2]) * ((float)piVar15[0x42] - pfStack_38[2]) +
         ((float)piVar15[0x41] - pfStack_38[1]) * ((float)piVar15[0x41] - pfStack_38[1]) +
         fVar8 * fVar8)) {
        fStack_94 = (float)(uStack_c4 ^ param_1[_DAT_020b28ec * 0x69 + 0x68]);
      }
      else {
        fVar8 = (float)FUN_0055c6f0(piVar15,pfStack_38,fStack_68);
        if (fVar8 == 0.0) {
          fStack_94 = fVar8;
        }
        else {
          FUN_004834b0(DAT_00612560,piVar15 + 0x40);
          FUN_004839b0(DAT_00612560,piVar15[0x51]);
          FUN_00483530(DAT_00612560,piVar15 + 0x43);
          uStack_90 = 0x800000ff;
          uStack_8c = 0;
          FUN_004837b0(DAT_00612560,pfStack_38);
          fStack_134 = *(float *)(param_2 + 0x30);
          uStack_12c = *(uint *)(param_2 + 0x38);
          iStack_130 = piVar15[0x44];
          piVar15 = aiStack_2dc;
          FUN_00483850(DAT_00612560,afStack_19c + 0x1a,0);
          iVar9 = 0;
          do {
            FUN_00580173(*DAT_00612560 + iVar9,piVar15);
            iVar7 = iVar9 + 0x30;
            piVar15 = piVar15 + 3;
            uVar6 = *(uint *)(iVar9 + 0x10 + *DAT_00612560);
            uStack_90 = uStack_90 & uVar6;
            uStack_8c = uStack_8c | uVar6;
            iVar9 = iVar7;
          } while (iVar7 != 0x180);
          if (((uStack_90 & 0x80000000) == 0) || ((char)uStack_90 == '\0')) {
            iVar9 = 0;
            puVar4 = puStack_a0 + 0x1b0;
            iStack_88 = 0;
            puVar5 = puStack_a0;
            do {
              *(byte **)((int)auStack_1e8 + iVar9) = puVar5;
              iVar9 = iVar9 + 4;
              iStack_88 = iStack_88 + 1;
              puVar5 = puVar5 + 0x48;
            } while (puVar5 != puVar4);
            iVar9 = 0;
            FUN_004087f0(iStack_a4);
            do {
              piVar15 = (int *)(*DAT_00612560 + iVar9);
              iVar7 = piVar15[2];
              if (0 < iVar7) {
                iVar10 = iVar7 + 0x80;
                *piVar15 = (int)(((longlong)*piVar15 * (longlong)iVar10) / (longlong)iVar7);
                piVar15[1] = (int)(((longlong)piVar15[1] * (longlong)iVar10) / (longlong)piVar15[2])
                ;
                piVar15[2] = iVar10;
                FUN_00507b50(piVar15);
              }
              iVar9 = iVar9 + 0x30;
            } while (iVar9 != 0x180);
            iVar9 = 0;
            fStack_3a0 = 1.0;
            do {
              if ((*(byte *)(*DAT_00612560 + iVar9 + 0x13) & 0x80) != 0) {
                dVar3 = _DAT_005f0ffd;
                if (0 < *(int *)(*DAT_00612560 + iVar9 + 8)) {
                  dVar3 = _DAT_005f0ff5;
                }
                fStack_3a0 = fStack_3a0 * (float)dVar3;
              }
              iVar9 = iVar9 + 0x30;
            } while (iVar9 != 0x180);
            iStack_1c = 0;
            iStack_84 = 0;
            if (0 < _DAT_0268ece8) {
              iStack_28 = 0;
              puStack_3c = (uint *)(&DAT_020b28f4 + iStack_9c * 0x3000);
              iStack_24 = 0x2690c2c;
              pfStack_54 = (float *)(piStack_98 + 0x40);
              do {
                iStack_64 = *(int *)(&DAT_0268ecec + iStack_28);
                fVar8 = *(float *)(iStack_64 + 0x20) - *pfStack_54;
                fVar2 = *(float *)(iStack_64 + 0x24) - pfStack_54[1];
                fVar1 = *(float *)(iStack_64 + 0x28) - pfStack_54[2];
                if (fVar1 * fVar1 + fVar2 * fVar2 + fVar8 * fVar8 <= fStack_50) {
                  FUN_004087b0(iStack_64);
                  uStack_60 = 0x800000ff;
                  uStack_5c = 0;
                  iStack_58 = 0;
                  iStack_2c = 0x180;
                  iStack_40 = iStack_24;
                  do {
                    FUN_00420570(iStack_40,iStack_58);
                    fStack_188 = fStack_17c;
                    afStack_19c[(uint)bVar18 * -2 + 6] = afStack_19c[(uint)bVar18 * -2 + 9];
                    iVar9 = iStack_2c;
                    afStack_19c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
                         afStack_19c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
                    iStack_128 = (int)ROUND(fStack_188 * _DAT_00605120);
                    iStack_124 = (int)ROUND(fStack_184 * _DAT_00605120);
                    iStack_120 = (int)ROUND(fStack_180 * _DAT_00605120);
                    FUN_00580173(*DAT_00612560 + iStack_2c,&iStack_128);
                    iStack_2c = iVar9 + 0x30;
                    uVar6 = *(uint *)(*DAT_00612560 + iVar9 + 0x10);
                    uStack_60 = uStack_60 & uVar6;
                    uStack_5c = uStack_5c | uVar6;
                    iStack_58 = iStack_58 + 1;
                  } while (iStack_58 < 8);
                  FUN_004087f0(iStack_64);
                  if (((uStack_60 & 0x80000000) == 0) || ((char)uStack_60 == '\0')) {
                    if (iStack_84 == 0) {
                      puVar12 = puStack_3c;
                      puVar16 = (uint *)&DAT_020af8ec;
                      for (iVar9 = 0xc00; iVar9 != 0; iVar9 = iVar9 + -1) {
                        *puVar16 = *puVar12;
                        puVar12 = puVar12 + (uint)bVar18 * -2 + 1;
                        puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
                      }
                      for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                        *(byte *)puVar16 = *(byte *)puVar12;
                        puVar12 = (uint *)((int)puVar12 + (uint)bVar18 * -2 + 1);
                        puVar16 = (uint *)((int)puVar16 + (uint)bVar18 * -2 + 1);
                      }
                      puVar11 = &DAT_020af8ec;
                      iStack_84 = 1;
                      iVar9 = 0;
                      do {
                        *(byte **)(&DAT_01c4480c + iVar9) = puVar11;
                        iVar9 = iVar9 + 4;
                        puVar11 = puVar11 + 0x100;
                      } while (iVar9 != 0xc0);
                      FUN_00483d80(DAT_00612560,1);
                    }
                    uStack_26c = 4;
                    FUN_00483e20(DAT_00612560,(uStack_5c & 0x80000000) != 0);
                    uStack_258 = 8;
                    uStack_254 = 0xc;
                    uStack_250 = 0xe;
                    uStack_24c = 10;
                    FUN_00481b80(DAT_00612560,auStack_270);
                    uStack_258 = 9;
                    uStack_254 = 0xb;
                    uStack_250 = 0xf;
                    uStack_24c = 0xd;
                    FUN_00481b80(DAT_00612560,auStack_270);
                    uStack_254 = 9;
                    uStack_250 = 0xd;
                    uStack_258 = 8;
                    uStack_24c = 0xc;
                    FUN_00481b80(DAT_00612560,auStack_270);
                    uStack_250 = 0xf;
                    uStack_258 = 10;
                    uStack_254 = 0xe;
                    uStack_24c = 0xb;
                    FUN_00481b80(DAT_00612560,auStack_270);
                    uStack_258 = 8;
                    uStack_24c = 9;
                    uStack_254 = 10;
                    uStack_250 = 0xb;
                    FUN_00481b80(DAT_00612560,auStack_270);
                    uStack_258 = 0xc;
                    uStack_254 = 0xd;
                    uStack_250 = 0xf;
                    uStack_24c = 0xe;
                    FUN_00481b80(DAT_00612560,auStack_270);
                  }
                }
                iStack_28 = iStack_28 + 4;
                iStack_24 = iStack_24 + 0x18;
                iStack_1c = iStack_1c + 1;
              } while (iStack_1c < _DAT_0268ece8);
            }
            FUN_00483d80(DAT_00612560,0);
            if (iStack_84 == 0) {
              puVar11 = &DAT_020b28f4 + iStack_9c * 0x3000;
              iVar9 = 0;
              do {
                *(byte **)(&DAT_01c4480c + iVar9) = puVar11;
                iVar9 = iVar9 + 4;
                puVar11 = puVar11 + 0x100;
              } while (iVar9 != 0xc0);
            }
            FUN_00483d80(DAT_00612560,1);
            FUN_00483e20(DAT_00612560,(uStack_8c & 0x80000000) != 0);
            fStack_80 = 0.0;
            if (0 < iStack_88) {
              iVar9 = iStack_88 * 4;
              iVar7 = 0;
              do {
                iVar10 = FUN_00481db0(DAT_00612560,*(uint *)((int)auStack_1e8 + iVar7));
                iVar7 = iVar7 + 4;
                fStack_80 = (float)((int)fStack_80 + iVar10);
              } while (iVar7 < iVar9);
            }
            if (*(int *)(0x01CCF390 + 0x204) != 0) {
              puVar12 = (uint *)(iStack_9c * 0x3000 + 0x23a08f4);
              iVar9 = 0;
              do {
                iVar10 = iVar9 + 4;
                puVar16 = *(uint **)(&DAT_01c4480c + iVar9);
                puVar17 = puVar12;
                for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *puVar17 = *puVar16;
                  puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
                  puVar17 = puVar17 + (uint)bVar18 * -2 + 1;
                }
                for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(byte *)puVar17 = *(byte *)puVar16;
                  puVar16 = (uint *)((int)puVar16 + (uint)bVar18 * -2 + 1);
                  puVar17 = (uint *)((int)puVar17 + (uint)bVar18 * -2 + 1);
                }
                *(uint **)(&DAT_01c4480c + iVar9) = puVar12;
                puVar12 = puVar12 + 0x40;
                iVar9 = iVar10;
              } while (iVar10 != 0xc0);
              iVar9 = 0;
              puVar4 = puStack_a0;
              if (0 < iStack_88) {
                do {
                  FUN_00481c00(DAT_00612560,puVar4);
                  iVar9 = iVar9 + 1;
                  puVar4 = puVar4 + 0x48;
                } while (iVar9 < iStack_88);
              }
            }
            FUN_00483e20(DAT_00612560,1);
            FUN_00483d80(DAT_00612560,0);
            fStack_14 = fStack_80;
            fStack_94 = (float)(int)fStack_80 * fStack_3a0;
          }
          else {
            FUN_004087f0(iStack_a4);
            fStack_94 = 0.0;
          }
        }
      }
      fStack_3a8 = fStack_94;
    }
    else {
      fStack_3a8 = -99999.9;
    }
    if ((param_3 == 0) && (0.0 < fStack_3a8)) {
      if (_DAT_020b28ec == param_1[0x56bae]) {
        fStack_3a8 = fStack_3a8 * (float)_DAT_005f1005;
      }
      if (_DAT_020b28ec == param_1[0x56baf]) {
        fStack_3a8 = fStack_3a8 * (float)_DAT_005f100d;
      }
    }
    *(float *)(&DAT_0268e900 + _DAT_020b28ec * 4) = fStack_3a8;
    iStack_c8 = iStack_c8 + -1;
    _DAT_020b28ec = _DAT_020b28ec + 1;
  }
  iVar9 = 0;
  do {
    iVar7 = iVar9 + 4;
    *(uint *)(&DAT_01c4480c + iVar9) = *(uint *)(&stack0xfffffc64 + iVar9);
    iVar9 = iVar7;
  } while (iVar7 != 0xc0);
  thunk_FUN_00509210(DAT_00612560);
  FUN_00483e40(DAT_00612560,local_6c);
  _DAT_01c50948 = local_c0;
  if (*param_1 <= _DAT_020b28ec) {
    iVar9 = -1;
    iVar7 = 0;
    fStack_3a4 = -1.0;
    if (0 < *param_1) {
      iVar10 = 0;
      do {
        if (fStack_3a4 < *(float *)(&DAT_0268e900 + iVar10)) {
          fStack_3a4 = *(float *)(&DAT_0268e900 + iVar10);
          iVar9 = iVar7;
        }
        iVar7 = iVar7 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar7 < *param_1);
    }
    if (-1 < iVar9) {
      if ((param_1[0x56bae] < 0) || (1 < param_3 || iVar9 != param_1[0x56bae] && 0.0 < fStack_3a4))
      {
        param_1[0x56b97] = _DAT_0269c7ac;
        FUN_0054f0d0(param_1,iVar9);
        local_cc = 1;
      }
    }
    _DAT_020b28ec = 0;
  }
  return local_cc;
}
