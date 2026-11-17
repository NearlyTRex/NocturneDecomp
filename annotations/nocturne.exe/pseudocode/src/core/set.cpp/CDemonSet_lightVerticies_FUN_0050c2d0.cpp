// Name: core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0
// Address: 0050c2d0
// Address Range: [[0050c2d0, 0050d034]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  int iVar12;
  ushort *puVar13;
  uint *puVar14;
  CVector3f *pCVar15;
  uint *puVar16;
  int iVar17;
  byte bVar18;
  float afStackY_1158 [1013];
  CVector3i *world_position;
  CVector3i *pCVar19;
  CVector3i local_170;
  CVector3i local_164;
  CVector3i local_158;
  CVector3i local_14c;
  CVector3i local_140;
  CVector3i local_134;
  CVector3i local_128;
  CVector3i local_11c;
  CVector3i local_110;
  CVector3i local_104;
  CVector3i local_f8;
  CVector3i local_ec;
  CVector3i local_e0 [2];
  float local_c4;
  float local_c0;
  float local_bc;
  float local_a8;
  float local_a4;
  float local_9c;
  uint local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_74;
  float local_70;
  int local_6c;
  int local_68;
  CVector3i *local_64;
  int local_60;
  int local_5c;
  int local_58;
  CVector3i *local_54;
  CVector3i *local_50;
  int local_4c;
  CVector3i *local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar18 = 0;
  if (20000 < vertex_count) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 3366;
    core_main_c_displayErrorAndQuit_FUN_004c8440
              ("CDemonSet::lightVerticies - tried to light %d vertices, but GLOBAL_VERTEX_COUNT = %d",vertex_count,20000);
  }
  iVar9 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00461090(g_CDemonRenderer_PTR_005ae704)
  ;
  if (iVar9 == 0) {
    iVar9 = this_ptr->lighting_quality_mode;
    iVar12 = vertex_count * 0x30;
    if (iVar9 == 0) {
      if (this_ptr->mirror_lighting_cached == 0) {
        if (this_ptr->disable_directional_lighting == 0) {
          if (vertex_normals == (CVector3i *)0x0) {
            if (tri_count == 0) {
              local_34 = 0;
              iVar9 = 0;
              if (0 < vertex_count) {
                do {
                  local_11c.x = *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].projected_vertex.
                                               transformed_x + iVar9);
                  local_11c.y = *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].projected_vertex.
                                               transformed_y + iVar9);
                  local_11c.z = *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].projected_vertex.
                                               transformed_z + iVar9);
                  core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440
                            (&g_CDemonCameraInstance,&local_11c,&local_158);
                  local_e0[0].x = local_158.x;
                  *(uint *)((int)local_e0 + (uint)bVar18 * -8 + 4) =
                       *(uint *)((int)&local_158 + (uint)bVar18 * -8 + 4);
                  iVar12 = local_34;
                  *(uint *)((int)local_e0 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
                       *(uint *)((int)&local_158 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
                  core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                            (this_ptr,local_e0,(CVector3i *)0x0,local_34,0);
                  *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].a + iVar9) = g_INT_01c038f4;
                  local_34 = iVar12 + 1;
                  iVar9 = iVar9 + 0x30;
                } while (local_34 < vertex_count);
                return;
              }
            }
            else {
              if (0 < vertex_count) {
                iVar9 = 0;
                local_58 = 0;
                local_68 = iVar12;
                do {
                  local_134.x = *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].projected_vertex.
                                               transformed_x + iVar9);
                  local_134.y = *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].projected_vertex.
                                               transformed_y + iVar9);
                  local_134.z = *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].projected_vertex.
                                               transformed_z + iVar9);
                  core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440
                            (&g_CDemonCameraInstance,&local_134,&local_140);
                  puVar14 = (uint *)(local_58 + 0x200b134 + (uint)bVar18 * -8);
                  *(int *)((int)&g_CVector3i_ARRAY_0200b130[0].x + local_58) = local_140.x;
                  *puVar14 = *(uint *)((int)&local_140 + (uint)bVar18 * -8 + 4);
                  puVar14[(uint)bVar18 * -2 + 1] =
                       *(uint *)((int)&local_140 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
                  iVar9 = iVar9 + 0x30;
                  local_58 = local_58 + 0xc;
                } while (iVar9 < local_68);
              }
              if (vertices_per_face < 1) {
                if (4000 < tri_count) {
                  g_CurrentFilename = "..\\core\\set.cpp";
                  g_CurrentLineNumber = 3560;
                  core_main_c_displayErrorAndQuit_FUN_004c8440("Too many normals on this packed tri list");
                  g_CurrentFilename = "..\\core\\set.cpp";
                  g_CurrentLineNumber = 3562;
                  core_main_c_displayErrorAndQuit_FUN_004c8440("Need more normals for packed models");
                }
                iVar9 = 0;
                if (0 < tri_count) {
                  pCVar15 = g_CVector3f_ARRAY_01fff5b0;
                  puVar13 = face_data;
                  do {
                    uVar2 = puVar13[1];
                    uVar3 = *puVar13;
                    local_94 = (uint)puVar13[2];
                    local_24 = g_CVector3i_ARRAY_0200b130[uVar2].x -
                               g_CVector3i_ARRAY_0200b130[uVar3].x;
                    local_18 = g_CVector3i_ARRAY_0200b130[uVar2].y -
                               g_CVector3i_ARRAY_0200b130[uVar3].y;
                    iVar12 = g_CVector3i_ARRAY_0200b130[local_94].x -
                             g_CVector3i_ARRAY_0200b130[uVar2].x;
                    local_a8 = (float)(g_CVector3i_ARRAY_0200b130[uVar2].z -
                                      g_CVector3i_ARRAY_0200b130[uVar3].z);
                    local_a4 = (float)iVar12;
                    local_1c = g_CVector3i_ARRAY_0200b130[local_94].y -
                               g_CVector3i_ARRAY_0200b130[uVar2].y;
                    local_88 = (float)local_18;
                    local_20 = g_CVector3i_ARRAY_0200b130[local_94].z -
                               g_CVector3i_ARRAY_0200b130[uVar2].z;
                    local_9c = (float)local_20;
                    local_40 = local_88 * local_9c - (float)local_1c * local_a8;
                    local_44 = (float)iVar12 * local_a8 - (float)local_24 * local_9c;
                    local_3c = (float)local_24 * (float)local_1c - local_a4 * local_88;
                    local_90 = local_3c * local_3c + local_44 * local_44 + local_40 * local_40;
                    local_8c = (float)(g_FastInvSqrtMagic - ((int)local_90 >> 1));
                    fVar5 = local_8c * (float)65535;
                    puVar13 = puVar13 + 9;
                    iVar9 = iVar9 + 1;
                    pCVar15->x = local_40 * fVar5;
                    pCVar15->y = local_44 * fVar5;
                    pCVar15->z = local_3c * fVar5;
                    pCVar15 = pCVar15 + 1;
                  } while (iVar9 < tri_count);
                }
                memset(g_CVector3f_ARRAY_02045ab0,0,vertex_count * 0xc);
                iVar9 = 0;
                if (0 < tri_count) {
                  pCVar15 = g_CVector3f_ARRAY_01fff5b0;
                  do {
                    uVar2 = *(ushort *)face_data;
                    g_CVector3f_ARRAY_02045ab0[uVar2].x =
                         pCVar15->x + g_CVector3f_ARRAY_02045ab0[uVar2].x;
                    g_CVector3f_ARRAY_02045ab0[uVar2].y =
                         pCVar15->y + g_CVector3f_ARRAY_02045ab0[uVar2].y;
                    g_CVector3f_ARRAY_02045ab0[uVar2].z =
                         pCVar15->z + g_CVector3f_ARRAY_02045ab0[uVar2].z;
                    uVar2 = *(ushort *)((int)face_data + 2);
                    g_CVector3f_ARRAY_02045ab0[uVar2].x =
                         pCVar15->x + g_CVector3f_ARRAY_02045ab0[uVar2].x;
                    g_CVector3f_ARRAY_02045ab0[uVar2].y =
                         pCVar15->y + g_CVector3f_ARRAY_02045ab0[uVar2].y;
                    g_CVector3f_ARRAY_02045ab0[uVar2].z =
                         pCVar15->z + g_CVector3f_ARRAY_02045ab0[uVar2].z;
                    uVar2 = *(ushort *)((int)face_data + 4);
                    face_data = (void *)((int)face_data + 0x12);
                    g_CVector3f_ARRAY_02045ab0[uVar2].x =
                         pCVar15->x + g_CVector3f_ARRAY_02045ab0[uVar2].x;
                    g_CVector3f_ARRAY_02045ab0[uVar2].y =
                         pCVar15->y + g_CVector3f_ARRAY_02045ab0[uVar2].y;
                    iVar9 = iVar9 + 1;
                    g_CVector3f_ARRAY_02045ab0[uVar2].z =
                         pCVar15->z + g_CVector3f_ARRAY_02045ab0[uVar2].z;
                    pCVar15 = pCVar15 + 1;
                  } while (iVar9 < tri_count);
                }
              }
              else {
                iVar9 = 0;
                pvVar11 = face_data;
                if (0 < tri_count) {
                  do {
                    iVar12 = *(int *)((int)pvVar11 + 0x24);
                    iVar10 = *(int *)((int)pvVar11 + 0x18);
                    local_20 = g_CVector3i_ARRAY_0200b130[iVar12].x -
                               g_CVector3i_ARRAY_0200b130[iVar10].x;
                    local_1c = g_CVector3i_ARRAY_0200b130[iVar12].y -
                               g_CVector3i_ARRAY_0200b130[iVar10].y;
                    iVar4 = *(int *)((int)pvVar11 + 0x30);
                    iVar17 = g_CVector3i_ARRAY_0200b130[iVar4].x -
                             g_CVector3i_ARRAY_0200b130[iVar12].x;
                    fVar6 = (float)(g_CVector3i_ARRAY_0200b130[iVar12].z -
                                   g_CVector3i_ARRAY_0200b130[iVar10].z);
                    local_c4 = (float)iVar17;
                    local_18 = g_CVector3i_ARRAY_0200b130[iVar4].y -
                               g_CVector3i_ARRAY_0200b130[iVar12].y;
                    local_bc = (float)(g_CVector3i_ARRAY_0200b130[iVar4].z -
                                      g_CVector3i_ARRAY_0200b130[iVar12].z);
                    local_c0 = (float)local_18;
                    fVar5 = (float)local_1c * local_bc - local_c0 * fVar6;
                    fVar8 = (float)iVar17 * fVar6 - (float)local_20 * local_bc;
                    fVar7 = (float)local_20 * local_c0 - local_c4 * (float)local_1c;
                    local_2c = fVar7 * fVar7 + fVar8 * fVar8 + fVar5 * fVar5;
                    local_28 = (float)(g_FastInvSqrtMagic - ((int)local_2c >> 1));
                    fVar6 = local_28 * (float)65535;
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
                memset(g_CVector3f_ARRAY_02045ab0,0,vertex_count * 0xc);
                iVar9 = 0;
                if (0 < tri_count) {
                  do {
                    iVar12 = *(int *)((int)face_data + 0x18);
                    pfVar1 = (float *)((int)face_data + 8);
                    g_CVector3f_ARRAY_02045ab0[iVar12].x =
                         *pfVar1 + g_CVector3f_ARRAY_02045ab0[iVar12].x;
                    g_CVector3f_ARRAY_02045ab0[iVar12].y =
                         *(float *)((int)face_data + 0xc) + g_CVector3f_ARRAY_02045ab0[iVar12].y;
                    g_CVector3f_ARRAY_02045ab0[iVar12].z =
                         *(float *)((int)face_data + 0x10) + g_CVector3f_ARRAY_02045ab0[iVar12].z;
                    iVar12 = *(int *)((int)face_data + 0x24);
                    g_CVector3f_ARRAY_02045ab0[iVar12].x =
                         *pfVar1 + g_CVector3f_ARRAY_02045ab0[iVar12].x;
                    g_CVector3f_ARRAY_02045ab0[iVar12].y =
                         *(float *)((int)face_data + 0xc) + g_CVector3f_ARRAY_02045ab0[iVar12].y;
                    g_CVector3f_ARRAY_02045ab0[iVar12].z =
                         *(float *)((int)face_data + 0x10) + g_CVector3f_ARRAY_02045ab0[iVar12].z;
                    iVar12 = *(int *)((int)face_data + 0x30);
                    g_CVector3f_ARRAY_02045ab0[iVar12].x =
                         *pfVar1 + g_CVector3f_ARRAY_02045ab0[iVar12].x;
                    g_CVector3f_ARRAY_02045ab0[iVar12].y =
                         *(float *)((int)face_data + 0xc) + g_CVector3f_ARRAY_02045ab0[iVar12].y;
                    g_CVector3f_ARRAY_02045ab0[iVar12].z =
                         *(float *)((int)face_data + 0x10) + g_CVector3f_ARRAY_02045ab0[iVar12].z;
                    if (*(int *)((int)face_data + 4) == 4) {
                      iVar12 = *(int *)((int)face_data + 0x3c);
                      g_CVector3f_ARRAY_02045ab0[iVar12].x =
                           *pfVar1 + g_CVector3f_ARRAY_02045ab0[iVar12].x;
                      g_CVector3f_ARRAY_02045ab0[iVar12].y =
                           *(float *)((int)face_data + 0xc) + g_CVector3f_ARRAY_02045ab0[iVar12].y;
                      g_CVector3f_ARRAY_02045ab0[iVar12].z =
                           *(float *)((int)face_data + 0x10) + g_CVector3f_ARRAY_02045ab0[iVar12].z;
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
                  pCVar15 = g_CVector3f_ARRAY_02045ab0;
                  local_54 = g_CVector3i_ARRAY_0200b130;
                  iVar9 = 0;
                  local_4c = 0;
                  do {
                    pCVar19 = local_54;
                    local_74 = pCVar15->z * pCVar15->z +
                               pCVar15->x * pCVar15->x + pCVar15->y * pCVar15->y;
                    local_70 = (float)(g_FastInvSqrtMagic - ((int)local_74 >> 1));
                    fVar5 = local_70 * (float)65535;
                    pCVar15->x = pCVar15->x * fVar5;
                    pCVar15->y = pCVar15->y * fVar5;
                    pCVar15->z = pCVar15->z * fVar5;
                    local_128.x = (int)ROUND(pCVar15->x);
                    local_128.y = (int)ROUND(pCVar15->y);
                    local_128.z = (int)ROUND(pCVar15->z);
                    pCVar15 = pCVar15 + 1;
                    iVar12 = iVar9 + 1;
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                              (this_ptr,local_54,&local_128,iVar9,0);
                    local_54 = pCVar19 + 1;
                    *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].a + local_4c) = g_INT_01c038f4;
                    iVar9 = iVar12;
                    local_4c = local_4c + 0x30;
                  } while (iVar12 < vertex_count);
                  return;
                }
              }
              else {
                local_30 = 0;
                if (0 < vertex_count) {
                  pCVar15 = g_CVector3f_ARRAY_02045ab0;
                  local_60 = 0;
                  local_50 = g_CVector3i_ARRAY_0200b130;
                  do {
                    if (((1.0 <= ABS(pCVar15->x)) || (1.0 <= ABS(pCVar15->y))) ||
                       (1.0 <= ABS(pCVar15->z))) {
                      local_80 = pCVar15->z * pCVar15->z +
                                 pCVar15->x * pCVar15->x + pCVar15->y * pCVar15->y;
                      local_7c = (float)(g_FastInvSqrtMagic - ((int)local_80 >> 1));
                      fVar5 = local_7c * (float)65535;
                      pCVar15->x = pCVar15->x * fVar5;
                      pCVar15->y = pCVar15->y * fVar5;
                      pCVar15->z = pCVar15->z * fVar5;
                      local_14c.x = (int)ROUND(pCVar15->x);
                      local_14c.y = (int)ROUND(pCVar15->y);
                      local_14c.z = (int)ROUND(pCVar15->z);
                      pCVar19 = &local_14c;
                      world_position = local_50;
                    }
                    else {
                      pCVar19 = (CVector3i *)0x0;
                      world_position = g_CVector3i_ARRAY_0200b130 + local_30;
                    }
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                              (this_ptr,world_position,pCVar19,local_30,0);
                    pCVar15 = pCVar15 + 1;
                    local_30 = local_30 + 1;
                    *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].a + local_60) = g_INT_01c038f4;
                    local_50 = local_50 + 1;
                    local_60 = local_60 + 0x30;
                  } while (local_30 < vertex_count);
                }
              }
            }
          }
          else {
            if (this_ptr->rendering_mode == 0) {
              if (0 < vertex_count) {
                local_5c = 0;
                iVar9 = 0;
                local_6c = iVar12;
                do {
                  local_110.x = *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].projected_vertex.
                                               transformed_x + iVar9);
                  local_110.y = *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].projected_vertex.
                                               transformed_y + iVar9);
                  local_110.z = *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].projected_vertex.
                                               transformed_z + iVar9);
                  core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440
                            (&g_CDemonCameraInstance,&local_110,&local_f8);
                  iVar9 = iVar9 + 0x30;
                  puVar14 = (uint *)(local_5c + 0x200b134 + (uint)bVar18 * -8);
                  *(int *)((int)&g_CVector3i_ARRAY_0200b130[0].x + local_5c) = local_f8.x;
                  *puVar14 = *(uint *)((int)&local_f8 + (uint)bVar18 * -8 + 4);
                  puVar14[(uint)bVar18 * -2 + 1] =
                       *(uint *)((int)&local_f8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
                  local_5c = local_5c + 0xc;
                } while (iVar9 < local_6c);
              }
              iVar9 = 0;
              if (0 < vertex_count) {
                local_48 = vertex_normals;
                do {
                  core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10
                            (&g_CDemonCameraInstance,local_48,&local_170);
                  local_48 = local_48 + 1;
                  puVar14 = (uint *)(iVar9 * 0xc + 0x2045ab4 + (uint)bVar18 * -8);
                  g_CVector3f_ARRAY_02045ab0[iVar9].x = (float)local_170.x;
                  *puVar14 = *(uint *)((int)&local_170 + (uint)bVar18 * -8 + 4);
                  puVar14[(uint)bVar18 * -2 + 1] =
                       *(uint *)((int)&local_170 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
                  iVar9 = iVar9 + 1;
                } while (iVar9 < vertex_count);
              }
            }
            else {
              iVar9 = 0;
              if (0 < vertex_count) {
                do {
                  puVar16 = (uint *)(iVar9 * 0xc + 0x2045ab4 + (uint)bVar18 * -8);
                  puVar14 = (uint *)((int)vertex_normals + (uint)bVar18 * -8 + 4);
                  g_CVector3f_ARRAY_02045ab0[iVar9].x = (float)vertex_normals->x;
                  *puVar16 = *puVar14;
                  puVar16[(uint)bVar18 * -2 + 1] = puVar14[(uint)bVar18 * -2 + 1];
                  iVar9 = iVar9 + 1;
                  vertex_normals = vertex_normals + 1;
                } while (iVar9 < vertex_count);
              }
            }
            if (0 < vertex_count) {
              pCVar15 = g_CVector3f_ARRAY_02045ab0;
              local_64 = g_CVector3i_ARRAY_0200b130;
              iVar9 = 0;
              iVar12 = 0;
              do {
                iVar10 = iVar9 + 1;
                core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                          (this_ptr,local_64,(CVector3i *)pCVar15,iVar9,0);
                *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].a + iVar12) = g_INT_01c038f4;
                pCVar15 = pCVar15 + 1;
                local_64 = local_64 + 1;
                iVar9 = iVar10;
                iVar12 = iVar12 + 0x30;
              } while (iVar10 < vertex_count);
              return;
            }
          }
        }
        else if (0 < vertex_count) {
          local_38 = 0;
          iVar9 = 0;
          do {
            local_164.x = *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].projected_vertex.
                                         transformed_x + iVar9);
            local_164.y = *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].projected_vertex.
                                         transformed_y + iVar9);
            local_164.z = *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].projected_vertex.
                                         transformed_z + iVar9);
            core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440
                      (&g_CDemonCameraInstance,&local_164,&local_104);
            local_ec.x = local_104.x;
            *(uint *)((int)local_e0 + (uint)bVar18 * -8 + -8) =
                 *(uint *)((int)&local_104 + (uint)bVar18 * -8 + 4);
            iVar12 = local_38;
            *(uint *)((int)local_e0 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + -4) =
                 *(uint *)((int)&local_104 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
            core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                      (this_ptr,&local_ec,(CVector3i *)0x0,local_38,0);
            *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].a + iVar9) = g_INT_01c038f4;
            local_38 = iVar12 + 1;
            iVar9 = iVar9 + 0x30;
          } while (local_38 < vertex_count);
          return;
        }
      }
      else if (0 < vertex_count) {
        iVar9 = 0;
        do {
          *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].r + iVar9) =
               (this_ptr->mirror_cached_color).r;
          *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].g + iVar9) =
               (this_ptr->mirror_cached_color).g;
          iVar10 = iVar9 + 0x30;
          *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].b + iVar9) =
               (this_ptr->mirror_cached_color).b;
          iVar9 = iVar10;
        } while (iVar10 < iVar12);
        return;
      }
    }
    else {
      if (g_INT_01ffb060 == 0) {
        if (iVar9 == 2) {
          iVar9 = 0;
          if (0 < vertex_count) {
            iVar12 = 0;
            do {
              *(uint *)((int)&g_SRenderVertex_ARRAY_005c5014[0].a + iVar12) = 0;
              core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                        (this_ptr,vertex_positions,(CVector3i *)0x0,iVar9,1);
              iVar9 = iVar9 + 1;
              vertex_positions = vertex_positions + 1;
              iVar12 = iVar12 + 0x30;
            } while (iVar9 < vertex_count);
          }
        }
        else if (iVar9 == 3) {
          if (0 < vertex_count) {
            iVar9 = 0;
            do {
              *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].r + iVar9) = (this_ptr->flat_color).r
              ;
              *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].g + iVar9) = (this_ptr->flat_color).g
              ;
              iVar10 = iVar9 + 0x30;
              *(int *)((int)&g_SRenderVertex_ARRAY_005c5014[0].b + iVar9) = (this_ptr->flat_color).b
              ;
              *(uint *)((int)&g_SRenderVertex_ARRAY_005c5014[0].a + iVar9) = 0;
              iVar9 = iVar10;
            } while (iVar10 < iVar12);
            g_INT_01c038f4 = 0;
            return;
          }
        }
        else if (0 < vertex_count) {
          iVar9 = 0;
          do {
            iVar10 = iVar9 + 0x30;
            *(uint *)((int)&g_SRenderVertex_ARRAY_005c5014[0].r + iVar9) = 0xffff;
            *(uint *)((int)&g_SRenderVertex_ARRAY_005c5014[0].g + iVar9) = 0xffff;
            *(uint *)((int)&g_SRenderVertex_ARRAY_005c5014[0].b + iVar9) = 0xffff;
            *(uint *)((int)&g_SRenderVertex_ARRAY_005c5014[0].a + iVar9) = 0;
            iVar9 = iVar10;
          } while (iVar10 < iVar12);
          g_INT_01c038f4 = 0;
          return;
        }
        g_INT_01c038f4 = 0;
        return;
      }
      if (0 < vertex_count) {
        iVar9 = 0;
        do {
          iVar10 = iVar9 + 0x30;
          *(uint *)((int)&g_SRenderVertex_ARRAY_005c5014[0].r + iVar9) = 0;
          *(uint *)((int)&g_SRenderVertex_ARRAY_005c5014[0].g + iVar9) = 0;
          *(uint *)((int)&g_SRenderVertex_ARRAY_005c5014[0].b + iVar9) = 0;
          *(uint *)((int)&g_SRenderVertex_ARRAY_005c5014[0].a + iVar9) = 0;
          iVar9 = iVar10;
        } while (iVar10 < iVar12);
      }
      g_INT_01c038f4 = 0;
    }
  }
  return;
}
