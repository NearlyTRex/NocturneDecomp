// Name: core_set.cpp_CDemonSet_lightVerticies_FUN_00553440
// Address: 00553440
// Address Range: [[00553440, 005542b7]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_00553440(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_00553440(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  uint *puVar17;
  CVector3i *pCVar18;
  float *pfVar19;
  byte bVar20;
  int aiStackY_1160 [1013];
  CVector3i *pCVar21;
  CVector3i local_178;
  CVector3i local_16c;
  CVector3i local_160;
  CVector3i local_154;
  CVector3i local_148;
  CVector3i local_13c;
  CVector3i local_130;
  CVector3i local_124;
  CVector3i local_118;
  CVector3i local_10c;
  int local_100;
  int local_fc [2];
  CVector3i local_f4;
  CVector3i local_e8;
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
  
  bVar20 = 0;
  if (20000 < vertex_count) {
    _DAT_01d1d400 = "..\\core\\set.cpp";
    _DAT_01d1d404 = 0xee5;
    core_main_c_FUN_005030e0("CDemonSet::lightVerticies - tried to light %d vertices, but GLOBAL_VERTEX_COUNT = %d",vertex_count,20000);
  }
  iVar9 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar9 == 0) {
    iVar9 = vertex_count * 0x30;
    if (this_ptr->lighting_quality_mode == 0) {
      if (this_ptr->mirror_lighting_cached == 0) {
        if (this_ptr->disable_directional_lighting == 0) {
          if (vertex_normals == (CVector3i *)0x0) {
            if (tri_count == 0) {
              if (0 < vertex_count) {
                local_40 = 0;
                iVar9 = 0;
                do {
                  local_13c.x = *(int *)((int)&DAT_00629014 + iVar9);
                  local_13c.y = *(int *)((int)&DAT_00629018 + iVar9);
                  local_13c.z = *(int *)((int)&DAT_0062901c + iVar9);
                  core_set_cpp_transformToWorldSpace_FUN_00553210(&local_13c,&local_148);
                  local_154.x = local_148.x;
                  *(uint *)((int)&local_154 + (uint)bVar20 * -8 + 4) =
                       *(uint *)((int)&local_148 + (uint)bVar20 * -8 + 4);
                  iVar12 = local_40;
                  *(uint *)((int)&local_154 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                       *(uint *)((int)&local_148 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
                  core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                            (this_ptr,&local_154,(CVector3i *)0x0,local_40,0);
                  local_40 = iVar12 + 1;
                  *(uint *)((int)&DAT_00629040 + iVar9) = _DAT_01c51cac;
                  iVar9 = iVar9 + 0x30;
                } while (local_40 < vertex_count);
                return;
              }
            }
            else {
              if (0 < vertex_count) {
                local_5c = 0;
                iVar12 = 0;
                local_6c = iVar9;
                do {
                  local_118.x = *(int *)((int)&DAT_00629014 + iVar12);
                  local_118.y = *(int *)((int)&DAT_00629018 + iVar12);
                  local_118.z = *(int *)((int)&DAT_0062901c + iVar12);
                  core_set_cpp_transformToWorldSpace_FUN_00553210(&local_118,&local_130);
                  iVar9 = local_5c;
                  iVar12 = iVar12 + 0x30;
                  piVar1 = (int *)(local_5c + 0x2036428);
                  local_5c = local_5c + 0xc;
                  puVar17 = (uint *)(iVar9 + 0x203642c + (uint)bVar20 * -8);
                  *piVar1 = local_130.x;
                  *puVar17 = *(uint *)((int)&local_130 + (uint)bVar20 * -8 + 4);
                  puVar17[(uint)bVar20 * -2 + 1] =
                       *(uint *)((int)&local_130 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
                } while (iVar12 < local_6c);
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
                iVar9 = 0;
                if (0 < tri_count) {
                  pfVar19 = (float *)&DAT_0202a8a8;
                  puVar16 = face_data;
                  do {
                    iVar13 = (uint)*puVar16 * 0xc;
                    local_94 = (uint)puVar16[2];
                    iVar10 = (uint)puVar16[1] * 0xc;
                    local_24 = *(int *)(iVar10 + 0x2036428) - *(int *)(iVar13 + 0x2036428);
                    local_18 = *(int *)(iVar10 + 0x203642c) - *(int *)(iVar13 + 0x203642c);
                    iVar14 = local_94 * 0xc;
                    iVar12 = *(int *)(iVar14 + 0x2036428) - *(int *)(iVar10 + 0x2036428);
                    local_a8 = (float)(*(int *)(iVar10 + 0x2036430) - *(int *)(iVar13 + 0x2036430));
                    local_a4 = (float)iVar12;
                    local_1c = *(int *)(iVar14 + 0x203642c) - *(int *)(iVar10 + 0x203642c);
                    local_ac = (float)local_18;
                    local_20 = *(int *)(iVar14 + 0x2036430) - *(int *)(iVar10 + 0x2036430);
                    local_9c = (float)local_20;
                    local_44 = local_ac * local_9c - (float)local_1c * local_a8;
                    local_48 = (float)iVar12 * local_a8 - (float)local_24 * local_9c;
                    local_4c = (float)local_24 * (float)local_1c - local_a4 * local_ac;
                    local_90 = local_4c * local_4c + local_48 * local_48 + local_44 * local_44;
                    local_8c = (float)(_DAT_01cc8050 - ((int)local_90 >> 1));
                    fVar5 = local_8c * (float)_DAT_005f0b4e;
                    puVar16 = puVar16 + 9;
                    iVar9 = iVar9 + 1;
                    *pfVar19 = local_44 * fVar5;
                    pfVar19[1] = local_48 * fVar5;
                    pfVar19[2] = local_4c * fVar5;
                    pfVar19 = pfVar19 + 3;
                  } while (iVar9 < tri_count);
                }
                memset(&DAT_02070da8,0,vertex_count * 0xc);
                iVar9 = 0;
                if (0 < tri_count) {
                  pfVar19 = (float *)&DAT_0202a8a8;
                  do {
                    iVar12 = (uint)*(ushort *)face_data * 0xc;
                    *(float *)(&DAT_02070da8 + iVar12) =
                         *pfVar19 + *(float *)(&DAT_02070da8 + iVar12);
                    *(float *)(&DAT_02070dac + iVar12) =
                         pfVar19[1] + *(float *)(&DAT_02070dac + iVar12);
                    *(float *)(&DAT_02070db0 + iVar12) =
                         pfVar19[2] + *(float *)(&DAT_02070db0 + iVar12);
                    iVar12 = (uint)*(ushort *)((int)face_data + 2) * 0xc;
                    *(float *)(&DAT_02070da8 + iVar12) =
                         *pfVar19 + *(float *)(&DAT_02070da8 + iVar12);
                    *(float *)(&DAT_02070dac + iVar12) =
                         pfVar19[1] + *(float *)(&DAT_02070dac + iVar12);
                    *(float *)(&DAT_02070db0 + iVar12) =
                         pfVar19[2] + *(float *)(&DAT_02070db0 + iVar12);
                    iVar12 = (uint)*(ushort *)((int)face_data + 4) * 0xc;
                    face_data = (void *)((int)face_data + 0x12);
                    *(float *)(&DAT_02070da8 + iVar12) =
                         *pfVar19 + *(float *)(&DAT_02070da8 + iVar12);
                    *(float *)(&DAT_02070dac + iVar12) =
                         pfVar19[1] + *(float *)(&DAT_02070dac + iVar12);
                    iVar9 = iVar9 + 1;
                    *(float *)(&DAT_02070db0 + iVar12) =
                         pfVar19[2] + *(float *)(&DAT_02070db0 + iVar12);
                    pfVar19 = pfVar19 + 3;
                  } while (iVar9 < tri_count);
                }
              }
              else {
                iVar9 = 0;
                pvVar11 = face_data;
                if (0 < tri_count) {
                  do {
                    iVar12 = *(int *)((int)pvVar11 + 0x24) * 0xc;
                    iVar13 = *(int *)((int)pvVar11 + 0x18) * 0xc;
                    local_20 = *(int *)(iVar12 + 0x2036428) - *(int *)(iVar13 + 0x2036428);
                    iVar14 = *(int *)(iVar12 + 0x203642c) - *(int *)(iVar13 + 0x203642c);
                    iVar15 = *(int *)((int)pvVar11 + 0x30) * 0xc;
                    iVar10 = *(int *)(iVar15 + 0x2036428) - *(int *)(iVar12 + 0x2036428);
                    fVar6 = (float)(*(int *)(iVar12 + 0x2036430) - *(int *)(iVar13 + 0x2036430));
                    local_c4 = (float)iVar10;
                    local_1c = *(int *)(iVar15 + 0x203642c) - *(int *)(iVar12 + 0x203642c);
                    local_18 = *(int *)(iVar15 + 0x2036430) - *(int *)(iVar12 + 0x2036430);
                    local_cc = (float)iVar14;
                    local_bc = (float)local_18;
                    fVar5 = (float)iVar14 * local_bc - (float)local_1c * fVar6;
                    fVar8 = (float)iVar10 * fVar6 - (float)local_20 * local_bc;
                    fVar7 = (float)local_20 * (float)local_1c - local_c4 * local_cc;
                    local_b8 = fVar7 * fVar7 + fVar8 * fVar8 + fVar5 * fVar5;
                    local_b4 = (float)(_DAT_01cc8050 - ((int)local_b8 >> 1));
                    fVar6 = local_b4 * (float)_DAT_005f0b4e;
                    *(float *)((int)pvVar11 + 8) = fVar5 * fVar6;
                    *(float *)((int)pvVar11 + 0xc) = fVar8 * fVar6;
                    *(float *)((int)pvVar11 + 0x10) = fVar7 * fVar6;
                    if (vertices_per_face == 4) {
                      pvVar11 = (void *)((int)pvVar11 + 0x48);
                    }
                    else {
                      pvVar11 = (void *)((int)pvVar11 + 0x3c);
                    }
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < tri_count);
                }
                memset(&DAT_02070da8,0,vertex_count * 0xc);
                iVar9 = 0;
                if (0 < tri_count) {
                  do {
                    iVar12 = *(int *)((int)face_data + 0x18) * 0xc;
                    pfVar19 = (float *)((int)face_data + 8);
                    *(float *)(&DAT_02070da8 + iVar12) =
                         *pfVar19 + *(float *)(&DAT_02070da8 + iVar12);
                    *(float *)(&DAT_02070dac + iVar12) =
                         *(float *)((int)face_data + 0xc) + *(float *)(&DAT_02070dac + iVar12);
                    *(float *)(&DAT_02070db0 + iVar12) =
                         *(float *)((int)face_data + 0x10) + *(float *)(&DAT_02070db0 + iVar12);
                    iVar12 = *(int *)((int)face_data + 0x24) * 0xc;
                    *(float *)(&DAT_02070da8 + iVar12) =
                         *pfVar19 + *(float *)(&DAT_02070da8 + iVar12);
                    *(float *)(&DAT_02070dac + iVar12) =
                         *(float *)((int)face_data + 0xc) + *(float *)(&DAT_02070dac + iVar12);
                    *(float *)(&DAT_02070db0 + iVar12) =
                         *(float *)((int)face_data + 0x10) + *(float *)(&DAT_02070db0 + iVar12);
                    iVar12 = *(int *)((int)face_data + 0x30) * 0xc;
                    *(float *)(&DAT_02070da8 + iVar12) =
                         *pfVar19 + *(float *)(&DAT_02070da8 + iVar12);
                    *(float *)(&DAT_02070dac + iVar12) =
                         *(float *)((int)face_data + 0xc) + *(float *)(&DAT_02070dac + iVar12);
                    *(float *)(&DAT_02070db0 + iVar12) =
                         *(float *)((int)face_data + 0x10) + *(float *)(&DAT_02070db0 + iVar12);
                    if (*(int *)((int)face_data + 4) == 4) {
                      iVar12 = *(int *)((int)face_data + 0x3c) * 0xc;
                      *(float *)(&DAT_02070da8 + iVar12) =
                           *pfVar19 + *(float *)(&DAT_02070da8 + iVar12);
                      *(float *)(&DAT_02070dac + iVar12) =
                           *(float *)((int)face_data + 0xc) + *(float *)(&DAT_02070dac + iVar12);
                      *(float *)(&DAT_02070db0 + iVar12) =
                           *(float *)((int)face_data + 0x10) + *(float *)(&DAT_02070db0 + iVar12);
                    }
                    if (vertices_per_face == 4) {
                      face_data = (void *)((int)face_data + 0x48);
                    }
                    else {
                      face_data = (void *)((int)face_data + 0x3c);
                    }
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < tri_count);
                }
              }
              if (this_ptr->skip_normal_normalization == 0) {
                if (0 < vertex_count) {
                  local_54 = (CVector3i *)0x2036428;
                  pfVar19 = (float *)&DAT_02070da8;
                  iVar9 = 0;
                  local_58 = 0;
                  do {
                    local_78 = pfVar19[2] * pfVar19[2] +
                               *pfVar19 * *pfVar19 + pfVar19[1] * pfVar19[1];
                    local_74 = (float)(_DAT_01cc8050 - ((int)local_78 >> 1));
                    fVar5 = local_74 * _DAT_005f0b56;
                    *pfVar19 = *pfVar19 * fVar5;
                    pfVar19[1] = pfVar19[1] * fVar5;
                    pfVar19[2] = pfVar19[2] * fVar5;
                    local_10c.x = (int)ROUND(*pfVar19);
                    local_10c.y = (int)ROUND(pfVar19[1]);
                    local_10c.z = (int)ROUND(pfVar19[2]);
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                              (this_ptr,local_54,&local_10c,iVar9,0);
                    pfVar19 = pfVar19 + 3;
                    *(uint *)((int)&DAT_00629040 + local_58) = _DAT_01c51cac;
                    local_58 = local_58 + 0x30;
                    iVar9 = iVar9 + 1;
                    local_54 = local_54 + 1;
                  } while (iVar9 < vertex_count);
                  return;
                }
              }
              else {
                iVar9 = 0;
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
                      fVar5 = local_80 * _DAT_005f0b56;
                      *local_38 = *local_38 * fVar5;
                      local_38[1] = local_38[1] * fVar5;
                      local_38[2] = local_38[2] * fVar5;
                      local_e8.x = (int)ROUND(*local_38);
                      local_e8.y = (int)ROUND(local_38[1]);
                      local_e8.z = (int)ROUND(local_38[2]);
                      pCVar21 = &local_e8;
                      pCVar18 = local_68;
                    }
                    else {
                      pCVar21 = (CVector3i *)0x0;
                      pCVar18 = (CVector3i *)(iVar9 * 0xc + 0x2036428);
                    }
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                              (this_ptr,pCVar18,pCVar21,iVar9,0);
                    iVar9 = iVar9 + 1;
                    *(uint *)((int)&DAT_00629040 + local_60) = _DAT_01c51cac;
                    local_38 = local_38 + 3;
                    local_68 = local_68 + 1;
                    local_60 = local_60 + 0x30;
                  } while (iVar9 < vertex_count);
                }
              }
            }
          }
          else {
            if (this_ptr->rendering_mode == 0) {
              if (0 < vertex_count) {
                local_50 = 0;
                iVar12 = 0;
                local_70 = iVar9;
                do {
                  local_160.x = *(int *)((int)&DAT_00629014 + iVar12);
                  local_160.y = *(int *)((int)&DAT_00629018 + iVar12);
                  local_160.z = *(int *)((int)&DAT_0062901c + iVar12);
                  core_set_cpp_transformToWorldSpace_FUN_00553210(&local_160,&local_178);
                  puVar17 = (uint *)(local_50 + 0x203642c + (uint)bVar20 * -8);
                  *(int *)(local_50 + 0x2036428) = local_178.x;
                  *puVar17 = *(uint *)((int)&local_178 + (uint)bVar20 * -8 + 4);
                  puVar17[(uint)bVar20 * -2 + 1] =
                       *(uint *)((int)&local_178 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
                  iVar12 = iVar12 + 0x30;
                  local_50 = local_50 + 0xc;
                } while (iVar12 < local_70);
              }
              iVar9 = 0;
              if (0 < vertex_count) {
                do {
                  lVar2 = (longlong)_DAT_01c51d5c * (longlong)vertex_normals->x;
                  lVar3 = (longlong)_DAT_01c51d68 * (longlong)vertex_normals->y;
                  lVar4 = (longlong)_DAT_01c51d74 * (longlong)vertex_normals->z;
                  local_dc = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                             ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
                  lVar2 = (longlong)_DAT_01c51d60 * (longlong)vertex_normals->x;
                  lVar3 = (longlong)_DAT_01c51d6c * (longlong)vertex_normals->y;
                  lVar4 = (longlong)_DAT_01c51d78 * (longlong)vertex_normals->z;
                  local_d8 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                             ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
                  lVar2 = (longlong)_DAT_01c51d64 * (longlong)vertex_normals->x;
                  lVar3 = (longlong)_DAT_01c51d70 * (longlong)vertex_normals->y;
                  lVar4 = (longlong)_DAT_01c51d7c * (longlong)vertex_normals->z;
                  local_d4 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                             ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
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
                  *(int *)(&DAT_02070da8 + iVar9 * 0xc) = local_100;
                  *(int *)(&DAT_02070dac + (uint)bVar20 * -8 + iVar9 * 0xc) =
                       local_fc[(uint)bVar20 * -2];
                  *(int *)((int)(&DAT_02070dac + (uint)bVar20 * -8 + iVar9 * 0xc) +
                          ((uint)bVar20 * -2 + 1) * 4) =
                       local_fc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
                  iVar9 = iVar9 + 1;
                  vertex_normals = vertex_normals + 1;
                } while (iVar9 < vertex_count);
              }
            }
            else {
              iVar9 = 0;
              if (0 < vertex_count) {
                do {
                  puVar17 = (uint *)((int)vertex_normals + (uint)bVar20 * -8 + 4);
                  *(int *)(&DAT_02070da8 + iVar9 * 0xc) = vertex_normals->x;
                  *(uint *)(&DAT_02070dac + (uint)bVar20 * -8 + iVar9 * 0xc) = *puVar17;
                  *(uint *)
                   ((int)(&DAT_02070dac + (uint)bVar20 * -8 + iVar9 * 0xc) +
                   ((uint)bVar20 * -2 + 1) * 4) = puVar17[(uint)bVar20 * -2 + 1];
                  iVar9 = iVar9 + 1;
                  vertex_normals = vertex_normals + 1;
                } while (iVar9 < vertex_count);
              }
            }
            if (0 < vertex_count) {
              pCVar18 = (CVector3i *)0x2036428;
              local_64 = 0;
              iVar9 = 0;
              pCVar21 = (CVector3i *)&DAT_02070da8;
              do {
                iVar12 = iVar9 + 1;
                core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                          (this_ptr,pCVar18,pCVar21,iVar9,0);
                pCVar18 = pCVar18 + 1;
                *(uint *)((int)&DAT_00629040 + local_64) = _DAT_01c51cac;
                iVar9 = iVar12;
                pCVar21 = pCVar21 + 1;
                local_64 = local_64 + 0x30;
              } while (iVar12 < vertex_count);
              return;
            }
          }
        }
        else if (0 < vertex_count) {
          local_3c = 0;
          iVar9 = 0;
          do {
            local_f4.x = *(int *)((int)&DAT_00629014 + iVar9);
            local_f4.y = *(int *)((int)&DAT_00629018 + iVar9);
            local_f4.z = *(int *)((int)&DAT_0062901c + iVar9);
            core_set_cpp_transformToWorldSpace_FUN_00553210(&local_f4,&local_124);
            iVar12 = local_3c;
            iVar10 = 0;
            pCVar21 = (CVector3i *)0x0;
            local_16c.x = local_124.x;
            *(uint *)((int)&local_16c + (uint)bVar20 * -8 + 4) =
                 *(uint *)((int)&local_124 + (uint)bVar20 * -8 + 4);
            *(uint *)((int)&local_16c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                 *(uint *)((int)&local_124 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                      (this_ptr,&local_16c,pCVar21,iVar12,iVar10);
            local_3c = local_3c + 1;
            *(uint *)((int)&DAT_00629040 + iVar9) = _DAT_01c51cac;
            iVar9 = iVar9 + 0x30;
          } while (local_3c < vertex_count);
          return;
        }
      }
      else if (0 < vertex_count) {
        iVar12 = 0;
        do {
          *(int *)((int)&DAT_00629034 + iVar12) = (this_ptr->mirror_cached_color).r;
          *(int *)((int)&DAT_00629038 + iVar12) = (this_ptr->mirror_cached_color).g;
          iVar10 = iVar12 + 0x30;
          *(int *)((int)&DAT_0062903c + iVar12) = (this_ptr->mirror_cached_color).b;
          iVar12 = iVar10;
        } while (iVar10 < iVar9);
        return;
      }
    }
    else {
      if (_DAT_02026344 == 0) {
        if (this_ptr->lighting_quality_mode == 2) {
          iVar9 = 0;
          if (0 < vertex_count) {
            iVar12 = 0;
            do {
              *(uint *)((int)&DAT_00629040 + iVar12) = 0;
              core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                        (this_ptr,vertex_positions,(CVector3i *)0x0,iVar9,1);
              iVar9 = iVar9 + 1;
              vertex_positions = vertex_positions + 1;
              iVar12 = iVar12 + 0x30;
            } while (iVar9 < vertex_count);
          }
        }
        else if (this_ptr->lighting_quality_mode == 3) {
          if (0 < vertex_count) {
            iVar12 = 0;
            do {
              *(int *)((int)&DAT_00629034 + iVar12) = (this_ptr->flat_color).r;
              *(int *)((int)&DAT_00629038 + iVar12) = (this_ptr->flat_color).g;
              iVar10 = iVar12 + 0x30;
              *(int *)((int)&DAT_0062903c + iVar12) = (this_ptr->flat_color).b;
              *(uint *)((int)&DAT_00629040 + iVar12) = 0;
              iVar12 = iVar10;
            } while (iVar10 < iVar9);
            _DAT_01c51cac = 0;
            return;
          }
        }
        else if (0 < vertex_count) {
          iVar12 = 0;
          do {
            iVar10 = iVar12 + 0x30;
            *(uint *)((int)&DAT_00629034 + iVar12) = 0xffff;
            *(uint *)((int)&DAT_00629038 + iVar12) = 0xffff;
            *(uint *)((int)&DAT_0062903c + iVar12) = 0xffff;
            *(uint *)((int)&DAT_00629040 + iVar12) = 0;
            iVar12 = iVar10;
          } while (iVar10 < iVar9);
          _DAT_01c51cac = 0;
          return;
        }
        _DAT_01c51cac = 0;
        return;
      }
      if (0 < vertex_count) {
        iVar12 = 0;
        do {
          iVar10 = iVar12 + 0x30;
          *(uint *)((int)&DAT_00629034 + iVar12) = 0;
          *(uint *)((int)&DAT_00629038 + iVar12) = 0;
          *(uint *)((int)&DAT_0062903c + iVar12) = 0;
          *(uint *)((int)&DAT_00629040 + iVar12) = 0;
          iVar12 = iVar10;
        } while (iVar10 < iVar9);
      }
      _DAT_01c51cac = 0;
    }
  }
  return;
}
