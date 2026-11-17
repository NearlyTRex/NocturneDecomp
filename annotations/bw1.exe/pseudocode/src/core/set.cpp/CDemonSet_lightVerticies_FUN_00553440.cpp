// Name: core_set.cpp_CDemonSet_lightVerticies_FUN_00553440
// Address: 00553440
// Address Range: [[00553440, 005542b7]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_00553440(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_00553440(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  void *pvVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ushort *puVar18;
  uint *puVar19;
  CVector3f *pCVar20;
  uint *puVar21;
  int *piVar22;
  byte bVar23;
  int aiStackY_1160 [1013];
  CVector3i *world_position;
  CVector3i *pCVar24;
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
  float local_100;
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
  CVector3f *local_38;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar23 = 0;
  if (20000 < vertex_count) {
    g_CHAR_PTR_01d1d400 = "..\\core\\set.cpp";
    g_INT_01d1d404 = 0xee5;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonSet::lightVerticies - tried to light %d vertices, but GLOBAL_VERTEX_COUNT = %d");
  }
  iVar12 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60
                     (g_CDemonRenderer_PTR_00612560);
  if (iVar12 == 0) {
    iVar12 = vertex_count * 0x30;
    if (this_ptr->lighting_quality_mode == 0) {
      if (this_ptr->mirror_lighting_cached == 0) {
        if (this_ptr->disable_directional_lighting == 0) {
          if (vertex_normals == (CVector3i *)0x0) {
            if (tri_count == 0) {
              if (0 < vertex_count) {
                local_40 = 0;
                iVar12 = 0;
                do {
                  local_13c.x = *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].projected_vertex.
                                               transformed_x + iVar12);
                  local_13c.y = *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].projected_vertex.
                                               transformed_y + iVar12);
                  local_13c.z = *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].projected_vertex.
                                               transformed_z + iVar12);
                  core_set_cpp_transformToWorldSpace_FUN_00553210(&local_13c,&local_148);
                  local_154.x = local_148.x;
                  *(uint *)((int)&local_154 + (uint)bVar23 * -8 + 4) =
                       *(uint *)((int)&local_148 + (uint)bVar23 * -8 + 4);
                  iVar16 = local_40;
                  *(uint *)((int)&local_154 + (uint)bVar23 * -8 + (uint)bVar23 * -8 + 8) =
                       *(uint *)((int)&local_148 + (uint)bVar23 * -8 + (uint)bVar23 * -8 + 8);
                  core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                            (this_ptr,&local_154,(CVector3i *)0x0,local_40,0);
                  local_40 = iVar16 + 1;
                  *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].a + iVar12) = g_INT_01c51cac;
                  iVar12 = iVar12 + 0x30;
                } while (local_40 < vertex_count);
                return;
              }
            }
            else {
              if (0 < vertex_count) {
                local_5c = 0;
                iVar16 = 0;
                local_6c = iVar12;
                do {
                  local_118.x = *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].projected_vertex.
                                               transformed_x + iVar16);
                  local_118.y = *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].projected_vertex.
                                               transformed_y + iVar16);
                  local_118.z = *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].projected_vertex.
                                               transformed_z + iVar16);
                  core_set_cpp_transformToWorldSpace_FUN_00553210(&local_118,&local_130);
                  iVar12 = local_5c;
                  iVar16 = iVar16 + 0x30;
                  piVar22 = (int *)((int)&g_CVector3i_ARRAY_02036428[0].x + local_5c);
                  local_5c = local_5c + 0xc;
                  puVar19 = (uint *)(iVar12 + 0x203642c + (uint)bVar23 * -8);
                  *piVar22 = local_130.x;
                  *puVar19 = *(uint *)((int)&local_130 + (uint)bVar23 * -8 + 4);
                  puVar19[(uint)bVar23 * -2 + 1] =
                       *(uint *)((int)&local_130 + (uint)bVar23 * -8 + (uint)bVar23 * -8 + 8);
                } while (iVar16 < local_6c);
              }
              if (vertices_per_face < 1) {
                if (4000 < tri_count) {
                  g_CHAR_PTR_01d1d400 = "..\\core\\set.cpp";
                  g_INT_01d1d404 = 0xfac;
                  core_main_c_displayErrorAndQuit_FUN_005030e0("Too many normals on this packed tri list");
                  g_CHAR_PTR_01d1d400 = "..\\core\\set.cpp";
                  g_INT_01d1d404 = 0xfae;
                  core_main_c_displayErrorAndQuit_FUN_005030e0("Need more normals for packed models");
                }
                iVar12 = 0;
                if (0 < tri_count) {
                  pCVar20 = g_CVector3f_ARRAY_0202a8a8;
                  puVar18 = face_data;
                  do {
                    uVar2 = *puVar18;
                    local_94 = (uint)puVar18[2];
                    uVar3 = puVar18[1];
                    local_24 = g_CVector3i_ARRAY_02036428[uVar3].x -
                               g_CVector3i_ARRAY_02036428[uVar2].x;
                    local_18 = g_CVector3i_ARRAY_02036428[uVar3].y -
                               g_CVector3i_ARRAY_02036428[uVar2].y;
                    iVar16 = g_CVector3i_ARRAY_02036428[local_94].x -
                             g_CVector3i_ARRAY_02036428[uVar3].x;
                    local_a8 = (float)(g_CVector3i_ARRAY_02036428[uVar3].z -
                                      g_CVector3i_ARRAY_02036428[uVar2].z);
                    local_a4 = (float)iVar16;
                    local_1c = g_CVector3i_ARRAY_02036428[local_94].y -
                               g_CVector3i_ARRAY_02036428[uVar3].y;
                    local_ac = (float)local_18;
                    local_20 = g_CVector3i_ARRAY_02036428[local_94].z -
                               g_CVector3i_ARRAY_02036428[uVar3].z;
                    local_9c = (float)local_20;
                    local_44 = local_ac * local_9c - (float)local_1c * local_a8;
                    local_48 = (float)iVar16 * local_a8 - (float)local_24 * local_9c;
                    local_4c = (float)local_24 * (float)local_1c - local_a4 * local_ac;
                    local_90 = local_4c * local_4c + local_48 * local_48 + local_44 * local_44;
                    local_8c = (float)(g_INT_01cc8050 - ((int)local_90 >> 1));
                    fVar8 = local_8c * (float)65535;
                    puVar18 = puVar18 + 9;
                    iVar12 = iVar12 + 1;
                    pCVar20->x = local_44 * fVar8;
                    pCVar20->y = local_48 * fVar8;
                    pCVar20->z = local_4c * fVar8;
                    pCVar20 = pCVar20 + 1;
                  } while (iVar12 < tri_count);
                }
                memset(g_CVector3f_ARRAY_02070da8,0,vertex_count * 0xc);
                iVar12 = 0;
                if (0 < tri_count) {
                  pCVar20 = g_CVector3f_ARRAY_0202a8a8;
                  do {
                    uVar2 = *(ushort *)face_data;
                    g_CVector3f_ARRAY_02070da8[uVar2].x =
                         pCVar20->x + g_CVector3f_ARRAY_02070da8[uVar2].x;
                    g_CVector3f_ARRAY_02070da8[uVar2].y =
                         pCVar20->y + g_CVector3f_ARRAY_02070da8[uVar2].y;
                    g_CVector3f_ARRAY_02070da8[uVar2].z =
                         pCVar20->z + g_CVector3f_ARRAY_02070da8[uVar2].z;
                    uVar2 = *(ushort *)((int)face_data + 2);
                    g_CVector3f_ARRAY_02070da8[uVar2].x =
                         pCVar20->x + g_CVector3f_ARRAY_02070da8[uVar2].x;
                    g_CVector3f_ARRAY_02070da8[uVar2].y =
                         pCVar20->y + g_CVector3f_ARRAY_02070da8[uVar2].y;
                    g_CVector3f_ARRAY_02070da8[uVar2].z =
                         pCVar20->z + g_CVector3f_ARRAY_02070da8[uVar2].z;
                    uVar2 = *(ushort *)((int)face_data + 4);
                    face_data = (void *)((int)face_data + 0x12);
                    g_CVector3f_ARRAY_02070da8[uVar2].x =
                         pCVar20->x + g_CVector3f_ARRAY_02070da8[uVar2].x;
                    g_CVector3f_ARRAY_02070da8[uVar2].y =
                         pCVar20->y + g_CVector3f_ARRAY_02070da8[uVar2].y;
                    iVar12 = iVar12 + 1;
                    g_CVector3f_ARRAY_02070da8[uVar2].z =
                         pCVar20->z + g_CVector3f_ARRAY_02070da8[uVar2].z;
                    pCVar20 = pCVar20 + 1;
                  } while (iVar12 < tri_count);
                }
              }
              else {
                iVar12 = 0;
                pvVar14 = face_data;
                if (0 < tri_count) {
                  do {
                    iVar16 = *(int *)((int)pvVar14 + 0x24);
                    iVar13 = *(int *)((int)pvVar14 + 0x18);
                    local_20 = g_CVector3i_ARRAY_02036428[iVar16].x -
                               g_CVector3i_ARRAY_02036428[iVar13].x;
                    iVar17 = g_CVector3i_ARRAY_02036428[iVar16].y -
                             g_CVector3i_ARRAY_02036428[iVar13].y;
                    iVar4 = *(int *)((int)pvVar14 + 0x30);
                    iVar15 = g_CVector3i_ARRAY_02036428[iVar4].x -
                             g_CVector3i_ARRAY_02036428[iVar16].x;
                    fVar9 = (float)(g_CVector3i_ARRAY_02036428[iVar16].z -
                                   g_CVector3i_ARRAY_02036428[iVar13].z);
                    local_c4 = (float)iVar15;
                    local_1c = g_CVector3i_ARRAY_02036428[iVar4].y -
                               g_CVector3i_ARRAY_02036428[iVar16].y;
                    local_18 = g_CVector3i_ARRAY_02036428[iVar4].z -
                               g_CVector3i_ARRAY_02036428[iVar16].z;
                    local_cc = (float)iVar17;
                    local_bc = (float)local_18;
                    fVar8 = (float)iVar17 * local_bc - (float)local_1c * fVar9;
                    fVar11 = (float)iVar15 * fVar9 - (float)local_20 * local_bc;
                    fVar10 = (float)local_20 * (float)local_1c - local_c4 * local_cc;
                    local_b8 = fVar10 * fVar10 + fVar11 * fVar11 + fVar8 * fVar8;
                    local_b4 = (float)(g_INT_01cc8050 - ((int)local_b8 >> 1));
                    fVar9 = local_b4 * (float)65535;
                    *(float *)((int)pvVar14 + 8) = fVar8 * fVar9;
                    *(float *)((int)pvVar14 + 0xc) = fVar11 * fVar9;
                    *(float *)((int)pvVar14 + 0x10) = fVar10 * fVar9;
                    if (vertices_per_face == 4) {
                      pvVar14 = (void *)((int)pvVar14 + 0x48);
                    }
                    else {
                      pvVar14 = (void *)((int)pvVar14 + 0x3c);
                    }
                    iVar12 = iVar12 + 1;
                  } while (iVar12 < tri_count);
                }
                memset(g_CVector3f_ARRAY_02070da8,0,vertex_count * 0xc);
                iVar12 = 0;
                if (0 < tri_count) {
                  do {
                    iVar16 = *(int *)((int)face_data + 0x18);
                    pfVar1 = (float *)((int)face_data + 8);
                    g_CVector3f_ARRAY_02070da8[iVar16].x =
                         *pfVar1 + g_CVector3f_ARRAY_02070da8[iVar16].x;
                    g_CVector3f_ARRAY_02070da8[iVar16].y =
                         *(float *)((int)face_data + 0xc) + g_CVector3f_ARRAY_02070da8[iVar16].y;
                    g_CVector3f_ARRAY_02070da8[iVar16].z =
                         *(float *)((int)face_data + 0x10) + g_CVector3f_ARRAY_02070da8[iVar16].z;
                    iVar16 = *(int *)((int)face_data + 0x24);
                    g_CVector3f_ARRAY_02070da8[iVar16].x =
                         *pfVar1 + g_CVector3f_ARRAY_02070da8[iVar16].x;
                    g_CVector3f_ARRAY_02070da8[iVar16].y =
                         *(float *)((int)face_data + 0xc) + g_CVector3f_ARRAY_02070da8[iVar16].y;
                    g_CVector3f_ARRAY_02070da8[iVar16].z =
                         *(float *)((int)face_data + 0x10) + g_CVector3f_ARRAY_02070da8[iVar16].z;
                    iVar16 = *(int *)((int)face_data + 0x30);
                    g_CVector3f_ARRAY_02070da8[iVar16].x =
                         *pfVar1 + g_CVector3f_ARRAY_02070da8[iVar16].x;
                    g_CVector3f_ARRAY_02070da8[iVar16].y =
                         *(float *)((int)face_data + 0xc) + g_CVector3f_ARRAY_02070da8[iVar16].y;
                    g_CVector3f_ARRAY_02070da8[iVar16].z =
                         *(float *)((int)face_data + 0x10) + g_CVector3f_ARRAY_02070da8[iVar16].z;
                    if (*(int *)((int)face_data + 4) == 4) {
                      iVar16 = *(int *)((int)face_data + 0x3c);
                      g_CVector3f_ARRAY_02070da8[iVar16].x =
                           *pfVar1 + g_CVector3f_ARRAY_02070da8[iVar16].x;
                      g_CVector3f_ARRAY_02070da8[iVar16].y =
                           *(float *)((int)face_data + 0xc) + g_CVector3f_ARRAY_02070da8[iVar16].y;
                      g_CVector3f_ARRAY_02070da8[iVar16].z =
                           *(float *)((int)face_data + 0x10) + g_CVector3f_ARRAY_02070da8[iVar16].z;
                    }
                    if (vertices_per_face == 4) {
                      face_data = (void *)((int)face_data + 0x48);
                    }
                    else {
                      face_data = (void *)((int)face_data + 0x3c);
                    }
                    iVar12 = iVar12 + 1;
                  } while (iVar12 < tri_count);
                }
              }
              if (this_ptr->skip_normal_normalization == 0) {
                if (0 < vertex_count) {
                  local_54 = g_CVector3i_ARRAY_02036428;
                  pCVar20 = g_CVector3f_ARRAY_02070da8;
                  iVar12 = 0;
                  local_58 = 0;
                  do {
                    local_78 = pCVar20->z * pCVar20->z +
                               pCVar20->x * pCVar20->x + pCVar20->y * pCVar20->y;
                    local_74 = (float)(g_INT_01cc8050 - ((int)local_78 >> 1));
                    fVar8 = local_74 * 65535.0f;
                    pCVar20->x = pCVar20->x * fVar8;
                    pCVar20->y = pCVar20->y * fVar8;
                    pCVar20->z = pCVar20->z * fVar8;
                    local_10c.x = (int)ROUND(pCVar20->x);
                    local_10c.y = (int)ROUND(pCVar20->y);
                    local_10c.z = (int)ROUND(pCVar20->z);
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                              (this_ptr,local_54,&local_10c,iVar12,0);
                    pCVar20 = pCVar20 + 1;
                    *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].a + local_58) = g_INT_01c51cac;
                    local_58 = local_58 + 0x30;
                    iVar12 = iVar12 + 1;
                    local_54 = local_54 + 1;
                  } while (iVar12 < vertex_count);
                  return;
                }
              }
              else {
                iVar12 = 0;
                if (0 < vertex_count) {
                  local_60 = 0;
                  local_38 = g_CVector3f_ARRAY_02070da8;
                  local_68 = g_CVector3i_ARRAY_02036428;
                  do {
                    if (((1.0 <= ABS(local_38->x)) || (1.0 <= ABS(local_38->y))) ||
                       (1.0 <= ABS(local_38->z))) {
                      local_84 = local_38->z * local_38->z +
                                 local_38->x * local_38->x + local_38->y * local_38->y;
                      local_80 = (float)(g_INT_01cc8050 - ((int)local_84 >> 1));
                      fVar8 = local_80 * 65535.0f;
                      local_38->x = local_38->x * fVar8;
                      local_38->y = local_38->y * fVar8;
                      local_38->z = local_38->z * fVar8;
                      local_e8.x = (int)ROUND(local_38->x);
                      local_e8.y = (int)ROUND(local_38->y);
                      local_e8.z = (int)ROUND(local_38->z);
                      pCVar24 = &local_e8;
                      world_position = local_68;
                    }
                    else {
                      pCVar24 = (CVector3i *)0x0;
                      world_position = g_CVector3i_ARRAY_02036428 + iVar12;
                    }
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                              (this_ptr,world_position,pCVar24,iVar12,0);
                    iVar12 = iVar12 + 1;
                    *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].a + local_60) = g_INT_01c51cac;
                    local_38 = local_38 + 1;
                    local_68 = local_68 + 1;
                    local_60 = local_60 + 0x30;
                  } while (iVar12 < vertex_count);
                }
              }
            }
          }
          else {
            if (this_ptr->rendering_mode == 0) {
              if (0 < vertex_count) {
                local_50 = 0;
                iVar16 = 0;
                local_70 = iVar12;
                do {
                  local_160.x = *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].projected_vertex.
                                               transformed_x + iVar16);
                  local_160.y = *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].projected_vertex.
                                               transformed_y + iVar16);
                  local_160.z = *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].projected_vertex.
                                               transformed_z + iVar16);
                  core_set_cpp_transformToWorldSpace_FUN_00553210(&local_160,&local_178);
                  puVar19 = (uint *)(local_50 + 0x203642c + (uint)bVar23 * -8);
                  *(int *)((int)&g_CVector3i_ARRAY_02036428[0].x + local_50) = local_178.x;
                  *puVar19 = *(uint *)((int)&local_178 + (uint)bVar23 * -8 + 4);
                  puVar19[(uint)bVar23 * -2 + 1] =
                       *(uint *)((int)&local_178 + (uint)bVar23 * -8 + (uint)bVar23 * -8 + 8);
                  iVar16 = iVar16 + 0x30;
                  local_50 = local_50 + 0xc;
                } while (iVar16 < local_70);
              }
              iVar12 = 0;
              if (0 < vertex_count) {
                do {
                  lVar5 = (longlong)g_INT_01c51d5c * (longlong)vertex_normals->x;
                  lVar6 = (longlong)g_INT_01c51d68 * (longlong)vertex_normals->y;
                  lVar7 = (longlong)g_INT_01c51d74 * (longlong)vertex_normals->z;
                  local_dc = ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                             ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                             ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
                  lVar5 = (longlong)g_INT_01c51d60 * (longlong)vertex_normals->x;
                  lVar6 = (longlong)g_INT_01c51d6c * (longlong)vertex_normals->y;
                  lVar7 = (longlong)g_INT_01c51d78 * (longlong)vertex_normals->z;
                  local_d8 = ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                             ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                             ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
                  lVar5 = (longlong)g_INT_01c51d64 * (longlong)vertex_normals->x;
                  lVar6 = (longlong)g_INT_01c51d70 * (longlong)vertex_normals->y;
                  lVar7 = (longlong)g_INT_01c51d7c * (longlong)vertex_normals->z;
                  local_d4 = ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                             ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                             ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
                  local_100 = (float)(((uint)((longlong)g_INT_01d1dd18 * (longlong)local_dc) >> 0x10
                                      | (int)((ulonglong)
                                              ((longlong)g_INT_01d1dd18 * (longlong)local_dc) >>
                                             0x20) << 0x10) +
                                      ((uint)((longlong)g_INT_01d1dd24 * (longlong)local_d8) >> 0x10
                                      | (int)((ulonglong)
                                              ((longlong)g_INT_01d1dd24 * (longlong)local_d8) >>
                                             0x20) << 0x10) +
                                     ((uint)((longlong)g_INT_01d1dd30 * (longlong)local_d4) >> 0x10
                                     | (int)((ulonglong)
                                             ((longlong)g_INT_01d1dd30 * (longlong)local_d4) >> 0x20
                                            ) << 0x10));
                  local_fc[0] = ((uint)((longlong)g_INT_01d1dd1c * (longlong)local_dc) >> 0x10 |
                                (int)((ulonglong)((longlong)g_INT_01d1dd1c * (longlong)local_dc) >>
                                     0x20) << 0x10) +
                                ((uint)((longlong)g_INT_01d1dd28 * (longlong)local_d8) >> 0x10 |
                                (int)((ulonglong)((longlong)g_INT_01d1dd28 * (longlong)local_d8) >>
                                     0x20) << 0x10) +
                                ((uint)((longlong)g_INT_01d1dd34 * (longlong)local_d4) >> 0x10 |
                                (int)((ulonglong)((longlong)g_INT_01d1dd34 * (longlong)local_d4) >>
                                     0x20) << 0x10);
                  local_fc[1] = ((uint)((longlong)g_INT_01d1dd20 * (longlong)local_dc) >> 0x10 |
                                (int)((ulonglong)((longlong)g_INT_01d1dd20 * (longlong)local_dc) >>
                                     0x20) << 0x10) +
                                ((uint)((longlong)g_INT_01d1dd2c * (longlong)local_d8) >> 0x10 |
                                (int)((ulonglong)((longlong)g_INT_01d1dd2c * (longlong)local_d8) >>
                                     0x20) << 0x10) +
                                ((uint)((longlong)g_INT_01d1dd38 * (longlong)local_d4) >> 0x10 |
                                (int)((ulonglong)((longlong)g_INT_01d1dd38 * (longlong)local_d4) >>
                                     0x20) << 0x10);
                  piVar22 = (int *)(iVar12 * 0xc + 0x2070dac + (uint)bVar23 * -8);
                  g_CVector3f_ARRAY_02070da8[iVar12].x = local_100;
                  *piVar22 = local_fc[(uint)bVar23 * -2];
                  piVar22[(uint)bVar23 * -2 + 1] =
                       local_fc[(uint)bVar23 * -2 + (uint)bVar23 * -2 + 1];
                  iVar12 = iVar12 + 1;
                  vertex_normals = vertex_normals + 1;
                } while (iVar12 < vertex_count);
              }
            }
            else {
              iVar12 = 0;
              if (0 < vertex_count) {
                do {
                  puVar21 = (uint *)(iVar12 * 0xc + 0x2070dac + (uint)bVar23 * -8);
                  puVar19 = (uint *)((int)vertex_normals + (uint)bVar23 * -8 + 4);
                  g_CVector3f_ARRAY_02070da8[iVar12].x = (float)vertex_normals->x;
                  *puVar21 = *puVar19;
                  puVar21[(uint)bVar23 * -2 + 1] = puVar19[(uint)bVar23 * -2 + 1];
                  iVar12 = iVar12 + 1;
                  vertex_normals = vertex_normals + 1;
                } while (iVar12 < vertex_count);
              }
            }
            if (0 < vertex_count) {
              pCVar24 = g_CVector3i_ARRAY_02036428;
              local_64 = 0;
              iVar12 = 0;
              pCVar20 = g_CVector3f_ARRAY_02070da8;
              do {
                iVar16 = iVar12 + 1;
                core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                          (this_ptr,pCVar24,(CVector3i *)pCVar20,iVar12,0);
                pCVar24 = pCVar24 + 1;
                *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].a + local_64) = g_INT_01c51cac;
                iVar12 = iVar16;
                pCVar20 = pCVar20 + 1;
                local_64 = local_64 + 0x30;
              } while (iVar16 < vertex_count);
              return;
            }
          }
        }
        else if (0 < vertex_count) {
          local_3c = 0;
          iVar12 = 0;
          do {
            local_f4.x = *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].projected_vertex.
                                        transformed_x + iVar12);
            local_f4.y = *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].projected_vertex.
                                        transformed_y + iVar12);
            local_f4.z = *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].projected_vertex.
                                        transformed_z + iVar12);
            core_set_cpp_transformToWorldSpace_FUN_00553210(&local_f4,&local_124);
            iVar16 = local_3c;
            iVar13 = 0;
            pCVar24 = (CVector3i *)0x0;
            local_16c.x = local_124.x;
            *(uint *)((int)&local_16c + (uint)bVar23 * -8 + 4) =
                 *(uint *)((int)&local_124 + (uint)bVar23 * -8 + 4);
            *(uint *)((int)&local_16c + (uint)bVar23 * -8 + (uint)bVar23 * -8 + 8) =
                 *(uint *)((int)&local_124 + (uint)bVar23 * -8 + (uint)bVar23 * -8 + 8);
            core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                      (this_ptr,&local_16c,pCVar24,iVar16,iVar13);
            local_3c = local_3c + 1;
            *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].a + iVar12) = g_INT_01c51cac;
            iVar12 = iVar12 + 0x30;
          } while (local_3c < vertex_count);
          return;
        }
      }
      else if (0 < vertex_count) {
        iVar16 = 0;
        do {
          *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].r + iVar16) =
               (this_ptr->mirror_cached_color).r;
          *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].g + iVar16) =
               (this_ptr->mirror_cached_color).g;
          iVar13 = iVar16 + 0x30;
          *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].b + iVar16) =
               (this_ptr->mirror_cached_color).b;
          iVar16 = iVar13;
        } while (iVar13 < iVar12);
        return;
      }
    }
    else {
      if (g_INT_02026344 == 0) {
        if (this_ptr->lighting_quality_mode == 2) {
          iVar12 = 0;
          if (0 < vertex_count) {
            iVar16 = 0;
            do {
              *(uint *)((int)&g_SRenderVertex_ARRAY_00629014[0].a + iVar16) = 0;
              core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
                        (this_ptr,vertex_positions,(CVector3i *)0x0,iVar12,1);
              iVar12 = iVar12 + 1;
              vertex_positions = vertex_positions + 1;
              iVar16 = iVar16 + 0x30;
            } while (iVar12 < vertex_count);
          }
        }
        else if (this_ptr->lighting_quality_mode == 3) {
          if (0 < vertex_count) {
            iVar16 = 0;
            do {
              *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].r + iVar16) =
                   (this_ptr->flat_color).r;
              *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].g + iVar16) =
                   (this_ptr->flat_color).g;
              iVar13 = iVar16 + 0x30;
              *(int *)((int)&g_SRenderVertex_ARRAY_00629014[0].b + iVar16) =
                   (this_ptr->flat_color).b;
              *(uint *)((int)&g_SRenderVertex_ARRAY_00629014[0].a + iVar16) = 0;
              iVar16 = iVar13;
            } while (iVar13 < iVar12);
            g_INT_01c51cac = 0;
            return;
          }
        }
        else if (0 < vertex_count) {
          iVar16 = 0;
          do {
            iVar13 = iVar16 + 0x30;
            *(uint *)((int)&g_SRenderVertex_ARRAY_00629014[0].r + iVar16) = 0xffff;
            *(uint *)((int)&g_SRenderVertex_ARRAY_00629014[0].g + iVar16) = 0xffff;
            *(uint *)((int)&g_SRenderVertex_ARRAY_00629014[0].b + iVar16) = 0xffff;
            *(uint *)((int)&g_SRenderVertex_ARRAY_00629014[0].a + iVar16) = 0;
            iVar16 = iVar13;
          } while (iVar13 < iVar12);
          g_INT_01c51cac = 0;
          return;
        }
        g_INT_01c51cac = 0;
        return;
      }
      if (0 < vertex_count) {
        iVar16 = 0;
        do {
          iVar13 = iVar16 + 0x30;
          *(uint *)((int)&g_SRenderVertex_ARRAY_00629014[0].r + iVar16) = 0;
          *(uint *)((int)&g_SRenderVertex_ARRAY_00629014[0].g + iVar16) = 0;
          *(uint *)((int)&g_SRenderVertex_ARRAY_00629014[0].b + iVar16) = 0;
          *(uint *)((int)&g_SRenderVertex_ARRAY_00629014[0].a + iVar16) = 0;
          iVar16 = iVar13;
        } while (iVar13 < iVar12);
      }
      g_INT_01c51cac = 0;
    }
  }
  return;
}
