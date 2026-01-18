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
  float *pfVar7;
  SRenderVertex *pSVar8;
  int green_component;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  SMRGLHeaderPrimitive local_12c;
  uint local_114;
  uint local_108;
  uint local_fc;
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
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_38;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_84 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  local_80 = this_ptr->lod_info[lod_index].shadow_only_flag;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
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
      iVar11 = local_b0 + *(int *)(local_c8 + 0x7164);
      if ((*local_c4 & 1) != 0) {
        if ((local_84 == 0) && (local_80 != 0)) {
          engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
          if (local_b0 < iVar11) {
            local_8c = iVar11 * 0x12;
            do {
              puVar10 = (ushort *)(local_9c[0x1f] + local_38);
              pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr;
              pSVar8 = pSVar6 + *puVar10;
              pSVar1 = pSVar6 + puVar10[1];
              pSVar6 = pSVar6 + puVar10[2];
              local_24 = (pSVar8->projected_vertex).transformed_x * g_InverseMatrix.m[0].x +
                         (pSVar8->projected_vertex).transformed_y * g_InverseMatrix.m[1].x +
                         (pSVar8->projected_vertex).transformed_z * g_InverseMatrix.m[2].x;
              local_20 = (pSVar8->projected_vertex).transformed_x * g_InverseMatrix.m[0].y +
                         (pSVar8->projected_vertex).transformed_y * g_InverseMatrix.m[1].y +
                         (pSVar8->projected_vertex).transformed_z * g_InverseMatrix.m[2].y;
              local_1c = (pSVar8->projected_vertex).transformed_z * g_InverseMatrix.m[2].z +
                         (pSVar8->projected_vertex).transformed_x * g_InverseMatrix.m[0].z +
                         (pSVar8->projected_vertex).transformed_y * g_InverseMatrix.m[1].z;
              local_18 = (pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2].x +
                         (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0].x +
                         g_InverseMatrix.m[1].x * (pSVar1->projected_vertex).transformed_y;
              local_14 = (pSVar1->projected_vertex).transformed_y * g_InverseMatrix.m[1].y +
                         (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0].y +
                         (pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2].y;
              local_6c = (float)local_1c;
              local_48 = (float)local_18;
              local_44 = local_48 - (float)local_24;
              local_54 = (float)local_14;
              local_4c = local_54 - (float)local_20;
              local_50 = (float)((pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2].z +
                                (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0].z +
                                (pSVar1->projected_vertex).transformed_y * g_InverseMatrix.m[1].z);
              local_70 = (float)((pSVar6->projected_vertex).transformed_z * g_InverseMatrix.m[2].x +
                                (pSVar6->projected_vertex).transformed_x * g_InverseMatrix.m[0].x +
                                (pSVar6->projected_vertex).transformed_y * g_InverseMatrix.m[1].x);
              local_68 = (float)((pSVar6->projected_vertex).transformed_y * g_InverseMatrix.m[1].y +
                                 (pSVar6->projected_vertex).transformed_x * g_InverseMatrix.m[0].y +
                                (pSVar6->projected_vertex).transformed_z * g_InverseMatrix.m[2].y);
              local_64 = (float)((pSVar6->projected_vertex).transformed_y * g_InverseMatrix.m[1].z +
                                 (pSVar6->projected_vertex).transformed_x * g_InverseMatrix.m[0].z +
                                (pSVar6->projected_vertex).transformed_z * g_InverseMatrix.m[2].z);
              local_c4 = (byte *)(local_64 - local_50);
              fVar2 = local_4c * (float)local_c4 - (local_68 - local_54) * (local_50 - local_6c);
              fVar3 = (local_70 - local_48) * (local_50 - local_6c) - local_44 * (float)local_c4;
              fVar5 = local_44 * (local_68 - local_54) - (local_70 - local_48) * local_4c;
              fVar4 = fVar5 * fVar5 + fVar2 * fVar2 + fVar3 * fVar3;
              if (fVar4 <= 0.0) {
                local_12c.surface_normal.A = 0x42fe0000;
              }
              else {
                local_12c.surface_normal.A = (int)((float)127 / SQRT(fVar4));
              }
              fVar12 = (float10)(float)local_12c.surface_normal.A;
              local_28 = (float)((float10)fVar2 * fVar12);
              local_30 = (float)((float10)fVar3 * fVar12);
              local_2c = (float)((float10)fVar5 * fVar12);
              fVar13 = (float10)127.0f;
              fVar14 = (float10)local_30 + fVar13;
              fVar15 = (float10)local_28 + fVar13;
              local_12c.base.count = 0x59b303;
              dVar16 = crt_math_c_round_FUN_005fe6b0((double)((float10)fVar5 * fVar12 + fVar13));
              fVar12 = (float10)dVar16;
              local_12c.base.type = 0x59b30a;
              dVar16 = crt_math_c_round_FUN_005fe6b0((double)fVar14);
              local_28 = (float)(int)ROUND(fVar12);
              local_2c = (float)(int)ROUND(dVar16);
              iVar9 = 0x59b330;
              dVar16 = crt_math_c_round_FUN_005fe6b0((double)fVar15);
              local_30 = (float)(int)ROUND(dVar16);
              engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
                        (g_CDemonRendererPtr2,(int)local_30,green_component,iVar9);
              local_12c.base.count = 3;
              local_114 = (uint)*puVar10;
              local_108 = (uint)puVar10[1];
              local_fc = (uint)puVar10[2];
              engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                        (g_CDemonRendererPtr2,&local_12c);
              local_44 = (float)((int)local_44 + 0x12);
            } while ((int)local_44 < local_8c);
          }
        }
        else if ((this_ptr->num_textures == 1) ||
                (((local_84 != 0 || (special_render_mode != 0)) || (local_80 != 0)))) {
          if (((local_84 == 0) && (special_render_mode == 0)) && (local_80 == 0)) {
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                      (g_CDemonRendererPtr2,(SMRGLTextureBasic *)(local_94 + *local_b8));
          }
          core_set_cpp_CDemonSet_FUN_00570870(g_CDemonSetPtr);
        }
        else {
          local_68 = -NAN;
          local_40 = local_b0;
          if (local_b0 < iVar11) {
            local_98 = local_b8;
            do {
              iVar9 = local_40 + 1;
              fVar2 = *(float *)(*(int *)(local_ac + 0x90) + local_40 * 4);
              if (iVar9 < iVar11) {
                pfVar7 = (float *)(iVar9 * 4 + *(int *)(local_a0 + 0x90));
                do {
                  if (fVar2 != *pfVar7) break;
                  iVar9 = iVar9 + 1;
                  pfVar7 = pfVar7 + 1;
                } while (iVar9 < iVar11);
              }
              if (fVar2 != local_68) {
                engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                          (g_CDemonRendererPtr2,
                           local_94[*local_98].textures[(int)fVar2].texture_variants);
                local_68 = fVar2;
              }
              core_set_cpp_CDemonSet_FUN_00570870(g_CDemonSetPtr);
              local_40 = iVar9;
            } while (iVar9 < iVar11);
          }
        }
      }
      local_c4 = local_c4 + 4;
      local_c8 = local_c8 + 0x60;
      local_b8 = local_b8 + 1;
      local_bc = local_bc + 1;
      local_b0 = iVar11;
    } while (local_bc < this_ptr->num_parts);
  }
  local_b4 = 0;
  if (0 < this_ptr->num_parts) {
    local_a4 = this_ptr->texture_sets;
    local_c0 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_cc = part_visibility_flags;
    do {
      local_88 = local_b0 + *(int *)(local_c0 + 0x7178);
      local_64 = -NAN;
      if (((*local_cc & 1) != 0) && (local_b0 < local_88)) {
        local_9c = texture_set_indices + local_b4;
        local_48 = (float)(local_b0 * 0x12);
        local_4c = (float)(local_b0 * 4);
        iVar11 = local_b0;
        do {
          local_6c = (float)((int)&(this_ptr->tri_data_ptr[lod_index]->vertex_indices).
                                   vertex_index_0 + (int)local_48);
          if ((part_visibility_flags
               [this_ptr->cap_index_ptr[lod_index][iVar11 - this_ptr->tri_count[lod_index]] * 4] & 1
              ) == 0) {
            if ((((local_84 == 0) && (special_render_mode == 0)) && (local_80 == 0)) &&
               (fVar2 = *(float *)((int)this_ptr->index_data_ptr[lod_index] + (int)local_4c),
               fVar2 != local_64)) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr2,
                         local_a4[*local_9c].textures[(int)fVar2].texture_variants);
              local_64 = fVar2;
            }
            core_set_cpp_CDemonSet_FUN_00570870(g_CDemonSetPtr);
          }
          iVar11 = iVar11 + 1;
          local_48 = (float)((int)local_48 + 0x12);
          local_4c = (float)((int)local_4c + 4);
        } while (iVar11 < local_88);
      }
      local_b0 = local_88;
      local_cc = local_cc + 4;
      local_c0 = local_c0 + 0x60;
      local_b4 = local_b4 + 1;
    } while (local_b4 < this_ptr->num_parts);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
  return;
}
