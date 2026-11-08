// Name: FUN_00553440
// Address: 00553440
// Address Range: [[00553440, 005542b7]]
// Convention: unknown
// Signature: float * FUN_00553440(float *param_1,float *param_2,int param_3,ushort *param_4,int param_5,int param_6,int *param_7)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_00553440(float *param_1,float *param_2,int param_3,ushort *param_4,int param_5,int param_6,int *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte *puVar14;
  uint *puVar15;
  uint *puVar16;
  byte bVar17;
  int aiStackY_1160 [1013];
  uint uVar18;
  int *piVar19;
  uint uVar20;
  uint local_178;
  uint local_16c;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_148;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_124;
  uint local_118;
  uint local_114;
  uint local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  float local_cc;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_9c;
  uint local_94;
  float local_90;
  float local_8c;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  float *local_58;
  int local_54;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  float *local_38;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar17 = 0;
  if (20000 < (int)param_2) {
    _DAT_01d1d400 = "..\\core\\set.cpp";
    _DAT_01d1d404 = 0xee5;
    FUN_005030e0("CDemonSet::lightVerticies - tried to light %d vertices, but GLOBAL_VERTEX_COUNT = %d",param_2,20000);
  }
  local_38 = (float *)FUN_00483e60(DAT_00612560);
  if (local_38 == (float *)0x0) {
    iVar13 = (int)param_2 * 0x30;
    if (param_1[0x56b24] == 0.0) {
      local_38 = param_1;
      if (param_1[0x5859c] == 0.0) {
        if (param_1[0x56b26] == 0.0) {
          if (param_7 == (int *)0x0) {
            if (param_3 == 0) {
              if (0 < (int)param_2) {
                local_40 = 0;
                iVar13 = 0;
                do {
                  local_13c = *(uint *)((int)&DAT_00629014 + iVar13);
                  local_138 = *(uint *)((int)&DAT_00629018 + iVar13);
                  local_134 = *(uint *)((int)&DAT_0062901c + iVar13);
                  FUN_00553210(&stack0xfffffec4);
                  local_154 = local_148;
                  *(uint *)((int)&stack0xfffffeb0 + (uint)bVar17 * 0xfffffffe * 4) =
                       *(uint *)(&stack0xfffffebc + (uint)bVar17 * -8);
                  iVar12 = local_40;
                  *(uint *)(&stack0xfffffeb4 + (uint)bVar17 * -8 + (uint)bVar17 * -8) =
                       *(uint *)(&stack0xfffffec0 + (uint)bVar17 * -8 + (uint)bVar17 * -8);
                  FUN_00552710(param_1,&stack0xfffffeac,0,local_40,0);
                  pfVar5 = _DAT_01c51cac;
                  local_40 = iVar12 + 1;
                  *(float **)((int)&DAT_00629040 + iVar13) = _DAT_01c51cac;
                  iVar13 = iVar13 + 0x30;
                } while (local_40 < (int)param_2);
                return pfVar5;
              }
            }
            else {
              if (0 < (int)param_2) {
                local_5c = 0;
                iVar12 = 0;
                local_6c = iVar13;
                do {
                  local_118 = *(uint *)((int)&DAT_00629014 + iVar12);
                  local_114 = *(uint *)((int)&DAT_00629018 + iVar12);
                  local_110 = *(uint *)((int)&DAT_0062901c + iVar12);
                  FUN_00553210(&stack0xfffffee8);
                  iVar13 = local_5c;
                  iVar12 = iVar12 + 0x30;
                  puVar15 = (uint *)(local_5c + 0x2036428);
                  local_5c = local_5c + 0xc;
                  puVar16 = (uint *)(iVar13 + 0x203642c + (uint)bVar17 * -8);
                  *puVar15 = local_130;
                  *puVar16 = *(uint *)((int)&stack0xfffffed4 + (uint)bVar17 * 0xfffffffe * 4);
                  puVar16[(uint)bVar17 * -2 + 1] =
                       *(uint *)(&stack0xfffffed8 + (uint)bVar17 * -8 + (uint)bVar17 * -8);
                } while (iVar12 < local_6c);
              }
              if (param_6 < 1) {
                if (4000 < param_3) {
                  _DAT_01d1d400 = "..\\core\\set.cpp";
                  _DAT_01d1d404 = 0xfac;
                  FUN_005030e0("Too many normals on this packed tri list");
                  _DAT_01d1d400 = "..\\core\\set.cpp";
                  _DAT_01d1d404 = 0xfae;
                  FUN_005030e0("Need more normals for packed models");
                }
                iVar13 = 0;
                if (0 < param_3) {
                  pfVar5 = (float *)&DAT_0202a8a8;
                  puVar7 = param_4;
                  do {
                    iVar9 = (uint)*puVar7 * 0xc;
                    local_94 = (uint)puVar7[2];
                    iVar8 = (uint)puVar7[1] * 0xc;
                    local_24 = *(int *)(iVar8 + 0x2036428) - *(int *)(iVar9 + 0x2036428);
                    local_18 = *(int *)(iVar8 + 0x203642c) - *(int *)(iVar9 + 0x203642c);
                    iVar10 = local_94 * 0xc;
                    iVar12 = *(int *)(iVar10 + 0x2036428) - *(int *)(iVar8 + 0x2036428);
                    local_a8 = (float)(*(int *)(iVar8 + 0x2036430) - *(int *)(iVar9 + 0x2036430));
                    local_a4 = (float)iVar12;
                    local_1c = *(int *)(iVar10 + 0x203642c) - *(int *)(iVar8 + 0x203642c);
                    local_ac = (float)local_18;
                    local_20 = *(int *)(iVar10 + 0x2036430) - *(int *)(iVar8 + 0x2036430);
                    local_9c = (float)local_20;
                    local_44 = local_ac * local_9c - (float)local_1c * local_a8;
                    local_48 = (float)iVar12 * local_a8 - (float)local_24 * local_9c;
                    local_4c = (float)local_24 * (float)local_1c - local_a4 * local_ac;
                    local_90 = local_4c * local_4c + local_48 * local_48 + local_44 * local_44;
                    local_8c = (float)(_DAT_01cc8050 - ((int)local_90 >> 1));
                    fVar1 = local_8c * (float)_DAT_005f0b4e;
                    puVar7 = puVar7 + 9;
                    iVar13 = iVar13 + 1;
                    *pfVar5 = local_44 * fVar1;
                    pfVar5[1] = local_48 * fVar1;
                    pfVar5[2] = local_4c * fVar1;
                    pfVar5 = pfVar5 + 3;
                  } while (iVar13 < param_3);
                }
                FUN_005bfb70(&DAT_02070da8,0,(int)param_2 * 0xc);
                iVar13 = 0;
                if (0 < param_3) {
                  pfVar5 = (float *)&DAT_0202a8a8;
                  do {
                    iVar12 = (uint)*param_4 * 0xc;
                    *(float *)(&DAT_02070da8 + iVar12) =
                         *pfVar5 + *(float *)(&DAT_02070da8 + iVar12);
                    *(float *)(&DAT_02070dac + iVar12) =
                         pfVar5[1] + *(float *)(&DAT_02070dac + iVar12);
                    *(float *)(&DAT_02070db0 + iVar12) =
                         pfVar5[2] + *(float *)(&DAT_02070db0 + iVar12);
                    iVar12 = (uint)param_4[1] * 0xc;
                    *(float *)(&DAT_02070da8 + iVar12) =
                         *pfVar5 + *(float *)(&DAT_02070da8 + iVar12);
                    *(float *)(&DAT_02070dac + iVar12) =
                         pfVar5[1] + *(float *)(&DAT_02070dac + iVar12);
                    *(float *)(&DAT_02070db0 + iVar12) =
                         pfVar5[2] + *(float *)(&DAT_02070db0 + iVar12);
                    iVar12 = (uint)param_4[2] * 0xc;
                    param_4 = param_4 + 9;
                    *(float *)(&DAT_02070da8 + iVar12) =
                         *pfVar5 + *(float *)(&DAT_02070da8 + iVar12);
                    *(float *)(&DAT_02070dac + iVar12) =
                         pfVar5[1] + *(float *)(&DAT_02070dac + iVar12);
                    iVar13 = iVar13 + 1;
                    *(float *)(&DAT_02070db0 + iVar12) =
                         pfVar5[2] + *(float *)(&DAT_02070db0 + iVar12);
                    pfVar5 = pfVar5 + 3;
                  } while (iVar13 < param_3);
                }
              }
              else {
                iVar13 = 0;
                puVar7 = param_4;
                if (0 < param_3) {
                  do {
                    iVar12 = *(int *)(puVar7 + 0x12) * 0xc;
                    iVar9 = *(int *)(puVar7 + 0xc) * 0xc;
                    local_20 = *(int *)(iVar12 + 0x2036428) - *(int *)(iVar9 + 0x2036428);
                    iVar10 = *(int *)(iVar12 + 0x203642c) - *(int *)(iVar9 + 0x203642c);
                    iVar11 = *(int *)(puVar7 + 0x18) * 0xc;
                    iVar8 = *(int *)(iVar11 + 0x2036428) - *(int *)(iVar12 + 0x2036428);
                    fVar2 = (float)(*(int *)(iVar12 + 0x2036430) - *(int *)(iVar9 + 0x2036430));
                    local_c4 = (float)iVar8;
                    local_1c = *(int *)(iVar11 + 0x203642c) - *(int *)(iVar12 + 0x203642c);
                    local_18 = *(int *)(iVar11 + 0x2036430) - *(int *)(iVar12 + 0x2036430);
                    local_cc = (float)iVar10;
                    local_bc = (float)local_18;
                    fVar1 = (float)iVar10 * local_bc - (float)local_1c * fVar2;
                    fVar4 = (float)iVar8 * fVar2 - (float)local_20 * local_bc;
                    fVar3 = (float)local_20 * (float)local_1c - local_c4 * local_cc;
                    local_b8 = fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1;
                    local_b4 = (float)(_DAT_01cc8050 - ((int)local_b8 >> 1));
                    fVar2 = local_b4 * (float)_DAT_005f0b4e;
                    *(float *)(puVar7 + 4) = fVar1 * fVar2;
                    *(float *)(puVar7 + 6) = fVar4 * fVar2;
                    *(float *)(puVar7 + 8) = fVar3 * fVar2;
                    if (param_6 == 4) {
                      puVar7 = puVar7 + 0x24;
                    }
                    else {
                      puVar7 = puVar7 + 0x1e;
                    }
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < param_3);
                }
                FUN_005bfb70(&DAT_02070da8,0,(int)param_2 * 0xc);
                iVar13 = 0;
                if (0 < param_3) {
                  do {
                    iVar12 = *(int *)(param_4 + 0xc) * 0xc;
                    pfVar5 = (float *)(param_4 + 4);
                    *(float *)(&DAT_02070da8 + iVar12) =
                         *pfVar5 + *(float *)(&DAT_02070da8 + iVar12);
                    *(float *)(&DAT_02070dac + iVar12) =
                         *(float *)(param_4 + 6) + *(float *)(&DAT_02070dac + iVar12);
                    *(float *)(&DAT_02070db0 + iVar12) =
                         *(float *)(param_4 + 8) + *(float *)(&DAT_02070db0 + iVar12);
                    iVar12 = *(int *)(param_4 + 0x12) * 0xc;
                    *(float *)(&DAT_02070da8 + iVar12) =
                         *pfVar5 + *(float *)(&DAT_02070da8 + iVar12);
                    *(float *)(&DAT_02070dac + iVar12) =
                         *(float *)(param_4 + 6) + *(float *)(&DAT_02070dac + iVar12);
                    *(float *)(&DAT_02070db0 + iVar12) =
                         *(float *)(param_4 + 8) + *(float *)(&DAT_02070db0 + iVar12);
                    iVar12 = *(int *)(param_4 + 0x18) * 0xc;
                    *(float *)(&DAT_02070da8 + iVar12) =
                         *pfVar5 + *(float *)(&DAT_02070da8 + iVar12);
                    *(float *)(&DAT_02070dac + iVar12) =
                         *(float *)(param_4 + 6) + *(float *)(&DAT_02070dac + iVar12);
                    *(float *)(&DAT_02070db0 + iVar12) =
                         *(float *)(param_4 + 8) + *(float *)(&DAT_02070db0 + iVar12);
                    if (*(int *)(param_4 + 2) == 4) {
                      iVar12 = *(int *)(param_4 + 0x1e) * 0xc;
                      *(float *)(&DAT_02070da8 + iVar12) =
                           *pfVar5 + *(float *)(&DAT_02070da8 + iVar12);
                      *(float *)(&DAT_02070dac + iVar12) =
                           *(float *)(param_4 + 6) + *(float *)(&DAT_02070dac + iVar12);
                      *(float *)(&DAT_02070db0 + iVar12) =
                           *(float *)(param_4 + 8) + *(float *)(&DAT_02070db0 + iVar12);
                    }
                    if (param_6 == 4) {
                      param_4 = param_4 + 0x24;
                    }
                    else {
                      param_4 = param_4 + 0x1e;
                    }
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < param_3);
                }
              }
              if (param_1[0x56ba6] == 0.0) {
                if (0 < (int)param_2) {
                  local_54 = 0x2036428;
                  pfVar5 = (float *)&DAT_02070da8;
                  iVar13 = 0;
                  local_58 = (float *)0x0;
                  do {
                    local_78 = pfVar5[2] * pfVar5[2] + *pfVar5 * *pfVar5 + pfVar5[1] * pfVar5[1];
                    local_74 = (float)(_DAT_01cc8050 - ((int)local_78 >> 1));
                    fVar1 = local_74 * _DAT_005f0b56;
                    *pfVar5 = *pfVar5 * fVar1;
                    pfVar5[1] = pfVar5[1] * fVar1;
                    pfVar5[2] = pfVar5[2] * fVar1;
                    local_10c = (int)ROUND(*pfVar5);
                    local_108 = (int)ROUND(pfVar5[1]);
                    local_104 = (int)ROUND(pfVar5[2]);
                    FUN_00552710(param_1,local_54,&stack0xfffffef4,iVar13,0);
                    pfVar5 = pfVar5 + 3;
                    local_58[0x18a410] = (float)_DAT_01c51cac;
                    local_58 = local_58 + 0xc;
                    iVar13 = iVar13 + 1;
                    local_54 = local_54 + 0xc;
                  } while (iVar13 < (int)param_2);
                  return local_58;
                }
              }
              else {
                iVar13 = 0;
                if (0 < (int)param_2) {
                  local_60 = 0;
                  local_38 = (float *)&DAT_02070da8;
                  local_68 = 0x2036428;
                  do {
                    if (((1.0 <= ABS(*local_38)) || (1.0 <= ABS(local_38[1]))) ||
                       (1.0 <= ABS(local_38[2]))) {
                      local_84 = local_38[2] * local_38[2] +
                                 *local_38 * *local_38 + local_38[1] * local_38[1];
                      local_80 = (float)(_DAT_01cc8050 - ((int)local_84 >> 1));
                      fVar1 = local_80 * _DAT_005f0b56;
                      *local_38 = *local_38 * fVar1;
                      local_38[1] = local_38[1] * fVar1;
                      local_38[2] = local_38[2] * fVar1;
                      local_e8 = (int)ROUND(*local_38);
                      local_e4 = (int)ROUND(local_38[1]);
                      local_e0 = (int)ROUND(local_38[2]);
                      piVar19 = &local_e8;
                      iVar12 = local_68;
                    }
                    else {
                      piVar19 = (int *)0x0;
                      iVar12 = iVar13 * 0xc + 0x2036428;
                    }
                    FUN_00552710(param_1,iVar12,piVar19,iVar13,0);
                    iVar13 = iVar13 + 1;
                    *(float **)((int)&DAT_00629040 + local_60) = _DAT_01c51cac;
                    local_38 = local_38 + 3;
                    local_68 = local_68 + 0xc;
                    local_60 = local_60 + 0x30;
                  } while (iVar13 < (int)param_2);
                }
              }
            }
          }
          else {
            if (param_1[0x56ba1] == 0.0) {
              if (0 < (int)param_2) {
                local_50 = 0;
                iVar12 = 0;
                local_70 = iVar13;
                do {
                  local_160 = *(uint *)((int)&DAT_00629014 + iVar12);
                  local_15c = *(uint *)((int)&DAT_00629018 + iVar12);
                  local_158 = *(uint *)((int)&DAT_0062901c + iVar12);
                  FUN_00553210(&stack0xfffffea0);
                  puVar15 = (uint *)(local_50 + 0x203642c + (uint)bVar17 * -8);
                  *(uint *)(local_50 + 0x2036428) = local_178;
                  *puVar15 = *(uint *)(&stack0xfffffe8c + (uint)bVar17 * -8);
                  puVar15[(uint)bVar17 * -2 + 1] =
                       *(uint *)(&stack0xfffffe90 + (uint)bVar17 * -8 + (uint)bVar17 * -8);
                  iVar12 = iVar12 + 0x30;
                  local_50 = local_50 + 0xc;
                } while (iVar12 < local_70);
              }
              iVar13 = 0;
              if (0 < (int)param_2) {
                do {
                  local_dc = ((uint)((longlong)_DAT_01c51d5c * (longlong)*param_7) >> 0x10 |
                             (int)((ulonglong)((longlong)_DAT_01c51d5c * (longlong)*param_7) >> 0x20
                                  ) << 0x10) +
                             ((uint)((longlong)_DAT_01c51d68 * (longlong)param_7[1]) >> 0x10 |
                             (int)((ulonglong)((longlong)_DAT_01c51d68 * (longlong)param_7[1]) >>
                                  0x20) << 0x10) +
                             ((uint)((longlong)_DAT_01c51d74 * (longlong)param_7[2]) >> 0x10 |
                             (int)((ulonglong)((longlong)_DAT_01c51d74 * (longlong)param_7[2]) >>
                                  0x20) << 0x10);
                  local_d8 = ((uint)((longlong)_DAT_01c51d60 * (longlong)*param_7) >> 0x10 |
                             (int)((ulonglong)((longlong)_DAT_01c51d60 * (longlong)*param_7) >> 0x20
                                  ) << 0x10) +
                             ((uint)((longlong)_DAT_01c51d6c * (longlong)param_7[1]) >> 0x10 |
                             (int)((ulonglong)((longlong)_DAT_01c51d6c * (longlong)param_7[1]) >>
                                  0x20) << 0x10) +
                             ((uint)((longlong)_DAT_01c51d78 * (longlong)param_7[2]) >> 0x10 |
                             (int)((ulonglong)((longlong)_DAT_01c51d78 * (longlong)param_7[2]) >>
                                  0x20) << 0x10);
                  local_d4 = ((uint)((longlong)_DAT_01c51d64 * (longlong)*param_7) >> 0x10 |
                             (int)((ulonglong)((longlong)_DAT_01c51d64 * (longlong)*param_7) >> 0x20
                                  ) << 0x10) +
                             ((uint)((longlong)_DAT_01c51d70 * (longlong)param_7[1]) >> 0x10 |
                             (int)((ulonglong)((longlong)_DAT_01c51d70 * (longlong)param_7[1]) >>
                                  0x20) << 0x10) +
                             ((uint)((longlong)_DAT_01c51d7c * (longlong)param_7[2]) >> 0x10 |
                             (int)((ulonglong)((longlong)_DAT_01c51d7c * (longlong)param_7[2]) >>
                                  0x20) << 0x10);
                  local_100 = ((uint)((longlong)_DAT_01d1dd18 * (longlong)local_dc) >> 0x10 |
                              (int)((ulonglong)((longlong)_DAT_01d1dd18 * (longlong)local_dc) >>
                                   0x20) << 0x10) +
                              ((uint)((longlong)_DAT_01d1dd24 * (longlong)local_d8) >> 0x10 |
                              (int)((ulonglong)((longlong)_DAT_01d1dd24 * (longlong)local_d8) >>
                                   0x20) << 0x10) +
                              ((uint)((longlong)_DAT_01d1dd30 * (longlong)local_d4) >> 0x10 |
                              (int)((ulonglong)((longlong)_DAT_01d1dd30 * (longlong)local_d4) >>
                                   0x20) << 0x10);
                  local_fc = ((uint)((longlong)_DAT_01d1dd1c * (longlong)local_dc) >> 0x10 |
                             (int)((ulonglong)((longlong)_DAT_01d1dd1c * (longlong)local_dc) >> 0x20
                                  ) << 0x10) +
                             ((uint)((longlong)_DAT_01d1dd28 * (longlong)local_d8) >> 0x10 |
                             (int)((ulonglong)((longlong)_DAT_01d1dd28 * (longlong)local_d8) >> 0x20
                                  ) << 0x10) +
                             ((uint)((longlong)_DAT_01d1dd34 * (longlong)local_d4) >> 0x10 |
                             (int)((ulonglong)((longlong)_DAT_01d1dd34 * (longlong)local_d4) >> 0x20
                                  ) << 0x10);
                  local_f8 = ((uint)((longlong)_DAT_01d1dd20 * (longlong)local_dc) >> 0x10 |
                             (int)((ulonglong)((longlong)_DAT_01d1dd20 * (longlong)local_dc) >> 0x20
                                  ) << 0x10) +
                             ((uint)((longlong)_DAT_01d1dd2c * (longlong)local_d8) >> 0x10 |
                             (int)((ulonglong)((longlong)_DAT_01d1dd2c * (longlong)local_d8) >> 0x20
                                  ) << 0x10) +
                             ((uint)((longlong)_DAT_01d1dd38 * (longlong)local_d4) >> 0x10 |
                             (int)((ulonglong)((longlong)_DAT_01d1dd38 * (longlong)local_d4) >> 0x20
                                  ) << 0x10);
                  *(int *)(&DAT_02070da8 + iVar13 * 0xc) = local_100;
                  *(int *)(&DAT_02070dac + (uint)bVar17 * -8 + iVar13 * 0xc) =
                       (&stack0xffffff04)[(uint)bVar17 * 0xfffffffe];
                  *(uint *)
                   ((int)(&DAT_02070dac + (uint)bVar17 * -8 + iVar13 * 0xc) +
                   ((uint)bVar17 * -2 + 1) * 4) =
                       *(uint *)
                        ((int)&stack0xffffff08 + (uint)bVar17 * -8 + (uint)bVar17 * -8);
                  iVar13 = iVar13 + 1;
                  param_7 = param_7 + 3;
                } while (iVar13 < (int)param_2);
              }
            }
            else {
              iVar13 = 0;
              if (0 < (int)param_2) {
                do {
                  *(int *)(&DAT_02070da8 + iVar13 * 0xc) = *param_7;
                  *(int *)(&DAT_02070dac + (uint)bVar17 * -8 + iVar13 * 0xc) =
                       param_7[(uint)bVar17 * -2 + 1];
                  *(int *)((int)(&DAT_02070dac + (uint)bVar17 * -8 + iVar13 * 0xc) +
                          ((uint)bVar17 * -2 + 1) * 4) =
                       (param_7 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
                  iVar13 = iVar13 + 1;
                  param_7 = param_7 + 3;
                } while (iVar13 < (int)param_2);
              }
            }
            local_38 = param_2;
            if (0 < (int)param_2) {
              iVar12 = 0x2036428;
              local_64 = 0;
              iVar13 = 0;
              puVar14 = &DAT_02070da8;
              do {
                iVar8 = iVar13 + 1;
                FUN_00552710(param_1,iVar12,puVar14,iVar13,0);
                iVar12 = iVar12 + 0xc;
                *(float **)((int)&DAT_00629040 + local_64) = _DAT_01c51cac;
                iVar13 = iVar8;
                puVar14 = puVar14 + 0xc;
                local_64 = local_64 + 0x30;
              } while (iVar8 < (int)param_2);
              return param_2;
            }
          }
        }
        else if (0 < (int)param_2) {
          local_3c = 0;
          iVar13 = 0;
          do {
            local_f4 = *(uint *)((int)&DAT_00629014 + iVar13);
            local_f0 = *(uint *)((int)&DAT_00629018 + iVar13);
            local_ec = *(uint *)((int)&DAT_0062901c + iVar13);
            FUN_00553210(&stack0xffffff0c);
            iVar12 = local_3c;
            uVar20 = 0;
            uVar18 = 0;
            local_16c = local_124;
            *(uint *)((int)&stack0xfffffe98 + (uint)bVar17 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xfffffee0 + (uint)bVar17 * -8);
            *(uint *)(&stack0xfffffe9c + (uint)bVar17 * -8 + (uint)bVar17 * -8) =
                 *(uint *)(&stack0xfffffee4 + (uint)bVar17 * -8 + (uint)bVar17 * -8);
            FUN_00552710(param_1,&stack0xfffffe94,uVar18,iVar12,uVar20);
            pfVar5 = _DAT_01c51cac;
            local_3c = local_3c + 1;
            *(float **)((int)&DAT_00629040 + iVar13) = _DAT_01c51cac;
            iVar13 = iVar13 + 0x30;
          } while (local_3c < (int)param_2);
          return pfVar5;
        }
      }
      else if (0 < (int)param_2) {
        pfVar5 = (float *)0x0;
        do {
          pfVar5[0x18a40d] = param_1[0x5859d];
          pfVar5[0x18a40e] = param_1[0x5859e];
          pfVar6 = pfVar5 + 0xc;
          pfVar5[0x18a40f] = param_1[0x5859f];
          pfVar5 = pfVar6;
        } while ((int)pfVar6 < iVar13);
        return pfVar6;
      }
    }
    else {
      if (_DAT_02026344 == 0) {
        pfVar5 = param_1;
        if (param_1[0x56b24] == 2.8026e-45) {
          iVar13 = 0;
          if (0 < (int)param_2) {
            iVar12 = 0;
            do {
              *(uint *)((int)&DAT_00629040 + iVar12) = 0;
              pfVar5 = (float *)FUN_00552710(param_1,param_5,0,iVar13,1);
              iVar13 = iVar13 + 1;
              param_5 = param_5 + 0xc;
              iVar12 = iVar12 + 0x30;
            } while (iVar13 < (int)param_2);
          }
        }
        else if (param_1[0x56b24] == 4.2039e-45) {
          if (0 < (int)param_2) {
            pfVar5 = (float *)0x0;
            do {
              pfVar5[0x18a40d] = param_1[0x56ba7];
              pfVar5[0x18a40e] = param_1[0x56ba8];
              pfVar6 = pfVar5 + 0xc;
              pfVar5[0x18a40f] = param_1[0x56ba9];
              pfVar5[0x18a410] = 0.0;
              pfVar5 = pfVar6;
            } while ((int)pfVar6 < iVar13);
            _DAT_01c51cac = (float *)0x0;
            return pfVar6;
          }
        }
        else if (0 < (int)param_2) {
          pfVar5 = (float *)0x0;
          do {
            pfVar6 = pfVar5 + 0xc;
            pfVar5[0x18a40d] = 9.18341e-41;
            pfVar5[0x18a40e] = 9.18341e-41;
            pfVar5[0x18a40f] = 9.18341e-41;
            pfVar5[0x18a410] = 0.0;
            pfVar5 = pfVar6;
          } while ((int)pfVar6 < iVar13);
          _DAT_01c51cac = (float *)0x0;
          return pfVar6;
        }
        _DAT_01c51cac = (float *)0x0;
        return pfVar5;
      }
      if (0 < (int)param_2) {
        pfVar5 = (float *)0x0;
        do {
          param_1 = pfVar5 + 0xc;
          pfVar5[0x18a40d] = 0.0;
          pfVar5[0x18a40e] = 0.0;
          pfVar5[0x18a40f] = 0.0;
          pfVar5[0x18a410] = 0.0;
          pfVar5 = param_1;
        } while ((int)param_1 < iVar13);
      }
      _DAT_01c51cac = (float *)0x0;
      local_38 = param_1;
    }
  }
  return local_38;
}
