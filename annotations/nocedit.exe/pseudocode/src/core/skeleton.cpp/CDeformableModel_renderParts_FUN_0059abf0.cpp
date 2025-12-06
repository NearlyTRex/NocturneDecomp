// Name: core_skeleton.cpp_CDeformableModel_renderParts_FUN_0059abf0
// Address: 0059abf0
// Address Range: [[0059abf0, 0059b598]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_renderParts_FUN_0059abf0(CDeformableModel * this_ptr, int lod_index, byte * part_visibility_flags, int * texture_set_indices, int render_flags, int special_render_mode)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_renderParts_FUN_0059abf0
          (CDeformableModel *this_ptr,int lod_index,byte *part_visibility_flags,
          int *texture_set_indices,int render_flags,int special_render_mode)

{
  SRenderVertex *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  SRenderVertex *pSVar6;
  int *piVar7;
  SRenderVertex *pSVar8;
  int iVar9;
  int iVar10;
  BADSPACEBASE *in_ESP;
  ushort *puVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  float fVar17;
  CDemonRenderer *in_stack_fffffee0;
  SMRGLHeaderPrimitive local_114;
  uint local_fc;
  uint uStack_f0;
  uint uStack_e4;
  float local_c8;
  byte *local_c4;
  int local_c0;
  byte *local_bc;
  int local_b8;
  int local_b4;
  int *local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  STextureSet *local_9c;
  int local_98;
  int *local_94;
  int *local_90;
  STextureSet *local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_80 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  local_7c = this_ptr->lod_info[lod_index].shadow_only_flag;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  local_a8 = 0;
  local_b4 = 0;
  if (0 < this_ptr->num_parts) {
    local_a4 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_c0 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_8c = this_ptr->texture_sets;
    local_b0 = texture_set_indices;
    local_bc = part_visibility_flags;
    local_a0 = local_a4;
    local_98 = local_a4;
    local_88 = local_a4;
    do {
      iVar12 = local_a8 + *(int *)(local_c0 + 0x7164);
      if ((*local_bc & 1) != 0) {
        if ((local_7c == 0) && (local_78 != 0)) {
          engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
          if (local_a8 < iVar12) {
            local_3c = local_a8 * 0x12;
            local_84 = iVar12 * 0x12;
            do {
              puVar11 = (ushort *)(*(int *)(local_a0 + 0x7c) + local_3c);
              pSVar6 = g_CDemonRendererPtr->vertex_buffer_ptr;
              pSVar8 = pSVar6 + *puVar11;
              pSVar1 = pSVar6 + puVar11[1];
              pSVar6 = pSVar6 + puVar11[2];
              local_28 = (pSVar8->projected_vertex).transformed_x * g_InverseMatrix.m[0].x +
                         (pSVar8->projected_vertex).transformed_y * g_InverseMatrix.m[1].x +
                         (pSVar8->projected_vertex).transformed_z * g_InverseMatrix.m[2].x;
              local_24 = (pSVar8->projected_vertex).transformed_x * g_InverseMatrix.m[0].y +
                         (pSVar8->projected_vertex).transformed_y * g_InverseMatrix.m[1].y +
                         (pSVar8->projected_vertex).transformed_z * g_InverseMatrix.m[2].y;
              local_20 = (pSVar8->projected_vertex).transformed_z * g_InverseMatrix.m[2].z +
                         (pSVar8->projected_vertex).transformed_x * g_InverseMatrix.m[0].z +
                         (pSVar8->projected_vertex).transformed_y * g_InverseMatrix.m[1].z;
              local_1c = (pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2].x +
                         (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0].x +
                         g_InverseMatrix.m[1].x * (pSVar1->projected_vertex).transformed_y;
              local_18 = (pSVar1->projected_vertex).transformed_y * g_InverseMatrix.m[1].y +
                         (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0].y +
                         (pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2].y;
              local_14 = (pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2].z +
                         (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0].z +
                         (pSVar1->projected_vertex).transformed_y * g_InverseMatrix.m[1].z;
              iVar9 = (pSVar6->projected_vertex).transformed_x * g_InverseMatrix.m[0].z;
              iVar10 = (pSVar6->projected_vertex).transformed_z * g_InverseMatrix.m[2].z;
              local_70 = (float)local_20;
              local_4c = (float)local_1c;
              local_48 = local_4c - (float)local_28;
              local_58 = (float)local_18;
              local_50 = local_58 - (float)local_24;
              local_54 = (float)local_14;
              local_74 = (float)((pSVar6->projected_vertex).transformed_z * g_InverseMatrix.m[2].x +
                                (pSVar6->projected_vertex).transformed_x * g_InverseMatrix.m[0].x +
                                (pSVar6->projected_vertex).transformed_y * g_InverseMatrix.m[1].x);
              local_6c = (float)((pSVar6->projected_vertex).transformed_y * g_InverseMatrix.m[1].y +
                                 (pSVar6->projected_vertex).transformed_x * g_InverseMatrix.m[0].y +
                                (pSVar6->projected_vertex).transformed_z * g_InverseMatrix.m[2].y);
              local_68 = (float)((pSVar6->projected_vertex).transformed_y * g_InverseMatrix.m[1].z +
                                 iVar9 + iVar10);
              local_c8 = local_68 - local_54;
              fVar2 = local_50 * local_c8 - (local_6c - local_58) * (local_54 - local_70);
              fVar3 = (local_74 - local_4c) * (local_54 - local_70) - local_48 * local_c8;
              fVar5 = local_48 * (local_6c - local_58) - (local_74 - local_4c) * local_50;
              fVar4 = fVar5 * fVar5 + fVar2 * fVar2 + fVar3 * fVar3;
              if (0.0 < fVar4) {
                fVar17 = (float)127 / SQRT(fVar4);
              }
              else {
                fVar17 = 127.0;
              }
              fVar13 = (float10)fVar17;
              local_2c = (float)((float10)fVar2 * fVar13);
              local_34 = (float)((float10)fVar3 * fVar13);
              local_30 = (float)((float10)fVar5 * fVar13);
              fVar14 = (float10)127f;
              fVar13 = (float10)fVar5 * fVar13 + fVar14;
              fVar15 = (float10)local_34 + fVar14;
              fVar14 = (float10)local_2c + fVar14;
              dVar16 = crt_math_c_round_FUN_005fe6b0
                                 ((double)CONCAT44 /* combine 2-byte values */(iVar9,CONCAT22 /* combine 2-byte values */((short)((uint)iVar10 >> 0x10),
                                                                  (ushort)(0.0 < fVar4) << 8 |
                                                                  (ushort)NAN(fVar4) << 10 |
                                                                  (ushort)(fVar4 == 0.0) << 0xe)));
              crt_math_c_round_FUN_005fe6b0(dVar16);
              local_1c = (int)ROUND(fVar13);
              local_20 = (int)ROUND(fVar15);
              dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(local_20,local_1c));
              local_1c = (int)ROUND(fVar14);
              engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
                        (g_CDemonRendererPtr,local_1c,(int)((ulonglong)dVar16 >> 0x20),
                         (int)in_stack_fffffee0);
              local_114.base.count = 3;
              local_fc = (uint)*puVar11;
              uStack_f0 = (uint)puVar11[1];
              uStack_e4 = (uint)puVar11[2];
              in_stack_fffffee0 = g_CDemonRendererPtr;
              engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                        (g_CDemonRendererPtr,&local_114);
              local_3c = local_3c + 0x12;
            } while (local_3c < local_84);
          }
        }
        else if ((this_ptr->num_textures == 1) ||
                (((local_7c != 0 || (special_render_mode != 0)) || (local_78 != 0)))) {
          if (((local_7c == 0) && (special_render_mode == 0)) && (local_78 == 0)) {
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                      (g_CDemonRendererPtr,(SMRGLTextureBasic *)(local_8c + *local_b0));
          }
          core_set_cpp_CDemonSet_FUN_00570870(g_CDemonSetPtr);
        }
        else {
          local_60 = -1;
          local_38 = local_a8;
          if (local_a8 < iVar12) {
            local_90 = local_b0;
            do {
              iVar10 = local_38 + 1;
              iVar9 = *(int *)(*(int *)(local_a4 + 0x90) + local_38 * 4);
              if (iVar10 < iVar12) {
                piVar7 = (int *)(iVar10 * 4 + *(int *)(local_98 + 0x90));
                do {
                  if (iVar9 != *piVar7) break;
                  iVar10 = iVar10 + 1;
                  piVar7 = piVar7 + 1;
                } while (iVar10 < iVar12);
              }
              if (iVar9 != local_60) {
                engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                          (g_CDemonRendererPtr,local_8c[*local_90].textures[iVar9].texture_variants)
                ;
                local_60 = iVar9;
              }
              core_set_cpp_CDemonSet_FUN_00570870(g_CDemonSetPtr);
              local_38 = iVar10;
            } while (iVar10 < iVar12);
          }
        }
      }
      local_bc = local_bc + 4;
      local_c0 = local_c0 + 0x60;
      local_b0 = local_b0 + 1;
      local_b4 = local_b4 + 1;
      local_a8 = iVar12;
    } while (local_b4 < this_ptr->num_parts);
  }
  local_ac = 0;
  if (0 < this_ptr->num_parts) {
    local_9c = this_ptr->texture_sets;
    local_b8 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_c4 = part_visibility_flags;
    do {
      local_80 = local_a8 + *(int *)(local_b8 + 0x7178);
      local_5c = -1;
      if (((*local_c4 & 1) != 0) && (local_a8 < local_80)) {
        local_94 = texture_set_indices + local_ac;
        local_40 = local_a8 * 0x12;
        local_44 = local_a8 * 4;
        iVar12 = local_a8;
        do {
          local_64 = (int)&(this_ptr->tri_data_ptr[lod_index]->vertex_indices).vertex_index_0 +
                     local_40;
          if ((part_visibility_flags
               [this_ptr->cap_index_ptr[lod_index][iVar12 - this_ptr->tri_count[lod_index]] * 4] & 1
              ) == 0) {
            if ((((local_7c == 0) && (special_render_mode == 0)) && (local_78 == 0)) &&
               (iVar10 = *(int *)((int)this_ptr->index_data_ptr[lod_index] + local_44),
               iVar10 != local_5c)) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr,local_9c[*local_94].textures[iVar10].texture_variants);
              local_60 = iVar10;
            }
            core_set_cpp_CDemonSet_FUN_00570870(g_CDemonSetPtr);
          }
          iVar12 = iVar12 + 1;
          local_40 = local_40 + 0x12;
          local_44 = local_44 + 4;
        } while (iVar12 < local_80);
      }
      local_a8 = local_80;
      local_c4 = local_c4 + 4;
      local_b8 = local_b8 + 0x60;
      local_ac = local_ac + 1;
    } while (local_ac < this_ptr->num_parts);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  return;
}
