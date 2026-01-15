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
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  SRenderVertex *pSVar7;
  int *piVar8;
  SRenderVertex *pSVar9;
  int green_component;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  double dVar17;
  float local_130;
  SMRGLHeaderPrimitive local_12c;
  uint local_114;
  uint local_108;
  uint local_fc;
  float local_d0;
  byte *local_cc;
  int local_c8;
  byte *local_c4;
  int local_c0;
  int local_bc;
  int *local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  STextureSet *local_a4;
  int local_a0;
  int *local_9c;
  int *local_98;
  STextureSet *local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  int local_6c;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_84 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  local_80 = this_ptr->lod_info[lod_index].shadow_only_flag;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  local_b0 = 0;
  local_bc = 0;
  if (0 < this_ptr->num_parts) {
    local_ac = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_c8 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_94 = this_ptr->texture_sets;
    local_b8 = texture_set_indices;
    local_c4 = part_visibility_flags;
    local_a8 = local_ac;
    local_a0 = local_ac;
    local_90 = local_ac;
    do {
      iVar12 = local_b0 + *(int *)(local_c8 + 0x7164);
      if ((*local_c4 & 1) != 0) {
        if ((local_84 == 0) && (local_80 != 0)) {
          engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
          if (local_b0 < iVar12) {
            local_44 = local_b0 * 0x12;
            local_8c = iVar12 * 0x12;
            do {
              puVar11 = (ushort *)(*(int *)(local_a8 + 0x7c) + local_44);
              pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
              pSVar9 = pSVar7 + *puVar11;
              pSVar1 = pSVar7 + puVar11[1];
              pSVar7 = pSVar7 + puVar11[2];
              local_30 = (pSVar9->projected_vertex).transformed_x * g_InverseMatrix.m[0].x +
                         (pSVar9->projected_vertex).transformed_y * g_InverseMatrix.m[1].x +
                         (pSVar9->projected_vertex).transformed_z * g_InverseMatrix.m[2].x;
              local_2c = (pSVar9->projected_vertex).transformed_x * g_InverseMatrix.m[0].y +
                         (pSVar9->projected_vertex).transformed_y * g_InverseMatrix.m[1].y +
                         (pSVar9->projected_vertex).transformed_z * g_InverseMatrix.m[2].y;
              local_28 = (pSVar9->projected_vertex).transformed_z * g_InverseMatrix.m[2].z +
                         (pSVar9->projected_vertex).transformed_x * g_InverseMatrix.m[0].z +
                         (pSVar9->projected_vertex).transformed_y * g_InverseMatrix.m[1].z;
              local_24 = (pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2].x +
                         (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0].x +
                         g_InverseMatrix.m[1].x * (pSVar1->projected_vertex).transformed_y;
              local_20 = (pSVar1->projected_vertex).transformed_y * g_InverseMatrix.m[1].y +
                         (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0].y +
                         (pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2].y;
              local_1c = (pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2].z +
                         (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0].z +
                         (pSVar1->projected_vertex).transformed_y * g_InverseMatrix.m[1].z;
              local_18 = (pSVar7->projected_vertex).transformed_z * g_InverseMatrix.m[2].x +
                         (pSVar7->projected_vertex).transformed_x * g_InverseMatrix.m[0].x +
                         (pSVar7->projected_vertex).transformed_y * g_InverseMatrix.m[1].x;
              local_78 = (float)local_28;
              local_54 = (float)local_24;
              local_50 = local_54 - (float)local_30;
              local_60 = (float)local_20;
              local_58 = local_60 - (float)local_2c;
              local_5c = (float)local_1c;
              local_7c = (float)local_18;
              local_14 = (pSVar7->projected_vertex).transformed_y * g_InverseMatrix.m[1].z +
                         (pSVar7->projected_vertex).transformed_x * g_InverseMatrix.m[0].z +
                         (pSVar7->projected_vertex).transformed_z * g_InverseMatrix.m[2].z;
              local_74 = (float)((pSVar7->projected_vertex).transformed_y * g_InverseMatrix.m[1].y +
                                 (pSVar7->projected_vertex).transformed_x * g_InverseMatrix.m[0].y +
                                (pSVar7->projected_vertex).transformed_z * g_InverseMatrix.m[2].y);
              local_70 = (float)local_14;
              local_d0 = local_70 - local_5c;
              fVar3 = local_58 * local_d0 - (local_74 - local_60) * (local_5c - local_78);
              fVar4 = (local_7c - local_54) * (local_5c - local_78) - local_50 * local_d0;
              fVar6 = local_50 * (local_74 - local_60) - (local_7c - local_54) * local_58;
              fVar5 = fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4;
              if (fVar5 <= 0.0) {
                local_130 = 127.0;
              }
              else {
                local_130 = (float)127 / SQRT(fVar5);
              }
              fVar13 = (float10)local_130;
              local_34 = (float)((float10)fVar3 * fVar13);
              local_3c = (float)((float10)fVar4 * fVar13);
              local_38 = (float)((float10)fVar6 * fVar13);
              fVar14 = (float10)127f;
              fVar15 = (float10)local_3c + fVar14;
              fVar16 = (float10)local_34 + fVar14;
              dVar17 = crt_math_c_round_FUN_005fe6b0((double)((float10)fVar6 * fVar13 + fVar14));
              fVar13 = (float10)dVar17;
              dVar17 = crt_math_c_round_FUN_005fe6b0((double)fVar15);
              local_34 = (float)(int)ROUND(fVar13);
              local_38 = (float)(int)ROUND(dVar17);
              iVar10 = 0x59b330;
              dVar17 = crt_math_c_round_FUN_005fe6b0((double)fVar16);
              local_3c = (float)(int)ROUND(dVar17);
              engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
                        (g_CDemonRendererPtr,(int)local_3c,green_component,iVar10);
              local_12c.base.count = 3;
              local_114 = (uint)*puVar11;
              local_108 = (uint)puVar11[1];
              local_fc = (uint)puVar11[2];
              engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                        (g_CDemonRendererPtr,&local_12c);
              local_44 = local_44 + 0x12;
            } while (local_44 < local_8c);
          }
        }
        else if ((this_ptr->num_textures == 1) ||
                (((local_84 != 0 || (special_render_mode != 0)) || (local_80 != 0)))) {
          if (((local_84 == 0) && (special_render_mode == 0)) && (local_80 == 0)) {
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                      (g_CDemonRendererPtr,(SMRGLTextureBasic *)(local_94 + *local_b8));
          }
          core_set_cpp_CDemonSet_FUN_00570870(g_CDemonSetPtr);
        }
        else {
          local_68 = -1;
          local_40 = local_b0;
          if (local_b0 < iVar12) {
            local_98 = local_b8;
            do {
              iVar10 = local_40 + 1;
              iVar2 = *(int *)(*(int *)(local_ac + 0x90) + local_40 * 4);
              if (iVar10 < iVar12) {
                piVar8 = (int *)(iVar10 * 4 + *(int *)(local_a0 + 0x90));
                do {
                  if (iVar2 != *piVar8) break;
                  iVar10 = iVar10 + 1;
                  piVar8 = piVar8 + 1;
                } while (iVar10 < iVar12);
              }
              if (iVar2 != local_68) {
                engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                          (g_CDemonRendererPtr,local_94[*local_98].textures[iVar2].texture_variants)
                ;
                local_68 = iVar2;
              }
              core_set_cpp_CDemonSet_FUN_00570870(g_CDemonSetPtr);
              local_40 = iVar10;
            } while (iVar10 < iVar12);
          }
        }
      }
      local_c4 = local_c4 + 4;
      local_c8 = local_c8 + 0x60;
      local_b8 = local_b8 + 1;
      local_bc = local_bc + 1;
      local_b0 = iVar12;
    } while (local_bc < this_ptr->num_parts);
  }
  local_b4 = 0;
  if (0 < this_ptr->num_parts) {
    local_a4 = this_ptr->texture_sets;
    local_c0 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_cc = part_visibility_flags;
    do {
      local_88 = local_b0 + *(int *)(local_c0 + 0x7178);
      local_64 = -1;
      if (((*local_cc & 1) != 0) && (local_b0 < local_88)) {
        local_9c = texture_set_indices + local_b4;
        local_48 = local_b0 * 0x12;
        local_4c = local_b0 * 4;
        iVar12 = local_b0;
        do {
          local_6c = (int)&(this_ptr->tri_data_ptr[lod_index]->vertex_indices).vertex_index_0 +
                     local_48;
          if ((part_visibility_flags
               [this_ptr->cap_index_ptr[lod_index][iVar12 - this_ptr->tri_count[lod_index]] * 4] & 1
              ) == 0) {
            if ((((local_84 == 0) && (special_render_mode == 0)) && (local_80 == 0)) &&
               (iVar10 = *(int *)((int)this_ptr->index_data_ptr[lod_index] + local_4c),
               iVar10 != local_64)) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr,local_a4[*local_9c].textures[iVar10].texture_variants);
              local_64 = iVar10;
            }
            core_set_cpp_CDemonSet_FUN_00570870(g_CDemonSetPtr);
          }
          iVar12 = iVar12 + 1;
          local_48 = local_48 + 0x12;
          local_4c = local_4c + 4;
        } while (iVar12 < local_88);
      }
      local_b0 = local_88;
      local_cc = local_cc + 4;
      local_c0 = local_c0 + 0x60;
      local_b4 = local_b4 + 1;
    } while (local_b4 < this_ptr->num_parts);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  return;
}
