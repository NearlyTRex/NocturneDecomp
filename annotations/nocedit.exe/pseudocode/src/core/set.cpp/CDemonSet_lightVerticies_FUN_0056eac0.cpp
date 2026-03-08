// Name: core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
// Address: 0056eac0
// Address Range: [[0056eac0, 0056f93c]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

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
  ushort *puVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  int *piVar21;
  CVector3f *pCVar22;
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
  float local_124;
  int local_120 [2];
  CVector3i local_118;
  CVector3i local_10c;
  CVector3i local_100;
  CVector3i local_f4;
  CVector3i local_e8;
  int local_dc;
  int local_d8;
  int local_d4;
  float local_cc;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  uint local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  int local_74;
  int local_70;
  int local_6c;
  CVector3i *local_68;
  int local_64;
  CVector3i *local_60;
  int local_5c;
  int local_58;
  CVector3i *local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar23 = 0;
  if (20000 < vertex_count) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 0xde8;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonSet::lightVerticies - tried to light %d vertices, but GLOBAL_VERTEX_COUNT = %d",vertex_count,20000);
  }
  iVar12 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar12 == 0) {
    iVar12 = vertex_count * 0x30;
    if (this_ptr->lighting_quality_mode == 0) {
      if (this_ptr->mirror_lighting_cached == 0) {
        if (this_ptr->disable_directional_lighting == 0) {
          if (vertex_normals == (CVector3i *)0x0) {
            if (tri_count == 0) {
              if (0 < vertex_count) {
                local_44 = 0;
                iVar12 = 0;
                do {
                  local_16c.x = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.
                                               transformed_x + iVar12);
                  local_16c.y = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.
                                               transformed_y + iVar12);
                  local_16c.z = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.
                                               transformed_z + iVar12);
                  core_set_cpp_transformToWorldSpace_FUN_0056e890(&local_16c,&local_154);
                  local_160.x = local_154.x;
                  *(uint *)((int)&local_160 + (uint)bVar23 * -8 + 4) =
                       *(uint *)((int)&local_154 + (uint)bVar23 * -8 + 4);
                  iVar18 = local_44;
                  *(uint *)((int)&local_160 + (uint)bVar23 * -8 + (uint)bVar23 * -8 + 8) =
                       *(uint *)((int)&local_154 + (uint)bVar23 * -8 + (uint)bVar23 * -8 + 8);
                  core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                            (this_ptr,&local_160,(CVector3i *)0x0,local_44,0);
                  *(float *)((int)&g_RenderVertexBuffer[0].a + iVar12) = g_PerspectiveReciprocal;
                  local_44 = iVar18 + 1;
                  iVar12 = iVar12 + 0x30;
                } while (local_44 < vertex_count);
                return;
              }
            }
            else {
              if (0 < vertex_count) {
                local_6c = 0;
                iVar18 = 0;
                local_74 = iVar12;
                do {
                  local_13c.x = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.
                                               transformed_x + iVar18);
                  local_13c.y = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.
                                               transformed_y + iVar18);
                  local_13c.z = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.
                                               transformed_z + iVar18);
                  core_set_cpp_transformToWorldSpace_FUN_0056e890(&local_13c,&local_118);
                  iVar12 = local_6c;
                  iVar18 = iVar18 + 0x30;
                  piVar21 = (int *)((int)&g_TransformedVertexArray[0].x + local_6c);
                  local_6c = local_6c + 0xc;
                  puVar19 = (uint *)(iVar12 + 0x32cd850 + (uint)bVar23 * -8);
                  *piVar21 = local_118.x;
                  *puVar19 = *(uint *)((int)&local_118 + (uint)bVar23 * -8 + 4);
                  puVar19[(uint)bVar23 * -2 + 1] =
                       *(uint *)((int)&local_118 + (uint)bVar23 * -8 + (uint)bVar23 * -8 + 8);
                } while (iVar18 < local_74);
              }
              if (vertices_per_face < 1) {
                if (4000 < tri_count) {
                  g_CurrentFilename = "..\\core\\set.cpp";
                  g_CurrentLineNumber = 0xeaf;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Too many normals on this packed tri list");
                  g_CurrentFilename = "..\\core\\set.cpp";
                  g_CurrentLineNumber = 0xeb1;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Need more normals for packed models");
                }
                iVar12 = 0;
                if (0 < tri_count) {
                  pCVar22 = g_FaceNormalArray;
                  puVar17 = face_data;
                  do {
                    uVar2 = *puVar17;
                    local_98 = (uint)puVar17[2];
                    uVar3 = puVar17[1];
                    local_24 = g_TransformedVertexArray[uVar3].x - g_TransformedVertexArray[uVar2].x
                    ;
                    local_18 = g_TransformedVertexArray[uVar3].y - g_TransformedVertexArray[uVar2].y
                    ;
                    iVar18 = g_TransformedVertexArray[local_98].x -
                             g_TransformedVertexArray[uVar3].x;
                    local_ac = (float)(g_TransformedVertexArray[uVar3].z -
                                      g_TransformedVertexArray[uVar2].z);
                    local_a8 = (float)iVar18;
                    local_1c = g_TransformedVertexArray[local_98].y -
                               g_TransformedVertexArray[uVar3].y;
                    local_b0 = (float)local_18;
                    local_20 = g_TransformedVertexArray[local_98].z -
                               g_TransformedVertexArray[uVar3].z;
                    local_a0 = (float)local_20;
                    local_4c = local_b0 * local_a0 - (float)local_1c * local_ac;
                    local_48 = (float)iVar18 * local_ac - (float)local_24 * local_a0;
                    local_50 = (float)local_24 * (float)local_1c - local_a8 * local_b0;
                    local_94 = local_50 * local_50 + local_48 * local_48 + local_4c * local_4c;
                    local_90 = (float)(g_LightAttenuationMax - ((int)local_94 >> 1));
                    fVar8 = local_90 * (float)65535;
                    puVar17 = puVar17 + 9;
                    iVar12 = iVar12 + 1;
                    pCVar22->x = local_4c * fVar8;
                    pCVar22->y = local_48 * fVar8;
                    pCVar22->z = local_50 * fVar8;
                    pCVar22 = pCVar22 + 1;
                  } while (iVar12 < tri_count);
                }
                memset(g_VertexNormalArray,0,vertex_count * 0xc);
                iVar12 = 0;
                if (0 < tri_count) {
                  pCVar22 = g_FaceNormalArray;
                  do {
                    uVar2 = *(ushort *)face_data;
                    g_VertexNormalArray[uVar2].x = pCVar22->x + g_VertexNormalArray[uVar2].x;
                    g_VertexNormalArray[uVar2].y = pCVar22->y + g_VertexNormalArray[uVar2].y;
                    g_VertexNormalArray[uVar2].z = pCVar22->z + g_VertexNormalArray[uVar2].z;
                    uVar2 = *(ushort *)((int)face_data + 2);
                    g_VertexNormalArray[uVar2].x = pCVar22->x + g_VertexNormalArray[uVar2].x;
                    g_VertexNormalArray[uVar2].y = pCVar22->y + g_VertexNormalArray[uVar2].y;
                    g_VertexNormalArray[uVar2].z = pCVar22->z + g_VertexNormalArray[uVar2].z;
                    uVar2 = *(ushort *)((int)face_data + 4);
                    face_data = (void *)((int)face_data + 0x12);
                    g_VertexNormalArray[uVar2].x = pCVar22->x + g_VertexNormalArray[uVar2].x;
                    g_VertexNormalArray[uVar2].y = pCVar22->y + g_VertexNormalArray[uVar2].y;
                    iVar12 = iVar12 + 1;
                    g_VertexNormalArray[uVar2].z = pCVar22->z + g_VertexNormalArray[uVar2].z;
                    pCVar22 = pCVar22 + 1;
                  } while (iVar12 < tri_count);
                }
              }
              else {
                iVar12 = 0;
                pvVar14 = face_data;
                if (0 < tri_count) {
                  do {
                    iVar18 = *(int *)((int)pvVar14 + 0x24);
                    iVar13 = *(int *)((int)pvVar14 + 0x18);
                    local_20 = g_TransformedVertexArray[iVar18].x -
                               g_TransformedVertexArray[iVar13].x;
                    iVar16 = g_TransformedVertexArray[iVar18].y - g_TransformedVertexArray[iVar13].y
                    ;
                    iVar4 = *(int *)((int)pvVar14 + 0x30);
                    iVar15 = g_TransformedVertexArray[iVar4].x - g_TransformedVertexArray[iVar18].x;
                    fVar9 = (float)(g_TransformedVertexArray[iVar18].z -
                                   g_TransformedVertexArray[iVar13].z);
                    local_cc = (float)iVar15;
                    local_1c = g_TransformedVertexArray[iVar4].y -
                               g_TransformedVertexArray[iVar18].y;
                    local_18 = g_TransformedVertexArray[iVar4].z -
                               g_TransformedVertexArray[iVar18].z;
                    local_28 = (float)iVar16;
                    local_c4 = (float)local_18;
                    fVar8 = (float)iVar16 * local_c4 - (float)local_1c * fVar9;
                    fVar11 = (float)iVar15 * fVar9 - (float)local_20 * local_c4;
                    fVar10 = (float)local_20 * (float)local_1c - local_cc * local_28;
                    local_bc = fVar10 * fVar10 + fVar11 * fVar11 + fVar8 * fVar8;
                    local_b8 = (float)(g_LightAttenuationMax - ((int)local_bc >> 1));
                    fVar9 = local_b8 * (float)65535;
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
                memset(g_VertexNormalArray,0,vertex_count * 0xc);
                iVar12 = 0;
                if (0 < tri_count) {
                  do {
                    iVar18 = *(int *)((int)face_data + 0x18);
                    pfVar1 = (float *)((int)face_data + 8);
                    g_VertexNormalArray[iVar18].x = *pfVar1 + g_VertexNormalArray[iVar18].x;
                    g_VertexNormalArray[iVar18].y =
                         *(float *)((int)face_data + 0xc) + g_VertexNormalArray[iVar18].y;
                    g_VertexNormalArray[iVar18].z =
                         *(float *)((int)face_data + 0x10) + g_VertexNormalArray[iVar18].z;
                    iVar18 = *(int *)((int)face_data + 0x24);
                    g_VertexNormalArray[iVar18].x = *pfVar1 + g_VertexNormalArray[iVar18].x;
                    g_VertexNormalArray[iVar18].y =
                         *(float *)((int)face_data + 0xc) + g_VertexNormalArray[iVar18].y;
                    g_VertexNormalArray[iVar18].z =
                         *(float *)((int)face_data + 0x10) + g_VertexNormalArray[iVar18].z;
                    iVar18 = *(int *)((int)face_data + 0x30);
                    g_VertexNormalArray[iVar18].x = *pfVar1 + g_VertexNormalArray[iVar18].x;
                    g_VertexNormalArray[iVar18].y =
                         *(float *)((int)face_data + 0xc) + g_VertexNormalArray[iVar18].y;
                    g_VertexNormalArray[iVar18].z =
                         *(float *)((int)face_data + 0x10) + g_VertexNormalArray[iVar18].z;
                    if (*(int *)((int)face_data + 4) == 4) {
                      iVar18 = *(int *)((int)face_data + 0x3c);
                      g_VertexNormalArray[iVar18].x = *pfVar1 + g_VertexNormalArray[iVar18].x;
                      g_VertexNormalArray[iVar18].y =
                           *(float *)((int)face_data + 0xc) + g_VertexNormalArray[iVar18].y;
                      g_VertexNormalArray[iVar18].z =
                           *(float *)((int)face_data + 0x10) + g_VertexNormalArray[iVar18].z;
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
                  pCVar22 = g_VertexNormalArray;
                  local_68 = g_TransformedVertexArray;
                  iVar12 = 0;
                  local_64 = 0;
                  do {
                    pCVar24 = local_68;
                    local_7c = pCVar22->z * pCVar22->z +
                               pCVar22->x * pCVar22->x + pCVar22->y * pCVar22->y;
                    local_78 = (float)(g_LightAttenuationMax - ((int)local_7c >> 1));
                    fVar8 = local_78 * (float)65535;
                    pCVar22->x = pCVar22->x * fVar8;
                    pCVar22->y = pCVar22->y * fVar8;
                    pCVar22->z = pCVar22->z * fVar8;
                    local_100.x = (int)ROUND(pCVar22->x);
                    local_100.y = (int)ROUND(pCVar22->y);
                    local_100.z = (int)ROUND(pCVar22->z);
                    pCVar22 = pCVar22 + 1;
                    iVar18 = iVar12 + 1;
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                              (this_ptr,local_68,&local_100,iVar12,0);
                    local_68 = pCVar24 + 1;
                    *(float *)((int)&g_RenderVertexBuffer[0].a + local_64) = g_PerspectiveReciprocal
                    ;
                    iVar12 = iVar18;
                    local_64 = local_64 + 0x30;
                  } while (iVar18 < vertex_count);
                  return;
                }
              }
              else {
                local_3c = 0;
                if (0 < vertex_count) {
                  pCVar22 = g_VertexNormalArray;
                  local_58 = 0;
                  local_60 = g_TransformedVertexArray;
                  do {
                    if (((1.0 <= ABS(pCVar22->x)) || (1.0 <= ABS(pCVar22->y))) ||
                       (1.0 <= ABS(pCVar22->z))) {
                      local_88 = pCVar22->z * pCVar22->z +
                                 pCVar22->x * pCVar22->x + pCVar22->y * pCVar22->y;
                      local_84 = (float)(g_LightAttenuationMax - ((int)local_88 >> 1));
                      fVar8 = local_84 * (float)65535;
                      pCVar22->x = pCVar22->x * fVar8;
                      pCVar22->y = pCVar22->y * fVar8;
                      pCVar22->z = pCVar22->z * fVar8;
                      local_f4.x = (int)ROUND(pCVar22->x);
                      local_f4.y = (int)ROUND(pCVar22->y);
                      local_f4.z = (int)ROUND(pCVar22->z);
                      pCVar24 = &local_f4;
                      world_position = local_60;
                    }
                    else {
                      pCVar24 = (CVector3i *)0x0;
                      world_position = g_TransformedVertexArray + local_3c;
                    }
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                              (this_ptr,world_position,pCVar24,local_3c,0);
                    pCVar22 = pCVar22 + 1;
                    local_3c = local_3c + 1;
                    *(float *)((int)&g_RenderVertexBuffer[0].a + local_58) = g_PerspectiveReciprocal
                    ;
                    local_60 = local_60 + 1;
                    local_58 = local_58 + 0x30;
                  } while (local_3c < vertex_count);
                }
              }
            }
          }
          else {
            if (this_ptr->rendering_mode == 0) {
              if (0 < vertex_count) {
                local_5c = 0;
                iVar18 = 0;
                local_70 = iVar12;
                do {
                  local_e8.x = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x
                                       + iVar18);
                  local_e8.y = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y
                                       + iVar18);
                  local_e8.z = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z
                                       + iVar18);
                  core_set_cpp_transformToWorldSpace_FUN_0056e890(&local_e8,&local_130);
                  iVar18 = iVar18 + 0x30;
                  puVar19 = (uint *)(local_5c + 0x32cd850 + (uint)bVar23 * -8);
                  *(int *)((int)&g_TransformedVertexArray[0].x + local_5c) = local_130.x;
                  *puVar19 = *(uint *)((int)&local_130 + (uint)bVar23 * -8 + 4);
                  puVar19[(uint)bVar23 * -2 + 1] =
                       *(uint *)((int)&local_130 + (uint)bVar23 * -8 + (uint)bVar23 * -8 + 8);
                  local_5c = local_5c + 0xc;
                } while (iVar18 < local_70);
              }
              iVar12 = 0;
              if (0 < vertex_count) {
                do {
                  iVar18 = iVar12 * 0xc;
                  lVar5 = (longlong)g_TransformMatrix.m[0].x * (longlong)vertex_normals->x;
                  lVar6 = (longlong)g_TransformMatrix.m[1].x * (longlong)vertex_normals->y;
                  lVar7 = (longlong)g_TransformMatrix.m[2].x * (longlong)vertex_normals->z;
                  local_dc = ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                             ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                             ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
                  lVar5 = (longlong)g_TransformMatrix.m[0].y * (longlong)vertex_normals->x;
                  lVar6 = (longlong)g_TransformMatrix.m[1].y * (longlong)vertex_normals->y;
                  lVar7 = (longlong)g_TransformMatrix.m[2].y * (longlong)vertex_normals->z;
                  local_d8 = ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                             ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                             ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
                  lVar5 = (longlong)g_TransformMatrix.m[0].z * (longlong)vertex_normals->x;
                  lVar6 = (longlong)g_TransformMatrix.m[1].z * (longlong)vertex_normals->y;
                  lVar7 = (longlong)g_TransformMatrix.m[2].z * (longlong)vertex_normals->z;
                  local_d4 = ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                             ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                             ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
                  local_124 = (float)(((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)local_dc)
                                       >> 0x10 |
                                      (int)((ulonglong)
                                            ((longlong)g_InverseMatrix.m[0].x * (longlong)local_dc)
                                           >> 0x20) << 0x10) +
                                      ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_d8)
                                       >> 0x10 |
                                      (int)((ulonglong)
                                            ((longlong)g_InverseMatrix.m[1].x * (longlong)local_d8)
                                           >> 0x20) << 0x10) +
                                     ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_d4)
                                      >> 0x10 |
                                     (int)((ulonglong)
                                           ((longlong)g_InverseMatrix.m[2].x * (longlong)local_d4)
                                          >> 0x20) << 0x10));
                  local_120[0] = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)local_dc) >>
                                  0x10 | (int)((ulonglong)
                                               ((longlong)g_InverseMatrix.m[0].y *
                                               (longlong)local_dc) >> 0x20) << 0x10) +
                                 ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_d8) >>
                                  0x10 | (int)((ulonglong)
                                               ((longlong)g_InverseMatrix.m[1].y *
                                               (longlong)local_d8) >> 0x20) << 0x10) +
                                 ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_d4) >>
                                  0x10 | (int)((ulonglong)
                                               ((longlong)g_InverseMatrix.m[2].y *
                                               (longlong)local_d4) >> 0x20) << 0x10);
                  vertex_normals = vertex_normals + 1;
                  pCVar22 = g_VertexNormalArray + iVar12;
                  local_120[1] = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)local_dc) >>
                                  0x10 | (int)((ulonglong)
                                               ((longlong)g_InverseMatrix.m[0].z *
                                               (longlong)local_dc) >> 0x20) << 0x10) +
                                 ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_d8) >>
                                  0x10 | (int)((ulonglong)
                                               ((longlong)g_InverseMatrix.m[1].z *
                                               (longlong)local_d8) >> 0x20) << 0x10) +
                                 ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_d4) >>
                                  0x10 | (int)((ulonglong)
                                               ((longlong)g_InverseMatrix.m[2].z *
                                               (longlong)local_d4) >> 0x20) << 0x10);
                  iVar12 = iVar12 + 1;
                  piVar21 = (int *)(iVar18 + 0x33081d0 + (uint)bVar23 * -8);
                  pCVar22->x = local_124;
                  *piVar21 = local_120[(uint)bVar23 * -2];
                  piVar21[(uint)bVar23 * -2 + 1] =
                       local_120[(uint)bVar23 * -2 + (uint)bVar23 * -2 + 1];
                } while (iVar12 < vertex_count);
              }
            }
            else {
              iVar12 = 0;
              if (0 < vertex_count) {
                do {
                  iVar18 = iVar12 * 0xc;
                  pCVar22 = g_VertexNormalArray + iVar12;
                  iVar12 = iVar12 + 1;
                  puVar20 = (uint *)(iVar18 + 0x33081d0 + (uint)bVar23 * -8);
                  puVar19 = (uint *)((int)vertex_normals + (uint)bVar23 * -8 + 4);
                  pCVar22->x = (float)vertex_normals->x;
                  *puVar20 = *puVar19;
                  puVar20[(uint)bVar23 * -2 + 1] = puVar19[(uint)bVar23 * -2 + 1];
                  vertex_normals = vertex_normals + 1;
                } while (iVar12 < vertex_count);
              }
            }
            if (0 < vertex_count) {
              local_54 = g_TransformedVertexArray;
              iVar12 = 0;
              iVar18 = 0;
              pCVar22 = g_VertexNormalArray;
              do {
                iVar13 = iVar12 + 1;
                core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                          (this_ptr,local_54,(CVector3i *)pCVar22,iVar12,0);
                *(float *)((int)&g_RenderVertexBuffer[0].a + iVar18) = g_PerspectiveReciprocal;
                local_54 = local_54 + 1;
                iVar12 = iVar13;
                iVar18 = iVar18 + 0x30;
                pCVar22 = pCVar22 + 1;
              } while (iVar13 < vertex_count);
              return;
            }
          }
        }
        else if (0 < vertex_count) {
          local_40 = 0;
          iVar12 = 0;
          do {
            local_10c.x = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x +
                                  iVar12);
            local_10c.y = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y +
                                  iVar12);
            local_10c.z = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z +
                                  iVar12);
            core_set_cpp_transformToWorldSpace_FUN_0056e890(&local_10c,&local_148);
            iVar18 = local_40;
            iVar13 = 0;
            pCVar24 = (CVector3i *)0x0;
            local_178.x = local_148.x;
            *(uint *)((int)&local_178 + (uint)bVar23 * -8 + 4) =
                 *(uint *)((int)&local_148 + (uint)bVar23 * -8 + 4);
            *(uint *)((int)&local_178 + (uint)bVar23 * -8 + (uint)bVar23 * -8 + 8) =
                 *(uint *)((int)&local_148 + (uint)bVar23 * -8 + (uint)bVar23 * -8 + 8);
            core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                      (this_ptr,&local_178,pCVar24,iVar18,iVar13);
            local_40 = local_40 + 1;
            *(float *)((int)&g_RenderVertexBuffer[0].a + iVar12) = g_PerspectiveReciprocal;
            iVar12 = iVar12 + 0x30;
          } while (local_40 < vertex_count);
          return;
        }
      }
      else if (0 < vertex_count) {
        iVar18 = 0;
        do {
          *(int *)((int)&g_RenderVertexBuffer[0].r + iVar18) = this_ptr->mirror_cached_light;
          *(int *)((int)&g_RenderVertexBuffer[0].g + iVar18) = this_ptr->mirror_cached_color;
          iVar13 = iVar18 + 0x30;
          *(int *)((int)&g_RenderVertexBuffer[0].b + iVar18) = this_ptr->mirror_cached_fog;
          iVar18 = iVar13;
        } while (iVar13 < iVar12);
        return;
      }
    }
    else {
      if (g_InMirrorRenderPass == 0) {
        if (this_ptr->lighting_quality_mode == 2) {
          iVar12 = 0;
          if (0 < vertex_count) {
            iVar18 = 0;
            do {
              *(uint *)((int)&g_RenderVertexBuffer[0].a + iVar18) = 0;
              core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                        (this_ptr,vertex_positions,(CVector3i *)0x0,iVar12,1);
              iVar12 = iVar12 + 1;
              vertex_positions = vertex_positions + 1;
              iVar18 = iVar18 + 0x30;
            } while (iVar12 < vertex_count);
          }
        }
        else if (this_ptr->lighting_quality_mode == 3) {
          if (0 < vertex_count) {
            iVar18 = 0;
            do {
              *(int *)((int)&g_RenderVertexBuffer[0].r + iVar18) = this_ptr->light_scale_factor;
              *(int *)((int)&g_RenderVertexBuffer[0].g + iVar18) = this_ptr->color_scale_factor;
              iVar13 = iVar18 + 0x30;
              *(int *)((int)&g_RenderVertexBuffer[0].b + iVar18) = this_ptr->fog_scale_factor;
              *(uint *)((int)&g_RenderVertexBuffer[0].a + iVar18) = 0;
              iVar18 = iVar13;
            } while (iVar13 < iVar12);
            g_PerspectiveReciprocal = 0.0;
            return;
          }
        }
        else if (0 < vertex_count) {
          iVar18 = 0;
          do {
            iVar13 = iVar18 + 0x30;
            *(uint *)((int)&g_RenderVertexBuffer[0].r + iVar18) = 0xffff;
            *(uint *)((int)&g_RenderVertexBuffer[0].g + iVar18) = 0xffff;
            *(uint *)((int)&g_RenderVertexBuffer[0].b + iVar18) = 0xffff;
            *(uint *)((int)&g_RenderVertexBuffer[0].a + iVar18) = 0;
            iVar18 = iVar13;
          } while (iVar13 < iVar12);
          g_PerspectiveReciprocal = 0.0;
          return;
        }
        g_PerspectiveReciprocal = 0.0;
        return;
      }
      if (0 < vertex_count) {
        iVar18 = 0;
        do {
          iVar13 = iVar18 + 0x30;
          *(uint *)((int)&g_RenderVertexBuffer[0].r + iVar18) = 0;
          *(uint *)((int)&g_RenderVertexBuffer[0].g + iVar18) = 0;
          *(uint *)((int)&g_RenderVertexBuffer[0].b + iVar18) = 0;
          *(uint *)((int)&g_RenderVertexBuffer[0].a + iVar18) = 0;
          iVar18 = iVar13;
        } while (iVar13 < iVar12);
      }
      g_PerspectiveReciprocal = 0.0;
    }
  }
  return;
}
