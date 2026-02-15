// Name: core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
// Address: 0056eac0
// Address Range: [[0056eac0, 0056f93c]]
// Convention: __cdecl
// Signature: float __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet *this_ptr,int vertex_count,int tri_count,SInputFace *tri_data_ptr,int render_flags,int lighting_mode,int flags)

#include "nocturne.h"

float __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet *this_ptr,int vertex_count,int tri_count,SInputFace *tri_data_ptr,int render_flags,int lighting_mode,int flags)

{
  ushort *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  CDemonSet *pCVar8;
  CDemonSet *extraout_EAX;
  float fVar9;
  float fVar10;
  CDemonSet *extraout_EAX_00;
  SInputFace *pSVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  int *piVar17;
  CVector3f *pCVar18;
  byte bVar19;
  int aiStackY_1160 [1013];
  CVector3i *world_position;
  CVector3i *pCVar20;
  int iVar21;
  CVector3i local_178;
  uint local_16c;
  uint local_168;
  uint local_164;
  CVector3i local_160;
  int local_154;
  int aiStack_150 [5];
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  int aiStack_12c [2];
  float local_124;
  int local_120;
  char *local_11c;
  uint local_118;
  uint local_10c;
  uint local_108;
  uint local_104;
  CVector3i local_100;
  CVector3i local_f4;
  uint local_e8;
  uint local_e4;
  uint local_e0;
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
  float local_44;
  int local_40;
  int local_3c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar19 = 0;
  if (20000 < vertex_count) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 0xde8;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonSet::lightVerticies - tried to light %d vertices, but GLOBAL_VERTEX_COUNT = %d",vertex_count,20000);
  }
  pCVar8 = (CDemonSet *)
           engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (pCVar8 == (CDemonSet *)0x0) {
    iVar15 = vertex_count * 0x30;
    if (this_ptr->lighting_quality_mode == 0) {
      pCVar8 = this_ptr;
      if (this_ptr->mirror_lighting_cached == 0) {
        if (this_ptr->disable_directional_lighting == 0) {
          if (flags == 0) {
            if (tri_count == 0) {
              if (0 < vertex_count) {
                local_44 = 0.0;
                iVar15 = 0;
                do {
                  local_16c = *(uint *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x +
                               iVar15);
                  local_168 = *(uint *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y +
                               iVar15);
                  local_164 = *(uint *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z +
                               iVar15);
                  core_set_cpp_FUN_0056e890();
                  local_160.x = local_154;
                  *(int *)((int)&local_160 + (uint)bVar19 * -8 + 4) = aiStack_150[(uint)bVar19 * -2]
                  ;
                  fVar10 = local_44;
                  *(int *)((int)&local_160 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
                       aiStack_150[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
                  core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                            (this_ptr,&local_160,(CVector3i *)0x0,(int)local_44,0);
                  *(float *)((int)&g_RenderVertexBuffer[0].w_recip + iVar15) =
                       g_PerspectiveReciprocal;
                  local_44 = (float)((int)fVar10 + 1);
                  iVar15 = iVar15 + 0x30;
                } while ((int)local_44 < vertex_count);
                return local_44;
              }
            }
            else {
              if (0 < vertex_count) {
                local_6c = 0;
                iVar13 = 0;
                local_74 = iVar15;
                do {
                  local_13c = *(uint *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x +
                               iVar13);
                  local_138 = *(uint *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y +
                               iVar13);
                  local_134 = *(uint *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z +
                               iVar13);
                  core_set_cpp_FUN_0056e890();
                  iVar15 = local_6c;
                  iVar13 = iVar13 + 0x30;
                  puVar2 = (uint *)((int)&g_TransformedVertexArray[0].x + local_6c);
                  local_6c = local_6c + 0xc;
                  piVar17 = (int *)(iVar15 + 0x32cd850 + (uint)bVar19 * -8);
                  *puVar2 = local_118;
                  *piVar17 = aiStack_12c[(uint)bVar19 * -2 + 6];
                  piVar17[(uint)bVar19 * -2 + 1] =
                       aiStack_12c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7];
                } while (iVar13 < local_74);
              }
              if (lighting_mode < 1) {
                if (4000 < tri_count) {
                  g_CurrentFilename = "..\\core\\set.cpp";
                  g_CurrentLineNumber = 0xeaf;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Too many normals on this packed tri list");
                  g_CurrentFilename = "..\\core\\set.cpp";
                  g_CurrentLineNumber = 0xeb1;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Need more normals for packed models");
                }
                iVar15 = 0;
                if (0 < tri_count) {
                  pCVar18 = g_FaceNormalArray;
                  pSVar11 = tri_data_ptr;
                  do {
                    uVar3 = (pSVar11->vertex_indices).vertex_index_0;
                    local_98 = (uint)(pSVar11->vertex_indices).vertex_index_2;
                    uVar4 = (pSVar11->vertex_indices).vertex_index_1;
                    local_24 = g_TransformedVertexArray[uVar4].x - g_TransformedVertexArray[uVar3].x
                    ;
                    local_18 = g_TransformedVertexArray[uVar4].y - g_TransformedVertexArray[uVar3].y
                    ;
                    iVar13 = g_TransformedVertexArray[local_98].x -
                             g_TransformedVertexArray[uVar4].x;
                    local_ac = (float)(g_TransformedVertexArray[uVar4].z -
                                      g_TransformedVertexArray[uVar3].z);
                    local_a8 = (float)iVar13;
                    local_1c = g_TransformedVertexArray[local_98].y -
                               g_TransformedVertexArray[uVar4].y;
                    local_b0 = (float)local_18;
                    local_20 = g_TransformedVertexArray[local_98].z -
                               g_TransformedVertexArray[uVar4].z;
                    local_a0 = (float)local_20;
                    local_4c = local_b0 * local_a0 - (float)local_1c * local_ac;
                    local_48 = (float)iVar13 * local_ac - (float)local_24 * local_a0;
                    local_50 = (float)local_24 * (float)local_1c - local_a8 * local_b0;
                    local_94 = local_50 * local_50 + local_48 * local_48 + local_4c * local_4c;
                    local_90 = (float)(g_LightAttenuationMax - ((int)local_94 >> 1));
                    fVar10 = local_90 * (float)65535;
                    pSVar11 = pSVar11 + 1;
                    iVar15 = iVar15 + 1;
                    pCVar18->x = local_4c * fVar10;
                    pCVar18->y = local_48 * fVar10;
                    pCVar18->z = local_50 * fVar10;
                    pCVar18 = pCVar18 + 1;
                  } while (iVar15 < tri_count);
                }
                memset(g_VertexNormalArray,0,vertex_count * 0xc);
                iVar15 = 0;
                if (0 < tri_count) {
                  pCVar18 = g_FaceNormalArray;
                  do {
                    uVar3 = (tri_data_ptr->vertex_indices).vertex_index_0;
                    g_VertexNormalArray[uVar3].x = pCVar18->x + g_VertexNormalArray[uVar3].x;
                    g_VertexNormalArray[uVar3].y = pCVar18->y + g_VertexNormalArray[uVar3].y;
                    g_VertexNormalArray[uVar3].z = pCVar18->z + g_VertexNormalArray[uVar3].z;
                    uVar3 = (tri_data_ptr->vertex_indices).vertex_index_1;
                    g_VertexNormalArray[uVar3].x = pCVar18->x + g_VertexNormalArray[uVar3].x;
                    g_VertexNormalArray[uVar3].y = pCVar18->y + g_VertexNormalArray[uVar3].y;
                    g_VertexNormalArray[uVar3].z = pCVar18->z + g_VertexNormalArray[uVar3].z;
                    uVar3 = (tri_data_ptr->vertex_indices).vertex_index_2;
                    tri_data_ptr = tri_data_ptr + 1;
                    g_VertexNormalArray[uVar3].x = pCVar18->x + g_VertexNormalArray[uVar3].x;
                    g_VertexNormalArray[uVar3].y = pCVar18->y + g_VertexNormalArray[uVar3].y;
                    iVar15 = iVar15 + 1;
                    g_VertexNormalArray[uVar3].z = pCVar18->z + g_VertexNormalArray[uVar3].z;
                    pCVar18 = pCVar18 + 1;
                  } while (iVar15 < tri_count);
                }
              }
              else {
                iVar15 = 0;
                pSVar11 = tri_data_ptr;
                if (0 < tri_count) {
                  do {
                    iVar13 = *(int *)&pSVar11[2].vertex_indices;
                    iVar21 = *(int *)&pSVar11[1].u_coord_0;
                    local_20 = g_TransformedVertexArray[iVar13].x -
                               g_TransformedVertexArray[iVar21].x;
                    iVar14 = g_TransformedVertexArray[iVar13].y - g_TransformedVertexArray[iVar21].y
                    ;
                    iVar5 = *(int *)&pSVar11[2].v_coord_0;
                    iVar12 = g_TransformedVertexArray[iVar5].x - g_TransformedVertexArray[iVar13].x;
                    fVar9 = (float)(g_TransformedVertexArray[iVar13].z -
                                   g_TransformedVertexArray[iVar21].z);
                    local_cc = (float)iVar12;
                    local_1c = g_TransformedVertexArray[iVar5].y -
                               g_TransformedVertexArray[iVar13].y;
                    local_18 = g_TransformedVertexArray[iVar5].z -
                               g_TransformedVertexArray[iVar13].z;
                    local_28 = (float)iVar14;
                    local_c4 = (float)local_18;
                    fVar10 = (float)iVar14 * local_c4 - (float)local_1c * fVar9;
                    fVar7 = (float)iVar12 * fVar9 - (float)local_20 * local_c4;
                    fVar6 = (float)local_20 * (float)local_1c - local_cc * local_28;
                    local_bc = fVar6 * fVar6 + fVar7 * fVar7 + fVar10 * fVar10;
                    local_b8 = (float)(g_LightAttenuationMax - ((int)local_bc >> 1));
                    fVar9 = local_b8 * (float)65535;
                    *(float *)&pSVar11->u_coord_1 = fVar10 * fVar9;
                    *(float *)&pSVar11->v_coord_0 = fVar7 * fVar9;
                    *(float *)&pSVar11->v_coord_2 = fVar6 * fVar9;
                    if (lighting_mode == 4) {
                      pSVar11 = pSVar11 + 4;
                    }
                    else {
                      pSVar11 = (SInputFace *)&pSVar11[3].u_coord_0;
                    }
                    iVar15 = iVar15 + 1;
                  } while (iVar15 < tri_count);
                }
                memset(g_VertexNormalArray,0,vertex_count * 0xc);
                iVar15 = 0;
                if (0 < tri_count) {
                  do {
                    iVar13 = *(int *)&tri_data_ptr[1].u_coord_0;
                    puVar1 = &tri_data_ptr->u_coord_1;
                    g_VertexNormalArray[iVar13].x = *(float *)puVar1 + g_VertexNormalArray[iVar13].x
                    ;
                    g_VertexNormalArray[iVar13].y =
                         *(float *)&tri_data_ptr->v_coord_0 + g_VertexNormalArray[iVar13].y;
                    g_VertexNormalArray[iVar13].z =
                         *(float *)&tri_data_ptr->v_coord_2 + g_VertexNormalArray[iVar13].z;
                    iVar13 = *(int *)&tri_data_ptr[2].vertex_indices;
                    g_VertexNormalArray[iVar13].x = *(float *)puVar1 + g_VertexNormalArray[iVar13].x
                    ;
                    g_VertexNormalArray[iVar13].y =
                         *(float *)&tri_data_ptr->v_coord_0 + g_VertexNormalArray[iVar13].y;
                    g_VertexNormalArray[iVar13].z =
                         *(float *)&tri_data_ptr->v_coord_2 + g_VertexNormalArray[iVar13].z;
                    iVar13 = *(int *)&tri_data_ptr[2].v_coord_0;
                    g_VertexNormalArray[iVar13].x = *(float *)puVar1 + g_VertexNormalArray[iVar13].x
                    ;
                    g_VertexNormalArray[iVar13].y =
                         *(float *)&tri_data_ptr->v_coord_0 + g_VertexNormalArray[iVar13].y;
                    g_VertexNormalArray[iVar13].z =
                         *(float *)&tri_data_ptr->v_coord_2 + g_VertexNormalArray[iVar13].z;
                    if (*(int *)&(tri_data_ptr->vertex_indices).vertex_index_2 == 4) {
                      iVar13 = *(int *)&tri_data_ptr[3].u_coord_0;
                      g_VertexNormalArray[iVar13].x =
                           *(float *)puVar1 + g_VertexNormalArray[iVar13].x;
                      g_VertexNormalArray[iVar13].y =
                           *(float *)&tri_data_ptr->v_coord_0 + g_VertexNormalArray[iVar13].y;
                      g_VertexNormalArray[iVar13].z =
                           *(float *)&tri_data_ptr->v_coord_2 + g_VertexNormalArray[iVar13].z;
                    }
                    if (lighting_mode == 4) {
                      tri_data_ptr = tri_data_ptr + 4;
                    }
                    else {
                      tri_data_ptr = (SInputFace *)&tri_data_ptr[3].u_coord_0;
                    }
                    iVar15 = iVar15 + 1;
                  } while (iVar15 < tri_count);
                }
              }
              if (this_ptr->skip_normal_normalization == 0) {
                if (0 < vertex_count) {
                  pCVar18 = g_VertexNormalArray;
                  local_68 = g_TransformedVertexArray;
                  iVar15 = 0;
                  local_64 = 0;
                  do {
                    pCVar20 = local_68;
                    local_7c = pCVar18->z * pCVar18->z +
                               pCVar18->x * pCVar18->x + pCVar18->y * pCVar18->y;
                    local_78 = (float)(g_LightAttenuationMax - ((int)local_7c >> 1));
                    fVar10 = local_78 * (float)65535;
                    pCVar18->x = pCVar18->x * fVar10;
                    pCVar18->y = pCVar18->y * fVar10;
                    pCVar18->z = pCVar18->z * fVar10;
                    local_100.x = (int)ROUND(pCVar18->x);
                    local_100.y = (int)ROUND(pCVar18->y);
                    local_100.z = (int)ROUND(pCVar18->z);
                    pCVar18 = pCVar18 + 1;
                    iVar13 = iVar15 + 1;
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                              (this_ptr,local_68,&local_100,iVar15,0);
                    fVar10 = g_PerspectiveReciprocal;
                    local_68 = pCVar20 + 1;
                    *(float *)((int)&g_RenderVertexBuffer[0].w_recip + local_64) =
                         g_PerspectiveReciprocal;
                    iVar15 = iVar13;
                    local_64 = local_64 + 0x30;
                  } while (iVar13 < vertex_count);
                  return fVar10;
                }
              }
              else {
                local_3c = 0;
                if (0 < vertex_count) {
                  pCVar18 = g_VertexNormalArray;
                  local_58 = 0;
                  local_60 = g_TransformedVertexArray;
                  do {
                    if (((1.0 <= ABS(pCVar18->x)) || (1.0 <= ABS(pCVar18->y))) ||
                       (1.0 <= ABS(pCVar18->z))) {
                      local_88 = pCVar18->z * pCVar18->z +
                                 pCVar18->x * pCVar18->x + pCVar18->y * pCVar18->y;
                      local_84 = (float)(g_LightAttenuationMax - ((int)local_88 >> 1));
                      fVar10 = local_84 * (float)65535;
                      pCVar18->x = pCVar18->x * fVar10;
                      pCVar18->y = pCVar18->y * fVar10;
                      pCVar18->z = pCVar18->z * fVar10;
                      local_f4.x = (int)ROUND(pCVar18->x);
                      local_f4.y = (int)ROUND(pCVar18->y);
                      local_f4.z = (int)ROUND(pCVar18->z);
                      pCVar20 = &local_f4;
                      world_position = local_60;
                    }
                    else {
                      pCVar20 = (CVector3i *)0x0;
                      world_position = g_TransformedVertexArray + local_3c;
                    }
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                              (this_ptr,world_position,pCVar20,local_3c,0);
                    pCVar8 = (CDemonSet *)g_PerspectiveReciprocal;
                    pCVar18 = pCVar18 + 1;
                    local_3c = local_3c + 1;
                    *(float *)((int)&g_RenderVertexBuffer[0].w_recip + local_58) =
                         g_PerspectiveReciprocal;
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
                iVar13 = 0;
                local_70 = iVar15;
                do {
                  local_e8 = *(uint *)
                              ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x + iVar13
                              );
                  local_e4 = *(uint *)
                              ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y + iVar13
                              );
                  local_e0 = *(uint *)
                              ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z + iVar13
                              );
                  core_set_cpp_FUN_0056e890();
                  iVar13 = iVar13 + 0x30;
                  piVar17 = (int *)(local_5c + 0x32cd850 + (uint)bVar19 * -8);
                  *(uint *)((int)&g_TransformedVertexArray[0].x + local_5c) = local_130;
                  *piVar17 = aiStack_12c[(uint)bVar19 * -2];
                  piVar17[(uint)bVar19 * -2 + 1] =
                       aiStack_12c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
                  local_5c = local_5c + 0xc;
                  pCVar8 = extraout_EAX_00;
                } while (iVar13 < local_70);
              }
              iVar15 = 0;
              if (0 < vertex_count) {
                do {
                  iVar13 = iVar15 * 0xc;
                  local_dc = ((uint)((longlong)g_TransformMatrix.m[0].x * (longlong)*(int *)flags)
                              >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)g_TransformMatrix.m[0].x * (longlong)*(int *)flags) >>
                                  0x20) << 0x10) +
                             ((uint)((longlong)g_TransformMatrix.m[1].x *
                                    (longlong)*(int *)(flags + 4)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)g_TransformMatrix.m[1].x *
                                   (longlong)*(int *)(flags + 4)) >> 0x20) << 0x10) +
                             ((uint)((longlong)g_TransformMatrix.m[2].x *
                                    (longlong)*(int *)(flags + 8)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)g_TransformMatrix.m[2].x *
                                   (longlong)*(int *)(flags + 8)) >> 0x20) << 0x10);
                  local_d8 = ((uint)((longlong)g_TransformMatrix.m[0].y * (longlong)*(int *)flags)
                              >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)g_TransformMatrix.m[0].y * (longlong)*(int *)flags) >>
                                  0x20) << 0x10) +
                             ((uint)((longlong)g_TransformMatrix.m[1].y *
                                    (longlong)*(int *)(flags + 4)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)g_TransformMatrix.m[1].y *
                                   (longlong)*(int *)(flags + 4)) >> 0x20) << 0x10) +
                             ((uint)((longlong)g_TransformMatrix.m[2].y *
                                    (longlong)*(int *)(flags + 8)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)g_TransformMatrix.m[2].y *
                                   (longlong)*(int *)(flags + 8)) >> 0x20) << 0x10);
                  local_d4 = ((uint)((longlong)g_TransformMatrix.m[0].z * (longlong)*(int *)flags)
                              >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)g_TransformMatrix.m[0].z * (longlong)*(int *)flags) >>
                                  0x20) << 0x10) +
                             ((uint)((longlong)g_TransformMatrix.m[1].z *
                                    (longlong)*(int *)(flags + 4)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)g_TransformMatrix.m[1].z *
                                   (longlong)*(int *)(flags + 4)) >> 0x20) << 0x10) +
                             ((uint)((longlong)g_TransformMatrix.m[2].z *
                                    (longlong)*(int *)(flags + 8)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)g_TransformMatrix.m[2].z *
                                   (longlong)*(int *)(flags + 8)) >> 0x20) << 0x10);
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
                  local_120 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)local_dc) >> 0x10
                              | (int)((ulonglong)
                                      ((longlong)g_InverseMatrix.m[0].y * (longlong)local_dc) >>
                                     0x20) << 0x10) +
                              ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_d8) >> 0x10
                              | (int)((ulonglong)
                                      ((longlong)g_InverseMatrix.m[1].y * (longlong)local_d8) >>
                                     0x20) << 0x10) +
                              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_d4) >> 0x10
                              | (int)((ulonglong)
                                      ((longlong)g_InverseMatrix.m[2].y * (longlong)local_d4) >>
                                     0x20) << 0x10);
                  flags = flags + 0xc;
                  pCVar8 = (CDemonSet *)
                           ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_d4) >> 0x10 |
                           (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_d4)
                                >> 0x20) << 0x10);
                  pCVar18 = g_VertexNormalArray + iVar15;
                  local_11c = pCVar8->cameras[0].name +
                              ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)local_dc) >> 0x10
                              | (int)((ulonglong)
                                      ((longlong)g_InverseMatrix.m[0].z * (longlong)local_dc) >>
                                     0x20) << 0x10) +
                              ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_d8) >> 0x10
                              | (int)((ulonglong)
                                      ((longlong)g_InverseMatrix.m[1].z * (longlong)local_d8) >>
                                     0x20) << 0x10) + -4;
                  iVar15 = iVar15 + 1;
                  piVar17 = (int *)(iVar13 + 0x33081d0 + (uint)bVar19 * -8);
                  pCVar18->x = local_124;
                  *piVar17 = aiStack_12c[(uint)bVar19 * -2 + 3];
                  piVar17[(uint)bVar19 * -2 + 1] =
                       aiStack_12c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
                } while (iVar15 < vertex_count);
              }
            }
            else {
              pCVar8 = (CDemonSet *)0x0;
              if (0 < vertex_count) {
                do {
                  iVar15 = (int)pCVar8 * 0xc;
                  pCVar18 = g_VertexNormalArray + (int)pCVar8;
                  pCVar8 = (CDemonSet *)((int)&pCVar8->camera_count + 1);
                  pfVar16 = (float *)(iVar15 + 0x33081d0 + (uint)bVar19 * -8);
                  pCVar18->x = *(float *)flags;
                  *pfVar16 = *(float *)(flags + ((uint)bVar19 * -2 + 1) * 4);
                  pfVar16[(uint)bVar19 * -2 + 1] =
                       ((float *)(flags + ((uint)bVar19 * -2 + 1) * 4))[(uint)bVar19 * -2 + 1];
                  flags = (int)(flags + 0xc);
                } while ((int)pCVar8 < vertex_count);
              }
            }
            if (0 < vertex_count) {
              local_54 = g_TransformedVertexArray;
              iVar15 = 0;
              iVar13 = 0;
              pCVar18 = g_VertexNormalArray;
              do {
                iVar21 = iVar15 + 1;
                core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                          (this_ptr,local_54,(CVector3i *)pCVar18,iVar15,0);
                *(float *)((int)&g_RenderVertexBuffer[0].w_recip + iVar13) = g_PerspectiveReciprocal
                ;
                local_54 = local_54 + 1;
                iVar15 = iVar21;
                iVar13 = iVar13 + 0x30;
                pCVar18 = pCVar18 + 1;
              } while (iVar21 < vertex_count);
              return (float)vertex_count;
            }
          }
        }
        else if (0 < vertex_count) {
          local_40 = 0;
          iVar15 = 0;
          do {
            local_10c = *(uint *)
                         ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x + iVar15);
            local_108 = *(uint *)
                         ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y + iVar15);
            local_104 = *(uint *)
                         ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z + iVar15);
            core_set_cpp_FUN_0056e890();
            iVar13 = local_40;
            iVar21 = 0;
            pCVar20 = (CVector3i *)0x0;
            local_178.x = aiStack_150[2];
            *(int *)((int)&local_178 + (uint)bVar19 * -8 + 4) = aiStack_150[(uint)bVar19 * -2 + 3];
            *(int *)((int)&local_178 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
                 aiStack_150[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
            core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                      (this_ptr,&local_178,pCVar20,iVar13,iVar21);
            fVar10 = g_PerspectiveReciprocal;
            local_40 = local_40 + 1;
            *(float *)((int)&g_RenderVertexBuffer[0].w_recip + iVar15) = g_PerspectiveReciprocal;
            iVar15 = iVar15 + 0x30;
          } while (local_40 < vertex_count);
          return fVar10;
        }
      }
      else if (0 < vertex_count) {
        fVar10 = 0.0;
        do {
          *(int *)((int)&g_RenderVertexBuffer[0].light + (int)fVar10) =
               this_ptr->mirror_cached_light;
          *(int *)((int)&g_RenderVertexBuffer[0].color + (int)fVar10) =
               this_ptr->mirror_cached_color;
          fVar9 = (float)((int)fVar10 + 0x30);
          *(int *)((int)&g_RenderVertexBuffer[0].fog + (int)fVar10) = this_ptr->mirror_cached_fog;
          fVar10 = fVar9;
        } while ((int)fVar9 < iVar15);
        return fVar9;
      }
    }
    else {
      if (g_InMirrorRenderPass == 0) {
        pCVar8 = this_ptr;
        if (this_ptr->lighting_quality_mode == 2) {
          iVar15 = 0;
          if (0 < vertex_count) {
            iVar13 = 0;
            do {
              *(uint *)((int)&g_RenderVertexBuffer[0].w_recip + iVar13) = 0;
              core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                        (this_ptr,(CVector3i *)render_flags,(CVector3i *)0x0,iVar15,1);
              iVar15 = iVar15 + 1;
              render_flags = render_flags + 0xc;
              pCVar8 = extraout_EAX;
              iVar13 = iVar13 + 0x30;
            } while (iVar15 < vertex_count);
          }
        }
        else if (this_ptr->lighting_quality_mode == 3) {
          if (0 < vertex_count) {
            fVar10 = 0.0;
            do {
              *(int *)((int)&g_RenderVertexBuffer[0].light + (int)fVar10) =
                   this_ptr->light_scale_factor;
              *(int *)((int)&g_RenderVertexBuffer[0].color + (int)fVar10) =
                   this_ptr->color_scale_factor;
              fVar9 = (float)((int)fVar10 + 0x30);
              *(int *)((int)&g_RenderVertexBuffer[0].fog + (int)fVar10) = this_ptr->fog_scale_factor
              ;
              *(uint *)((int)&g_RenderVertexBuffer[0].w_recip + (int)fVar10) = 0;
              fVar10 = fVar9;
            } while ((int)fVar9 < iVar15);
            g_PerspectiveReciprocal = 0.0;
            return fVar9;
          }
        }
        else if (0 < vertex_count) {
          fVar10 = 0.0;
          do {
            fVar9 = (float)((int)fVar10 + 0x30);
            *(uint *)((int)&g_RenderVertexBuffer[0].light + (int)fVar10) = 0xffff;
            *(uint *)((int)&g_RenderVertexBuffer[0].color + (int)fVar10) = 0xffff;
            *(uint *)((int)&g_RenderVertexBuffer[0].fog + (int)fVar10) = 0xffff;
            *(uint *)((int)&g_RenderVertexBuffer[0].w_recip + (int)fVar10) = 0;
            fVar10 = fVar9;
          } while ((int)fVar9 < iVar15);
          g_PerspectiveReciprocal = 0.0;
          return fVar9;
        }
        g_PerspectiveReciprocal = 0.0;
        return (float)pCVar8;
      }
      if (0 < vertex_count) {
        pCVar8 = (CDemonSet *)0x0;
        do {
          this_ptr = (CDemonSet *)(pCVar8->cameras[0].name + 0x2c);
          pCVar8[4].lights[0x97].camera_light_bounds[0x88].right = 0;
          pCVar8[4].lights[0x97].camera_light_bounds[0x88].bottom = 0;
          pCVar8[4].lights[0x97].camera_light_bounds[0x89].left = 0;
          pCVar8[4].lights[0x97].camera_light_bounds[0x89].top = 0;
          pCVar8 = this_ptr;
        } while ((int)this_ptr < iVar15);
      }
      g_PerspectiveReciprocal = 0.0;
      pCVar8 = this_ptr;
    }
  }
  return (float)pCVar8;
}
