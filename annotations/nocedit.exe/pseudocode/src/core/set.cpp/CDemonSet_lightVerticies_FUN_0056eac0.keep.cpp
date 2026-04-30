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
  SMRGLPrimitiveTriangle *pvVar14;
  SInputFace *psf;
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
  CVector3i *local_68;
  CVector3i *local_60;
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
    if (this_ptr->lighting_quality_mode == 0) {
      if (this_ptr->mirror_lighting_cached == 0) {
        if (this_ptr->disable_directional_lighting == 0) {
          if (vertex_normals == (CVector3i *)0x0) {
            if (tri_count == 0) {
              if (0 < vertex_count) {
                local_44 = 0;
                do {
                  local_16c.x = g_RenderVertexBuffer[local_44].projected_vertex.transformed_x;
                  local_16c.y = g_RenderVertexBuffer[local_44].projected_vertex.transformed_y;
                  local_16c.z = g_RenderVertexBuffer[local_44].projected_vertex.transformed_z;
                  core_set_cpp_transformToWorldSpace_FUN_0056e890(&local_16c,&local_154);
                  core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                            (this_ptr,&local_160,(CVector3i *)0x0,local_44,0);
                  g_RenderVertexBuffer[local_44].a = g_PerspectiveReciprocal;
                  local_44 = local_44 + 1;
                } while (local_44 < vertex_count);
                return;
              }
            }
            else {
              if (0 < vertex_count) {
                iVar24 = 0;
                do {
                  local_13c.x = g_RenderVertexBuffer[iVar24].projected_vertex.transformed_x;
                  local_13c.y = g_RenderVertexBuffer[iVar24].projected_vertex.transformed_y;
                  local_13c.z = g_RenderVertexBuffer[iVar24].projected_vertex.transformed_z;
                  core_set_cpp_transformToWorldSpace_FUN_0056e890(&local_13c,&local_118);
                  g_TransformedVertexArray[iVar24].x = local_118.x;
                  g_TransformedVertexArray[iVar24].y = local_118.y;
                  g_TransformedVertexArray[iVar24].z = local_118.z;
                  iVar24 = iVar24 + 1;
                } while (iVar24 < vertex_count);
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
                    fVar6 = core_cloth_cpp_fastInvSqrt_FUN_0043e2a0(
                              fVar7 * fVar7 + fVar5 * fVar5 + fVar12 * fVar12) *
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
                  psf = (SInputFace *)face_data;
                  do {
                    uVar1 = psf->vertex_indices.vertex_index_0;
                    g_VertexNormalArray[uVar1].x = pCVar23->x + g_VertexNormalArray[uVar1].x;
                    g_VertexNormalArray[uVar1].y = pCVar23->y + g_VertexNormalArray[uVar1].y;
                    g_VertexNormalArray[uVar1].z = pCVar23->z + g_VertexNormalArray[uVar1].z;
                    uVar1 = psf->vertex_indices.vertex_index_1;
                    g_VertexNormalArray[uVar1].x = pCVar23->x + g_VertexNormalArray[uVar1].x;
                    g_VertexNormalArray[uVar1].y = pCVar23->y + g_VertexNormalArray[uVar1].y;
                    g_VertexNormalArray[uVar1].z = pCVar23->z + g_VertexNormalArray[uVar1].z;
                    uVar1 = psf->vertex_indices.vertex_index_2;
                    psf = psf + 1;
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
                pvVar14 = (SMRGLPrimitiveTriangle *)face_data;
                if (0 < tri_count) {
                  do {
                    iVar19 = pvVar14->vertices[1].vertex_index;
                    iVar17 = pvVar14->vertices[0].vertex_index;
                    iVar16 = g_TransformedVertexArray[iVar19].y - g_TransformedVertexArray[iVar17].y
                    ;
                    iVar4 = pvVar14->vertices[2].vertex_index;
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
                    fVar9 = core_cloth_cpp_fastInvSqrt_FUN_0043e2a0(
                              fVar10 * fVar10 + fVar11 * fVar11 + fVar8 * fVar8) *
                            (float)65535;
                    *(float *)&pvVar14->base.surface_normal.A = fVar8 * fVar9;
                    *(float *)&pvVar14->base.surface_normal.B = fVar11 * fVar9;
                    *(float *)&pvVar14->base.surface_normal.C = fVar10 * fVar9;
                    pvVar14 = (SMRGLPrimitiveTriangle *)((char *)pvVar14 +
                                  (vertices_per_face == 4 ? sizeof(SMRGLPrimitiveQuad)
                                                          : sizeof(SMRGLPrimitiveTriangle)));
                    iVar24 = iVar24 + 1;
                  } while (iVar24 < tri_count);
                }
                memset(g_VertexNormalArray,0,vertex_count * 0xc);
                iVar24 = 0;
                if (0 < tri_count) {
                  pvVar14 = (SMRGLPrimitiveTriangle *)face_data;
                  do {
                    pfVar1 = (float *)&pvVar14->base.surface_normal.A;
                    iVar19 = pvVar14->vertices[0].vertex_index;
                    g_VertexNormalArray[iVar19].x = *pfVar1 + g_VertexNormalArray[iVar19].x;
                    g_VertexNormalArray[iVar19].y =
                         *(float *)&pvVar14->base.surface_normal.B + g_VertexNormalArray[iVar19].y;
                    g_VertexNormalArray[iVar19].z =
                         *(float *)&pvVar14->base.surface_normal.C + g_VertexNormalArray[iVar19].z;
                    iVar19 = pvVar14->vertices[1].vertex_index;
                    g_VertexNormalArray[iVar19].x = *pfVar1 + g_VertexNormalArray[iVar19].x;
                    g_VertexNormalArray[iVar19].y =
                         *(float *)&pvVar14->base.surface_normal.B + g_VertexNormalArray[iVar19].y;
                    g_VertexNormalArray[iVar19].z =
                         *(float *)&pvVar14->base.surface_normal.C + g_VertexNormalArray[iVar19].z;
                    iVar19 = pvVar14->vertices[2].vertex_index;
                    g_VertexNormalArray[iVar19].x = *pfVar1 + g_VertexNormalArray[iVar19].x;
                    g_VertexNormalArray[iVar19].y =
                         *(float *)&pvVar14->base.surface_normal.B + g_VertexNormalArray[iVar19].y;
                    g_VertexNormalArray[iVar19].z =
                         *(float *)&pvVar14->base.surface_normal.C + g_VertexNormalArray[iVar19].z;
                    if (pvVar14->base.base.count == 4) {
                      iVar19 = ((SMRGLPrimitiveQuad *)pvVar14)->vertices[3].vertex_index;
                      g_VertexNormalArray[iVar19].x = *pfVar1 + g_VertexNormalArray[iVar19].x;
                      g_VertexNormalArray[iVar19].y =
                           *(float *)&pvVar14->base.surface_normal.B + g_VertexNormalArray[iVar19].y;
                      g_VertexNormalArray[iVar19].z =
                           *(float *)&pvVar14->base.surface_normal.C + g_VertexNormalArray[iVar19].z;
                    }
                    pvVar14 = (SMRGLPrimitiveTriangle *)((char *)pvVar14 +
                                  (vertices_per_face == 4 ? sizeof(SMRGLPrimitiveQuad)
                                                          : sizeof(SMRGLPrimitiveTriangle)));
                    iVar24 = iVar24 + 1;
                  } while (iVar24 < tri_count);
                }
              }
              if (this_ptr->skip_normal_normalization == 0) {
                if (0 < vertex_count) {
                  pCVar23 = g_VertexNormalArray;
                  local_68 = g_TransformedVertexArray;
                  iVar24 = 0;
                  do {
                    fVar5 = core_cloth_cpp_fastInvSqrt_FUN_0043e2a0(
                              pCVar23->z * pCVar23->z +
                              pCVar23->x * pCVar23->x + pCVar23->y * pCVar23->y) *
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
                    g_RenderVertexBuffer[iVar24].a = g_PerspectiveReciprocal;
                    iVar24 = iVar19;
                  } while (iVar19 < vertex_count);
                  return;
                }
              }
              else {
                local_3c = 0;
                if (0 < vertex_count) {
                  pCVar22 = g_VertexNormalArray;
                  local_60 = g_TransformedVertexArray;
                  do {
                    if (((1.0 <= ABS(pCVar22->x)) || (1.0 <= ABS(pCVar22->y))) ||
                       (1.0 <= ABS(pCVar22->z))) {
                      fVar5 = core_cloth_cpp_fastInvSqrt_FUN_0043e2a0(
                                pCVar22->z * pCVar22->z +
                                pCVar22->x * pCVar22->x + pCVar22->y * pCVar22->y) *
                              (float)65535;
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
                    g_RenderVertexBuffer[local_3c].a = g_PerspectiveReciprocal;
                    local_3c = local_3c + 1;
                    local_60 = local_60 + 1;
                  } while (local_3c < vertex_count);
                }
              }
            }
          }
          else {
            if (this_ptr->rendering_mode == 0) {
              if (0 < vertex_count) {
                iVar19 = 0;
                do {
                  local_e8.x = g_RenderVertexBuffer[iVar19].projected_vertex.transformed_x;
                  local_e8.y = g_RenderVertexBuffer[iVar19].projected_vertex.transformed_y;
                  local_e8.z = g_RenderVertexBuffer[iVar19].projected_vertex.transformed_z;
                  core_set_cpp_transformToWorldSpace_FUN_0056e890(&local_e8,&local_130);
                  g_TransformedVertexArray[iVar19].x = local_130.x;
                  g_TransformedVertexArray[iVar19].y = local_130.y;
                  g_TransformedVertexArray[iVar19].z = local_130.z;
                  iVar19 = iVar19 + 1;
                } while (iVar19 < vertex_count);
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
              pCVar23 = g_VertexNormalArray;
              do {
                iVar17 = iVar24 + 1;
                core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                          (this_ptr,local_54,(CVector3i *)pCVar23,iVar24,0);
                g_RenderVertexBuffer[iVar24].a = g_PerspectiveReciprocal;
                local_54 = local_54 + 1;
                iVar24 = iVar17;
                pCVar23 = pCVar23 + 1;
              } while (iVar17 < vertex_count);
              return;
            }
          }
        }
        else if (0 < vertex_count) {
          local_40 = 0;
          do {
            local_10c.x = g_RenderVertexBuffer[local_40].projected_vertex.transformed_x;
            local_10c.y = g_RenderVertexBuffer[local_40].projected_vertex.transformed_y;
            local_10c.z = g_RenderVertexBuffer[local_40].projected_vertex.transformed_z;
            core_set_cpp_transformToWorldSpace_FUN_0056e890(&local_10c,&local_148);
            core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                      (this_ptr,&local_178,(CVector3i *)0x0,local_40,0);
            g_RenderVertexBuffer[local_40].a = g_PerspectiveReciprocal;
            local_40 = local_40 + 1;
          } while (local_40 < vertex_count);
          return;
        }
      }
      else if (0 < vertex_count) {
        iVar19 = 0;
        do {
          g_RenderVertexBuffer[iVar19].r = this_ptr->mirror_cached_color.r;
          g_RenderVertexBuffer[iVar19].g = this_ptr->mirror_cached_color.g;
          iVar17 = iVar19 + 1;
          g_RenderVertexBuffer[iVar19].b = this_ptr->mirror_cached_color.b;
          iVar19 = iVar17;
        } while (iVar17 < vertex_count);
        return;
      }
    }
    else {
      if (g_InMirrorRenderPass == 0) {
        if (this_ptr->lighting_quality_mode == 2) {
          if (0 < vertex_count) {
            iVar24 = 0;
            do {
              g_RenderVertexBuffer[iVar24].a = 0;
              core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                        (this_ptr,vertex_positions,(CVector3i *)0x0,iVar24,1);
              iVar24 = iVar24 + 1;
              vertex_positions = vertex_positions + 1;
            } while (iVar24 < vertex_count);
          }
        }
        else if (this_ptr->lighting_quality_mode == 3) {
          if (0 < vertex_count) {
            iVar19 = 0;
            do {
              g_RenderVertexBuffer[iVar19].r = this_ptr->flat_color.r;
              g_RenderVertexBuffer[iVar19].g = this_ptr->flat_color.g;
              iVar17 = iVar19 + 1;
              g_RenderVertexBuffer[iVar19].b = this_ptr->flat_color.b;
              g_RenderVertexBuffer[iVar19].a = 0;
              iVar19 = iVar17;
            } while (iVar17 < vertex_count);
            g_PerspectiveReciprocal = 0;
            return;
          }
        }
        else if (0 < vertex_count) {
          iVar19 = 0;
          do {
            iVar17 = iVar19 + 1;
            g_RenderVertexBuffer[iVar19].r = 0xffff;
            g_RenderVertexBuffer[iVar19].g = 0xffff;
            g_RenderVertexBuffer[iVar19].b = 0xffff;
            g_RenderVertexBuffer[iVar19].a = 0;
            iVar19 = iVar17;
          } while (iVar17 < vertex_count);
          g_PerspectiveReciprocal = 0;
          return;
        }
        g_PerspectiveReciprocal = 0;
        return;
      }
      for (iVar13 = 0; iVar13 < vertex_count; iVar13++) {
        g_RenderVertexBuffer[iVar13].r = 0;
        g_RenderVertexBuffer[iVar13].g = 0;
        g_RenderVertexBuffer[iVar13].b = 0;
        g_RenderVertexBuffer[iVar13].a = 0;
      }
      g_PerspectiveReciprocal = 0;
    }
  }
  return;
}
