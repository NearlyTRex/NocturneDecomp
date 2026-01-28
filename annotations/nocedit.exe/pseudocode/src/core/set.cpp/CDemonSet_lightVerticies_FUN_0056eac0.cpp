// Name: core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
// Address: 0056eac0
// Address Range: [[0056eac0, 0056f93c]]
// Convention: __cdecl
// Signature: float __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0 (CDemonSet *this_ptr,int vertex_count,int tri_count,SInputFace *tri_data_ptr, int render_flags,int lighting_mode,int flags)

#include "nocturne.h"

float __cdecl
core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
          (CDemonSet *this_ptr,int vertex_count,int tri_count,SInputFace *tri_data_ptr,
          int render_flags,int lighting_mode,int flags)

{
  ushort *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  C3DSLight *pCVar8;
  CDemonSet *pCVar9;
  CDemonSet *extraout_EAX;
  float fVar10;
  float fVar11;
  SInputFace *pSVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  int *piVar18;
  CVector3f *pCVar19;
  byte bVar20;
  int aiStackY_1160 [1013];
  CVector3i *world_position;
  CVector3i *pCVar21;
  int iVar22;
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
  
  bVar20 = 0;
  if (20000 < vertex_count) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 0xde8;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonSet::lightVerticies - tried to light %d vertices, but GLOBAL_VERTEX_COUNT = %d",vertex_count,20000);
  }
  pCVar9 = (CDemonSet *)
           engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (pCVar9 == (CDemonSet *)0x0) {
    iVar16 = vertex_count * 0x30;
    if (this_ptr->lighting_quality_mode == 0) {
      pCVar9 = this_ptr;
      if (this_ptr->mirror_render_param1 == 0) {
        if (this_ptr->unk_lighting_param2 == 0) {
          if (flags == 0) {
            if (tri_count == 0) {
              if (0 < vertex_count) {
                local_44 = 0.0;
                iVar16 = 0;
                do {
                  local_16c = *(uint *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x +
                               iVar16);
                  local_168 = *(uint *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y +
                               iVar16);
                  local_164 = *(uint *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z +
                               iVar16);
                  core_set_cpp_FUN_0056e890();
                  local_160.x = local_154;
                  *(int *)((int)&local_160 + (uint)bVar20 * -8 + 4) = aiStack_150[(uint)bVar20 * -2]
                  ;
                  fVar11 = local_44;
                  *(int *)((int)&local_160 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                       aiStack_150[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
                  core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                            (this_ptr,&local_160,(CVector3i *)0x0,(int)local_44,0);
                  *(float *)((int)&g_RenderVertexBuffer[0].w_recip + iVar16) =
                       g_PerspectiveReciprocal;
                  local_44 = (float)((int)fVar11 + 1);
                  iVar16 = iVar16 + 0x30;
                } while ((int)local_44 < vertex_count);
                return local_44;
              }
            }
            else {
              if (0 < vertex_count) {
                local_6c = 0;
                iVar14 = 0;
                local_74 = iVar16;
                do {
                  local_13c = *(uint *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x +
                               iVar14);
                  local_138 = *(uint *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y +
                               iVar14);
                  local_134 = *(uint *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z +
                               iVar14);
                  core_set_cpp_FUN_0056e890();
                  iVar16 = local_6c;
                  iVar14 = iVar14 + 0x30;
                  puVar2 = (uint *)((int)&g_TransformedVertexArray[0].x + local_6c);
                  local_6c = local_6c + 0xc;
                  piVar18 = (int *)(iVar16 + 0x32cd850 + (uint)bVar20 * -8);
                  *puVar2 = local_118;
                  *piVar18 = aiStack_12c[(uint)bVar20 * -2 + 6];
                  piVar18[(uint)bVar20 * -2 + 1] =
                       aiStack_12c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
                } while (iVar14 < local_74);
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
                iVar16 = 0;
                if (0 < tri_count) {
                  pCVar19 = g_FaceNormalArray;
                  pSVar12 = tri_data_ptr;
                  do {
                    uVar3 = (pSVar12->vertex_indices).vertex_index_0;
                    local_98 = (uint)(pSVar12->vertex_indices).vertex_index_2;
                    uVar4 = (pSVar12->vertex_indices).vertex_index_1;
                    local_24 = g_TransformedVertexArray[uVar4].x - g_TransformedVertexArray[uVar3].x
                    ;
                    local_18 = g_TransformedVertexArray[uVar4].y - g_TransformedVertexArray[uVar3].y
                    ;
                    iVar14 = g_TransformedVertexArray[local_98].x -
                             g_TransformedVertexArray[uVar4].x;
                    local_ac = (float)(g_TransformedVertexArray[uVar4].z -
                                      g_TransformedVertexArray[uVar3].z);
                    local_a8 = (float)iVar14;
                    local_1c = g_TransformedVertexArray[local_98].y -
                               g_TransformedVertexArray[uVar4].y;
                    local_b0 = (float)local_18;
                    local_20 = g_TransformedVertexArray[local_98].z -
                               g_TransformedVertexArray[uVar4].z;
                    local_a0 = (float)local_20;
                    local_4c = local_b0 * local_a0 - (float)local_1c * local_ac;
                    local_48 = (float)iVar14 * local_ac - (float)local_24 * local_a0;
                    local_50 = (float)local_24 * (float)local_1c - local_a8 * local_b0;
                    local_94 = local_50 * local_50 + local_48 * local_48 + local_4c * local_4c;
                    local_90 = (float)(g_LightAttenuationMax - ((int)local_94 >> 1));
                    fVar11 = local_90 * (float)65535;
                    pSVar12 = pSVar12 + 1;
                    iVar16 = iVar16 + 1;
                    pCVar19->x = local_4c * fVar11;
                    pCVar19->y = local_48 * fVar11;
                    pCVar19->z = local_50 * fVar11;
                    pCVar19 = pCVar19 + 1;
                  } while (iVar16 < tri_count);
                }
                crt_memory_c_memset_FUN_005fde40(g_VertexNormalArray,0,vertex_count * 0xc);
                iVar16 = 0;
                if (0 < tri_count) {
                  pCVar19 = g_FaceNormalArray;
                  do {
                    uVar3 = (tri_data_ptr->vertex_indices).vertex_index_0;
                    g_VertexNormalArray[uVar3].x = pCVar19->x + g_VertexNormalArray[uVar3].x;
                    g_VertexNormalArray[uVar3].y = pCVar19->y + g_VertexNormalArray[uVar3].y;
                    g_VertexNormalArray[uVar3].z = pCVar19->z + g_VertexNormalArray[uVar3].z;
                    uVar3 = (tri_data_ptr->vertex_indices).vertex_index_1;
                    g_VertexNormalArray[uVar3].x = pCVar19->x + g_VertexNormalArray[uVar3].x;
                    g_VertexNormalArray[uVar3].y = pCVar19->y + g_VertexNormalArray[uVar3].y;
                    g_VertexNormalArray[uVar3].z = pCVar19->z + g_VertexNormalArray[uVar3].z;
                    uVar3 = (tri_data_ptr->vertex_indices).vertex_index_2;
                    tri_data_ptr = tri_data_ptr + 1;
                    g_VertexNormalArray[uVar3].x = pCVar19->x + g_VertexNormalArray[uVar3].x;
                    g_VertexNormalArray[uVar3].y = pCVar19->y + g_VertexNormalArray[uVar3].y;
                    iVar16 = iVar16 + 1;
                    g_VertexNormalArray[uVar3].z = pCVar19->z + g_VertexNormalArray[uVar3].z;
                    pCVar19 = pCVar19 + 1;
                  } while (iVar16 < tri_count);
                }
              }
              else {
                iVar16 = 0;
                pSVar12 = tri_data_ptr;
                if (0 < tri_count) {
                  do {
                    iVar14 = *(int *)&pSVar12[2].vertex_indices;
                    iVar22 = *(int *)&pSVar12[1].u_coord_0;
                    local_20 = g_TransformedVertexArray[iVar14].x -
                               g_TransformedVertexArray[iVar22].x;
                    iVar15 = g_TransformedVertexArray[iVar14].y - g_TransformedVertexArray[iVar22].y
                    ;
                    iVar5 = *(int *)&pSVar12[2].v_coord_0;
                    iVar13 = g_TransformedVertexArray[iVar5].x - g_TransformedVertexArray[iVar14].x;
                    fVar10 = (float)(g_TransformedVertexArray[iVar14].z -
                                    g_TransformedVertexArray[iVar22].z);
                    local_cc = (float)iVar13;
                    local_1c = g_TransformedVertexArray[iVar5].y -
                               g_TransformedVertexArray[iVar14].y;
                    local_18 = g_TransformedVertexArray[iVar5].z -
                               g_TransformedVertexArray[iVar14].z;
                    local_28 = (float)iVar15;
                    local_c4 = (float)local_18;
                    fVar11 = (float)iVar15 * local_c4 - (float)local_1c * fVar10;
                    fVar7 = (float)iVar13 * fVar10 - (float)local_20 * local_c4;
                    fVar6 = (float)local_20 * (float)local_1c - local_cc * local_28;
                    local_bc = fVar6 * fVar6 + fVar7 * fVar7 + fVar11 * fVar11;
                    local_b8 = (float)(g_LightAttenuationMax - ((int)local_bc >> 1));
                    fVar10 = local_b8 * (float)65535;
                    *(float *)&pSVar12->u_coord_1 = fVar11 * fVar10;
                    *(float *)&pSVar12->v_coord_0 = fVar7 * fVar10;
                    *(float *)&pSVar12->v_coord_2 = fVar6 * fVar10;
                    if (lighting_mode == 4) {
                      pSVar12 = pSVar12 + 4;
                    }
                    else {
                      pSVar12 = (SInputFace *)&pSVar12[3].u_coord_0;
                    }
                    iVar16 = iVar16 + 1;
                  } while (iVar16 < tri_count);
                }
                crt_memory_c_memset_FUN_005fde40(g_VertexNormalArray,0,vertex_count * 0xc);
                iVar16 = 0;
                if (0 < tri_count) {
                  do {
                    iVar14 = *(int *)&tri_data_ptr[1].u_coord_0;
                    puVar1 = &tri_data_ptr->u_coord_1;
                    g_VertexNormalArray[iVar14].x = *(float *)puVar1 + g_VertexNormalArray[iVar14].x
                    ;
                    g_VertexNormalArray[iVar14].y =
                         *(float *)&tri_data_ptr->v_coord_0 + g_VertexNormalArray[iVar14].y;
                    g_VertexNormalArray[iVar14].z =
                         *(float *)&tri_data_ptr->v_coord_2 + g_VertexNormalArray[iVar14].z;
                    iVar14 = *(int *)&tri_data_ptr[2].vertex_indices;
                    g_VertexNormalArray[iVar14].x = *(float *)puVar1 + g_VertexNormalArray[iVar14].x
                    ;
                    g_VertexNormalArray[iVar14].y =
                         *(float *)&tri_data_ptr->v_coord_0 + g_VertexNormalArray[iVar14].y;
                    g_VertexNormalArray[iVar14].z =
                         *(float *)&tri_data_ptr->v_coord_2 + g_VertexNormalArray[iVar14].z;
                    iVar14 = *(int *)&tri_data_ptr[2].v_coord_0;
                    g_VertexNormalArray[iVar14].x = *(float *)puVar1 + g_VertexNormalArray[iVar14].x
                    ;
                    g_VertexNormalArray[iVar14].y =
                         *(float *)&tri_data_ptr->v_coord_0 + g_VertexNormalArray[iVar14].y;
                    g_VertexNormalArray[iVar14].z =
                         *(float *)&tri_data_ptr->v_coord_2 + g_VertexNormalArray[iVar14].z;
                    if (*(int *)&(tri_data_ptr->vertex_indices).vertex_index_2 == 4) {
                      iVar14 = *(int *)&tri_data_ptr[3].u_coord_0;
                      g_VertexNormalArray[iVar14].x =
                           *(float *)puVar1 + g_VertexNormalArray[iVar14].x;
                      g_VertexNormalArray[iVar14].y =
                           *(float *)&tri_data_ptr->v_coord_0 + g_VertexNormalArray[iVar14].y;
                      g_VertexNormalArray[iVar14].z =
                           *(float *)&tri_data_ptr->v_coord_2 + g_VertexNormalArray[iVar14].z;
                    }
                    if (lighting_mode == 4) {
                      tri_data_ptr = tri_data_ptr + 4;
                    }
                    else {
                      tri_data_ptr = (SInputFace *)&tri_data_ptr[3].u_coord_0;
                    }
                    iVar16 = iVar16 + 1;
                  } while (iVar16 < tri_count);
                }
              }
              if (this_ptr->unk5 == 0) {
                if (0 < vertex_count) {
                  pCVar19 = g_VertexNormalArray;
                  local_68 = g_TransformedVertexArray;
                  iVar16 = 0;
                  local_64 = 0;
                  do {
                    pCVar21 = local_68;
                    local_7c = pCVar19->z * pCVar19->z +
                               pCVar19->x * pCVar19->x + pCVar19->y * pCVar19->y;
                    local_78 = (float)(g_LightAttenuationMax - ((int)local_7c >> 1));
                    fVar11 = local_78 * (float)65535;
                    pCVar19->x = pCVar19->x * fVar11;
                    pCVar19->y = pCVar19->y * fVar11;
                    pCVar19->z = pCVar19->z * fVar11;
                    local_100.x = (int)ROUND(pCVar19->x);
                    local_100.y = (int)ROUND(pCVar19->y);
                    local_100.z = (int)ROUND(pCVar19->z);
                    pCVar19 = pCVar19 + 1;
                    iVar14 = iVar16 + 1;
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                              (this_ptr,local_68,&local_100,iVar16,0);
                    fVar11 = g_PerspectiveReciprocal;
                    local_68 = pCVar21 + 1;
                    *(float *)((int)&g_RenderVertexBuffer[0].w_recip + local_64) =
                         g_PerspectiveReciprocal;
                    iVar16 = iVar14;
                    local_64 = local_64 + 0x30;
                  } while (iVar14 < vertex_count);
                  return fVar11;
                }
              }
              else {
                local_3c = 0;
                if (0 < vertex_count) {
                  pCVar19 = g_VertexNormalArray;
                  local_58 = 0;
                  local_60 = g_TransformedVertexArray;
                  do {
                    if (((1.0 <= ABS(pCVar19->x)) || (1.0 <= ABS(pCVar19->y))) ||
                       (1.0 <= ABS(pCVar19->z))) {
                      local_88 = pCVar19->z * pCVar19->z +
                                 pCVar19->x * pCVar19->x + pCVar19->y * pCVar19->y;
                      local_84 = (float)(g_LightAttenuationMax - ((int)local_88 >> 1));
                      fVar11 = local_84 * (float)65535;
                      pCVar19->x = pCVar19->x * fVar11;
                      pCVar19->y = pCVar19->y * fVar11;
                      pCVar19->z = pCVar19->z * fVar11;
                      local_f4.x = (int)ROUND(pCVar19->x);
                      local_f4.y = (int)ROUND(pCVar19->y);
                      local_f4.z = (int)ROUND(pCVar19->z);
                      pCVar21 = &local_f4;
                      world_position = local_60;
                    }
                    else {
                      pCVar21 = (CVector3i *)0x0;
                      world_position = g_TransformedVertexArray + local_3c;
                    }
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                              (this_ptr,world_position,pCVar21,local_3c,0);
                    pCVar9 = (CDemonSet *)g_PerspectiveReciprocal;
                    pCVar19 = pCVar19 + 1;
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
                iVar14 = 0;
                local_70 = iVar16;
                do {
                  local_e8 = *(uint *)
                              ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x + iVar14
                              );
                  local_e4 = *(uint *)
                              ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y + iVar14
                              );
                  local_e0 = *(uint *)
                              ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z + iVar14
                              );
                  pCVar9 = (CDemonSet *)core_set_cpp_FUN_0056e890();
                  iVar14 = iVar14 + 0x30;
                  piVar18 = (int *)(local_5c + 0x32cd850 + (uint)bVar20 * -8);
                  *(uint *)((int)&g_TransformedVertexArray[0].x + local_5c) = local_130;
                  *piVar18 = aiStack_12c[(uint)bVar20 * -2];
                  piVar18[(uint)bVar20 * -2 + 1] =
                       aiStack_12c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
                  local_5c = local_5c + 0xc;
                } while (iVar14 < local_70);
              }
              iVar16 = 0;
              if (0 < vertex_count) {
                do {
                  iVar14 = iVar16 * 0xc;
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
                  pCVar9 = (CDemonSet *)
                           ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_d4) >> 0x10 |
                           (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_d4)
                                >> 0x20) << 0x10);
                  pCVar19 = g_VertexNormalArray + iVar16;
                  local_11c = pCVar9->cameras[0].name +
                              ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)local_dc) >> 0x10
                              | (int)((ulonglong)
                                      ((longlong)g_InverseMatrix.m[0].z * (longlong)local_dc) >>
                                     0x20) << 0x10) +
                              ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_d8) >> 0x10
                              | (int)((ulonglong)
                                      ((longlong)g_InverseMatrix.m[1].z * (longlong)local_d8) >>
                                     0x20) << 0x10) + -4;
                  iVar16 = iVar16 + 1;
                  piVar18 = (int *)(iVar14 + 0x33081d0 + (uint)bVar20 * -8);
                  pCVar19->x = local_124;
                  *piVar18 = aiStack_12c[(uint)bVar20 * -2 + 3];
                  piVar18[(uint)bVar20 * -2 + 1] =
                       aiStack_12c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
                } while (iVar16 < vertex_count);
              }
            }
            else {
              pCVar9 = (CDemonSet *)0x0;
              if (0 < vertex_count) {
                do {
                  iVar16 = (int)pCVar9 * 0xc;
                  pCVar19 = g_VertexNormalArray + (int)pCVar9;
                  pCVar9 = (CDemonSet *)((int)&pCVar9->camera_count + 1);
                  pfVar17 = (float *)(iVar16 + 0x33081d0 + (uint)bVar20 * -8);
                  pCVar19->x = *(float *)flags;
                  *pfVar17 = *(float *)(flags + ((uint)bVar20 * -2 + 1) * 4);
                  pfVar17[(uint)bVar20 * -2 + 1] =
                       ((float *)(flags + ((uint)bVar20 * -2 + 1) * 4))[(uint)bVar20 * -2 + 1];
                  flags = (int)(flags + 0xc);
                } while ((int)pCVar9 < vertex_count);
              }
            }
            if (0 < vertex_count) {
              local_54 = g_TransformedVertexArray;
              iVar16 = 0;
              iVar14 = 0;
              pCVar19 = g_VertexNormalArray;
              do {
                iVar22 = iVar16 + 1;
                core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                          (this_ptr,local_54,(CVector3i *)pCVar19,iVar16,0);
                *(float *)((int)&g_RenderVertexBuffer[0].w_recip + iVar14) = g_PerspectiveReciprocal
                ;
                local_54 = local_54 + 1;
                iVar16 = iVar22;
                iVar14 = iVar14 + 0x30;
                pCVar19 = pCVar19 + 1;
              } while (iVar22 < vertex_count);
              return (float)vertex_count;
            }
          }
        }
        else if (0 < vertex_count) {
          local_40 = 0;
          iVar16 = 0;
          do {
            local_10c = *(uint *)
                         ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x + iVar16);
            local_108 = *(uint *)
                         ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y + iVar16);
            local_104 = *(uint *)
                         ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z + iVar16);
            core_set_cpp_FUN_0056e890();
            iVar14 = local_40;
            iVar22 = 0;
            pCVar21 = (CVector3i *)0x0;
            local_178.x = aiStack_150[2];
            *(int *)((int)&local_178 + (uint)bVar20 * -8 + 4) = aiStack_150[(uint)bVar20 * -2 + 3];
            *(int *)((int)&local_178 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                 aiStack_150[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
            core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                      (this_ptr,&local_178,pCVar21,iVar14,iVar22);
            fVar11 = g_PerspectiveReciprocal;
            local_40 = local_40 + 1;
            *(float *)((int)&g_RenderVertexBuffer[0].w_recip + iVar16) = g_PerspectiveReciprocal;
            iVar16 = iVar16 + 0x30;
          } while (local_40 < vertex_count);
          return fVar11;
        }
      }
      else if (0 < vertex_count) {
        fVar11 = 0.0;
        do {
          *(int *)((int)&g_RenderVertexBuffer[0].light + (int)fVar11) =
               this_ptr->mirror_render_param2;
          *(int *)((int)&g_RenderVertexBuffer[0].color + (int)fVar11) =
               this_ptr->mirror_render_param3;
          fVar10 = (float)((int)fVar11 + 0x30);
          *(int *)((int)&g_RenderVertexBuffer[0].fog + (int)fVar11) = this_ptr->mirror_render_param4
          ;
          fVar11 = fVar10;
        } while ((int)fVar10 < iVar16);
        return fVar10;
      }
    }
    else {
      if (g_InMirrorRenderPass == 0) {
        pCVar9 = this_ptr;
        if (this_ptr->lighting_quality_mode == 2) {
          iVar16 = 0;
          if (0 < vertex_count) {
            iVar14 = 0;
            do {
              *(uint *)((int)&g_RenderVertexBuffer[0].w_recip + iVar14) = 0;
              core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                        (this_ptr,(CVector3i *)render_flags,(CVector3i *)0x0,iVar16,1);
              iVar16 = iVar16 + 1;
              render_flags = render_flags + 0xc;
              pCVar9 = extraout_EAX;
              iVar14 = iVar14 + 0x30;
            } while (iVar16 < vertex_count);
          }
        }
        else if (this_ptr->lighting_quality_mode == 3) {
          if (0 < vertex_count) {
            fVar11 = 0.0;
            do {
              *(int *)((int)&g_RenderVertexBuffer[0].light + (int)fVar11) =
                   this_ptr->light_scale_factor;
              *(int *)((int)&g_RenderVertexBuffer[0].color + (int)fVar11) =
                   this_ptr->color_scale_factor;
              fVar10 = (float)((int)fVar11 + 0x30);
              *(int *)((int)&g_RenderVertexBuffer[0].fog + (int)fVar11) = this_ptr->fog_scale_factor
              ;
              *(uint *)((int)&g_RenderVertexBuffer[0].w_recip + (int)fVar11) = 0;
              fVar11 = fVar10;
            } while ((int)fVar10 < iVar16);
            g_PerspectiveReciprocal = 0.0;
            return fVar10;
          }
        }
        else if (0 < vertex_count) {
          fVar11 = 0.0;
          do {
            fVar10 = (float)((int)fVar11 + 0x30);
            *(uint *)((int)&g_RenderVertexBuffer[0].light + (int)fVar11) = 0xffff;
            *(uint *)((int)&g_RenderVertexBuffer[0].color + (int)fVar11) = 0xffff;
            *(uint *)((int)&g_RenderVertexBuffer[0].fog + (int)fVar11) = 0xffff;
            *(uint *)((int)&g_RenderVertexBuffer[0].w_recip + (int)fVar11) = 0;
            fVar11 = fVar10;
          } while ((int)fVar10 < iVar16);
          g_PerspectiveReciprocal = 0.0;
          return fVar10;
        }
        g_PerspectiveReciprocal = 0.0;
        return (float)pCVar9;
      }
      if (0 < vertex_count) {
        pCVar9 = (CDemonSet *)0x0;
        do {
          this_ptr = (CDemonSet *)(pCVar9->cameras[0].name + 0x2c);
          pCVar8 = pCVar9[4].lights;
          pCVar8[0x97].unk1[0x88e] = '\0';
          pCVar8[0x97].unk1[0x88f] = '\0';
          pCVar8[0x97].unk1[0x890] = '\0';
          pCVar8[0x97].unk1[0x891] = '\0';
          pCVar8 = pCVar9[4].lights;
          pCVar8[0x97].unk1[0x892] = '\0';
          pCVar8[0x97].unk1[0x893] = '\0';
          pCVar8[0x97].unk1[0x894] = '\0';
          pCVar8[0x97].unk1[0x895] = '\0';
          pCVar8 = pCVar9[4].lights;
          pCVar8[0x97].unk1[0x896] = '\0';
          pCVar8[0x97].unk1[0x897] = '\0';
          pCVar8[0x97].unk1[0x898] = '\0';
          pCVar8[0x97].unk1[0x899] = '\0';
          pCVar8 = pCVar9[4].lights;
          pCVar8[0x97].unk1[0x89a] = '\0';
          pCVar8[0x97].unk1[0x89b] = '\0';
          pCVar8[0x97].unk1[0x89c] = '\0';
          pCVar8[0x97].unk1[0x89d] = '\0';
          pCVar9 = this_ptr;
        } while ((int)this_ptr < iVar16);
      }
      g_PerspectiveReciprocal = 0.0;
      pCVar9 = this_ptr;
    }
  }
  return (float)pCVar9;
}
