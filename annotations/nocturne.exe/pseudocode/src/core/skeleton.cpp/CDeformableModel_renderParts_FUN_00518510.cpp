// Name: core_skeleton.cpp_CDeformableModel_renderParts_FUN_00518510
// Address: 00518510
// Address Range: [[00518510, 00518eb8]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_00518510(CDeformableModel *this_ptr,int lod_index,int *part_visibility_flags,int *texture_set_indices,int render_flags,int skip_texture_capture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_00518510(CDeformableModel *this_ptr,int lod_index,int *part_visibility_flags,int *texture_set_indices,int render_flags,int skip_texture_capture)

{
  SRenderVertex *pSVar1;
  float fVar2;
  float fVar3;
  SRenderVertex *pSVar4;
  float *pfVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  SMRGLPrimitivePoly local_12c;
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
  SInputFace *local_6c;
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
  
  local_84 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                       (g_CDemonRenderer_PTR_005ae704);
  local_80 = this_ptr->lod_info[lod_index].shadow_only_flag;
  if (local_80 != 0) {
    render_flags = render_flags & 0xfffffffe;
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(g_CDemonRenderer_PTR_005ae704,1);
  local_b0 = 0;
  local_12c.vertices[7].texture_u = 0;
  if (0 < this_ptr->num_parts) {
    local_ac = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_12c.vertices[6].texture_u = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_94 = this_ptr->texture_sets;
    local_12c.vertices[7].texture_v = (int)texture_set_indices;
    local_12c.vertices[6].texture_v = (int)part_visibility_flags;
    local_a8 = local_ac;
    local_a0 = local_ac;
    local_90 = local_ac;
    do {
      iVar9 = local_b0 + *(int *)(local_12c.vertices[6].texture_u + 0xc24);
      if ((*(byte *)local_12c.vertices[6].texture_v & 1) != 0) {
        if ((local_84 == 0) && (local_80 != 0)) {
          engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
                    (g_CDemonRenderer_PTR_005ae704,1);
          if (local_b0 < iVar9) {
            local_8c = iVar9 * 0x12;
            do {
              puVar8 = (ushort *)(local_9c[0x1f] + local_38);
              pSVar4 = g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr;
              pSVar6 = pSVar4 + *puVar8;
              pSVar1 = pSVar4 + puVar8[1];
              pSVar4 = pSVar4 + puVar8[2];
              local_24 = (pSVar6->projected_vertex).transformed_x * _DAT_01cc5118 +
                         (pSVar6->projected_vertex).transformed_y * _DAT_01cc5124 +
                         (pSVar6->projected_vertex).transformed_z * _DAT_01cc5130;
              local_20 = (pSVar6->projected_vertex).transformed_x * _DAT_01cc511c +
                         (pSVar6->projected_vertex).transformed_y * _DAT_01cc5128 +
                         (pSVar6->projected_vertex).transformed_z * _DAT_01cc5134;
              local_1c = (pSVar6->projected_vertex).transformed_z * _DAT_01cc5138 +
                         (pSVar6->projected_vertex).transformed_x * _DAT_01cc5120 +
                         (pSVar6->projected_vertex).transformed_y * _DAT_01cc512c;
              local_18 = (pSVar1->projected_vertex).transformed_z * _DAT_01cc5130 +
                         (pSVar1->projected_vertex).transformed_x * _DAT_01cc5118 +
                         _DAT_01cc5124 * (pSVar1->projected_vertex).transformed_y;
              local_14 = (pSVar1->projected_vertex).transformed_y * _DAT_01cc5128 +
                         (pSVar1->projected_vertex).transformed_x * _DAT_01cc511c +
                         (pSVar1->projected_vertex).transformed_z * _DAT_01cc5134;
              local_6c = (SInputFace *)(float)local_1c;
              local_48 = (float)local_18;
              local_44 = local_48 - (float)local_24;
              local_54 = (float)local_14;
              local_4c = local_54 - (float)local_20;
              local_50 = (float)((pSVar1->projected_vertex).transformed_z * _DAT_01cc5138 +
                                (pSVar1->projected_vertex).transformed_x * _DAT_01cc5120 +
                                (pSVar1->projected_vertex).transformed_y * _DAT_01cc512c);
              local_70 = (float)((pSVar4->projected_vertex).transformed_z * _DAT_01cc5130 +
                                (pSVar4->projected_vertex).transformed_x * _DAT_01cc5118 +
                                (pSVar4->projected_vertex).transformed_y * _DAT_01cc5124);
              local_68 = (float)((pSVar4->projected_vertex).transformed_y * _DAT_01cc5128 +
                                 (pSVar4->projected_vertex).transformed_x * _DAT_01cc511c +
                                (pSVar4->projected_vertex).transformed_z * _DAT_01cc5134);
              local_64 = (float)((pSVar4->projected_vertex).transformed_y * _DAT_01cc512c +
                                 (pSVar4->projected_vertex).transformed_x * _DAT_01cc5120 +
                                (pSVar4->projected_vertex).transformed_z * _DAT_01cc5138);
              local_12c.vertices[6].texture_v = (int)(local_64 - local_50);
              local_28 = local_4c * (float)local_12c.vertices[6].texture_v -
                         (local_68 - local_54) * (local_50 - (float)local_6c);
              local_30 = (local_70 - local_48) * (local_50 - (float)local_6c) -
                         local_44 * (float)local_12c.vertices[6].texture_v;
              local_2c = local_44 * (local_68 - local_54) - (local_70 - local_48) * local_4c;
              fVar2 = local_2c * local_2c + local_28 * local_28 + local_30 * local_30;
              if (fVar2 <= 0.0) {
                local_12c.base.surface_normal.A.i = 0x42fe0000;
              }
              else {
                local_12c.base.surface_normal.A.f = (float)127 / SQRT(fVar2);
              }
              local_28 = local_28 * local_12c.base.surface_normal.A.f;
              local_30 = local_30 * local_12c.base.surface_normal.A.f;
              local_2c = local_2c * local_12c.base.surface_normal.A.f;
              fVar2 = local_30 + 127.0f;
              fVar3 = local_28 + 127.0f;
              local_12c.base.base.count = 0x518c23;
              dVar10 = round((double)(local_2c + 127.0f));
              local_12c.base.base.type = 0x518c2a;
              dVar11 = round((double)fVar2);
              local_28 = (float)(int)ROUND(dVar10);
              iVar7 = 0x518c50;
              local_2c = (float)(int)ROUND(dVar11);
              dVar10 = round((double)fVar3);
              local_30 = (float)(int)ROUND(dVar10);
              engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00460f20
                        (g_CDemonRenderer_PTR_005ae704,(int)local_30,(int)ROUND(dVar11),iVar7);
              local_12c.base.base.count = 3;
              local_12c.vertices[0].vertex_index = (int)*puVar8;
              local_12c.vertices[1].vertex_index = (int)puVar8[1];
              local_12c.vertices[2].vertex_index = (int)puVar8[2];
              engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
                        (g_CDemonRenderer_PTR_005ae704,&local_12c);
              local_44 = (float)((int)local_44 + 0x12);
            } while ((int)local_44 < local_8c);
          }
        }
        else if ((this_ptr->num_textures == 1) ||
                (((local_84 != 0 || (skip_texture_capture != 0)) || (local_80 != 0)))) {
          if (((local_84 == 0) && (skip_texture_capture == 0)) && (local_80 == 0)) {
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                      (g_CDemonRenderer_PTR_005ae704,
                       (SMRGLTextureBasic *)(local_94 + *(int *)local_12c.vertices[7].texture_v));
          }
          core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0
                    (g_CDemonSet_PTR_005be368,
                     (SInputFace *)(local_b0 * 0x12 + *(int *)(local_90 + 0x7c)),iVar9 - local_b0,
                     render_flags);
        }
        else {
          local_68 = -NAN;
          local_40 = local_b0;
          if (local_b0 < iVar9) {
            local_98 = (int *)local_12c.vertices[7].texture_v;
            do {
              iVar7 = local_40 + 1;
              fVar2 = *(float *)(*(int *)(local_ac + 0x90) + local_40 * 4);
              if (iVar7 < iVar9) {
                pfVar5 = (float *)(iVar7 * 4 + *(int *)(local_a0 + 0x90));
                do {
                  if (fVar2 != *pfVar5) break;
                  iVar7 = iVar7 + 1;
                  pfVar5 = pfVar5 + 1;
                } while (iVar7 < iVar9);
              }
              if (fVar2 != local_68) {
                engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                          (g_CDemonRenderer_PTR_005ae704,
                           local_94[*local_98].textures[(int)fVar2].textures);
                local_68 = fVar2;
              }
              core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0
                        (g_CDemonSet_PTR_005be368,
                         (SInputFace *)(local_40 * 0x12 + *(int *)(local_90 + 0x7c)),
                         iVar7 - local_40,render_flags);
              local_40 = iVar7;
            } while (iVar7 < iVar9);
          }
        }
      }
      local_12c.vertices[6].texture_v = local_12c.vertices[6].texture_v + 4;
      local_12c.vertices[6].texture_u = local_12c.vertices[6].texture_u + 0x60;
      local_12c.vertices[7].texture_v = local_12c.vertices[7].texture_v + 4;
      local_12c.vertices[7].texture_u = local_12c.vertices[7].texture_u + 1;
      local_b0 = iVar9;
    } while (local_12c.vertices[7].texture_u < this_ptr->num_parts);
  }
  local_b4 = 0;
  if (0 < this_ptr->num_parts) {
    local_a4 = this_ptr->texture_sets;
    local_12c.vertices[7].vertex_index = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_12c.vertices[6].vertex_index = (int)part_visibility_flags;
    do {
      local_88 = local_b0 + *(int *)(local_12c.vertices[7].vertex_index + 0xc38);
      local_64 = -NAN;
      if (((*(byte *)local_12c.vertices[6].vertex_index & 1) != 0) && (local_b0 < local_88)) {
        local_9c = texture_set_indices + local_b4;
        local_48 = (float)(local_b0 * 0x12);
        local_4c = (float)(local_b0 * 4);
        iVar9 = local_b0;
        do {
          local_6c = (SInputFace *)
                     ((int)&(this_ptr->tri_data_ptr[lod_index]->vertex_indices).vertex_index_0 +
                     (int)local_48);
          if ((*(byte *)(part_visibility_flags +
                        this_ptr->cap_index_ptr[lod_index][iVar9 - this_ptr->tri_count[lod_index]])
              & 1) == 0) {
            if ((((local_84 == 0) && (skip_texture_capture == 0)) && (local_80 == 0)) &&
               (fVar2 = *(float *)((int)this_ptr->index_data_ptr[lod_index] + (int)local_4c),
               fVar2 != local_64)) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                        (g_CDemonRenderer_PTR_005ae704,
                         local_a4[*local_9c].textures[(int)fVar2].textures);
              local_64 = fVar2;
            }
            core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0
                      (g_CDemonSet_PTR_005be368,local_6c,1,render_flags);
          }
          iVar9 = iVar9 + 1;
          local_48 = (float)((int)local_48 + 0x12);
          local_4c = (float)((int)local_4c + 4);
        } while (iVar9 < local_88);
      }
      local_b0 = local_88;
      local_12c.vertices[6].vertex_index = local_12c.vertices[6].vertex_index + 4;
      local_12c.vertices[7].vertex_index = local_12c.vertices[7].vertex_index + 0x60;
      local_b4 = local_b4 + 1;
    } while (local_b4 < this_ptr->num_parts);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(g_CDemonRenderer_PTR_005ae704,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(g_CDemonRenderer_PTR_005ae704,1);
  return;
}
