// Name: core_set.cpp_CDemonSet_lightVerticies_FUN_00553440
// Address: 00553440
// Address Range: [[00553440, 005542b7]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_00553440(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_00553440(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  CVector3i *pCVar13;
  float *pfVar14;
  uint *puVar15;
  uint *puVar16;
  byte bVar17;
  int aiStackY_1160 [1013];
  CVector3i *pCVar18;
  uint local_178;
  uint local_16c;
  uint auStack_168 [4];
  uint local_158;
  uint local_154;
  uint auStack_150 [5];
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint auStack_12c [5];
  uint local_118;
  uint local_114;
  uint local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc [4];
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
  CVector3i *local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  CVector3i *local_54;
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
  if (20000 < vertex_count) {
    _DAT_01d1d400 = "..\\core\\set.cpp";
    _DAT_01d1d404 = 0xee5;
    core_main_c_FUN_005030e0("CDemonSet::lightVerticies - tried to light %d vertices, but GLOBAL_VERTEX_COUNT = %d",vertex_count,20000);
  }
  iVar5 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar5 == 0) {
    iVar5 = vertex_count * 0x30;
    if (*(int *)&this_ptr->field_0x15ac90 == 0) {
      if (*(int *)&this_ptr->field_0x161670 == 0) {
        if (*(int *)&this_ptr->field_0x15ac98 == 0) {
          if (vertex_normals == (CVector3i *)0x0) {
            if (tri_count == 0) {
              if (0 < vertex_count) {
                local_40 = 0;
                iVar5 = 0;
                do {
                  local_13c = *(uint *)((int)&DAT_00629014 + iVar5);
                  local_138 = *(uint *)((int)&DAT_00629018 + iVar5);
                  local_134 = *(uint *)((int)&DAT_0062901c + iVar5);
                  core_set_cpp_transformToWorldSpace_FUN_00553210(auStack_150 + 5);
                  local_154 = auStack_150[2];
                  auStack_150[(uint)bVar17 * -2] = auStack_150[(uint)bVar17 * -2 + 3];
                  iVar8 = local_40;
                  auStack_150[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                       auStack_150[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
                  core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                            (this_ptr,(CVector3i *)&local_154,(CVector3i *)0x0,local_40,0);
                  local_40 = iVar8 + 1;
                  *(uint *)((int)&DAT_00629040 + iVar5) = _DAT_01c51cac;
                  iVar5 = iVar5 + 0x30;
                } while (local_40 < vertex_count);
                return;
              }
            }
            else {
              if (0 < vertex_count) {
                local_5c = 0;
                iVar8 = 0;
                local_6c = iVar5;
                do {
                  local_118 = *(uint *)((int)&DAT_00629014 + iVar8);
                  local_114 = *(uint *)((int)&DAT_00629018 + iVar8);
                  local_110 = *(uint *)((int)&DAT_0062901c + iVar8);
                  core_set_cpp_transformToWorldSpace_FUN_00553210(auStack_12c + 5);
                  iVar5 = local_5c;
                  iVar8 = iVar8 + 0x30;
                  puVar15 = (uint *)(local_5c + 0x2036428);
                  local_5c = local_5c + 0xc;
                  puVar16 = (uint *)(iVar5 + 0x203642c + (uint)bVar17 * -8);
                  *puVar15 = local_130;
                  *puVar16 = auStack_12c[(uint)bVar17 * -2];
                  puVar16[(uint)bVar17 * -2 + 1] =
                       auStack_12c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
                } while (iVar8 < local_6c);
              }
              if (vertices_per_face < 1) {
                if (4000 < tri_count) {
                  _DAT_01d1d400 = "..\\core\\set.cpp";
                  _DAT_01d1d404 = 0xfac;
                  core_main_c_FUN_005030e0("Too many normals on this packed tri list");
                  _DAT_01d1d400 = "..\\core\\set.cpp";
                  _DAT_01d1d404 = 0xfae;
                  core_main_c_FUN_005030e0("Need more normals for packed models");
                }
                iVar5 = 0;
                if (0 < tri_count) {
                  pfVar14 = (float *)&DAT_0202a8a8;
                  puVar12 = face_data;
                  do {
                    iVar9 = (uint)*puVar12 * 0xc;
                    local_94 = (uint)puVar12[2];
                    iVar6 = (uint)puVar12[1] * 0xc;
                    local_24 = *(int *)(iVar6 + 0x2036428) - *(int *)(iVar9 + 0x2036428);
                    local_18 = *(int *)(iVar6 + 0x203642c) - *(int *)(iVar9 + 0x203642c);
                    iVar10 = local_94 * 0xc;
                    iVar8 = *(int *)(iVar10 + 0x2036428) - *(int *)(iVar6 + 0x2036428);
                    local_a8 = (float)(*(int *)(iVar6 + 0x2036430) - *(int *)(iVar9 + 0x2036430));
                    local_a4 = (float)iVar8;
                    local_1c = *(int *)(iVar10 + 0x203642c) - *(int *)(iVar6 + 0x203642c);
                    local_ac = (float)local_18;
                    local_20 = *(int *)(iVar10 + 0x2036430) - *(int *)(iVar6 + 0x2036430);
                    local_9c = (float)local_20;
                    local_44 = local_ac * local_9c - (float)local_1c * local_a8;
                    local_48 = (float)iVar8 * local_a8 - (float)local_24 * local_9c;
                    local_4c = (float)local_24 * (float)local_1c - local_a4 * local_ac;
                    local_90 = local_4c * local_4c + local_48 * local_48 + local_44 * local_44;
                    local_8c = (float)(_DAT_01cc8050 - ((int)local_90 >> 1));
                    fVar1 = local_8c * (float)_DAT_005f0b4e;
                    puVar12 = puVar12 + 9;
                    iVar5 = iVar5 + 1;
                    *pfVar14 = local_44 * fVar1;
                    pfVar14[1] = local_48 * fVar1;
                    pfVar14[2] = local_4c * fVar1;
                    pfVar14 = pfVar14 + 3;
                  } while (iVar5 < tri_count);
                }
                memset(&DAT_02070da8,0,vertex_count * 0xc);
                iVar5 = 0;
                if (0 < tri_count) {
                  pfVar14 = (float *)&DAT_0202a8a8;
                  do {
                    iVar8 = (uint)*(ushort *)face_data * 0xc;
                    *(float *)(&DAT_02070da8 + iVar8) = *pfVar14 + *(float *)(&DAT_02070da8 + iVar8)
                    ;
                    *(float *)(&DAT_02070dac + iVar8) =
                         pfVar14[1] + *(float *)(&DAT_02070dac + iVar8);
                    *(float *)(&DAT_02070db0 + iVar8) =
                         pfVar14[2] + *(float *)(&DAT_02070db0 + iVar8);
                    iVar8 = (uint)*(ushort *)((int)face_data + 2) * 0xc;
                    *(float *)(&DAT_02070da8 + iVar8) = *pfVar14 + *(float *)(&DAT_02070da8 + iVar8)
                    ;
                    *(float *)(&DAT_02070dac + iVar8) =
                         pfVar14[1] + *(float *)(&DAT_02070dac + iVar8);
                    *(float *)(&DAT_02070db0 + iVar8) =
                         pfVar14[2] + *(float *)(&DAT_02070db0 + iVar8);
                    iVar8 = (uint)*(ushort *)((int)face_data + 4) * 0xc;
                    face_data = (void *)((int)face_data + 0x12);
                    *(float *)(&DAT_02070da8 + iVar8) = *pfVar14 + *(float *)(&DAT_02070da8 + iVar8)
                    ;
                    *(float *)(&DAT_02070dac + iVar8) =
                         pfVar14[1] + *(float *)(&DAT_02070dac + iVar8);
                    iVar5 = iVar5 + 1;
                    *(float *)(&DAT_02070db0 + iVar8) =
                         pfVar14[2] + *(float *)(&DAT_02070db0 + iVar8);
                    pfVar14 = pfVar14 + 3;
                  } while (iVar5 < tri_count);
                }
              }
              else {
                iVar5 = 0;
                pvVar7 = face_data;
                if (0 < tri_count) {
                  do {
                    iVar8 = *(int *)((int)pvVar7 + 0x24) * 0xc;
                    iVar9 = *(int *)((int)pvVar7 + 0x18) * 0xc;
                    local_20 = *(int *)(iVar8 + 0x2036428) - *(int *)(iVar9 + 0x2036428);
                    iVar10 = *(int *)(iVar8 + 0x203642c) - *(int *)(iVar9 + 0x203642c);
                    iVar11 = *(int *)((int)pvVar7 + 0x30) * 0xc;
                    iVar6 = *(int *)(iVar11 + 0x2036428) - *(int *)(iVar8 + 0x2036428);
                    fVar2 = (float)(*(int *)(iVar8 + 0x2036430) - *(int *)(iVar9 + 0x2036430));
                    local_c4 = (float)iVar6;
                    local_1c = *(int *)(iVar11 + 0x203642c) - *(int *)(iVar8 + 0x203642c);
                    local_18 = *(int *)(iVar11 + 0x2036430) - *(int *)(iVar8 + 0x2036430);
                    local_cc = (float)iVar10;
                    local_bc = (float)local_18;
                    fVar1 = (float)iVar10 * local_bc - (float)local_1c * fVar2;
                    fVar4 = (float)iVar6 * fVar2 - (float)local_20 * local_bc;
                    fVar3 = (float)local_20 * (float)local_1c - local_c4 * local_cc;
                    local_b8 = fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1;
                    local_b4 = (float)(_DAT_01cc8050 - ((int)local_b8 >> 1));
                    fVar2 = local_b4 * (float)_DAT_005f0b4e;
                    *(float *)((int)pvVar7 + 8) = fVar1 * fVar2;
                    *(float *)((int)pvVar7 + 0xc) = fVar4 * fVar2;
                    *(float *)((int)pvVar7 + 0x10) = fVar3 * fVar2;
                    if (vertices_per_face == 4) {
                      pvVar7 = (void *)((int)pvVar7 + 0x48);
                    }
                    else {
                      pvVar7 = (void *)((int)pvVar7 + 0x3c);
                    }
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < tri_count);
                }
                memset(&DAT_02070da8,0,vertex_count * 0xc);
                iVar5 = 0;
                if (0 < tri_count) {
                  do {
                    iVar8 = *(int *)((int)face_data + 0x18) * 0xc;
                    pfVar14 = (float *)((int)face_data + 8);
                    *(float *)(&DAT_02070da8 + iVar8) = *pfVar14 + *(float *)(&DAT_02070da8 + iVar8)
                    ;
                    *(float *)(&DAT_02070dac + iVar8) =
                         *(float *)((int)face_data + 0xc) + *(float *)(&DAT_02070dac + iVar8);
                    *(float *)(&DAT_02070db0 + iVar8) =
                         *(float *)((int)face_data + 0x10) + *(float *)(&DAT_02070db0 + iVar8);
                    iVar8 = *(int *)((int)face_data + 0x24) * 0xc;
                    *(float *)(&DAT_02070da8 + iVar8) = *pfVar14 + *(float *)(&DAT_02070da8 + iVar8)
                    ;
                    *(float *)(&DAT_02070dac + iVar8) =
                         *(float *)((int)face_data + 0xc) + *(float *)(&DAT_02070dac + iVar8);
                    *(float *)(&DAT_02070db0 + iVar8) =
                         *(float *)((int)face_data + 0x10) + *(float *)(&DAT_02070db0 + iVar8);
                    iVar8 = *(int *)((int)face_data + 0x30) * 0xc;
                    *(float *)(&DAT_02070da8 + iVar8) = *pfVar14 + *(float *)(&DAT_02070da8 + iVar8)
                    ;
                    *(float *)(&DAT_02070dac + iVar8) =
                         *(float *)((int)face_data + 0xc) + *(float *)(&DAT_02070dac + iVar8);
                    *(float *)(&DAT_02070db0 + iVar8) =
                         *(float *)((int)face_data + 0x10) + *(float *)(&DAT_02070db0 + iVar8);
                    if (*(int *)((int)face_data + 4) == 4) {
                      iVar8 = *(int *)((int)face_data + 0x3c) * 0xc;
                      *(float *)(&DAT_02070da8 + iVar8) =
                           *pfVar14 + *(float *)(&DAT_02070da8 + iVar8);
                      *(float *)(&DAT_02070dac + iVar8) =
                           *(float *)((int)face_data + 0xc) + *(float *)(&DAT_02070dac + iVar8);
                      *(float *)(&DAT_02070db0 + iVar8) =
                           *(float *)((int)face_data + 0x10) + *(float *)(&DAT_02070db0 + iVar8);
                    }
                    if (vertices_per_face == 4) {
                      face_data = (void *)((int)face_data + 0x48);
                    }
                    else {
                      face_data = (void *)((int)face_data + 0x3c);
                    }
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < tri_count);
                }
              }
              if (*(int *)&this_ptr->field_0x15ae98 == 0) {
                if (0 < vertex_count) {
                  local_54 = (CVector3i *)0x2036428;
                  pfVar14 = (float *)&DAT_02070da8;
                  iVar5 = 0;
                  local_58 = 0;
                  do {
                    local_78 = pfVar14[2] * pfVar14[2] +
                               *pfVar14 * *pfVar14 + pfVar14[1] * pfVar14[1];
                    local_74 = (float)(_DAT_01cc8050 - ((int)local_78 >> 1));
                    fVar1 = local_74 * _DAT_005f0b56;
                    *pfVar14 = *pfVar14 * fVar1;
                    pfVar14[1] = pfVar14[1] * fVar1;
                    pfVar14[2] = pfVar14[2] * fVar1;
                    local_10c = (int)ROUND(*pfVar14);
                    local_108 = (int)ROUND(pfVar14[1]);
                    local_104 = (int)ROUND(pfVar14[2]);
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                              (this_ptr,local_54,(CVector3i *)&local_10c,iVar5,0);
                    pfVar14 = pfVar14 + 3;
                    *(uint *)((int)&DAT_00629040 + local_58) = _DAT_01c51cac;
                    local_58 = local_58 + 0x30;
                    iVar5 = iVar5 + 1;
                    local_54 = local_54 + 0xc;
                  } while (iVar5 < vertex_count);
                  return;
                }
              }
              else {
                iVar5 = 0;
                if (0 < vertex_count) {
                  local_60 = 0;
                  local_38 = (float *)&DAT_02070da8;
                  local_68 = (CVector3i *)0x2036428;
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
                      pCVar18 = (CVector3i *)&local_e8;
                      pCVar13 = local_68;
                    }
                    else {
                      pCVar18 = (CVector3i *)0x0;
                      pCVar13 = (CVector3i *)(iVar5 * 0xc + 0x2036428);
                    }
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                              (this_ptr,pCVar13,pCVar18,iVar5,0);
                    iVar5 = iVar5 + 1;
                    *(uint *)((int)&DAT_00629040 + local_60) = _DAT_01c51cac;
                    local_38 = local_38 + 3;
                    local_68 = local_68 + 0xc;
                    local_60 = local_60 + 0x30;
                  } while (iVar5 < vertex_count);
                }
              }
            }
          }
          else {
            if (*(int *)&this_ptr->field_0x15ae84 == 0) {
              if (0 < vertex_count) {
                local_50 = 0;
                iVar8 = 0;
                local_70 = iVar5;
                do {
                  auStack_168[2] = *(uint *)((int)&DAT_00629014 + iVar8);
                  auStack_168[3] = *(uint *)((int)&DAT_00629018 + iVar8);
                  local_158 = *(uint *)((int)&DAT_0062901c + iVar8);
                  core_set_cpp_transformToWorldSpace_FUN_00553210(auStack_168 + 2);
                  puVar15 = (uint *)(local_50 + 0x203642c + (uint)bVar17 * -8);
                  *(uint *)(local_50 + 0x2036428) = local_178;
                  *puVar15 = *(uint *)(&stack0xfffffe8c + (uint)bVar17 * -8);
                  puVar15[(uint)bVar17 * -2 + 1] =
                       *(uint *)(&stack0xfffffe90 + (uint)bVar17 * -8 + (uint)bVar17 * -8);
                  iVar8 = iVar8 + 0x30;
                  local_50 = local_50 + 0xc;
                } while (iVar8 < local_70);
              }
              iVar5 = 0;
              if (0 < vertex_count) {
                do {
                  local_dc = ((uint)((longlong)_DAT_01c51d5c * (longlong)*(int *)vertex_normals) >>
                              0x10 | (int)((ulonglong)
                                           ((longlong)_DAT_01c51d5c *
                                           (longlong)*(int *)vertex_normals) >> 0x20) << 0x10) +
                             ((uint)((longlong)_DAT_01c51d68 *
                                    (longlong)*(int *)(vertex_normals + 4)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)_DAT_01c51d68 * (longlong)*(int *)(vertex_normals + 4)
                                   ) >> 0x20) << 0x10) +
                             ((uint)((longlong)_DAT_01c51d74 *
                                    (longlong)*(int *)(vertex_normals + 8)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)_DAT_01c51d74 * (longlong)*(int *)(vertex_normals + 8)
                                   ) >> 0x20) << 0x10);
                  local_d8 = ((uint)((longlong)_DAT_01c51d60 * (longlong)*(int *)vertex_normals) >>
                              0x10 | (int)((ulonglong)
                                           ((longlong)_DAT_01c51d60 *
                                           (longlong)*(int *)vertex_normals) >> 0x20) << 0x10) +
                             ((uint)((longlong)_DAT_01c51d6c *
                                    (longlong)*(int *)(vertex_normals + 4)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)_DAT_01c51d6c * (longlong)*(int *)(vertex_normals + 4)
                                   ) >> 0x20) << 0x10) +
                             ((uint)((longlong)_DAT_01c51d78 *
                                    (longlong)*(int *)(vertex_normals + 8)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)_DAT_01c51d78 * (longlong)*(int *)(vertex_normals + 8)
                                   ) >> 0x20) << 0x10);
                  local_d4 = ((uint)((longlong)_DAT_01c51d64 * (longlong)*(int *)vertex_normals) >>
                              0x10 | (int)((ulonglong)
                                           ((longlong)_DAT_01c51d64 *
                                           (longlong)*(int *)vertex_normals) >> 0x20) << 0x10) +
                             ((uint)((longlong)_DAT_01c51d70 *
                                    (longlong)*(int *)(vertex_normals + 4)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)_DAT_01c51d70 * (longlong)*(int *)(vertex_normals + 4)
                                   ) >> 0x20) << 0x10) +
                             ((uint)((longlong)_DAT_01c51d7c *
                                    (longlong)*(int *)(vertex_normals + 8)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)_DAT_01c51d7c * (longlong)*(int *)(vertex_normals + 8)
                                   ) >> 0x20) << 0x10);
                  local_100 = ((uint)((longlong)_DAT_01d1dd18 * (longlong)local_dc) >> 0x10 |
                              (int)((ulonglong)((longlong)_DAT_01d1dd18 * (longlong)local_dc) >>
                                   0x20) << 0x10) +
                              ((uint)((longlong)_DAT_01d1dd24 * (longlong)local_d8) >> 0x10 |
                              (int)((ulonglong)((longlong)_DAT_01d1dd24 * (longlong)local_d8) >>
                                   0x20) << 0x10) +
                              ((uint)((longlong)_DAT_01d1dd30 * (longlong)local_d4) >> 0x10 |
                              (int)((ulonglong)((longlong)_DAT_01d1dd30 * (longlong)local_d4) >>
                                   0x20) << 0x10);
                  local_fc[0] = ((uint)((longlong)_DAT_01d1dd1c * (longlong)local_dc) >> 0x10 |
                                (int)((ulonglong)((longlong)_DAT_01d1dd1c * (longlong)local_dc) >>
                                     0x20) << 0x10) +
                                ((uint)((longlong)_DAT_01d1dd28 * (longlong)local_d8) >> 0x10 |
                                (int)((ulonglong)((longlong)_DAT_01d1dd28 * (longlong)local_d8) >>
                                     0x20) << 0x10) +
                                ((uint)((longlong)_DAT_01d1dd34 * (longlong)local_d4) >> 0x10 |
                                (int)((ulonglong)((longlong)_DAT_01d1dd34 * (longlong)local_d4) >>
                                     0x20) << 0x10);
                  local_fc[1] = ((uint)((longlong)_DAT_01d1dd20 * (longlong)local_dc) >> 0x10 |
                                (int)((ulonglong)((longlong)_DAT_01d1dd20 * (longlong)local_dc) >>
                                     0x20) << 0x10) +
                                ((uint)((longlong)_DAT_01d1dd2c * (longlong)local_d8) >> 0x10 |
                                (int)((ulonglong)((longlong)_DAT_01d1dd2c * (longlong)local_d8) >>
                                     0x20) << 0x10) +
                                ((uint)((longlong)_DAT_01d1dd38 * (longlong)local_d4) >> 0x10 |
                                (int)((ulonglong)((longlong)_DAT_01d1dd38 * (longlong)local_d4) >>
                                     0x20) << 0x10);
                  *(int *)(&DAT_02070da8 + iVar5 * 0xc) = local_100;
                  *(int *)(&DAT_02070dac + (uint)bVar17 * -8 + iVar5 * 0xc) =
                       local_fc[(uint)bVar17 * -2];
                  *(int *)((int)(&DAT_02070dac + (uint)bVar17 * -8 + iVar5 * 0xc) +
                          ((uint)bVar17 * -2 + 1) * 4) =
                       local_fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
                  iVar5 = iVar5 + 1;
                  vertex_normals = vertex_normals + 0xc;
                } while (iVar5 < vertex_count);
              }
            }
            else {
              iVar5 = 0;
              if (0 < vertex_count) {
                do {
                  *(uint *)(&DAT_02070da8 + iVar5 * 0xc) = *(uint *)vertex_normals;
                  *(uint *)(&DAT_02070dac + (uint)bVar17 * -8 + iVar5 * 0xc) =
                       *(uint *)(vertex_normals + (uint)bVar17 * -8 + 4);
                  *(uint *)
                   ((int)(&DAT_02070dac + (uint)bVar17 * -8 + iVar5 * 0xc) +
                   ((uint)bVar17 * -2 + 1) * 4) =
                       *(uint *)
                        (vertex_normals + (uint)bVar17 * -8 + 4 + (uint)bVar17 * -8 + 4);
                  iVar5 = iVar5 + 1;
                  vertex_normals = vertex_normals + 0xc;
                } while (iVar5 < vertex_count);
              }
            }
            if (0 < vertex_count) {
              pCVar13 = (CVector3i *)0x2036428;
              local_64 = 0;
              iVar5 = 0;
              pCVar18 = (CVector3i *)&DAT_02070da8;
              do {
                iVar8 = iVar5 + 1;
                core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                          (this_ptr,pCVar13,pCVar18,iVar5,0);
                pCVar13 = pCVar13 + 0xc;
                *(uint *)((int)&DAT_00629040 + local_64) = _DAT_01c51cac;
                iVar5 = iVar8;
                pCVar18 = pCVar18 + 0xc;
                local_64 = local_64 + 0x30;
              } while (iVar8 < vertex_count);
              return;
            }
          }
        }
        else if (0 < vertex_count) {
          local_3c = 0;
          iVar5 = 0;
          do {
            local_fc[2] = *(uint *)((int)&DAT_00629014 + iVar5);
            local_fc[3] = *(uint *)((int)&DAT_00629018 + iVar5);
            local_ec = *(uint *)((int)&DAT_0062901c + iVar5);
            core_set_cpp_transformToWorldSpace_FUN_00553210(local_fc + 2);
            iVar8 = local_3c;
            iVar6 = 0;
            pCVar18 = (CVector3i *)0x0;
            local_16c = auStack_12c[2];
            auStack_168[(uint)bVar17 * -2] = auStack_12c[(uint)bVar17 * -2 + 3];
            auStack_168[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                 auStack_12c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
            core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                      (this_ptr,(CVector3i *)&local_16c,pCVar18,iVar8,iVar6);
            local_3c = local_3c + 1;
            *(uint *)((int)&DAT_00629040 + iVar5) = _DAT_01c51cac;
            iVar5 = iVar5 + 0x30;
          } while (local_3c < vertex_count);
          return;
        }
      }
      else if (0 < vertex_count) {
        iVar8 = 0;
        do {
          *(uint *)((int)&DAT_00629034 + iVar8) = *(uint *)&this_ptr->field_0x161674;
          *(uint *)((int)&DAT_00629038 + iVar8) = *(uint *)&this_ptr->field_0x161678;
          iVar6 = iVar8 + 0x30;
          *(uint *)((int)&DAT_0062903c + iVar8) = *(uint *)&this_ptr->field_0x16167c;
          iVar8 = iVar6;
        } while (iVar6 < iVar5);
        return;
      }
    }
    else {
      if (_DAT_02026344 == 0) {
        if (*(int *)&this_ptr->field_0x15ac90 == 2) {
          iVar5 = 0;
          if (0 < vertex_count) {
            iVar8 = 0;
            do {
              *(uint *)((int)&DAT_00629040 + iVar8) = 0;
              core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                        (this_ptr,vertex_positions,(CVector3i *)0x0,iVar5,1);
              iVar5 = iVar5 + 1;
              vertex_positions = vertex_positions + 0xc;
              iVar8 = iVar8 + 0x30;
            } while (iVar5 < vertex_count);
          }
        }
        else if (*(int *)&this_ptr->field_0x15ac90 == 3) {
          if (0 < vertex_count) {
            iVar8 = 0;
            do {
              *(uint *)((int)&DAT_00629034 + iVar8) = *(uint *)&this_ptr->field_0x15ae9c
              ;
              *(uint *)((int)&DAT_00629038 + iVar8) = *(uint *)&this_ptr->field_0x15aea0
              ;
              iVar6 = iVar8 + 0x30;
              *(uint *)((int)&DAT_0062903c + iVar8) = *(uint *)&this_ptr->field_0x15aea4
              ;
              *(uint *)((int)&DAT_00629040 + iVar8) = 0;
              iVar8 = iVar6;
            } while (iVar6 < iVar5);
            _DAT_01c51cac = 0;
            return;
          }
        }
        else if (0 < vertex_count) {
          iVar8 = 0;
          do {
            iVar6 = iVar8 + 0x30;
            *(uint *)((int)&DAT_00629034 + iVar8) = 0xffff;
            *(uint *)((int)&DAT_00629038 + iVar8) = 0xffff;
            *(uint *)((int)&DAT_0062903c + iVar8) = 0xffff;
            *(uint *)((int)&DAT_00629040 + iVar8) = 0;
            iVar8 = iVar6;
          } while (iVar6 < iVar5);
          _DAT_01c51cac = 0;
          return;
        }
        _DAT_01c51cac = 0;
        return;
      }
      if (0 < vertex_count) {
        iVar8 = 0;
        do {
          iVar6 = iVar8 + 0x30;
          *(uint *)((int)&DAT_00629034 + iVar8) = 0;
          *(uint *)((int)&DAT_00629038 + iVar8) = 0;
          *(uint *)((int)&DAT_0062903c + iVar8) = 0;
          *(uint *)((int)&DAT_00629040 + iVar8) = 0;
          iVar8 = iVar6;
        } while (iVar6 < iVar5);
      }
      _DAT_01c51cac = 0;
    }
  }
  return;
}
