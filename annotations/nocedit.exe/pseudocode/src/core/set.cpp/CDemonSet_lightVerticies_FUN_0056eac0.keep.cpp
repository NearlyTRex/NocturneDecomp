// Name: core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
// Address: 0056eac0
// MANUAL RECONSTRUCTION
// Address Range: [[0056eac0, 0056f93c] [00609fef, 0060a09f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar12;
  int iVar13;
  int iVar17;
  int iVar19;
  void *pvVar14;
  int iVar15;
  int iVar16;
  ushort *puVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  CVector3f *pCVar23;
  int iVar24;
  uint *puVar20;
  int *piVar21;
  CVector3f *pCVar22;
  byte bVar23;
  int aiStackY_1160 [1013];
  CVector3i *surface_normal;
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
  longlong lVar5;
  int iVar4;
  CVector3i *world_position;
  CVector3i *pCVar24;
  ushort uVar2;
  float *pfVar1;
  ushort uVar3;
  longlong lVar7;
  longlong lVar6;
  float fVar10;
  float fVar8;
  float fVar11;
  float fVar9;
  
  if (20000 < vertex_count) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 0xde8;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonSet::lightVerticies - tried to light %d vertices, but GLOBAL_VERTEX_COUNT = %d",vertex_count,20000);
  }
  iVar12 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar12 == 0) {
    iVar24 = vertex_count * 0x30;
    if (this_ptr->lighting_quality_mode == 0) {
      if (this_ptr->mirror_lighting_cached == 0) {
        if (this_ptr->disable_directional_lighting == 0) {
          if (vertex_normals == (CVector3i *)0x0) {
            if (tri_count == 0) {
              if (0 < vertex_count) {
                local_44 = 0;
                iVar24 = 0;
                do {
                  local_16c.x = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.
                                               transformed_x + iVar24);
                  local_16c.y = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.
                                               transformed_y + iVar24);
                  local_16c.z = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.
                                               transformed_z + iVar24);
                  core_set_cpp_transformToWorldSpace_FUN_0056e890(&local_16c,&local_154);
                  core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                            (this_ptr,&local_160,(CVector3i *)0x0,local_44,0);
                  *(int *)((int)&g_RenderVertexBuffer[0].a + iVar24) = g_PerspectiveReciprocal;
                  local_44 = local_44 + 1;
                  iVar24 = iVar24 + 0x30;
                } while (local_44 < vertex_count);
                return;
              }
            }
            else {
              if (0 < vertex_count) {
                iVar24 = 0;
                local_6c = 0;
                do {
                  local_13c.x = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.
                                               transformed_x + iVar24);
                  local_13c.y = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.
                                               transformed_y + iVar24);
                  local_13c.z = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.
                                               transformed_z + iVar24);
                  core_set_cpp_transformToWorldSpace_FUN_0056e890(&local_13c,&local_118);
                  iVar24 = iVar24 + 0x30;
                  *(int *)((int)&g_TransformedVertexArray[0].x + local_6c) = local_118.x;
                  *(int *)((int)&g_TransformedVertexArray[0].y + local_6c) = local_118.y;
                  *(int *)((int)&g_TransformedVertexArray[0].z + local_6c) = local_118.z;
                  local_6c = local_6c + 0xc;
                } while (iVar24 < local_118.z);
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
                iVar24 = 0;
                if (0 < tri_count) {
                  pCVar23 = g_FaceNormalArray;
                  puVar17 = (ushort *)face_data;
                  do {
                    uVar2 = *puVar17;
                    uVar1 = puVar17[2];
                    uVar3 = puVar17[1];
                    iVar19 = g_TransformedVertexArray[uVar1].x - g_TransformedVertexArray[uVar3].x;
                    fVar5 = (float)(g_TransformedVertexArray[uVar3].z -
                                   g_TransformedVertexArray[uVar2].z);
                    fVar6 = (float)(g_TransformedVertexArray[uVar3].y -
                                   g_TransformedVertexArray[uVar2].y);
                    fVar7 = (float)(g_TransformedVertexArray[uVar1].z -
                                   g_TransformedVertexArray[uVar3].z);
                    fVar14 = (float)(g_TransformedVertexArray[uVar3].x -
                                    g_TransformedVertexArray[uVar2].x);
                    fVar13 = (float)(g_TransformedVertexArray[uVar1].y -
                                    g_TransformedVertexArray[uVar3].y);
                    fVar12 = fVar6 * fVar7 - fVar13 * fVar5;
                    fVar5 = (float)iVar19 * fVar5 - fVar14 * fVar7;
                    fVar7 = fVar14 * fVar13 - (float)iVar19 * fVar6;
                    fVar6 = (float)(g_LightAttenuationMax -
                                   ((int)(fVar7 * fVar7 + fVar5 * fVar5 + fVar12 * fVar12) >> 1)) *
                            (float)65535;
                    puVar17 = puVar17 + 9;
                    iVar24 = iVar24 + 1;
                    pCVar23->x = fVar12 * fVar6;
                    pCVar23->y = fVar5 * fVar6;
                    pCVar23->z = fVar7 * fVar6;
                    pCVar23 = pCVar23 + 1;
                  } while (iVar24 < tri_count);
                }
                memset(g_VertexNormalArray,0,vertex_count * 0xc);
                iVar24 = 0;
                if (0 < tri_count) {
                  pCVar23 = g_FaceNormalArray;
                  do {
                    uVar1 = *(ushort *)face_data;
                    g_VertexNormalArray[uVar1].x = pCVar23->x + g_VertexNormalArray[uVar1].x;
                    g_VertexNormalArray[uVar1].y = pCVar23->y + g_VertexNormalArray[uVar1].y;
                    g_VertexNormalArray[uVar1].z = pCVar23->z + g_VertexNormalArray[uVar1].z;
                    uVar1 = *(ushort *)((int)face_data + 2);
                    g_VertexNormalArray[uVar1].x = pCVar23->x + g_VertexNormalArray[uVar1].x;
                    g_VertexNormalArray[uVar1].y = pCVar23->y + g_VertexNormalArray[uVar1].y;
                    g_VertexNormalArray[uVar1].z = pCVar23->z + g_VertexNormalArray[uVar1].z;
                    uVar1 = *(ushort *)((int)face_data + 4);
                    face_data = (void *)((int)face_data + 0x12);
                    g_VertexNormalArray[uVar1].x = pCVar23->x + g_VertexNormalArray[uVar1].x;
                    g_VertexNormalArray[uVar1].y = pCVar23->y + g_VertexNormalArray[uVar1].y;
                    iVar24 = iVar24 + 1;
                    g_VertexNormalArray[uVar1].z = pCVar23->z + g_VertexNormalArray[uVar1].z;
                    pCVar23 = pCVar23 + 1;
                  } while (iVar24 < tri_count);
                }
              }
              else {
                iVar24 = 0;
                pvVar14 = face_data;
                if (0 < tri_count) {
                  do {
                    iVar19 = *(int *)((int)pvVar14 + 0x24);
                    iVar17 = *(int *)((int)pvVar14 + 0x18);
                    iVar16 = g_TransformedVertexArray[iVar19].y - g_TransformedVertexArray[iVar17].y
                    ;
                    iVar4 = *(int *)((int)pvVar14 + 0x30);
                    iVar15 = g_TransformedVertexArray[iVar4].x - g_TransformedVertexArray[iVar19].x;
                    fVar7 = (float)(g_TransformedVertexArray[iVar19].z -
                                   g_TransformedVertexArray[iVar17].z);
                    fVar5 = (float)(g_TransformedVertexArray[iVar4].z -
                                   g_TransformedVertexArray[iVar19].z);
                    fVar6 = (float)(g_TransformedVertexArray[iVar19].x -
                                   g_TransformedVertexArray[iVar17].x);
                    fVar12 = (float)(g_TransformedVertexArray[iVar4].y -
                                    g_TransformedVertexArray[iVar19].y);
                    fVar8 = (float)iVar16 * fVar5 - fVar12 * fVar7;
                    fVar11 = (float)iVar15 * fVar7 - fVar6 * fVar5;
                    fVar10 = fVar6 * fVar12 - (float)iVar15 * (float)iVar16;
                    fVar9 = ((float)g_LightAttenuationMax -
                            (fVar10 * fVar10 + fVar11 * fVar11 + fVar8 * fVar8) * 0.5f)
                            * (float)65535;
                    *(float *)((int)pvVar14 + 8) = fVar8 * fVar9;
                    *(float *)((int)pvVar14 + 0xc) = fVar11 * fVar9;
                    *(float *)((int)pvVar14 + 0x10) = fVar10 * fVar9;
                    if (vertices_per_face == 4) {
                      pvVar14 = (void *)((int)pvVar14 + 0x48);
                    }
                    else {
                      pvVar14 = (void *)((int)pvVar14 + 0x3c);
                    }
                    iVar24 = iVar24 + 1;
                  } while (iVar24 < tri_count);
                }
                memset(g_VertexNormalArray,0,vertex_count * 0xc);
                iVar24 = 0;
                if (0 < tri_count) {
                  do {
                    iVar19 = *(int *)((int)face_data + 0x18);
                    pfVar1 = (float *)((int)face_data + 8);
                    g_VertexNormalArray[iVar19].x = *pfVar1 + g_VertexNormalArray[iVar19].x;
                    g_VertexNormalArray[iVar19].y =
                         *(float *)((int)face_data + 0xc) + g_VertexNormalArray[iVar19].y;
                    g_VertexNormalArray[iVar19].z =
                         *(float *)((int)face_data + 0x10) + g_VertexNormalArray[iVar19].z;
                    iVar19 = *(int *)((int)face_data + 0x24);
                    g_VertexNormalArray[iVar19].x = *pfVar1 + g_VertexNormalArray[iVar19].x;
                    g_VertexNormalArray[iVar19].y =
                         *(float *)((int)face_data + 0xc) + g_VertexNormalArray[iVar19].y;
                    g_VertexNormalArray[iVar19].z =
                         *(float *)((int)face_data + 0x10) + g_VertexNormalArray[iVar19].z;
                    iVar19 = *(int *)((int)face_data + 0x30);
                    g_VertexNormalArray[iVar19].x = *pfVar1 + g_VertexNormalArray[iVar19].x;
                    g_VertexNormalArray[iVar19].y =
                         *(float *)((int)face_data + 0xc) + g_VertexNormalArray[iVar19].y;
                    g_VertexNormalArray[iVar19].z =
                         *(float *)((int)face_data + 0x10) + g_VertexNormalArray[iVar19].z;
                    if (*(int *)((int)face_data + 4) == 4) {
                      iVar19 = *(int *)((int)face_data + 0x3c);
                      g_VertexNormalArray[iVar19].x = *pfVar1 + g_VertexNormalArray[iVar19].x;
                      g_VertexNormalArray[iVar19].y =
                           *(float *)((int)face_data + 0xc) + g_VertexNormalArray[iVar19].y;
                      g_VertexNormalArray[iVar19].z =
                           *(float *)((int)face_data + 0x10) + g_VertexNormalArray[iVar19].z;
                    }
                    if (vertices_per_face == 4) {
                      face_data = (void *)((int)face_data + 0x48);
                    }
                    else {
                      face_data = (void *)((int)face_data + 0x3c);
                    }
                    iVar24 = iVar24 + 1;
                  } while (iVar24 < tri_count);
                }
              }
              if (this_ptr->skip_normal_normalization == 0) {
                if (0 < vertex_count) {
                  pCVar23 = g_VertexNormalArray;
                  local_68 = g_TransformedVertexArray;
                  iVar24 = 0;
                  local_64 = 0;
                  do {
                    fVar5 = ((float)g_LightAttenuationMax -
                            (pCVar23->z * pCVar23->z +
                             pCVar23->x * pCVar23->x + pCVar23->y * pCVar23->y) * 0.5f) *
                            (float)65535;
                    pCVar23->x = pCVar23->x * fVar5;
                    pCVar23->y = pCVar23->y * fVar5;
                    pCVar23->z = pCVar23->z * fVar5;
                    local_100.x = (int)ROUND(pCVar23->x);
                    local_100.y = (int)ROUND(pCVar23->y);
                    local_100.z = (int)ROUND(pCVar23->z);
                    pCVar23 = pCVar23 + 1;
                    iVar19 = iVar24 + 1;
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                              (this_ptr,local_68,&local_100,iVar24,0);
                    local_68 = local_68 + 1;
                    *(int *)((int)&g_RenderVertexBuffer[0].a + local_64) = g_PerspectiveReciprocal;
                    iVar24 = iVar19;
                    local_64 = local_64 + 0x30;
                  } while (iVar19 < vertex_count);
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
                      fVar5 = (float)(g_LightAttenuationMax -
                                     ((int)(pCVar22->z * pCVar22->z +
                                           pCVar22->x * pCVar22->x + pCVar22->y * pCVar22->y) >> 1))
                              * (float)65535;
                      pCVar22->x = pCVar22->x * fVar5;
                      pCVar22->y = pCVar22->y * fVar5;
                      pCVar22->z = pCVar22->z * fVar5;
                      local_f4.x = (int)ROUND(pCVar22->x);
                      local_f4.y = (int)ROUND(pCVar22->y);
                      local_f4.z = (int)ROUND(pCVar22->z);
                      surface_normal = &local_f4;
                      world_position = local_60;
                    }
                    else {
                      surface_normal = (CVector3i *)0x0;
                      world_position = g_TransformedVertexArray + local_3c;
                    }
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                              (this_ptr,world_position,surface_normal,local_3c,0);
                    pCVar22 = pCVar22 + 1;
                    local_3c = local_3c + 1;
                    *(int *)((int)&g_RenderVertexBuffer[0].a + local_58) = g_PerspectiveReciprocal;
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
                iVar19 = 0;
                do {
                  local_e8.x = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x
                                       + iVar19);
                  local_e8.y = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y
                                       + iVar19);
                  local_e8.z = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z
                                       + iVar19);
                  core_set_cpp_transformToWorldSpace_FUN_0056e890(&local_e8,&local_130);
                  iVar19 = iVar19 + 0x30;
                  *(int *)((int)&g_TransformedVertexArray[0].x + local_5c) = local_130.x;
                  *(int *)((int)&g_TransformedVertexArray[0].y + local_5c) = local_130.y;
                  *(int *)((int)&g_TransformedVertexArray[0].z + local_5c) = local_130.z;
                  local_5c = local_130.z + 0xc;
                } while (iVar19 < iVar24);
              }
              iVar24 = 0;
              if (0 < vertex_count) {
                do {
                  lVar5 = (longlong)g_TransformMatrix.m[0].x * (longlong)vertex_normals->x;
                  lVar6 = (longlong)g_TransformMatrix.m[1].x * (longlong)vertex_normals->y;
                  lVar7 = (longlong)g_TransformMatrix.m[2].x * (longlong)vertex_normals->z;
                  iVar17 = ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                           ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                           ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
                  lVar2 = (longlong)g_TransformMatrix.m[0].y * (longlong)vertex_normals->x;
                  lVar3 = (longlong)g_TransformMatrix.m[1].y * (longlong)vertex_normals->y;
                  lVar4 = (longlong)g_TransformMatrix.m[2].y * (longlong)vertex_normals->z;
                  iVar20 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
                  lVar2 = (longlong)g_TransformMatrix.m[0].z * (longlong)vertex_normals->x;
                  lVar3 = (longlong)g_TransformMatrix.m[1].z * (longlong)vertex_normals->y;
                  lVar4 = (longlong)g_TransformMatrix.m[2].z * (longlong)vertex_normals->z;
                  iVar21 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
                  lVar2 = (longlong)g_InverseMatrix.m[0].y;
                  lVar3 = (longlong)g_InverseMatrix.m[1].y;
                  lVar4 = (longlong)g_InverseMatrix.m[2].y;
                  int iVarZ =
                       (((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar17) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar17) >>
                             0x20) << 0x10) +
                        ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar20) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar20) >>
                             0x20) << 0x10) +
                       ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar21) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar21) >>
                            0x20) << 0x10));
                  iVar19 = iVar24 + 1;
                  g_VertexNormalArray[iVar24].x =
                       (float)(((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar17) >> 0x10
                               | (int)((ulonglong)
                                       ((longlong)g_InverseMatrix.m[0].x * (longlong)iVar17) >> 0x20
                                      ) << 0x10) +
                               ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar20) >> 0x10
                               | (int)((ulonglong)
                                       ((longlong)g_InverseMatrix.m[1].x * (longlong)iVar20) >> 0x20
                                      ) << 0x10) +
                              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar21) >> 0x10 |
                              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar21)
                                   >> 0x20) << 0x10));
                  g_VertexNormalArray[iVar24].y =
                       (float)(((uint)(lVar2 * iVar17) >> 0x10 |
                               (int)((ulonglong)(lVar2 * iVar17) >> 0x20) << 0x10) +
                               ((uint)(lVar3 * iVar20) >> 0x10 |
                               (int)((ulonglong)(lVar3 * iVar20) >> 0x20) << 0x10) +
                              ((uint)(lVar4 * iVar21) >> 0x10 |
                              (int)((ulonglong)(lVar4 * iVar21) >> 0x20) << 0x10));
                  g_VertexNormalArray[iVar24].z = (float)iVarZ;
                  iVar24 = iVar19;
                } while (iVar19 < vertex_count);
              }
            }
            else {
              iVar24 = 0;
              if (0 < vertex_count) {
                do {
                  iVar19 = iVar24 + 1;
                  *(CVector3i *)&g_VertexNormalArray[iVar24] = vertex_normals[iVar24];
                  iVar24 = iVar19;
                } while (iVar19 < vertex_count);
              }
            }
            if (0 < vertex_count) {
              local_54 = g_TransformedVertexArray;
              iVar24 = 0;
              iVar19 = 0;
              pCVar23 = g_VertexNormalArray;
              do {
                iVar17 = iVar24 + 1;
                core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                          (this_ptr,local_54,(CVector3i *)pCVar23,iVar24,0);
                *(int *)((int)&g_RenderVertexBuffer[0].a + iVar19) = g_PerspectiveReciprocal;
                local_54 = local_54 + 1;
                iVar24 = iVar17;
                iVar19 = iVar19 + 0x30;
                pCVar23 = pCVar23 + 1;
              } while (iVar17 < vertex_count);
              return;
            }
          }
        }
        else if (0 < vertex_count) {
          local_40 = 0;
          iVar24 = 0;
          do {
            local_10c.x = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x +
                                  iVar24);
            local_10c.y = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y +
                                  iVar24);
            local_10c.z = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z +
                                  iVar24);
            core_set_cpp_transformToWorldSpace_FUN_0056e890(&local_10c,&local_148);
            core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                      (this_ptr,&local_178,(CVector3i *)0x0,local_40,0);
            local_40 = local_40 + 1;
            *(int *)((int)&g_RenderVertexBuffer[0].a + iVar24) = g_PerspectiveReciprocal;
            iVar24 = iVar24 + 0x30;
          } while (local_40 < vertex_count);
          return;
        }
      }
      else if (0 < vertex_count) {
        iVar19 = 0;
        do {
          *(int *)((int)&g_RenderVertexBuffer[0].r + iVar19) = this_ptr->mirror_cached_light;
          *(int *)((int)&g_RenderVertexBuffer[0].g + iVar19) = this_ptr->mirror_cached_color;
          iVar17 = iVar19 + 0x30;
          *(int *)((int)&g_RenderVertexBuffer[0].b + iVar19) = this_ptr->mirror_cached_fog;
          iVar19 = iVar17;
        } while (iVar17 < iVar24);
        return;
      }
    }
    else {
      if (g_InMirrorRenderPass == 0) {
        if (this_ptr->lighting_quality_mode == 2) {
          iVar24 = 0;
          if (0 < vertex_count) {
            iVar19 = 0;
            do {
              *(uint *)((int)&g_RenderVertexBuffer[0].a + iVar19) = 0;
              core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                        (this_ptr,vertex_positions,(CVector3i *)0x0,iVar24,1);
              iVar24 = iVar24 + 1;
              vertex_positions = vertex_positions + 1;
              iVar19 = iVar19 + 0x30;
            } while (iVar24 < vertex_count);
          }
        }
        else if (this_ptr->lighting_quality_mode == 3) {
          if (0 < vertex_count) {
            iVar19 = 0;
            do {
              *(int *)((int)&g_RenderVertexBuffer[0].r + iVar19) = this_ptr->light_scale_factor;
              *(int *)((int)&g_RenderVertexBuffer[0].g + iVar19) = this_ptr->color_scale_factor;
              iVar17 = iVar19 + 0x30;
              *(int *)((int)&g_RenderVertexBuffer[0].b + iVar19) = this_ptr->fog_scale_factor;
              *(uint *)((int)&g_RenderVertexBuffer[0].a + iVar19) = 0;
              iVar19 = iVar17;
            } while (iVar17 < iVar24);
            g_PerspectiveReciprocal = 0;
            return;
          }
        }
        else if (0 < vertex_count) {
          iVar19 = 0;
          do {
            iVar17 = iVar19 + 0x30;
            *(uint *)((int)&g_RenderVertexBuffer[0].r + iVar19) = 0xffff;
            *(uint *)((int)&g_RenderVertexBuffer[0].g + iVar19) = 0xffff;
            *(uint *)((int)&g_RenderVertexBuffer[0].b + iVar19) = 0xffff;
            *(uint *)((int)&g_RenderVertexBuffer[0].a + iVar19) = 0;
            iVar19 = iVar17;
          } while (iVar17 < iVar24);
          g_PerspectiveReciprocal = 0;
          return;
        }
        g_PerspectiveReciprocal = 0;
        return;
      }
      if (0 < vertex_count) {
        iVar13 = 0;
        do {
          iVar13 = iVar13 + 0x30;
          *(uint *)((int)&g_RenderVertexBuffer[0].r + iVar13) = 0;
          *(uint *)((int)&g_RenderVertexBuffer[0].g + iVar13) = 0;
          *(uint *)((int)&g_RenderVertexBuffer[0].b + iVar13) = 0;
          *(uint *)((int)&g_RenderVertexBuffer[0].a + iVar13) = 0;
          iVar13 = iVar13;
        } while (iVar13 < iVar24);
      }
      g_PerspectiveReciprocal = 0;
    }
  }
  return;
}
