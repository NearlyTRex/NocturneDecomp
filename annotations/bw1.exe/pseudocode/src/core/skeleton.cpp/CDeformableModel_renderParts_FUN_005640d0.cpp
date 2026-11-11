// Name: core_skeleton.cpp_CDeformableModel_renderParts_FUN_005640d0
// Address: 005640d0
// Address Range: [[005640d0, 00564a78]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_005640d0(CDeformableModel *this_ptr,int lod_index,int *part_visibility_flags,int *texture_set_indices,int render_flags,int skip_texture_capture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_005640d0(CDeformableModel *this_ptr,int lod_index,int *part_visibility_flags,int *texture_set_indices,int render_flags,int skip_texture_capture)

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
  float local_130;
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
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  SInputFace *local_6c;
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
  
  local_84 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  local_80 = this_ptr->lod_info[lod_index].shadow_only_flag;
  if (local_80 != 0) {
    render_flags = render_flags & 0xfffffffe;
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
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
      iVar12 = local_b0 + *(int *)(local_12c.vertices[6].texture_u + 0xc24);
      if ((*(byte *)local_12c.vertices[6].texture_v & 1) != 0) {
        if ((local_84 == 0) && (local_80 != 0)) {
          engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
          if (local_b0 < iVar12) {
            local_44 = local_b0 * 0x12;
            local_8c = iVar12 * 0x12;
            do {
              puVar11 = (ushort *)(*(int *)(local_a8 + 0x7c) + local_44);
              pSVar7 = DAT_00612560->vertex_buffer_ptr;
              pSVar9 = pSVar7 + *puVar11;
              pSVar1 = pSVar7 + puVar11[1];
              pSVar7 = pSVar7 + puVar11[2];
              local_30 = (pSVar9->projected_vertex).transformed_x * _DAT_01d1dd18 +
                         (pSVar9->projected_vertex).transformed_y * _DAT_01d1dd24 +
                         (pSVar9->projected_vertex).transformed_z * _DAT_01d1dd30;
              local_2c = (pSVar9->projected_vertex).transformed_x * _DAT_01d1dd1c +
                         (pSVar9->projected_vertex).transformed_y * _DAT_01d1dd28 +
                         (pSVar9->projected_vertex).transformed_z * _DAT_01d1dd34;
              local_28 = (pSVar9->projected_vertex).transformed_z * _DAT_01d1dd38 +
                         (pSVar9->projected_vertex).transformed_x * _DAT_01d1dd20 +
                         (pSVar9->projected_vertex).transformed_y * _DAT_01d1dd2c;
              local_24 = (pSVar1->projected_vertex).transformed_z * _DAT_01d1dd30 +
                         (pSVar1->projected_vertex).transformed_x * _DAT_01d1dd18 +
                         _DAT_01d1dd24 * (pSVar1->projected_vertex).transformed_y;
              local_20 = (pSVar1->projected_vertex).transformed_y * _DAT_01d1dd28 +
                         (pSVar1->projected_vertex).transformed_x * _DAT_01d1dd1c +
                         (pSVar1->projected_vertex).transformed_z * _DAT_01d1dd34;
              local_1c = (pSVar1->projected_vertex).transformed_z * _DAT_01d1dd38 +
                         (pSVar1->projected_vertex).transformed_x * _DAT_01d1dd20 +
                         (pSVar1->projected_vertex).transformed_y * _DAT_01d1dd2c;
              local_18 = (pSVar7->projected_vertex).transformed_z * _DAT_01d1dd30 +
                         (pSVar7->projected_vertex).transformed_x * _DAT_01d1dd18 +
                         (pSVar7->projected_vertex).transformed_y * _DAT_01d1dd24;
              local_78 = (float)local_28;
              local_54 = (float)local_24;
              local_50 = local_54 - (float)local_30;
              local_60 = (float)local_20;
              local_58 = local_60 - (float)local_2c;
              local_5c = (float)local_1c;
              local_7c = (float)local_18;
              local_14 = (pSVar7->projected_vertex).transformed_y * _DAT_01d1dd2c +
                         (pSVar7->projected_vertex).transformed_x * _DAT_01d1dd20 +
                         (pSVar7->projected_vertex).transformed_z * _DAT_01d1dd38;
              local_74 = (float)((pSVar7->projected_vertex).transformed_y * _DAT_01d1dd28 +
                                 (pSVar7->projected_vertex).transformed_x * _DAT_01d1dd1c +
                                (pSVar7->projected_vertex).transformed_z * _DAT_01d1dd34);
              local_70 = (float)local_14;
              local_12c.vertices[5].texture_v = (int)(local_70 - local_5c);
              fVar3 = local_58 * (float)local_12c.vertices[5].texture_v -
                      (local_74 - local_60) * (local_5c - local_78);
              fVar4 = (local_7c - local_54) * (local_5c - local_78) -
                      local_50 * (float)local_12c.vertices[5].texture_v;
              fVar6 = local_50 * (local_74 - local_60) - (local_7c - local_54) * local_58;
              fVar5 = fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4;
              if (fVar5 <= 0.0) {
                local_130 = 127.0;
              }
              else {
                local_130 = (float)_DAT_005f2009 / SQRT(fVar5);
              }
              fVar13 = (float10)local_130;
              local_34 = (float)((float10)fVar3 * fVar13);
              local_3c = (float)((float10)fVar4 * fVar13);
              local_38 = (float)((float10)fVar6 * fVar13);
              fVar14 = (float10)_DAT_005f2005;
              fVar13 = (float10)fVar6 * fVar13 + fVar14;
              fVar15 = (float10)local_3c + fVar14;
              fVar14 = (float10)local_34 + fVar14;
              round();
              round();
              iVar10 = (int)ROUND(fVar13);
              local_30 = (int)ROUND(fVar15);
              local_2c = iVar10;
              round();
              local_30 = (int)ROUND(fVar14);
              engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0
                        (DAT_00612560,local_30,green_component,iVar10);
              local_12c.base.base.count = 3;
              local_12c.vertices[0].vertex_index = (int)*puVar11;
              local_12c.vertices[1].vertex_index = (int)puVar11[1];
              local_12c.vertices[2].vertex_index = (int)puVar11[2];
              engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00
                        (DAT_00612560,&local_12c);
              local_44 = local_44 + 0x12;
            } while (local_44 < local_8c);
          }
        }
        else if ((this_ptr->num_textures == 1) ||
                (((local_84 != 0 || (skip_texture_capture != 0)) || (local_80 != 0)))) {
          if (((local_84 == 0) && (skip_texture_capture == 0)) && (local_80 == 0)) {
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                      (DAT_00612560,
                       (SMRGLTextureBasic *)(local_94 + *(int *)local_12c.vertices[7].texture_v));
          }
          core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_005552f0
                    (g_CDemonSetPtr,(SInputFace *)(local_b0 * 0x12 + *(int *)(local_90 + 0x7c)),
                     iVar12 - local_b0,render_flags);
        }
        else {
          local_68 = -1;
          local_40 = local_b0;
          if (local_b0 < iVar12) {
            local_98 = (int *)local_12c.vertices[7].texture_v;
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
                engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                          (DAT_00612560,(SMRGLTextureBasic *)(local_94[*local_98].textures + iVar2))
                ;
                local_68 = iVar2;
              }
              core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_005552f0
                        (g_CDemonSetPtr,(SInputFace *)(local_40 * 0x12 + *(int *)(local_90 + 0x7c)),
                         iVar10 - local_40,render_flags);
              local_40 = iVar10;
            } while (iVar10 < iVar12);
          }
        }
      }
      local_12c.vertices[6].texture_v = local_12c.vertices[6].texture_v + 4;
      local_12c.vertices[6].texture_u = local_12c.vertices[6].texture_u + 0x60;
      local_12c.vertices[7].texture_v = local_12c.vertices[7].texture_v + 4;
      local_12c.vertices[7].texture_u = local_12c.vertices[7].texture_u + 1;
      local_b0 = iVar12;
    } while (local_12c.vertices[7].texture_u < this_ptr->num_parts);
  }
  local_b4 = 0;
  if (0 < this_ptr->num_parts) {
    local_a4 = this_ptr->texture_sets;
    local_12c.vertices[7].vertex_index = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_12c.vertices[6].vertex_index = (int)part_visibility_flags;
    do {
      local_88 = local_b0 + *(int *)(local_12c.vertices[7].vertex_index + 0xc38);
      local_64 = -1;
      if (((*(byte *)local_12c.vertices[6].vertex_index & 1) != 0) && (local_b0 < local_88)) {
        local_9c = texture_set_indices + local_b4;
        local_48 = local_b0 * 0x12;
        local_4c = local_b0 * 4;
        iVar12 = local_b0;
        do {
          local_6c = (SInputFace *)
                     ((int)&(this_ptr->tri_data_ptr[lod_index]->vertex_indices).vertex_index_0 +
                     local_48);
          if ((*(byte *)(part_visibility_flags +
                        this_ptr->cap_index_ptr[lod_index][iVar12 - this_ptr->tri_count[lod_index]])
              & 1) == 0) {
            if ((((local_84 == 0) && (skip_texture_capture == 0)) && (local_80 == 0)) &&
               (iVar10 = *(int *)((int)this_ptr->index_data_ptr[lod_index] + local_4c),
               iVar10 != local_64)) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                        (DAT_00612560,(SMRGLTextureBasic *)(local_a4[*local_9c].textures + iVar10));
              local_64 = iVar10;
            }
            core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_005552f0
                      (g_CDemonSetPtr,local_6c,1,render_flags);
          }
          iVar12 = iVar12 + 1;
          local_48 = local_48 + 0x12;
          local_4c = local_4c + 4;
        } while (iVar12 < local_88);
      }
      local_b0 = local_88;
      local_12c.vertices[6].vertex_index = local_12c.vertices[6].vertex_index + 4;
      local_12c.vertices[7].vertex_index = local_12c.vertices[7].vertex_index + 0x60;
      local_b4 = local_b4 + 1;
    } while (local_b4 < this_ptr->num_parts);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
  return;
}
