// Name: core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0
// Address: 0050c2d0
// Address Range: [[0050c2d0, 0050d034]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

{
  CDemonActor *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  uint *puVar12;
  CVector3i *pCVar13;
  int *piVar14;
  int iVar15;
  float *pfVar16;
  byte bVar17;
  int aiStackY_1158 [1013];
  CVector3i *world_position;
  CVector3i local_170;
  uint local_164;
  uint local_160;
  uint local_15c;
  int local_158;
  int aiStack_154 [2];
  CVector3i local_14c;
  uint local_140;
  uint auStack_13c [4];
  uint local_12c;
  CVector3i local_128;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  int local_104;
  int aiStack_100 [5];
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
  
  bVar17 = 0;
  if (20000 < vertex_count) {
    PTR_01cc4800 = "..\\core\\set.cpp";
    INT_01cc4804 = 0xd26;
    core_main_c_FUN_004c8440("CDemonSet::lightVerticies - tried to light %d vertices, but GLOBAL_VERTEX_COUNT = %d",vertex_count,20000);
  }
  iVar6 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar6 == 0) {
    pCVar1 = this_ptr->renderable_actors[0x6ea];
    iVar6 = vertex_count * 0x30;
    if (pCVar1 == (CDemonActor *)0x0) {
      if (this_ptr->sorted_render_actors[0x6e2] == (CDemonActor *)0x0) {
        if (this_ptr->renderable_actors[0x6ec] == (CDemonActor *)0x0) {
          if (vertex_normals == (CVector3i *)0x0) {
            if (tri_count == 0) {
              local_34 = 0;
              iVar6 = 0;
              if (0 < vertex_count) {
                do {
                  local_11c = *(uint *)((int)&DAT_005c5014 + iVar6);
                  local_118 = *(uint *)((int)&DAT_005c5018 + iVar6);
                  local_114 = *(uint *)((int)&DAT_005c501c + iVar6);
                  core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440
                            (&DAT_01fb8508,&local_11c);
                  local_e0[0].x = local_158;
                  *(int *)((int)local_e0 + (uint)bVar17 * -8 + 4) = aiStack_154[(uint)bVar17 * -2];
                  iVar9 = local_34;
                  *(int *)((int)local_e0 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
                       aiStack_154[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
                  core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                            (this_ptr,local_e0,(CVector3i *)0x0,local_34,0);
                  *(uint *)((int)&DAT_005c5040 + iVar6) = _DAT_01c038f4;
                  local_34 = iVar9 + 1;
                  iVar6 = iVar6 + 0x30;
                } while (local_34 < vertex_count);
                return;
              }
            }
            else {
              if (0 < vertex_count) {
                iVar9 = 0;
                local_58 = 0;
                local_68 = iVar6;
                do {
                  auStack_13c[2] = *(uint *)((int)&DAT_005c5014 + iVar9);
                  auStack_13c[3] = *(uint *)((int)&DAT_005c5018 + iVar9);
                  local_12c = *(uint *)((int)&DAT_005c501c + iVar9);
                  core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440
                            (&DAT_01fb8508,auStack_13c + 2);
                  puVar12 = (uint *)(local_58 + 0x200b134 + (uint)bVar17 * -8);
                  *(uint *)(local_58 + 0x200b130) = local_140;
                  *puVar12 = auStack_13c[(uint)bVar17 * -2];
                  puVar12[(uint)bVar17 * -2 + 1] =
                       auStack_13c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
                  iVar9 = iVar9 + 0x30;
                  local_58 = local_58 + 0xc;
                } while (iVar9 < local_68);
              }
              if (vertices_per_face < 1) {
                if (4000 < tri_count) {
                  PTR_01cc4800 = "..\\core\\set.cpp";
                  INT_01cc4804 = 0xde8;
                  core_main_c_FUN_004c8440("Too many normals on this packed tri list");
                  PTR_01cc4800 = "..\\core\\set.cpp";
                  INT_01cc4804 = 0xdea;
                  core_main_c_FUN_004c8440("Need more normals for packed models");
                }
                iVar6 = 0;
                if (0 < tri_count) {
                  pfVar16 = (float *)&DAT_01fff5b0;
                  puVar11 = face_data;
                  do {
                    iVar10 = (uint)puVar11[1] * 0xc;
                    iVar7 = (uint)*puVar11 * 0xc;
                    local_94 = (uint)puVar11[2];
                    local_24 = *(int *)(iVar10 + 0x200b130) - *(int *)(iVar7 + 0x200b130);
                    local_18 = *(int *)(iVar10 + 0x200b134) - *(int *)(iVar7 + 0x200b134);
                    iVar15 = local_94 * 0xc;
                    iVar9 = *(int *)(iVar15 + 0x200b130) - *(int *)(iVar10 + 0x200b130);
                    local_a8 = (float)(*(int *)(iVar10 + 0x200b138) - *(int *)(iVar7 + 0x200b138));
                    local_a4 = (float)iVar9;
                    local_1c = *(int *)(iVar15 + 0x200b134) - *(int *)(iVar10 + 0x200b134);
                    local_88 = (float)local_18;
                    local_20 = *(int *)(iVar15 + 0x200b138) - *(int *)(iVar10 + 0x200b138);
                    local_9c = (float)local_20;
                    local_40 = local_88 * local_9c - (float)local_1c * local_a8;
                    local_44 = (float)iVar9 * local_a8 - (float)local_24 * local_9c;
                    local_3c = (float)local_24 * (float)local_1c - local_a4 * local_88;
                    local_90 = local_3c * local_3c + local_44 * local_44 + local_40 * local_40;
                    local_8c = (float)((int)CVector3f_01c70708.z - ((int)local_90 >> 1));
                    fVar2 = local_8c * (float)65535;
                    puVar11 = puVar11 + 9;
                    iVar6 = iVar6 + 1;
                    *pfVar16 = local_40 * fVar2;
                    pfVar16[1] = local_44 * fVar2;
                    pfVar16[2] = local_3c * fVar2;
                    pfVar16 = pfVar16 + 3;
                  } while (iVar6 < tri_count);
                }
                memset(&DAT_02045ab0,0,vertex_count * 0xc);
                iVar6 = 0;
                if (0 < tri_count) {
                  pfVar16 = (float *)&DAT_01fff5b0;
                  do {
                    iVar9 = (uint)*(ushort *)face_data * 0xc;
                    *(float *)(&DAT_02045ab0 + iVar9) = *pfVar16 + *(float *)(&DAT_02045ab0 + iVar9)
                    ;
                    *(float *)(&DAT_02045ab4 + iVar9) =
                         pfVar16[1] + *(float *)(&DAT_02045ab4 + iVar9);
                    *(float *)(&DAT_02045ab8 + iVar9) =
                         pfVar16[2] + *(float *)(&DAT_02045ab8 + iVar9);
                    iVar9 = (uint)*(ushort *)((int)face_data + 2) * 0xc;
                    *(float *)(&DAT_02045ab0 + iVar9) = *pfVar16 + *(float *)(&DAT_02045ab0 + iVar9)
                    ;
                    *(float *)(&DAT_02045ab4 + iVar9) =
                         pfVar16[1] + *(float *)(&DAT_02045ab4 + iVar9);
                    *(float *)(&DAT_02045ab8 + iVar9) =
                         pfVar16[2] + *(float *)(&DAT_02045ab8 + iVar9);
                    iVar9 = (uint)*(ushort *)((int)face_data + 4) * 0xc;
                    face_data = (void *)((int)face_data + 0x12);
                    *(float *)(&DAT_02045ab0 + iVar9) = *pfVar16 + *(float *)(&DAT_02045ab0 + iVar9)
                    ;
                    *(float *)(&DAT_02045ab4 + iVar9) =
                         pfVar16[1] + *(float *)(&DAT_02045ab4 + iVar9);
                    iVar6 = iVar6 + 1;
                    *(float *)(&DAT_02045ab8 + iVar9) =
                         pfVar16[2] + *(float *)(&DAT_02045ab8 + iVar9);
                    pfVar16 = pfVar16 + 3;
                  } while (iVar6 < tri_count);
                }
              }
              else {
                iVar6 = 0;
                pvVar8 = face_data;
                if (0 < tri_count) {
                  do {
                    iVar7 = *(int *)((int)pvVar8 + 0x24) * 0xc;
                    iVar9 = *(int *)((int)pvVar8 + 0x18) * 0xc;
                    local_20 = *(int *)(iVar7 + 0x200b130) - *(int *)(iVar9 + 0x200b130);
                    local_1c = *(int *)(iVar7 + 0x200b134) - *(int *)(iVar9 + 0x200b134);
                    iVar10 = *(int *)((int)pvVar8 + 0x30) * 0xc;
                    iVar15 = *(int *)(iVar10 + 0x200b130) - *(int *)(iVar7 + 0x200b130);
                    fVar3 = (float)(*(int *)(iVar7 + 0x200b138) - *(int *)(iVar9 + 0x200b138));
                    local_c4 = (float)iVar15;
                    local_18 = *(int *)(iVar10 + 0x200b134) - *(int *)(iVar7 + 0x200b134);
                    local_bc = (float)(*(int *)(iVar10 + 0x200b138) - *(int *)(iVar7 + 0x200b138));
                    local_c0 = (float)local_18;
                    fVar2 = (float)local_1c * local_bc - local_c0 * fVar3;
                    fVar5 = (float)iVar15 * fVar3 - (float)local_20 * local_bc;
                    fVar4 = (float)local_20 * local_c0 - local_c4 * (float)local_1c;
                    local_2c = fVar4 * fVar4 + fVar5 * fVar5 + fVar2 * fVar2;
                    local_28 = (float)((int)CVector3f_01c70708.z - ((int)local_2c >> 1));
                    fVar3 = local_28 * (float)65535;
                    *(float *)((int)pvVar8 + 8) = fVar2 * fVar3;
                    *(float *)((int)pvVar8 + 0xc) = fVar5 * fVar3;
                    *(float *)((int)pvVar8 + 0x10) = fVar4 * fVar3;
                    if (vertices_per_face == 4) {
                      pvVar8 = (void *)((int)pvVar8 + 0x48);
                    }
                    else {
                      pvVar8 = (void *)((int)pvVar8 + 0x3c);
                    }
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < tri_count);
                }
                memset(&DAT_02045ab0,0,vertex_count * 0xc);
                iVar6 = 0;
                if (0 < tri_count) {
                  do {
                    iVar9 = *(int *)((int)face_data + 0x18) * 0xc;
                    pfVar16 = (float *)((int)face_data + 8);
                    *(float *)(&DAT_02045ab0 + iVar9) = *pfVar16 + *(float *)(&DAT_02045ab0 + iVar9)
                    ;
                    *(float *)(&DAT_02045ab4 + iVar9) =
                         *(float *)((int)face_data + 0xc) + *(float *)(&DAT_02045ab4 + iVar9);
                    *(float *)(&DAT_02045ab8 + iVar9) =
                         *(float *)((int)face_data + 0x10) + *(float *)(&DAT_02045ab8 + iVar9);
                    iVar9 = *(int *)((int)face_data + 0x24) * 0xc;
                    *(float *)(&DAT_02045ab0 + iVar9) = *pfVar16 + *(float *)(&DAT_02045ab0 + iVar9)
                    ;
                    *(float *)(&DAT_02045ab4 + iVar9) =
                         *(float *)((int)face_data + 0xc) + *(float *)(&DAT_02045ab4 + iVar9);
                    *(float *)(&DAT_02045ab8 + iVar9) =
                         *(float *)((int)face_data + 0x10) + *(float *)(&DAT_02045ab8 + iVar9);
                    iVar9 = *(int *)((int)face_data + 0x30) * 0xc;
                    *(float *)(&DAT_02045ab0 + iVar9) = *pfVar16 + *(float *)(&DAT_02045ab0 + iVar9)
                    ;
                    *(float *)(&DAT_02045ab4 + iVar9) =
                         *(float *)((int)face_data + 0xc) + *(float *)(&DAT_02045ab4 + iVar9);
                    *(float *)(&DAT_02045ab8 + iVar9) =
                         *(float *)((int)face_data + 0x10) + *(float *)(&DAT_02045ab8 + iVar9);
                    if (*(int *)((int)face_data + 4) == 4) {
                      iVar9 = *(int *)((int)face_data + 0x3c) * 0xc;
                      *(float *)(&DAT_02045ab0 + iVar9) =
                           *pfVar16 + *(float *)(&DAT_02045ab0 + iVar9);
                      *(float *)(&DAT_02045ab4 + iVar9) =
                           *(float *)((int)face_data + 0xc) + *(float *)(&DAT_02045ab4 + iVar9);
                      *(float *)(&DAT_02045ab8 + iVar9) =
                           *(float *)((int)face_data + 0x10) + *(float *)(&DAT_02045ab8 + iVar9);
                    }
                    if (vertices_per_face == 4) {
                      face_data = (void *)((int)face_data + 0x48);
                    }
                    else {
                      face_data = (void *)((int)face_data + 0x3c);
                    }
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < tri_count);
                }
              }
              if (this_ptr->renderable_actors[0x76b] == (CDemonActor *)0x0) {
                if (0 < vertex_count) {
                  pfVar16 = (float *)&DAT_02045ab0;
                  local_54 = (CVector3i *)0x200b130;
                  iVar6 = 0;
                  local_4c = 0;
                  do {
                    pCVar13 = local_54;
                    local_74 = pfVar16[2] * pfVar16[2] +
                               *pfVar16 * *pfVar16 + pfVar16[1] * pfVar16[1];
                    local_70 = (float)((int)CVector3f_01c70708.z - ((int)local_74 >> 1));
                    fVar2 = local_70 * (float)65535;
                    *pfVar16 = *pfVar16 * fVar2;
                    pfVar16[1] = pfVar16[1] * fVar2;
                    pfVar16[2] = pfVar16[2] * fVar2;
                    local_128.x = (int)ROUND(*pfVar16);
                    local_128.y = (int)ROUND(pfVar16[1]);
                    local_128.z = (int)ROUND(pfVar16[2]);
                    pfVar16 = pfVar16 + 3;
                    iVar9 = iVar6 + 1;
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                              (this_ptr,local_54,&local_128,iVar6,0);
                    local_54 = pCVar13 + 1;
                    *(uint *)((int)&DAT_005c5040 + local_4c) = _DAT_01c038f4;
                    iVar6 = iVar9;
                    local_4c = local_4c + 0x30;
                  } while (iVar9 < vertex_count);
                  return;
                }
              }
              else {
                local_30 = 0;
                if (0 < vertex_count) {
                  pfVar16 = (float *)&DAT_02045ab0;
                  local_60 = 0;
                  local_50 = (CVector3i *)0x200b130;
                  do {
                    if (((1.0 <= ABS(*pfVar16)) || (1.0 <= ABS(pfVar16[1]))) ||
                       (1.0 <= ABS(pfVar16[2]))) {
                      local_80 = pfVar16[2] * pfVar16[2] +
                                 *pfVar16 * *pfVar16 + pfVar16[1] * pfVar16[1];
                      local_7c = (float)((int)CVector3f_01c70708.z - ((int)local_80 >> 1));
                      fVar2 = local_7c * (float)65535;
                      *pfVar16 = *pfVar16 * fVar2;
                      pfVar16[1] = pfVar16[1] * fVar2;
                      pfVar16[2] = pfVar16[2] * fVar2;
                      local_14c.x = (int)ROUND(*pfVar16);
                      local_14c.y = (int)ROUND(pfVar16[1]);
                      local_14c.z = (int)ROUND(pfVar16[2]);
                      pCVar13 = &local_14c;
                      world_position = local_50;
                    }
                    else {
                      pCVar13 = (CVector3i *)0x0;
                      world_position = (CVector3i *)(local_30 * 0xc + 0x200b130);
                    }
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                              (this_ptr,world_position,pCVar13,local_30,0);
                    pfVar16 = pfVar16 + 3;
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
            if (this_ptr->renderable_actors[0x766] == (CDemonActor *)0x0) {
              if (0 < vertex_count) {
                local_5c = 0;
                iVar9 = 0;
                local_6c = iVar6;
                do {
                  local_110 = *(uint *)((int)&DAT_005c5014 + iVar9);
                  local_10c = *(uint *)((int)&DAT_005c5018 + iVar9);
                  local_108 = *(uint *)((int)&DAT_005c501c + iVar9);
                  core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440
                            (&DAT_01fb8508,&local_110);
                  iVar9 = iVar9 + 0x30;
                  piVar14 = (int *)(local_5c + 0x200b134 + (uint)bVar17 * -8);
                  *(int *)(local_5c + 0x200b130) = aiStack_100[2];
                  *piVar14 = aiStack_100[(uint)bVar17 * -2 + 3];
                  piVar14[(uint)bVar17 * -2 + 1] =
                       aiStack_100[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
                  local_5c = local_5c + 0xc;
                } while (iVar9 < local_6c);
              }
              iVar6 = 0;
              if (0 < vertex_count) {
                local_48 = vertex_normals;
                do {
                  core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10
                            ((CDemonCamera *)&DAT_01fb8508,local_48,&local_170);
                  local_48 = local_48 + 1;
                  *(int *)(&DAT_02045ab0 + iVar6 * 0xc) = local_170.x;
                  *(uint *)(&DAT_02045ab4 + (uint)bVar17 * -8 + iVar6 * 0xc) =
                       *(uint *)((int)&local_170 + (uint)bVar17 * -8 + 4);
                  *(uint *)
                   ((int)(&DAT_02045ab4 + (uint)bVar17 * -8 + iVar6 * 0xc) +
                   ((uint)bVar17 * -2 + 1) * 4) =
                       *(uint *)((int)&local_170 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
                  iVar6 = iVar6 + 1;
                } while (iVar6 < vertex_count);
              }
            }
            else {
              iVar6 = 0;
              if (0 < vertex_count) {
                do {
                  puVar12 = (uint *)((int)vertex_normals + (uint)bVar17 * -8 + 4);
                  *(int *)(&DAT_02045ab0 + iVar6 * 0xc) = vertex_normals->x;
                  *(uint *)(&DAT_02045ab4 + (uint)bVar17 * -8 + iVar6 * 0xc) = *puVar12;
                  *(uint *)
                   ((int)(&DAT_02045ab4 + (uint)bVar17 * -8 + iVar6 * 0xc) +
                   ((uint)bVar17 * -2 + 1) * 4) = puVar12[(uint)bVar17 * -2 + 1];
                  iVar6 = iVar6 + 1;
                  vertex_normals = vertex_normals + 1;
                } while (iVar6 < vertex_count);
              }
            }
            if (0 < vertex_count) {
              pCVar13 = (CVector3i *)&DAT_02045ab0;
              local_64 = (CVector3i *)0x200b130;
              iVar6 = 0;
              iVar9 = 0;
              do {
                iVar7 = iVar6 + 1;
                core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                          (this_ptr,local_64,pCVar13,iVar6,0);
                *(uint *)((int)&DAT_005c5040 + iVar9) = _DAT_01c038f4;
                pCVar13 = pCVar13 + 1;
                local_64 = local_64 + 1;
                iVar6 = iVar7;
                iVar9 = iVar9 + 0x30;
              } while (iVar7 < vertex_count);
              return;
            }
          }
        }
        else if (0 < vertex_count) {
          local_38 = 0;
          iVar6 = 0;
          do {
            local_164 = *(uint *)((int)&DAT_005c5014 + iVar6);
            local_160 = *(uint *)((int)&DAT_005c5018 + iVar6);
            local_15c = *(uint *)((int)&DAT_005c501c + iVar6);
            core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440
                      (&DAT_01fb8508,&local_164);
            local_ec.x = local_104;
            *(int *)((int)local_e0 + (uint)bVar17 * -8 + -8) = aiStack_100[(uint)bVar17 * -2];
            iVar9 = local_38;
            *(int *)((int)local_e0 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + -4) =
                 aiStack_100[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
            core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                      (this_ptr,&local_ec,(CVector3i *)0x0,local_38,0);
            *(uint *)((int)&DAT_005c5040 + iVar6) = _DAT_01c038f4;
            local_38 = iVar9 + 1;
            iVar6 = iVar6 + 0x30;
          } while (local_38 < vertex_count);
          return;
        }
      }
      else if (0 < vertex_count) {
        iVar9 = 0;
        do {
          *(CDemonActor **)((int)&DAT_005c5034 + iVar9) = this_ptr->sorted_render_actors[0x6e3];
          *(CDemonActor **)((int)&DAT_005c5038 + iVar9) = this_ptr->sorted_render_actors[0x6e4];
          iVar7 = iVar9 + 0x30;
          *(CDemonActor **)((int)&DAT_005c503c + iVar9) = this_ptr->sorted_render_actors[0x6e5];
          iVar9 = iVar7;
        } while (iVar7 < iVar6);
        return;
      }
    }
    else {
      if (_DAT_01ffb060 == 0) {
        if (pCVar1 == (CDemonActor *)0x2) {
          iVar6 = 0;
          if (0 < vertex_count) {
            iVar9 = 0;
            do {
              *(uint *)((int)&DAT_005c5040 + iVar9) = 0;
              core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                        (this_ptr,vertex_positions,(CVector3i *)0x0,iVar6,1);
              iVar6 = iVar6 + 1;
              vertex_positions = vertex_positions + 1;
              iVar9 = iVar9 + 0x30;
            } while (iVar6 < vertex_count);
          }
        }
        else if (pCVar1 == (CDemonActor *)0x3) {
          if (0 < vertex_count) {
            iVar9 = 0;
            do {
              *(CDemonActor **)((int)&DAT_005c5034 + iVar9) = this_ptr->renderable_actors[0x76c];
              *(CDemonActor **)((int)&DAT_005c5038 + iVar9) = this_ptr->renderable_actors[0x76d];
              iVar7 = iVar9 + 0x30;
              *(CDemonActor **)((int)&DAT_005c503c + iVar9) = this_ptr->renderable_actors[0x76e];
              *(uint *)((int)&DAT_005c5040 + iVar9) = 0;
              iVar9 = iVar7;
            } while (iVar7 < iVar6);
            _DAT_01c038f4 = 0;
            return;
          }
        }
        else if (0 < vertex_count) {
          iVar9 = 0;
          do {
            iVar7 = iVar9 + 0x30;
            *(uint *)((int)&DAT_005c5034 + iVar9) = 0xffff;
            *(uint *)((int)&DAT_005c5038 + iVar9) = 0xffff;
            *(uint *)((int)&DAT_005c503c + iVar9) = 0xffff;
            *(uint *)((int)&DAT_005c5040 + iVar9) = 0;
            iVar9 = iVar7;
          } while (iVar7 < iVar6);
          _DAT_01c038f4 = 0;
          return;
        }
        _DAT_01c038f4 = 0;
        return;
      }
      if (0 < vertex_count) {
        iVar9 = 0;
        do {
          iVar7 = iVar9 + 0x30;
          *(uint *)((int)&DAT_005c5034 + iVar9) = 0;
          *(uint *)((int)&DAT_005c5038 + iVar9) = 0;
          *(uint *)((int)&DAT_005c503c + iVar9) = 0;
          *(uint *)((int)&DAT_005c5040 + iVar9) = 0;
          iVar9 = iVar7;
        } while (iVar7 < iVar6);
      }
      _DAT_01c038f4 = 0;
    }
  }
  return;
}
