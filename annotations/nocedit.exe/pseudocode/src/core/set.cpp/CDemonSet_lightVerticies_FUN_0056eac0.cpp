// Name: core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
// Address: 0056eac0
// Address Range: [[0056eac0, 0056f93c]]
// Convention: __cdecl
// Signature: float core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet * this_ptr, int vertex_count, int tri_count, SInputFace * tri_data_ptr, int render_flags, int lighting_mode, int flags)

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
  BADSPACEBASE *in_ESP;
  int iVar16;
  float *pfVar17;
  int *piVar18;
  CVector3f *pCVar19;
  byte bVar20;
  int aiStackY_1154 [1012];
  CVector3i *world_position;
  CVector3i *pCVar21;
  int iVar22;
  CVector3i local_16c;
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  CVector3i local_154;
  uint local_148;
  int aiStack_144 [4];
  uint local_134;
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  int local_124 [2];
  float local_11c;
  int local_118;
  char *pcStack_114;
  uint uStack_110;
  uint local_104;
  uint local_100;
  uint local_fc;
  CVector3i local_f4;
  CVector3i local_e8;
  uint local_dc;
  uint local_d8;
  int local_d4;
  int iStack_d0;
  int local_cc;
  float local_c4;
  float local_bc;
  float fStack_b4;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  uint local_90;
  float fStack_8c;
  float local_88;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  int local_68;
  int local_64;
  CVector3i *local_5c;
  CVector3i *local_58;
  CVector3i *local_54;
  int local_50;
  CVector3i *local_4c;
  float local_48;
  float local_44;
  float local_40;
  uint local_3c;
  int iStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  float local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  bVar20 = 0;
  if (20000 < vertex_count) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 0xde8;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonSet::lightVerticies - tried to light %d vertices, but GLOBAL_VERTEX_COUNT = %d",vertex_count,20000);
  }
  pCVar9 = (CDemonSet *)
           engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (pCVar9 == (CDemonSet *)0x0) {
    iVar16 = vertex_count * 0x30;
    if (this_ptr->lighting_quality_mode == 0) {
      pCVar9 = this_ptr;
      if (this_ptr->mirror_render_param1 == 0) {
        if (this_ptr->unk_lighting_param2 == 0) {
          if (flags == 0) {
            if (tri_count == 0) {
              if (0 < vertex_count) {
                local_3c = 0;
                iVar16 = 0;
                do {
                  local_16c.z = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.
                                               transformed_x + iVar16);
                  local_160 = *(uint *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y +
                               iVar16);
                  uStack_15c = *(uint *)
                                ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z +
                                iVar16);
                  core_set_cpp_FUN_0056e890();
                  uStack_158 = local_148;
                  *(int *)((int)&local_154 + (uint)bVar20 * -8) = aiStack_144[(uint)bVar20 * -2];
                  iVar22 = iStack_38;
                  *(int *)((int)&local_154 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 4) =
                       aiStack_144[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
                  core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                            (this_ptr,&local_154,(CVector3i *)0x0,iStack_38,0);
                  *(float *)((int)&g_RenderVertexBuffer[0].w_recip + iVar16) =
                       g_PerspectiveReciprocal;
                  fStack_34 = (float)(iVar22 + 1);
                  iVar16 = iVar16 + 0x30;
                } while ((int)fStack_34 < vertex_count);
                return fStack_34;
              }
            }
            else {
              if (0 < vertex_count) {
                local_64 = 0;
                iVar22 = 0;
                local_6c = (float)iVar16;
                do {
                  local_134 = *(uint *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x +
                               iVar22);
                  local_130 = *(uint *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y +
                               iVar22);
                  uStack_12c = *(uint *)
                                ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z +
                                iVar22);
                  core_set_cpp_FUN_0056e890();
                  iVar16 = local_64;
                  iVar22 = iVar22 + 0x30;
                  puVar2 = (uint *)((int)&g_TransformedVertexArray[0].x + local_64);
                  local_64 = local_64 + 0xc;
                  piVar18 = (int *)(iVar16 + 0x32cd850 + (uint)bVar20 * -8);
                  *puVar2 = uStack_110;
                  *piVar18 = local_124[(uint)bVar20 * -2 + 6];
                  piVar18[(uint)bVar20 * -2 + 1] =
                       local_124[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
                } while (iVar22 < (int)local_6c);
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
                    local_90 = (uint)(pSVar12->vertex_indices).vertex_index_2;
                    uVar4 = (pSVar12->vertex_indices).vertex_index_1;
                    local_1c = g_TransformedVertexArray[uVar4].x - g_TransformedVertexArray[uVar3].x
                    ;
                    iVar22 = g_TransformedVertexArray[local_90].x -
                             g_TransformedVertexArray[uVar4].x;
                    fStack_a4 = (float)(g_TransformedVertexArray[uVar4].z -
                                       g_TransformedVertexArray[uVar3].z);
                    local_a0 = (float)iVar22;
                    iStack_14 = g_TransformedVertexArray[local_90].y -
                                g_TransformedVertexArray[uVar4].y;
                    local_a8 = (float)(g_TransformedVertexArray[uVar4].y -
                                      g_TransformedVertexArray[uVar3].y);
                    local_18 = g_TransformedVertexArray[local_90].z -
                               g_TransformedVertexArray[uVar4].z;
                    local_98 = (float)local_18;
                    local_44 = local_a8 * local_98 - (float)iStack_14 * fStack_a4;
                    local_40 = (float)iVar22 * fStack_a4 - (float)local_1c * local_98;
                    local_48 = (float)local_1c * (float)iStack_14 - local_a0 * local_a8;
                    fStack_8c = local_48 * local_48 + local_40 * local_40 + local_44 * local_44;
                    local_88 = (float)(g_LightAttenuationMax - ((int)fStack_8c >> 1));
                    fVar11 = local_88 * (float)65535;
                    pSVar12 = pSVar12 + 1;
                    iVar16 = iVar16 + 1;
                    pCVar19->x = local_44 * fVar11;
                    pCVar19->y = local_40 * fVar11;
                    pCVar19->z = local_48 * fVar11;
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
                    iVar22 = *(int *)&pSVar12[2].vertex_indices;
                    iVar14 = *(int *)&pSVar12[1].u_coord_0;
                    local_18 = g_TransformedVertexArray[iVar22].x -
                               g_TransformedVertexArray[iVar14].x;
                    iVar15 = g_TransformedVertexArray[iVar22].y - g_TransformedVertexArray[iVar14].y
                    ;
                    iVar5 = *(int *)&pSVar12[2].v_coord_0;
                    iVar13 = g_TransformedVertexArray[iVar5].x - g_TransformedVertexArray[iVar22].x;
                    fVar10 = (float)(g_TransformedVertexArray[iVar22].z -
                                    g_TransformedVertexArray[iVar14].z);
                    local_c4 = (float)iVar13;
                    iStack_14 = g_TransformedVertexArray[iVar5].y -
                                g_TransformedVertexArray[iVar22].y;
                    local_20 = (float)iVar15;
                    local_bc = (float)(g_TransformedVertexArray[iVar5].z -
                                      g_TransformedVertexArray[iVar22].z);
                    fVar11 = (float)iVar15 * local_bc - (float)iStack_14 * fVar10;
                    fVar7 = (float)iVar13 * fVar10 - (float)local_18 * local_bc;
                    fVar6 = (float)local_18 * (float)iStack_14 - local_c4 * local_20;
                    fStack_b4 = fVar6 * fVar6 + fVar7 * fVar7 + fVar11 * fVar11;
                    local_b0 = (float)(g_LightAttenuationMax - ((int)fStack_b4 >> 1));
                    fVar10 = local_b0 * (float)65535;
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
                    iVar22 = *(int *)&tri_data_ptr[1].u_coord_0;
                    puVar1 = &tri_data_ptr->u_coord_1;
                    g_VertexNormalArray[iVar22].x = *(float *)puVar1 + g_VertexNormalArray[iVar22].x
                    ;
                    g_VertexNormalArray[iVar22].y =
                         *(float *)&tri_data_ptr->v_coord_0 + g_VertexNormalArray[iVar22].y;
                    g_VertexNormalArray[iVar22].z =
                         *(float *)&tri_data_ptr->v_coord_2 + g_VertexNormalArray[iVar22].z;
                    iVar22 = *(int *)&tri_data_ptr[2].vertex_indices;
                    g_VertexNormalArray[iVar22].x = *(float *)puVar1 + g_VertexNormalArray[iVar22].x
                    ;
                    g_VertexNormalArray[iVar22].y =
                         *(float *)&tri_data_ptr->v_coord_0 + g_VertexNormalArray[iVar22].y;
                    g_VertexNormalArray[iVar22].z =
                         *(float *)&tri_data_ptr->v_coord_2 + g_VertexNormalArray[iVar22].z;
                    iVar22 = *(int *)&tri_data_ptr[2].v_coord_0;
                    g_VertexNormalArray[iVar22].x = *(float *)puVar1 + g_VertexNormalArray[iVar22].x
                    ;
                    g_VertexNormalArray[iVar22].y =
                         *(float *)&tri_data_ptr->v_coord_0 + g_VertexNormalArray[iVar22].y;
                    g_VertexNormalArray[iVar22].z =
                         *(float *)&tri_data_ptr->v_coord_2 + g_VertexNormalArray[iVar22].z;
                    if (*(int *)&(tri_data_ptr->vertex_indices).vertex_index_2 == 4) {
                      iVar22 = *(int *)&tri_data_ptr[3].u_coord_0;
                      g_VertexNormalArray[iVar22].x =
                           *(float *)puVar1 + g_VertexNormalArray[iVar22].x;
                      g_VertexNormalArray[iVar22].y =
                           *(float *)&tri_data_ptr->v_coord_0 + g_VertexNormalArray[iVar22].y;
                      g_VertexNormalArray[iVar22].z =
                           *(float *)&tri_data_ptr->v_coord_2 + g_VertexNormalArray[iVar22].z;
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
              if (this_ptr->field40_0x15ae84 == 0) {
                if (0 < vertex_count) {
                  pCVar19 = g_VertexNormalArray;
                  local_5c = g_TransformedVertexArray;
                  local_58 = (CVector3i *)0x0;
                  iVar16 = 0;
                  do {
                    pCVar21 = local_5c;
                    local_70 = pCVar19->z * pCVar19->z +
                               pCVar19->x * pCVar19->x + pCVar19->y * pCVar19->y;
                    local_6c = (float)(g_LightAttenuationMax - ((int)local_70 >> 1));
                    fVar11 = local_6c * (float)65535;
                    pCVar19->x = pCVar19->x * fVar11;
                    pCVar19->y = pCVar19->y * fVar11;
                    pCVar19->z = pCVar19->z * fVar11;
                    local_f4.x = (int)ROUND(pCVar19->x);
                    local_f4.y = (int)ROUND(pCVar19->y);
                    local_f4.z = (int)ROUND(pCVar19->z);
                    pCVar19 = pCVar19 + 1;
                    iVar22 = iVar16 + 1;
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                              (this_ptr,local_5c,&local_f4,iVar16,0);
                    fVar11 = g_PerspectiveReciprocal;
                    local_58 = pCVar21 + 1;
                    *(float *)((int)&g_RenderVertexBuffer[0].w_recip + (int)local_54) =
                         g_PerspectiveReciprocal;
                    iVar16 = iVar22;
                    local_54 = (CVector3i *)((int)local_54 + 0x30);
                  } while (iVar22 < vertex_count);
                  return fVar11;
                }
              }
              else {
                iStack_30 = 0;
                if (0 < vertex_count) {
                  pCVar19 = g_VertexNormalArray;
                  local_4c = (CVector3i *)0x0;
                  local_54 = g_TransformedVertexArray;
                  do {
                    if (((1.0 <= ABS(pCVar19->x)) || (1.0 <= ABS(pCVar19->y))) ||
                       (1.0 <= ABS(pCVar19->z))) {
                      local_7c = pCVar19->z * pCVar19->z +
                                 pCVar19->x * pCVar19->x + pCVar19->y * pCVar19->y;
                      local_78 = (float)(g_LightAttenuationMax - ((int)local_7c >> 1));
                      fVar11 = local_78 * (float)65535;
                      pCVar19->x = pCVar19->x * fVar11;
                      pCVar19->y = pCVar19->y * fVar11;
                      pCVar19->z = pCVar19->z * fVar11;
                      local_e8.x = (int)ROUND(pCVar19->x);
                      local_e8.y = (int)ROUND(pCVar19->y);
                      local_e8.z = (int)ROUND(pCVar19->z);
                      pCVar21 = &local_e8;
                      world_position = local_54;
                    }
                    else {
                      pCVar21 = (CVector3i *)0x0;
                      world_position = g_TransformedVertexArray + iStack_30;
                    }
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                              (this_ptr,world_position,pCVar21,iStack_30,0);
                    pCVar9 = (CDemonSet *)g_PerspectiveReciprocal;
                    pCVar19 = pCVar19 + 1;
                    iStack_2c = iStack_2c + 1;
                    *(float *)((int)&g_RenderVertexBuffer[0].w_recip + (int)local_48) =
                         g_PerspectiveReciprocal;
                    local_50 = local_50 + 0xc;
                    local_48 = (float)((int)local_48 + 0x30);
                  } while (iStack_2c < vertex_count);
                }
              }
            }
          }
          else {
            if (this_ptr->rendering_mode == 0) {
              if (0 < vertex_count) {
                local_54 = (CVector3i *)0x0;
                iVar22 = 0;
                local_68 = iVar16;
                do {
                  local_e8.z = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x
                                       + iVar22);
                  local_dc = *(uint *)
                              ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y + iVar22
                              );
                  local_d8 = *(uint *)
                              ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z + iVar22
                              );
                  pCVar9 = (CDemonSet *)core_set_cpp_FUN_0056e890();
                  iVar22 = iVar22 + 0x30;
                  piVar18 = (int *)((int)local_54 + 0x32cd850 + (uint)bVar20 * -8);
                  *(uint *)((int)&g_TransformedVertexArray[0].x + (int)local_54) = uStack_128;
                  *piVar18 = local_124[(uint)bVar20 * -2];
                  piVar18[(uint)bVar20 * -2 + 1] =
                       local_124[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
                  local_54 = (CVector3i *)((int)local_54 + 0xc);
                } while (iVar22 < local_68);
              }
              iVar16 = 0;
              if (0 < vertex_count) {
                do {
                  iVar22 = iVar16 * 0xc;
                  local_d4 = ((uint)((longlong)g_TransformMatrix.m[0].x * (longlong)*(int *)flags)
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
                  iStack_d0 = ((uint)((longlong)g_TransformMatrix.m[0].y * (longlong)*(int *)flags)
                               >> 0x10 |
                              (int)((ulonglong)
                                    ((longlong)g_TransformMatrix.m[0].y * (longlong)*(int *)flags)
                                   >> 0x20) << 0x10) +
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
                  local_cc = ((uint)((longlong)g_TransformMatrix.m[0].z * (longlong)*(int *)flags)
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
                  local_11c = (float)(((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)local_d4)
                                       >> 0x10 |
                                      (int)((ulonglong)
                                            ((longlong)g_InverseMatrix.m[0].x * (longlong)local_d4)
                                           >> 0x20) << 0x10) +
                                      ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iStack_d0
                                             ) >> 0x10 |
                                      (int)((ulonglong)
                                            ((longlong)g_InverseMatrix.m[1].x * (longlong)iStack_d0)
                                           >> 0x20) << 0x10) +
                                     ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_cc)
                                      >> 0x10 |
                                     (int)((ulonglong)
                                           ((longlong)g_InverseMatrix.m[2].x * (longlong)local_cc)
                                          >> 0x20) << 0x10));
                  local_118 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)local_d4) >> 0x10
                              | (int)((ulonglong)
                                      ((longlong)g_InverseMatrix.m[0].y * (longlong)local_d4) >>
                                     0x20) << 0x10) +
                              ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)iStack_d0) >>
                               0x10 | (int)((ulonglong)
                                            ((longlong)g_InverseMatrix.m[1].y * (longlong)iStack_d0)
                                           >> 0x20) << 0x10) +
                              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_cc) >> 0x10
                              | (int)((ulonglong)
                                      ((longlong)g_InverseMatrix.m[2].y * (longlong)local_cc) >>
                                     0x20) << 0x10);
                  flags = flags + 0xc;
                  pCVar9 = (CDemonSet *)
                           ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_cc) >> 0x10 |
                           (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_cc)
                                >> 0x20) << 0x10);
                  pCVar19 = g_VertexNormalArray + iVar16;
                  pcStack_114 = pCVar9->cameras[0].name +
                                ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)local_d4) >>
                                 0x10 | (int)((ulonglong)
                                              ((longlong)g_InverseMatrix.m[0].z * (longlong)local_d4
                                              ) >> 0x20) << 0x10) +
                                ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)iStack_d0) >>
                                 0x10 | (int)((ulonglong)
                                              ((longlong)g_InverseMatrix.m[1].z *
                                              (longlong)iStack_d0) >> 0x20) << 0x10) + -4;
                  iVar16 = iVar16 + 1;
                  piVar18 = (int *)(iVar22 + 0x33081d0 + (uint)bVar20 * -8);
                  pCVar19->x = local_11c;
                  *piVar18 = local_124[(uint)bVar20 * -2 + 3];
                  piVar18[(uint)bVar20 * -2 + 1] =
                       local_124[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
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
              local_4c = g_TransformedVertexArray;
              iVar16 = 0;
              iVar22 = 0;
              pCVar19 = g_VertexNormalArray;
              do {
                iVar14 = iVar16 + 1;
                core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                          (this_ptr,local_4c,(CVector3i *)pCVar19,iVar16,0);
                *(float *)((int)&g_RenderVertexBuffer[0].w_recip + iVar22) = g_PerspectiveReciprocal
                ;
                local_48 = (float)((int)local_48 + 0xc);
                iVar16 = iVar14;
                iVar22 = iVar22 + 0x30;
                pCVar19 = pCVar19 + 1;
              } while (iVar14 < vertex_count);
              return (float)vertex_count;
            }
          }
        }
        else if (0 < vertex_count) {
          iStack_38 = 0;
          iVar16 = 0;
          do {
            local_104 = *(uint *)
                         ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x + iVar16);
            local_100 = *(uint *)
                         ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y + iVar16);
            local_fc = *(uint *)
                        ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z + iVar16);
            core_set_cpp_FUN_0056e890();
            fVar11 = fStack_34;
            iVar22 = 0;
            pCVar21 = (CVector3i *)0x0;
            local_16c.x = aiStack_144[2];
            *(int *)((int)&local_16c + (uint)bVar20 * -8 + 4) = aiStack_144[(uint)bVar20 * -2 + 3];
            *(int *)((int)&local_16c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                 aiStack_144[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
            core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                      (this_ptr,&local_16c,pCVar21,(int)fVar11,iVar22);
            fVar11 = g_PerspectiveReciprocal;
            iStack_30 = iStack_30 + 1;
            *(float *)((int)&g_RenderVertexBuffer[0].w_recip + iVar16) = g_PerspectiveReciprocal;
            iVar16 = iVar16 + 0x30;
          } while (iStack_30 < vertex_count);
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
        } while (SBORROW /* signed borrow */4((int)fVar10,iVar16) != (int)fVar10 + vertex_count * -0x30 < 0);
        return fVar10;
      }
    }
    else {
      if (g_InMirrorRenderPass == 0) {
        pCVar9 = this_ptr;
        if (this_ptr->lighting_quality_mode == 2) {
          iVar16 = 0;
          if (0 < vertex_count) {
            iVar22 = 0;
            do {
              *(uint *)((int)&g_RenderVertexBuffer[0].w_recip + iVar22) = 0;
              core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
                        (this_ptr,(CVector3i *)render_flags,(CVector3i *)0x0,iVar16,1);
              iVar16 = iVar16 + 1;
              render_flags = render_flags + 0xc;
              pCVar9 = extraout_EAX;
              iVar22 = iVar22 + 0x30;
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
            } while (SBORROW /* signed borrow */4((int)fVar10,iVar16) != (int)fVar10 + vertex_count * -0x30 < 0);
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
          } while (SBORROW /* signed borrow */4((int)fVar10,iVar16) != (int)fVar10 + vertex_count * -0x30 < 0);
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
          pCVar8[0x97].field8_0x21e[0x88e] = '\0';
          pCVar8[0x97].field8_0x21e[0x88f] = '\0';
          pCVar8[0x97].field8_0x21e[0x890] = '\0';
          pCVar8[0x97].field8_0x21e[0x891] = '\0';
          pCVar8 = pCVar9[4].lights;
          pCVar8[0x97].field8_0x21e[0x892] = '\0';
          pCVar8[0x97].field8_0x21e[0x893] = '\0';
          pCVar8[0x97].field8_0x21e[0x894] = '\0';
          pCVar8[0x97].field8_0x21e[0x895] = '\0';
          pCVar8 = pCVar9[4].lights;
          pCVar8[0x97].field8_0x21e[0x896] = '\0';
          pCVar8[0x97].field8_0x21e[0x897] = '\0';
          pCVar8[0x97].field8_0x21e[0x898] = '\0';
          pCVar8[0x97].field8_0x21e[0x899] = '\0';
          pCVar8 = pCVar9[4].lights;
          pCVar8[0x97].field8_0x21e[0x89a] = '\0';
          pCVar8[0x97].field8_0x21e[0x89b] = '\0';
          pCVar8[0x97].field8_0x21e[0x89c] = '\0';
          pCVar8[0x97].field8_0x21e[0x89d] = '\0';
          pCVar9 = this_ptr;
        } while (SBORROW /* signed borrow */4((int)this_ptr,iVar16) != (int)this_ptr + vertex_count * -0x30 < 0);
      }
      g_PerspectiveReciprocal = 0.0;
      pCVar9 = this_ptr;
    }
  }
  return (float)pCVar9;
}
