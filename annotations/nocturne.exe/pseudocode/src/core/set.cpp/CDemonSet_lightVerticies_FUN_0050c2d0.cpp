// Name: core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0
// Address: 0050c2d0
// Address Range: [[0050c2d0, 0050d034]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  CVector3f *pCVar9;
  int iVar10;
  ushort *puVar11;
  uint *puVar12;
  CVector3i *pCVar13;
  int iVar14;
  float *pfVar15;
  byte bVar16;
  int aiStackY_1158 [1013];
  CVector3i *world_position;
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
  
  bVar16 = 0;
  if (20000 < vertex_count) {
    g_CHAR_PTR_01cc4800 = "..\\core\\set.cpp";
    g_INT_01cc4804 = 0xd26;
    core_main_c_FUN_004c8440("CDemonSet::lightVerticies - tried to light %d vertices, but GLOBAL_VERTEX_COUNT = %d",vertex_count,20000);
  }
  iVar5 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar5 == 0) {
    iVar5 = this_ptr->lighting_quality_mode;
    iVar8 = vertex_count * 0x30;
    if (iVar5 == 0) {
      if (this_ptr->mirror_lighting_cached == 0) {
        if (this_ptr->disable_directional_lighting == 0) {
          if (vertex_normals == (CVector3i *)0x0) {
            if (tri_count == 0) {
              local_34 = 0;
              iVar5 = 0;
              if (0 < vertex_count) {
                do {
                  local_11c.x = *(int *)((int)&DAT_005c5014 + iVar5);
                  local_11c.y = *(int *)((int)&DAT_005c5018 + iVar5);
                  local_11c.z = *(int *)((int)&DAT_005c501c + iVar5);
                  core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440
                            (&g_CDemonCamera_01fb8508,&local_11c,&local_158);
                  local_e0[0].x = local_158.x;
                  *(uint *)((int)local_e0 + (uint)bVar16 * -8 + 4) =
                       *(uint *)((int)&local_158 + (uint)bVar16 * -8 + 4);
                  iVar8 = local_34;
                  *(uint *)((int)local_e0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
                       *(uint *)((int)&local_158 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
                  core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                            (this_ptr,local_e0,(CVector3i *)0x0,local_34,0);
                  *(uint *)((int)&DAT_005c5040 + iVar5) = _DAT_01c038f4;
                  local_34 = iVar8 + 1;
                  iVar5 = iVar5 + 0x30;
                } while (local_34 < vertex_count);
                return;
              }
            }
            else {
              if (0 < vertex_count) {
                iVar5 = 0;
                local_58 = 0;
                local_68 = iVar8;
                do {
                  local_134.x = *(int *)((int)&DAT_005c5014 + iVar5);
                  local_134.y = *(int *)((int)&DAT_005c5018 + iVar5);
                  local_134.z = *(int *)((int)&DAT_005c501c + iVar5);
                  core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440
                            (&g_CDemonCamera_01fb8508,&local_134,&local_140);
                  puVar12 = (uint *)(local_58 + 0x200b134 + (uint)bVar16 * -8);
                  *(int *)(local_58 + 0x200b130) = local_140.x;
                  *puVar12 = *(uint *)((int)&local_140 + (uint)bVar16 * -8 + 4);
                  puVar12[(uint)bVar16 * -2 + 1] =
                       *(uint *)((int)&local_140 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
                  iVar5 = iVar5 + 0x30;
                  local_58 = local_58 + 0xc;
                } while (iVar5 < local_68);
              }
              if (vertices_per_face < 1) {
                if (4000 < tri_count) {
                  g_CHAR_PTR_01cc4800 = "..\\core\\set.cpp";
                  g_INT_01cc4804 = 0xde8;
                  core_main_c_FUN_004c8440("Too many normals on this packed tri list");
                  g_CHAR_PTR_01cc4800 = "..\\core\\set.cpp";
                  g_INT_01cc4804 = 0xdea;
                  core_main_c_FUN_004c8440("Need more normals for packed models");
                }
                iVar5 = 0;
                if (0 < tri_count) {
                  pCVar9 = g_CVector3f_ARRAY_01fff5b0;
                  puVar11 = face_data;
                  do {
                    iVar10 = (uint)puVar11[1] * 0xc;
                    iVar6 = (uint)*puVar11 * 0xc;
                    local_94 = (uint)puVar11[2];
                    local_24 = *(int *)(iVar10 + 0x200b130) - *(int *)(iVar6 + 0x200b130);
                    local_18 = *(int *)(iVar10 + 0x200b134) - *(int *)(iVar6 + 0x200b134);
                    iVar14 = local_94 * 0xc;
                    iVar8 = *(int *)(iVar14 + 0x200b130) - *(int *)(iVar10 + 0x200b130);
                    local_a8 = (float)(*(int *)(iVar10 + 0x200b138) - *(int *)(iVar6 + 0x200b138));
                    local_a4 = (float)iVar8;
                    local_1c = *(int *)(iVar14 + 0x200b134) - *(int *)(iVar10 + 0x200b134);
                    local_88 = (float)local_18;
                    local_20 = *(int *)(iVar14 + 0x200b138) - *(int *)(iVar10 + 0x200b138);
                    local_9c = (float)local_20;
                    local_40 = local_88 * local_9c - (float)local_1c * local_a8;
                    local_44 = (float)iVar8 * local_a8 - (float)local_24 * local_9c;
                    local_3c = (float)local_24 * (float)local_1c - local_a4 * local_88;
                    local_90 = local_3c * local_3c + local_44 * local_44 + local_40 * local_40;
                    local_8c = (float)((int)CVector3f_01c70708.z - ((int)local_90 >> 1));
                    fVar1 = local_8c * (float)65535;
                    puVar11 = puVar11 + 9;
                    iVar5 = iVar5 + 1;
                    pCVar9->x = local_40 * fVar1;
                    pCVar9->y = local_44 * fVar1;
                    pCVar9->z = local_3c * fVar1;
                    pCVar9 = pCVar9 + 1;
                  } while (iVar5 < tri_count);
                }
                memset(&DAT_02045ab0,0,vertex_count * 0xc);
                iVar5 = 0;
                if (0 < tri_count) {
                  pCVar9 = g_CVector3f_ARRAY_01fff5b0;
                  do {
                    iVar8 = (uint)*(ushort *)face_data * 0xc;
                    *(float *)(&DAT_02045ab0 + iVar8) =
                         pCVar9->x + *(float *)(&DAT_02045ab0 + iVar8);
                    *(float *)(&DAT_02045ab4 + iVar8) =
                         pCVar9->y + *(float *)(&DAT_02045ab4 + iVar8);
                    *(float *)(&DAT_02045ab8 + iVar8) =
                         pCVar9->z + *(float *)(&DAT_02045ab8 + iVar8);
                    iVar8 = (uint)*(ushort *)((int)face_data + 2) * 0xc;
                    *(float *)(&DAT_02045ab0 + iVar8) =
                         pCVar9->x + *(float *)(&DAT_02045ab0 + iVar8);
                    *(float *)(&DAT_02045ab4 + iVar8) =
                         pCVar9->y + *(float *)(&DAT_02045ab4 + iVar8);
                    *(float *)(&DAT_02045ab8 + iVar8) =
                         pCVar9->z + *(float *)(&DAT_02045ab8 + iVar8);
                    iVar8 = (uint)*(ushort *)((int)face_data + 4) * 0xc;
                    face_data = (void *)((int)face_data + 0x12);
                    *(float *)(&DAT_02045ab0 + iVar8) =
                         pCVar9->x + *(float *)(&DAT_02045ab0 + iVar8);
                    *(float *)(&DAT_02045ab4 + iVar8) =
                         pCVar9->y + *(float *)(&DAT_02045ab4 + iVar8);
                    iVar5 = iVar5 + 1;
                    *(float *)(&DAT_02045ab8 + iVar8) =
                         pCVar9->z + *(float *)(&DAT_02045ab8 + iVar8);
                    pCVar9 = pCVar9 + 1;
                  } while (iVar5 < tri_count);
                }
              }
              else {
                iVar5 = 0;
                pvVar7 = face_data;
                if (0 < tri_count) {
                  do {
                    iVar6 = *(int *)((int)pvVar7 + 0x24) * 0xc;
                    iVar8 = *(int *)((int)pvVar7 + 0x18) * 0xc;
                    local_20 = *(int *)(iVar6 + 0x200b130) - *(int *)(iVar8 + 0x200b130);
                    local_1c = *(int *)(iVar6 + 0x200b134) - *(int *)(iVar8 + 0x200b134);
                    iVar10 = *(int *)((int)pvVar7 + 0x30) * 0xc;
                    iVar14 = *(int *)(iVar10 + 0x200b130) - *(int *)(iVar6 + 0x200b130);
                    fVar2 = (float)(*(int *)(iVar6 + 0x200b138) - *(int *)(iVar8 + 0x200b138));
                    local_c4 = (float)iVar14;
                    local_18 = *(int *)(iVar10 + 0x200b134) - *(int *)(iVar6 + 0x200b134);
                    local_bc = (float)(*(int *)(iVar10 + 0x200b138) - *(int *)(iVar6 + 0x200b138));
                    local_c0 = (float)local_18;
                    fVar1 = (float)local_1c * local_bc - local_c0 * fVar2;
                    fVar4 = (float)iVar14 * fVar2 - (float)local_20 * local_bc;
                    fVar3 = (float)local_20 * local_c0 - local_c4 * (float)local_1c;
                    local_2c = fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1;
                    local_28 = (float)((int)CVector3f_01c70708.z - ((int)local_2c >> 1));
                    fVar2 = local_28 * (float)65535;
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
                memset(&DAT_02045ab0,0,vertex_count * 0xc);
                iVar5 = 0;
                if (0 < tri_count) {
                  do {
                    iVar8 = *(int *)((int)face_data + 0x18) * 0xc;
                    pfVar15 = (float *)((int)face_data + 8);
                    *(float *)(&DAT_02045ab0 + iVar8) = *pfVar15 + *(float *)(&DAT_02045ab0 + iVar8)
                    ;
                    *(float *)(&DAT_02045ab4 + iVar8) =
                         *(float *)((int)face_data + 0xc) + *(float *)(&DAT_02045ab4 + iVar8);
                    *(float *)(&DAT_02045ab8 + iVar8) =
                         *(float *)((int)face_data + 0x10) + *(float *)(&DAT_02045ab8 + iVar8);
                    iVar8 = *(int *)((int)face_data + 0x24) * 0xc;
                    *(float *)(&DAT_02045ab0 + iVar8) = *pfVar15 + *(float *)(&DAT_02045ab0 + iVar8)
                    ;
                    *(float *)(&DAT_02045ab4 + iVar8) =
                         *(float *)((int)face_data + 0xc) + *(float *)(&DAT_02045ab4 + iVar8);
                    *(float *)(&DAT_02045ab8 + iVar8) =
                         *(float *)((int)face_data + 0x10) + *(float *)(&DAT_02045ab8 + iVar8);
                    iVar8 = *(int *)((int)face_data + 0x30) * 0xc;
                    *(float *)(&DAT_02045ab0 + iVar8) = *pfVar15 + *(float *)(&DAT_02045ab0 + iVar8)
                    ;
                    *(float *)(&DAT_02045ab4 + iVar8) =
                         *(float *)((int)face_data + 0xc) + *(float *)(&DAT_02045ab4 + iVar8);
                    *(float *)(&DAT_02045ab8 + iVar8) =
                         *(float *)((int)face_data + 0x10) + *(float *)(&DAT_02045ab8 + iVar8);
                    if (*(int *)((int)face_data + 4) == 4) {
                      iVar8 = *(int *)((int)face_data + 0x3c) * 0xc;
                      *(float *)(&DAT_02045ab0 + iVar8) =
                           *pfVar15 + *(float *)(&DAT_02045ab0 + iVar8);
                      *(float *)(&DAT_02045ab4 + iVar8) =
                           *(float *)((int)face_data + 0xc) + *(float *)(&DAT_02045ab4 + iVar8);
                      *(float *)(&DAT_02045ab8 + iVar8) =
                           *(float *)((int)face_data + 0x10) + *(float *)(&DAT_02045ab8 + iVar8);
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
              if (this_ptr->skip_normal_normalization == 0) {
                if (0 < vertex_count) {
                  pfVar15 = (float *)&DAT_02045ab0;
                  local_54 = (CVector3i *)0x200b130;
                  iVar5 = 0;
                  local_4c = 0;
                  do {
                    pCVar13 = local_54;
                    local_74 = pfVar15[2] * pfVar15[2] +
                               *pfVar15 * *pfVar15 + pfVar15[1] * pfVar15[1];
                    local_70 = (float)((int)CVector3f_01c70708.z - ((int)local_74 >> 1));
                    fVar1 = local_70 * (float)65535;
                    *pfVar15 = *pfVar15 * fVar1;
                    pfVar15[1] = pfVar15[1] * fVar1;
                    pfVar15[2] = pfVar15[2] * fVar1;
                    local_128.x = (int)ROUND(*pfVar15);
                    local_128.y = (int)ROUND(pfVar15[1]);
                    local_128.z = (int)ROUND(pfVar15[2]);
                    pfVar15 = pfVar15 + 3;
                    iVar8 = iVar5 + 1;
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                              (this_ptr,local_54,&local_128,iVar5,0);
                    local_54 = pCVar13 + 1;
                    *(uint *)((int)&DAT_005c5040 + local_4c) = _DAT_01c038f4;
                    iVar5 = iVar8;
                    local_4c = local_4c + 0x30;
                  } while (iVar8 < vertex_count);
                  return;
                }
              }
              else {
                local_30 = 0;
                if (0 < vertex_count) {
                  pfVar15 = (float *)&DAT_02045ab0;
                  local_60 = 0;
                  local_50 = (CVector3i *)0x200b130;
                  do {
                    if (((1.0 <= ABS(*pfVar15)) || (1.0 <= ABS(pfVar15[1]))) ||
                       (1.0 <= ABS(pfVar15[2]))) {
                      local_80 = pfVar15[2] * pfVar15[2] +
                                 *pfVar15 * *pfVar15 + pfVar15[1] * pfVar15[1];
                      local_7c = (float)((int)CVector3f_01c70708.z - ((int)local_80 >> 1));
                      fVar1 = local_7c * (float)65535;
                      *pfVar15 = *pfVar15 * fVar1;
                      pfVar15[1] = pfVar15[1] * fVar1;
                      pfVar15[2] = pfVar15[2] * fVar1;
                      local_14c.x = (int)ROUND(*pfVar15);
                      local_14c.y = (int)ROUND(pfVar15[1]);
                      local_14c.z = (int)ROUND(pfVar15[2]);
                      pCVar13 = &local_14c;
                      world_position = local_50;
                    }
                    else {
                      pCVar13 = (CVector3i *)0x0;
                      world_position = (CVector3i *)(local_30 * 0xc + 0x200b130);
                    }
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                              (this_ptr,world_position,pCVar13,local_30,0);
                    pfVar15 = pfVar15 + 3;
                    local_30 = local_30 + 1;
                    *(uint *)((int)&DAT_005c5040 + local_60) = _DAT_01c038f4;
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
                iVar5 = 0;
                local_6c = iVar8;
                do {
                  local_110.x = *(int *)((int)&DAT_005c5014 + iVar5);
                  local_110.y = *(int *)((int)&DAT_005c5018 + iVar5);
                  local_110.z = *(int *)((int)&DAT_005c501c + iVar5);
                  core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440
                            (&g_CDemonCamera_01fb8508,&local_110,&local_f8);
                  iVar5 = iVar5 + 0x30;
                  puVar12 = (uint *)(local_5c + 0x200b134 + (uint)bVar16 * -8);
                  *(int *)(local_5c + 0x200b130) = local_f8.x;
                  *puVar12 = *(uint *)((int)&local_f8 + (uint)bVar16 * -8 + 4);
                  puVar12[(uint)bVar16 * -2 + 1] =
                       *(uint *)((int)&local_f8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
                  local_5c = local_5c + 0xc;
                } while (iVar5 < local_6c);
              }
              iVar5 = 0;
              if (0 < vertex_count) {
                local_48 = vertex_normals;
                do {
                  core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10
                            (&g_CDemonCamera_01fb8508,local_48,&local_170);
                  local_48 = local_48 + 1;
                  *(int *)(&DAT_02045ab0 + iVar5 * 0xc) = local_170.x;
                  *(uint *)(&DAT_02045ab4 + (uint)bVar16 * -8 + iVar5 * 0xc) =
                       *(uint *)((int)&local_170 + (uint)bVar16 * -8 + 4);
                  *(uint *)
                   ((int)(&DAT_02045ab4 + (uint)bVar16 * -8 + iVar5 * 0xc) +
                   ((uint)bVar16 * -2 + 1) * 4) =
                       *(uint *)((int)&local_170 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
                  iVar5 = iVar5 + 1;
                } while (iVar5 < vertex_count);
              }
            }
            else {
              iVar5 = 0;
              if (0 < vertex_count) {
                do {
                  puVar12 = (uint *)((int)vertex_normals + (uint)bVar16 * -8 + 4);
                  *(int *)(&DAT_02045ab0 + iVar5 * 0xc) = vertex_normals->x;
                  *(uint *)(&DAT_02045ab4 + (uint)bVar16 * -8 + iVar5 * 0xc) = *puVar12;
                  *(uint *)
                   ((int)(&DAT_02045ab4 + (uint)bVar16 * -8 + iVar5 * 0xc) +
                   ((uint)bVar16 * -2 + 1) * 4) = puVar12[(uint)bVar16 * -2 + 1];
                  iVar5 = iVar5 + 1;
                  vertex_normals = vertex_normals + 1;
                } while (iVar5 < vertex_count);
              }
            }
            if (0 < vertex_count) {
              pCVar13 = (CVector3i *)&DAT_02045ab0;
              local_64 = (CVector3i *)0x200b130;
              iVar5 = 0;
              iVar8 = 0;
              do {
                iVar6 = iVar5 + 1;
                core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                          (this_ptr,local_64,pCVar13,iVar5,0);
                *(uint *)((int)&DAT_005c5040 + iVar8) = _DAT_01c038f4;
                pCVar13 = pCVar13 + 1;
                local_64 = local_64 + 1;
                iVar5 = iVar6;
                iVar8 = iVar8 + 0x30;
              } while (iVar6 < vertex_count);
              return;
            }
          }
        }
        else if (0 < vertex_count) {
          local_38 = 0;
          iVar5 = 0;
          do {
            local_164.x = *(int *)((int)&DAT_005c5014 + iVar5);
            local_164.y = *(int *)((int)&DAT_005c5018 + iVar5);
            local_164.z = *(int *)((int)&DAT_005c501c + iVar5);
            core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440
                      (&g_CDemonCamera_01fb8508,&local_164,&local_104);
            local_ec.x = local_104.x;
            *(uint *)((int)local_e0 + (uint)bVar16 * -8 + -8) =
                 *(uint *)((int)&local_104 + (uint)bVar16 * -8 + 4);
            iVar8 = local_38;
            *(uint *)((int)local_e0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + -4) =
                 *(uint *)((int)&local_104 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
            core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                      (this_ptr,&local_ec,(CVector3i *)0x0,local_38,0);
            *(uint *)((int)&DAT_005c5040 + iVar5) = _DAT_01c038f4;
            local_38 = iVar8 + 1;
            iVar5 = iVar5 + 0x30;
          } while (local_38 < vertex_count);
          return;
        }
      }
      else if (0 < vertex_count) {
        iVar5 = 0;
        do {
          *(int *)((int)&DAT_005c5034 + iVar5) = (this_ptr->mirror_cached_color).r;
          *(int *)((int)&DAT_005c5038 + iVar5) = (this_ptr->mirror_cached_color).g;
          iVar6 = iVar5 + 0x30;
          *(int *)((int)&DAT_005c503c + iVar5) = (this_ptr->mirror_cached_color).b;
          iVar5 = iVar6;
        } while (iVar6 < iVar8);
        return;
      }
    }
    else {
      if (_DAT_01ffb060 == 0) {
        if (iVar5 == 2) {
          iVar5 = 0;
          if (0 < vertex_count) {
            iVar8 = 0;
            do {
              *(uint *)((int)&DAT_005c5040 + iVar8) = 0;
              core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                        (this_ptr,vertex_positions,(CVector3i *)0x0,iVar5,1);
              iVar5 = iVar5 + 1;
              vertex_positions = vertex_positions + 1;
              iVar8 = iVar8 + 0x30;
            } while (iVar5 < vertex_count);
          }
        }
        else if (iVar5 == 3) {
          if (0 < vertex_count) {
            iVar5 = 0;
            do {
              *(int *)((int)&DAT_005c5034 + iVar5) = (this_ptr->flat_color).r;
              *(int *)((int)&DAT_005c5038 + iVar5) = (this_ptr->flat_color).g;
              iVar6 = iVar5 + 0x30;
              *(int *)((int)&DAT_005c503c + iVar5) = (this_ptr->flat_color).b;
              *(uint *)((int)&DAT_005c5040 + iVar5) = 0;
              iVar5 = iVar6;
            } while (iVar6 < iVar8);
            _DAT_01c038f4 = 0;
            return;
          }
        }
        else if (0 < vertex_count) {
          iVar5 = 0;
          do {
            iVar6 = iVar5 + 0x30;
            *(uint *)((int)&DAT_005c5034 + iVar5) = 0xffff;
            *(uint *)((int)&DAT_005c5038 + iVar5) = 0xffff;
            *(uint *)((int)&DAT_005c503c + iVar5) = 0xffff;
            *(uint *)((int)&DAT_005c5040 + iVar5) = 0;
            iVar5 = iVar6;
          } while (iVar6 < iVar8);
          _DAT_01c038f4 = 0;
          return;
        }
        _DAT_01c038f4 = 0;
        return;
      }
      if (0 < vertex_count) {
        iVar5 = 0;
        do {
          iVar6 = iVar5 + 0x30;
          *(uint *)((int)&DAT_005c5034 + iVar5) = 0;
          *(uint *)((int)&DAT_005c5038 + iVar5) = 0;
          *(uint *)((int)&DAT_005c503c + iVar5) = 0;
          *(uint *)((int)&DAT_005c5040 + iVar5) = 0;
          iVar5 = iVar6;
        } while (iVar6 < iVar8);
      }
      _DAT_01c038f4 = 0;
    }
  }
  return;
}
