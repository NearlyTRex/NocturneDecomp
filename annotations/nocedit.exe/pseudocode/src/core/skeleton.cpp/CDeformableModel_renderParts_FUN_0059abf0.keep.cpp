// Name: core_skeleton.cpp_CDeformableModel_renderParts_FUN_0059abf0
// Address: 0059abf0
// MANUAL RECONSTRUCTION
// Address Range: [[0059abf0, 0059b598]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_0059abf0(CDeformableModel *this_ptr,int lod_index,int *part_visibility_flags,int *texture_set_indices,int render_flags,int skip_texture_capture)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_0059abf0(CDeformableModel *this_ptr,int lod_index,int *part_visibility_flags,int *texture_set_indices,int render_flags,int skip_texture_capture)

{
  int iVar1;
  SRenderVertex *pSVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  SRenderVertex *pSVar4;
  int *piVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  float local_130;
  SMRGLPrimitiveTriangle local_12c;
  byte *local_cc;
  byte *local_c4;
  int local_bc;
  int *local_b8;
  int local_b4;
  int local_b0;
  int local_68;
  int local_64;
  int local_44;
  int iVar2;
  SRenderVertex *pSVar1;
  float fVar3;
  
  iVar12 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  iVar1 = this_ptr->lod_info[lod_index].shadow_only_flag;
  if (iVar1 != 0) {
    render_flags = render_flags & 0xfffffffe;
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  local_b0 = 0;
  local_bc = 0;
  if (0 < this_ptr->num_parts) {
    local_b8 = texture_set_indices;
    local_c4 = (byte *)part_visibility_flags;
    do {
      iVar9 = local_b0 + this_ptr->parts[local_bc].tri_counts[lod_index];
      if ((*local_c4 & 1) != 0) {
        if ((iVar12 == 0) && (iVar1 != 0)) {
          engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
          if (local_b0 < iVar9) {
            local_44 = local_b0;
            do {
              puVar8 = &this_ptr->tri_data_ptr[lod_index][local_44].vertex_indices.vertex_index_0;
              pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
              pSVar6 = pSVar3 + *puVar8;
              pSVar1 = pSVar3 + puVar8[1];
              pSVar4 = pSVar3 + puVar8[2];
              fVar5 = (float)((pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2].x +
                             (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0].x +
                             g_InverseMatrix.m[1].x * (pSVar1->projected_vertex).transformed_y);
              fVar6 = fVar5 - (float)((pSVar6->projected_vertex).transformed_x *
                                      g_InverseMatrix.m[0].x +
                                      (pSVar6->projected_vertex).transformed_y *
                                      g_InverseMatrix.m[1].x +
                                     (pSVar6->projected_vertex).transformed_z *
                                     g_InverseMatrix.m[2].x);
              fVar7 = (float)((pSVar1->projected_vertex).transformed_y * g_InverseMatrix.m[1].y +
                              (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0].y +
                             (pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2].y);
              fVar8 = fVar7 - (float)((pSVar6->projected_vertex).transformed_x *
                                      g_InverseMatrix.m[0].y +
                                      (pSVar6->projected_vertex).transformed_y *
                                      g_InverseMatrix.m[1].y +
                                     (pSVar6->projected_vertex).transformed_z *
                                     g_InverseMatrix.m[2].y);
              fVar9 = (float)((pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2].z +
                             (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0].z +
                             (pSVar1->projected_vertex).transformed_y * g_InverseMatrix.m[1].z);
              fVar11 = (float)((pSVar4->projected_vertex).transformed_y * g_InverseMatrix.m[1].z +
                               (pSVar4->projected_vertex).transformed_x * g_InverseMatrix.m[0].z +
                              (pSVar4->projected_vertex).transformed_z * g_InverseMatrix.m[2].z) -
                       fVar9;
              fVar7 = (float)((pSVar4->projected_vertex).transformed_y * g_InverseMatrix.m[1].y +
                              (pSVar4->projected_vertex).transformed_x * g_InverseMatrix.m[0].y +
                             (pSVar4->projected_vertex).transformed_z * g_InverseMatrix.m[2].y) -
                      fVar7;
              fVar9 = fVar9 - (float)((pSVar6->projected_vertex).transformed_z *
                                      g_InverseMatrix.m[2].z +
                                     (pSVar6->projected_vertex).transformed_x *
                                     g_InverseMatrix.m[0].z +
                                     (pSVar6->projected_vertex).transformed_y *
                                     g_InverseMatrix.m[1].z);
              fVar5 = (float)((pSVar4->projected_vertex).transformed_z * g_InverseMatrix.m[2].x +
                             (pSVar4->projected_vertex).transformed_x * g_InverseMatrix.m[0].x +
                             (pSVar4->projected_vertex).transformed_y * g_InverseMatrix.m[1].x) -
                      fVar5;
              fVar10 = fVar8 * fVar11 - fVar7 * fVar9;
              fVar9 = fVar5 * fVar9 - fVar6 * fVar11;
              fVar5 = fVar6 * fVar7 - fVar5 * fVar8;
              fVar3 = fVar5 * fVar5 + fVar10 * fVar10 + fVar9 * fVar9;
              if (fVar3 <= 0.0) {
                local_130 = 127.0;
              }
              else {
                local_130 = (float)127 / SQRT(fVar3);
              }
              engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
                        (g_CDemonRendererPtr2,
                         (int)ROUND(ROUND(fVar10 * local_130 + 127.0f)),
                         (int)ROUND(ROUND(fVar9 * local_130 + 127.0f)),
                         (int)ROUND(ROUND(fVar5 * local_130 + 127.0f)));
              local_12c.base.base.count = 3;
              local_12c.vertices[0].vertex_index = (int)*puVar8;
              local_12c.vertices[1].vertex_index = (int)puVar8[1];
              local_12c.vertices[2].vertex_index = (int)puVar8[2];
              engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0048a8a0
                        (g_CDemonRendererPtr2,(SMRGLPrimitivePoly *)&local_12c);
              local_44 = local_44 + 1;
            } while (local_44 < iVar9);
          }
        }
        else if ((this_ptr->num_textures == 1) ||
                (((iVar12 != 0 || (skip_texture_capture != 0)) || (iVar1 != 0)))) {
          if (((iVar12 == 0) && (skip_texture_capture == 0)) && (iVar1 == 0)) {
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                      (g_CDemonRendererPtr2,
                       (SMRGLTextureBasic *)(this_ptr->texture_sets + *local_b8));
          }
          core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00570870
                    (g_CDemonSetPtr,this_ptr->tri_data_ptr[lod_index] + local_b0,iVar9 - local_b0,
                     render_flags);
        }
        else {
          local_68 = -1;
          while (local_b0 < iVar9) {
            iVar7 = local_b0 + 1;
            iVar2 = this_ptr->index_data_ptr[lod_index][local_b0];
            if (iVar7 < iVar9) {
              piVar5 = this_ptr->index_data_ptr[lod_index] + iVar7;
              do {
                if (iVar2 != *piVar5) break;
                iVar7 = iVar7 + 1;
                piVar5 = piVar5 + 1;
              } while (iVar7 < iVar9);
            }
            if (iVar2 != local_68) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr2,
                         this_ptr->texture_sets[*local_b8].textures[iVar2].textures);
              local_68 = iVar2;
            }
            core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00570870
                      (g_CDemonSetPtr,this_ptr->tri_data_ptr[lod_index] + local_b0,iVar7 - local_b0,
                       render_flags);
            local_b0 = iVar7;
          }
        }
      }
      local_c4 = local_c4 + 4;
      local_b8 = local_b8 + 1;
      local_bc = local_bc + 1;
      local_b0 = iVar9;
    } while (local_bc < this_ptr->num_parts);
  }
  local_b4 = 0;
  if (0 < this_ptr->num_parts) {
    local_cc = (byte *)part_visibility_flags;
    do {
      iVar13 = local_b0 + this_ptr->parts[local_b4].cap_tri_counts[lod_index];
      local_64 = -1;
      if (((*local_cc & 1) != 0) && (local_b0 < iVar13)) {
        do {
          if ((*(byte *)(part_visibility_flags +
                        this_ptr->cap_index_ptr[lod_index]
                        [local_b0 - this_ptr->tri_count[lod_index]]) & 1) == 0) {
            if ((((iVar12 == 0) && (skip_texture_capture == 0)) && (iVar1 == 0)) &&
               (iVar4 = this_ptr->index_data_ptr[lod_index][local_b0],
               iVar4 != local_64)) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr2,
                         this_ptr->texture_sets[texture_set_indices[local_b4]].textures[iVar4].
                         textures);
              local_64 = iVar4;
            }
            core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00570870
                      (g_CDemonSetPtr,
                       &this_ptr->tri_data_ptr[lod_index][local_b0],1,
                       render_flags);
          }
          local_b0 = local_b0 + 1;
        } while (local_b0 < iVar13);
      }
      local_cc = local_cc + 4;
      local_b4 = local_b4 + 1;
      local_b0 = iVar13;
    } while (local_b4 < this_ptr->num_parts);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
  return;
}
