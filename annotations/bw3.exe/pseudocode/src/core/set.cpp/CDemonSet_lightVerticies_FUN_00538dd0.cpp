// Name: core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0
// Address: 00538dd0
// Address Range: [[00538dd0, 00539c47]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_00538dd0(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_00538dd0(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  CVector3i *pCVar13;
  float *pfVar14;
  uint *puVar15;
  uint *puVar16;
  byte bVar17;
  int aiStackY_1160 [1013];
  CVector3i *pCVar18;
  uint local_178;
  uint local_16c;
  uint auStack_168 [4];
  uint local_158;
  uint local_154;
  uint auStack_150 [5];
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint auStack_12c [5];
  uint local_118;
  uint local_114;
  uint local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc [4];
  uint local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
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
  float *local_38;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar17 = 0;
  if (25000 < vertex_count) {
    _DAT_01d71de0 = "..\\core\\set.cpp";
    _DAT_01d71de4 = 0xefd;
    core_main_c_FUN_004e4330("CDemonSet::lightVerticies - tried to light %d vertices, but GLOBAL_VERTEX_COUNT = %d",vertex_count,25000);
  }
  iVar5 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar5 == 0) {
    iVar5 = vertex_count * 0x30;
    if (*(int *)&this_ptr->field_0x15ac90 == 0) {
      if (*(int *)&this_ptr->field_0x161670 == 0) {
        if (*(int *)&this_ptr->field_0x15ac98 == 0) {
          if (vertex_normals == (CVector3i *)0x0) {
            if (tri_count == 0) {
              if (0 < vertex_count) {
                local_40 = 0;
                iVar5 = 0;
                do {
                  local_13c = *(uint *)((int)&DAT_0060b014 + iVar5);
                  local_138 = *(uint *)((int)&DAT_0060b018 + iVar5);
                  local_134 = *(uint *)((int)&DAT_0060b01c + iVar5);
                  core_set_cpp_transformToWorldSpace_FUN_00538ba0(auStack_150 + 5);
                  local_154 = auStack_150[2];
                  auStack_150[(uint)bVar17 * -2] = auStack_150[(uint)bVar17 * -2 + 3];
                  iVar8 = local_40;
                  auStack_150[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                       auStack_150[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
                  core_set_cpp_CDemonSet_lightVertexColor_FUN_005380a0
                            (this_ptr,(CVector3i *)&local_154,(CVector3i *)0x0,local_40,0);
                  local_40 = iVar8 + 1;
                  *(uint *)((int)&DAT_0060b040 + iVar5) = _DAT_01c6e24c;
                  iVar5 = iVar5 + 0x30;
                } while (local_40 < vertex_count);
                return;
              }
            }
            else {
              if (0 < vertex_count) {
                local_5c = 0;
                iVar8 = 0;
                local_6c = iVar5;
                do {
                  local_118 = *(uint *)((int)&DAT_0060b014 + iVar8);
                  local_114 = *(uint *)((int)&DAT_0060b018 + iVar8);
                  local_110 = *(uint *)((int)&DAT_0060b01c + iVar8);
                  core_set_cpp_transformToWorldSpace_FUN_00538ba0(auStack_12c + 5);
                  iVar5 = local_5c;
                  iVar8 = iVar8 + 0x30;
                  puVar15 = (uint *)(local_5c + 0x208bb90);
                  local_5c = local_5c + 0xc;
                  puVar16 = (uint *)(iVar5 + 0x208bb94 + (uint)bVar17 * -8);
                  *puVar15 = local_130;
                  *puVar16 = auStack_12c[(uint)bVar17 * -2];
                  puVar16[(uint)bVar17 * -2 + 1] =
                       auStack_12c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
                } while (iVar8 < local_6c);
              }
              if (vertices_per_face < 1) {
                if (4000 < tri_count) {
                  _DAT_01d71de0 = "..\\core\\set.cpp";
                  _DAT_01d71de4 = 0xfc4;
                  core_main_c_FUN_004e4330("Too many normals on this packed tri list");
                  _DAT_01d71de0 = "..\\core\\set.cpp";
                  _DAT_01d71de4 = 0xfc6;
                  core_main_c_FUN_004e4330("Need more normals for packed models");
                }
                iVar5 = 0;
                if (0 < tri_count) {
                  pfVar14 = (float *)&DAT_02080010;
                  puVar12 = face_data;
                  do {
                    iVar9 = (uint)*puVar12 * 0xc;
                    local_94 = (uint)puVar12[2];
                    iVar6 = (uint)puVar12[1] * 0xc;
                    local_24 = *(int *)(iVar6 + 0x208bb90) - *(int *)(iVar9 + 0x208bb90);
                    local_18 = *(int *)(iVar6 + 0x208bb94) - *(int *)(iVar9 + 0x208bb94);
                    iVar10 = local_94 * 0xc;
                    iVar8 = *(int *)(iVar10 + 0x208bb90) - *(int *)(iVar6 + 0x208bb90);
                    local_a8 = (float)(*(int *)(iVar6 + 0x208bb98) - *(int *)(iVar9 + 0x208bb98));
                    local_a4 = (float)iVar8;
                    local_1c = *(int *)(iVar10 + 0x208bb94) - *(int *)(iVar6 + 0x208bb94);
                    local_ac = (float)local_18;
                    local_20 = *(int *)(iVar10 + 0x208bb98) - *(int *)(iVar6 + 0x208bb98);
                    local_9c = (float)local_20;
                    local_44 = local_ac * local_9c - (float)local_1c * local_a8;
                    local_48 = (float)iVar8 * local_a8 - (float)local_24 * local_9c;
                    local_4c = (float)local_24 * (float)local_1c - local_a4 * local_ac;
                    local_90 = local_4c * local_4c + local_48 * local_48 + local_44 * local_44;
                    local_8c = (float)(_DAT_01d1a0a8 - ((int)local_90 >> 1));
                    fVar1 = local_8c * (float)_DAT_005d07f7;
                    puVar12 = puVar12 + 9;
                    iVar5 = iVar5 + 1;
                    *pfVar14 = local_44 * fVar1;
                    pfVar14[1] = local_48 * fVar1;
                    pfVar14[2] = local_4c * fVar1;
                    pfVar14 = pfVar14 + 3;
                  } while (iVar5 < tri_count);
                }
                memset(&DAT_020d4f70,0,vertex_count * 0xc);
                iVar5 = 0;
                if (0 < tri_count) {
                  pfVar14 = (float *)&DAT_02080010;
                  do {
                    iVar8 = (uint)*(ushort *)face_data * 0xc;
                    *(float *)(&DAT_020d4f70 + iVar8) = *pfVar14 + *(float *)(&DAT_020d4f70 + iVar8)
                    ;
                    *(float *)(&DAT_020d4f74 + iVar8) =
                         pfVar14[1] + *(float *)(&DAT_020d4f74 + iVar8);
                    *(float *)(&DAT_020d4f78 + iVar8) =
                         pfVar14[2] + *(float *)(&DAT_020d4f78 + iVar8);
                    iVar8 = (uint)*(ushort *)((int)face_data + 2) * 0xc;
                    *(float *)(&DAT_020d4f70 + iVar8) = *pfVar14 + *(float *)(&DAT_020d4f70 + iVar8)
                    ;
                    *(float *)(&DAT_020d4f74 + iVar8) =
                         pfVar14[1] + *(float *)(&DAT_020d4f74 + iVar8);
                    *(float *)(&DAT_020d4f78 + iVar8) =
                         pfVar14[2] + *(float *)(&DAT_020d4f78 + iVar8);
                    iVar8 = (uint)*(ushort *)((int)face_data + 4) * 0xc;
                    face_data = (void *)((int)face_data + 0x12);
                    *(float *)(&DAT_020d4f70 + iVar8) = *pfVar14 + *(float *)(&DAT_020d4f70 + iVar8)
                    ;
                    *(float *)(&DAT_020d4f74 + iVar8) =
                         pfVar14[1] + *(float *)(&DAT_020d4f74 + iVar8);
                    iVar5 = iVar5 + 1;
                    *(float *)(&DAT_020d4f78 + iVar8) =
                         pfVar14[2] + *(float *)(&DAT_020d4f78 + iVar8);
                    pfVar14 = pfVar14 + 3;
                  } while (iVar5 < tri_count);
                }
              }
              else {
                iVar5 = 0;
                pvVar7 = face_data;
                if (0 < tri_count) {
                  do {
                    iVar8 = *(int *)((int)pvVar7 + 0x24) * 0xc;
                    iVar9 = *(int *)((int)pvVar7 + 0x18) * 0xc;
                    local_20 = *(int *)(iVar8 + 0x208bb90) - *(int *)(iVar9 + 0x208bb90);
                    iVar10 = *(int *)(iVar8 + 0x208bb94) - *(int *)(iVar9 + 0x208bb94);
                    iVar11 = *(int *)((int)pvVar7 + 0x30) * 0xc;
                    iVar6 = *(int *)(iVar11 + 0x208bb90) - *(int *)(iVar8 + 0x208bb90);
                    fVar2 = (float)(*(int *)(iVar8 + 0x208bb98) - *(int *)(iVar9 + 0x208bb98));
                    local_c4 = (float)iVar6;
                    local_1c = *(int *)(iVar11 + 0x208bb94) - *(int *)(iVar8 + 0x208bb94);
                    local_18 = *(int *)(iVar11 + 0x208bb98) - *(int *)(iVar8 + 0x208bb98);
                    local_cc = (float)iVar10;
                    local_bc = (float)local_18;
                    fVar1 = (float)iVar10 * local_bc - (float)local_1c * fVar2;
                    fVar4 = (float)iVar6 * fVar2 - (float)local_20 * local_bc;
                    fVar3 = (float)local_20 * (float)local_1c - local_c4 * local_cc;
                    local_b8 = fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1;
                    local_b4 = (float)(_DAT_01d1a0a8 - ((int)local_b8 >> 1));
                    fVar2 = local_b4 * (float)_DAT_005d07f7;
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
                memset(&DAT_020d4f70,0,vertex_count * 0xc);
                iVar5 = 0;
                if (0 < tri_count) {
                  do {
                    iVar8 = *(int *)((int)face_data + 0x18) * 0xc;
                    pfVar14 = (float *)((int)face_data + 8);
                    *(float *)(&DAT_020d4f70 + iVar8) = *pfVar14 + *(float *)(&DAT_020d4f70 + iVar8)
                    ;
                    *(float *)(&DAT_020d4f74 + iVar8) =
                         *(float *)((int)face_data + 0xc) + *(float *)(&DAT_020d4f74 + iVar8);
                    *(float *)(&DAT_020d4f78 + iVar8) =
                         *(float *)((int)face_data + 0x10) + *(float *)(&DAT_020d4f78 + iVar8);
                    iVar8 = *(int *)((int)face_data + 0x24) * 0xc;
                    *(float *)(&DAT_020d4f70 + iVar8) = *pfVar14 + *(float *)(&DAT_020d4f70 + iVar8)
                    ;
                    *(float *)(&DAT_020d4f74 + iVar8) =
                         *(float *)((int)face_data + 0xc) + *(float *)(&DAT_020d4f74 + iVar8);
                    *(float *)(&DAT_020d4f78 + iVar8) =
                         *(float *)((int)face_data + 0x10) + *(float *)(&DAT_020d4f78 + iVar8);
                    iVar8 = *(int *)((int)face_data + 0x30) * 0xc;
                    *(float *)(&DAT_020d4f70 + iVar8) = *pfVar14 + *(float *)(&DAT_020d4f70 + iVar8)
                    ;
                    *(float *)(&DAT_020d4f74 + iVar8) =
                         *(float *)((int)face_data + 0xc) + *(float *)(&DAT_020d4f74 + iVar8);
                    *(float *)(&DAT_020d4f78 + iVar8) =
                         *(float *)((int)face_data + 0x10) + *(float *)(&DAT_020d4f78 + iVar8);
                    if (*(int *)((int)face_data + 4) == 4) {
                      iVar8 = *(int *)((int)face_data + 0x3c) * 0xc;
                      *(float *)(&DAT_020d4f70 + iVar8) =
                           *pfVar14 + *(float *)(&DAT_020d4f70 + iVar8);
                      *(float *)(&DAT_020d4f74 + iVar8) =
                           *(float *)((int)face_data + 0xc) + *(float *)(&DAT_020d4f74 + iVar8);
                      *(float *)(&DAT_020d4f78 + iVar8) =
                           *(float *)((int)face_data + 0x10) + *(float *)(&DAT_020d4f78 + iVar8);
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
              if (*(int *)&this_ptr->field_0x15ae98 == 0) {
                if (0 < vertex_count) {
                  local_54 = (CVector3i *)0x208bb90;
                  pfVar14 = (float *)&DAT_020d4f70;
                  iVar5 = 0;
                  local_58 = 0;
                  do {
                    local_78 = pfVar14[2] * pfVar14[2] +
                               *pfVar14 * *pfVar14 + pfVar14[1] * pfVar14[1];
                    local_74 = (float)(_DAT_01d1a0a8 - ((int)local_78 >> 1));
                    fVar1 = local_74 * _DAT_005d07ff;
                    *pfVar14 = *pfVar14 * fVar1;
                    pfVar14[1] = pfVar14[1] * fVar1;
                    pfVar14[2] = pfVar14[2] * fVar1;
                    local_10c = (int)ROUND(*pfVar14);
                    local_108 = (int)ROUND(pfVar14[1]);
                    local_104 = (int)ROUND(pfVar14[2]);
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_005380a0
                              (this_ptr,local_54,(CVector3i *)&local_10c,iVar5,0);
                    pfVar14 = pfVar14 + 3;
                    *(uint *)((int)&DAT_0060b040 + local_58) = _DAT_01c6e24c;
                    local_58 = local_58 + 0x30;
                    iVar5 = iVar5 + 1;
                    local_54 = local_54 + 0xc;
                  } while (iVar5 < vertex_count);
                  return;
                }
              }
              else {
                iVar5 = 0;
                if (0 < vertex_count) {
                  local_60 = 0;
                  local_38 = (float *)&DAT_020d4f70;
                  local_68 = (CVector3i *)0x208bb90;
                  do {
                    if (((1.0 <= ABS(*local_38)) || (1.0 <= ABS(local_38[1]))) ||
                       (1.0 <= ABS(local_38[2]))) {
                      local_84 = local_38[2] * local_38[2] +
                                 *local_38 * *local_38 + local_38[1] * local_38[1];
                      local_80 = (float)(_DAT_01d1a0a8 - ((int)local_84 >> 1));
                      fVar1 = local_80 * _DAT_005d07ff;
                      *local_38 = *local_38 * fVar1;
                      local_38[1] = local_38[1] * fVar1;
                      local_38[2] = local_38[2] * fVar1;
                      local_e8 = (int)ROUND(*local_38);
                      local_e4 = (int)ROUND(local_38[1]);
                      local_e0 = (int)ROUND(local_38[2]);
                      pCVar18 = (CVector3i *)&local_e8;
                      pCVar13 = local_68;
                    }
                    else {
                      pCVar18 = (CVector3i *)0x0;
                      pCVar13 = (CVector3i *)(iVar5 * 0xc + 0x208bb90);
                    }
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_005380a0
                              (this_ptr,pCVar13,pCVar18,iVar5,0);
                    iVar5 = iVar5 + 1;
                    *(uint *)((int)&DAT_0060b040 + local_60) = _DAT_01c6e24c;
                    local_38 = local_38 + 3;
                    local_68 = local_68 + 0xc;
                    local_60 = local_60 + 0x30;
                  } while (iVar5 < vertex_count);
                }
              }
            }
          }
          else {
            if (*(int *)&this_ptr->field_0x15ae84 == 0) {
              if (0 < vertex_count) {
                local_50 = 0;
                iVar8 = 0;
                local_70 = iVar5;
                do {
                  auStack_168[2] = *(uint *)((int)&DAT_0060b014 + iVar8);
                  auStack_168[3] = *(uint *)((int)&DAT_0060b018 + iVar8);
                  local_158 = *(uint *)((int)&DAT_0060b01c + iVar8);
                  core_set_cpp_transformToWorldSpace_FUN_00538ba0(auStack_168 + 2);
                  puVar15 = (uint *)(local_50 + 0x208bb94 + (uint)bVar17 * -8);
                  *(uint *)(local_50 + 0x208bb90) = local_178;
                  *puVar15 = *(uint *)(&stack0xfffffe8c + (uint)bVar17 * -8);
                  puVar15[(uint)bVar17 * -2 + 1] =
                       *(uint *)(&stack0xfffffe90 + (uint)bVar17 * -8 + (uint)bVar17 * -8);
                  iVar8 = iVar8 + 0x30;
                  local_50 = local_50 + 0xc;
                } while (iVar8 < local_70);
              }
              iVar5 = 0;
              if (0 < vertex_count) {
                do {
                  local_dc = ((uint)((longlong)_DAT_01c6e2fc * (longlong)*(int *)vertex_normals) >>
                              0x10 | (int)((ulonglong)
                                           ((longlong)_DAT_01c6e2fc *
                                           (longlong)*(int *)vertex_normals) >> 0x20) << 0x10) +
                             ((uint)((longlong)_DAT_01c6e308 *
                                    (longlong)*(int *)(vertex_normals + 4)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)_DAT_01c6e308 * (longlong)*(int *)(vertex_normals + 4)
                                   ) >> 0x20) << 0x10) +
                             ((uint)((longlong)_DAT_01c6e314 *
                                    (longlong)*(int *)(vertex_normals + 8)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)_DAT_01c6e314 * (longlong)*(int *)(vertex_normals + 8)
                                   ) >> 0x20) << 0x10);
                  local_d8 = ((uint)((longlong)_DAT_01c6e300 * (longlong)*(int *)vertex_normals) >>
                              0x10 | (int)((ulonglong)
                                           ((longlong)_DAT_01c6e300 *
                                           (longlong)*(int *)vertex_normals) >> 0x20) << 0x10) +
                             ((uint)((longlong)_DAT_01c6e30c *
                                    (longlong)*(int *)(vertex_normals + 4)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)_DAT_01c6e30c * (longlong)*(int *)(vertex_normals + 4)
                                   ) >> 0x20) << 0x10) +
                             ((uint)((longlong)_DAT_01c6e318 *
                                    (longlong)*(int *)(vertex_normals + 8)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)_DAT_01c6e318 * (longlong)*(int *)(vertex_normals + 8)
                                   ) >> 0x20) << 0x10);
                  local_d4 = ((uint)((longlong)_DAT_01c6e304 * (longlong)*(int *)vertex_normals) >>
                              0x10 | (int)((ulonglong)
                                           ((longlong)_DAT_01c6e304 *
                                           (longlong)*(int *)vertex_normals) >> 0x20) << 0x10) +
                             ((uint)((longlong)_DAT_01c6e310 *
                                    (longlong)*(int *)(vertex_normals + 4)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)_DAT_01c6e310 * (longlong)*(int *)(vertex_normals + 4)
                                   ) >> 0x20) << 0x10) +
                             ((uint)((longlong)_DAT_01c6e31c *
                                    (longlong)*(int *)(vertex_normals + 8)) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)_DAT_01c6e31c * (longlong)*(int *)(vertex_normals + 8)
                                   ) >> 0x20) << 0x10);
                  local_100 = ((uint)((longlong)_DAT_01d72644 * (longlong)local_dc) >> 0x10 |
                              (int)((ulonglong)((longlong)_DAT_01d72644 * (longlong)local_dc) >>
                                   0x20) << 0x10) +
                              ((uint)((longlong)_DAT_01d72650 * (longlong)local_d8) >> 0x10 |
                              (int)((ulonglong)((longlong)_DAT_01d72650 * (longlong)local_d8) >>
                                   0x20) << 0x10) +
                              ((uint)((longlong)_DAT_01d7265c * (longlong)local_d4) >> 0x10 |
                              (int)((ulonglong)((longlong)_DAT_01d7265c * (longlong)local_d4) >>
                                   0x20) << 0x10);
                  local_fc[0] = ((uint)((longlong)_DAT_01d72648 * (longlong)local_dc) >> 0x10 |
                                (int)((ulonglong)((longlong)_DAT_01d72648 * (longlong)local_dc) >>
                                     0x20) << 0x10) +
                                ((uint)((longlong)_DAT_01d72654 * (longlong)local_d8) >> 0x10 |
                                (int)((ulonglong)((longlong)_DAT_01d72654 * (longlong)local_d8) >>
                                     0x20) << 0x10) +
                                ((uint)((longlong)_DAT_01d72660 * (longlong)local_d4) >> 0x10 |
                                (int)((ulonglong)((longlong)_DAT_01d72660 * (longlong)local_d4) >>
                                     0x20) << 0x10);
                  local_fc[1] = ((uint)((longlong)_DAT_01d7264c * (longlong)local_dc) >> 0x10 |
                                (int)((ulonglong)((longlong)_DAT_01d7264c * (longlong)local_dc) >>
                                     0x20) << 0x10) +
                                ((uint)((longlong)_DAT_01d72658 * (longlong)local_d8) >> 0x10 |
                                (int)((ulonglong)((longlong)_DAT_01d72658 * (longlong)local_d8) >>
                                     0x20) << 0x10) +
                                ((uint)((longlong)_DAT_01d72664 * (longlong)local_d4) >> 0x10 |
                                (int)((ulonglong)((longlong)_DAT_01d72664 * (longlong)local_d4) >>
                                     0x20) << 0x10);
                  *(int *)(&DAT_020d4f70 + iVar5 * 0xc) = local_100;
                  *(int *)(&DAT_020d4f74 + (uint)bVar17 * -8 + iVar5 * 0xc) =
                       local_fc[(uint)bVar17 * -2];
                  *(int *)((int)(&DAT_020d4f74 + (uint)bVar17 * -8 + iVar5 * 0xc) +
                          ((uint)bVar17 * -2 + 1) * 4) =
                       local_fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
                  iVar5 = iVar5 + 1;
                  vertex_normals = vertex_normals + 0xc;
                } while (iVar5 < vertex_count);
              }
            }
            else {
              iVar5 = 0;
              if (0 < vertex_count) {
                do {
                  *(uint *)(&DAT_020d4f70 + iVar5 * 0xc) = *(uint *)vertex_normals;
                  *(uint *)(&DAT_020d4f74 + (uint)bVar17 * -8 + iVar5 * 0xc) =
                       *(uint *)(vertex_normals + (uint)bVar17 * -8 + 4);
                  *(uint *)
                   ((int)(&DAT_020d4f74 + (uint)bVar17 * -8 + iVar5 * 0xc) +
                   ((uint)bVar17 * -2 + 1) * 4) =
                       *(uint *)
                        (vertex_normals + (uint)bVar17 * -8 + 4 + (uint)bVar17 * -8 + 4);
                  iVar5 = iVar5 + 1;
                  vertex_normals = vertex_normals + 0xc;
                } while (iVar5 < vertex_count);
              }
            }
            if (0 < vertex_count) {
              pCVar13 = (CVector3i *)0x208bb90;
              local_64 = 0;
              iVar5 = 0;
              pCVar18 = (CVector3i *)&DAT_020d4f70;
              do {
                iVar8 = iVar5 + 1;
                core_set_cpp_CDemonSet_lightVertexColor_FUN_005380a0
                          (this_ptr,pCVar13,pCVar18,iVar5,0);
                pCVar13 = pCVar13 + 0xc;
                *(uint *)((int)&DAT_0060b040 + local_64) = _DAT_01c6e24c;
                iVar5 = iVar8;
                pCVar18 = pCVar18 + 0xc;
                local_64 = local_64 + 0x30;
              } while (iVar8 < vertex_count);
              return;
            }
          }
        }
        else if (0 < vertex_count) {
          local_3c = 0;
          iVar5 = 0;
          do {
            local_fc[2] = *(uint *)((int)&DAT_0060b014 + iVar5);
            local_fc[3] = *(uint *)((int)&DAT_0060b018 + iVar5);
            local_ec = *(uint *)((int)&DAT_0060b01c + iVar5);
            core_set_cpp_transformToWorldSpace_FUN_00538ba0(local_fc + 2);
            iVar8 = local_3c;
            iVar6 = 0;
            pCVar18 = (CVector3i *)0x0;
            local_16c = auStack_12c[2];
            auStack_168[(uint)bVar17 * -2] = auStack_12c[(uint)bVar17 * -2 + 3];
            auStack_168[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                 auStack_12c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
            core_set_cpp_CDemonSet_lightVertexColor_FUN_005380a0
                      (this_ptr,(CVector3i *)&local_16c,pCVar18,iVar8,iVar6);
            local_3c = local_3c + 1;
            *(uint *)((int)&DAT_0060b040 + iVar5) = _DAT_01c6e24c;
            iVar5 = iVar5 + 0x30;
          } while (local_3c < vertex_count);
          return;
        }
      }
      else if (0 < vertex_count) {
        iVar8 = 0;
        do {
          *(uint *)((int)&DAT_0060b034 + iVar8) = *(uint *)&this_ptr->field_0x161674;
          *(uint *)((int)&DAT_0060b038 + iVar8) = *(uint *)&this_ptr->field_0x161678;
          iVar6 = iVar8 + 0x30;
          *(uint *)((int)&DAT_0060b03c + iVar8) = *(uint *)&this_ptr->field_0x16167c;
          iVar8 = iVar6;
        } while (iVar6 < iVar5);
        return;
      }
    }
    else {
      if (_DAT_0207baa4 == 0) {
        if (*(int *)&this_ptr->field_0x15ac90 == 2) {
          iVar5 = 0;
          if (0 < vertex_count) {
            iVar8 = 0;
            do {
              *(uint *)((int)&DAT_0060b040 + iVar8) = 0;
              core_set_cpp_CDemonSet_lightVertexColor_FUN_005380a0
                        (this_ptr,vertex_positions,(CVector3i *)0x0,iVar5,1);
              iVar5 = iVar5 + 1;
              vertex_positions = vertex_positions + 0xc;
              iVar8 = iVar8 + 0x30;
            } while (iVar5 < vertex_count);
          }
        }
        else if (*(int *)&this_ptr->field_0x15ac90 == 3) {
          if (0 < vertex_count) {
            iVar8 = 0;
            do {
              *(uint *)((int)&DAT_0060b034 + iVar8) = *(uint *)&this_ptr->field_0x15ae9c
              ;
              *(uint *)((int)&DAT_0060b038 + iVar8) = *(uint *)&this_ptr->field_0x15aea0
              ;
              iVar6 = iVar8 + 0x30;
              *(uint *)((int)&DAT_0060b03c + iVar8) = *(uint *)&this_ptr->field_0x15aea4
              ;
              *(uint *)((int)&DAT_0060b040 + iVar8) = 0;
              iVar8 = iVar6;
            } while (iVar6 < iVar5);
            _DAT_01c6e24c = 0;
            return;
          }
        }
        else if (0 < vertex_count) {
          iVar8 = 0;
          do {
            iVar6 = iVar8 + 0x30;
            *(uint *)((int)&DAT_0060b034 + iVar8) = 0xffff;
            *(uint *)((int)&DAT_0060b038 + iVar8) = 0xffff;
            *(uint *)((int)&DAT_0060b03c + iVar8) = 0xffff;
            *(uint *)((int)&DAT_0060b040 + iVar8) = 0;
            iVar8 = iVar6;
          } while (iVar6 < iVar5);
          _DAT_01c6e24c = 0;
          return;
        }
        _DAT_01c6e24c = 0;
        return;
      }
      if (0 < vertex_count) {
        iVar8 = 0;
        do {
          iVar6 = iVar8 + 0x30;
          *(uint *)((int)&DAT_0060b034 + iVar8) = 0;
          *(uint *)((int)&DAT_0060b038 + iVar8) = 0;
          *(uint *)((int)&DAT_0060b03c + iVar8) = 0;
          *(uint *)((int)&DAT_0060b040 + iVar8) = 0;
          iVar8 = iVar6;
        } while (iVar6 < iVar5);
      }
      _DAT_01c6e24c = 0;
    }
  }
  return;
}
