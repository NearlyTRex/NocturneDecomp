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
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  SRenderVertex *pSVar10;
  int *piVar11;
  SRenderVertex *pSVar12;
  int green_component;
  int iVar13;
  BADSPACEBASE *in_ESP;
  ushort *puVar14;
  int iVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  double dVar20;
  float fVar21;
  byte *local_c4;
  int local_c0;
  byte *local_bc;
  int local_b8;
  int local_b4;
  int *local_b0;
  int local_ac;
  int local_a8;
  int local_78;
  int local_60;
  int local_44;
  int local_3c;
  
  engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  iVar2 = this_ptr->lod_info[lod_index].shadow_only_flag;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  local_a8 = 0;
  local_b4 = 0;
  if (0 < this_ptr->num_parts) {
    local_c0 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_b0 = texture_set_indices;
    local_bc = part_visibility_flags;
    do {
      iVar15 = local_a8 + *(int *)(local_c0 + 0x7164);
      if ((*local_bc & 1) != 0) {
        if ((iVar2 == 0) && (local_78 != 0)) {
          engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
          if (local_a8 < iVar15) {
            local_3c = local_a8 * 0x12;
            do {
              puVar14 = (ushort *)
                        ((int)&(this_ptr->tri_data_ptr[lod_index]->vertex_indices).vertex_index_0 +
                        local_3c);
              pSVar10 = g_CDemonRendererPtr->vertex_buffer_ptr;
              pSVar12 = pSVar10 + *puVar14;
              pSVar1 = pSVar10 + puVar14[1];
              pSVar10 = pSVar10 + puVar14[2];
              fVar21 = (float)((pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2].x +
                              (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0].x +
                              g_InverseMatrix.m[1].x * (pSVar1->projected_vertex).transformed_y);
              fVar4 = fVar21 - (float)((pSVar12->projected_vertex).transformed_x *
                                       g_InverseMatrix.m[0].x +
                                       (pSVar12->projected_vertex).transformed_y *
                                       g_InverseMatrix.m[1].x +
                                      (pSVar12->projected_vertex).transformed_z *
                                      g_InverseMatrix.m[2].x);
              fVar5 = (float)((pSVar1->projected_vertex).transformed_y * g_InverseMatrix.m[1].y +
                              (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0].y +
                             (pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2].y);
              fVar6 = fVar5 - (float)((pSVar12->projected_vertex).transformed_x *
                                      g_InverseMatrix.m[0].y +
                                      (pSVar12->projected_vertex).transformed_y *
                                      g_InverseMatrix.m[1].y +
                                     (pSVar12->projected_vertex).transformed_z *
                                     g_InverseMatrix.m[2].y);
              fVar7 = (float)((pSVar1->projected_vertex).transformed_z * g_InverseMatrix.m[2].z +
                             (pSVar1->projected_vertex).transformed_x * g_InverseMatrix.m[0].z +
                             (pSVar1->projected_vertex).transformed_y * g_InverseMatrix.m[1].z);
              fVar9 = (float)((pSVar10->projected_vertex).transformed_y * g_InverseMatrix.m[1].z +
                              (pSVar10->projected_vertex).transformed_x * g_InverseMatrix.m[0].z +
                             (pSVar10->projected_vertex).transformed_z * g_InverseMatrix.m[2].z) -
                      fVar7;
              fVar5 = (float)((pSVar10->projected_vertex).transformed_y * g_InverseMatrix.m[1].y +
                              (pSVar10->projected_vertex).transformed_x * g_InverseMatrix.m[0].y +
                             (pSVar10->projected_vertex).transformed_z * g_InverseMatrix.m[2].y) -
                      fVar5;
              fVar7 = fVar7 - (float)((pSVar12->projected_vertex).transformed_z *
                                      g_InverseMatrix.m[2].z +
                                     (pSVar12->projected_vertex).transformed_x *
                                     g_InverseMatrix.m[0].z +
                                     (pSVar12->projected_vertex).transformed_y *
                                     g_InverseMatrix.m[1].z);
              fVar21 = (float)((pSVar10->projected_vertex).transformed_z * g_InverseMatrix.m[2].x +
                              (pSVar10->projected_vertex).transformed_x * g_InverseMatrix.m[0].x +
                              (pSVar10->projected_vertex).transformed_y * g_InverseMatrix.m[1].x) -
                       fVar21;
              fVar8 = fVar6 * fVar9 - fVar5 * fVar7;
              fVar7 = fVar21 * fVar7 - fVar4 * fVar9;
              fVar4 = fVar4 * fVar5 - fVar21 * fVar6;
              fVar21 = fVar4 * fVar4 + fVar8 * fVar8 + fVar7 * fVar7;
              if (fVar21 <= 0.0) {
                fVar21 = 127.0;
              }
              else {
                fVar21 = (float)127 / SQRT(fVar21);
              }
              fVar16 = (float10)fVar21;
              fVar17 = (float10)127f;
              fVar18 = (float10)(float)((float10)fVar7 * fVar16) + fVar17;
              fVar19 = (float10)(float)((float10)fVar8 * fVar16) + fVar17;
              crt_math_c_round_FUN_005fe6b0((double)((float10)fVar4 * fVar16 + fVar17));
              crt_math_c_round_FUN_005fe6b0((double)fVar18);
              iVar13 = 0x59b330;
              dVar20 = crt_math_c_round_FUN_005fe6b0((double)fVar19);
              engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
                        (g_CDemonRendererPtr,(int)ROUND(dVar20),green_component,iVar13);
              engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                        (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xfffffed4);
              local_3c = local_3c + 0x12;
            } while (local_3c < iVar15 * 0x12);
          }
        }
        else if ((this_ptr->num_textures == 1) ||
                (((iVar2 != 0 || (special_render_mode != 0)) || (local_78 != 0)))) {
          if (((iVar2 == 0) && (special_render_mode == 0)) && (local_78 == 0)) {
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                      (g_CDemonRendererPtr,(SMRGLTextureBasic *)(this_ptr->texture_sets + *local_b0)
                      );
          }
          core_set_cpp_CDemonSet_FUN_00570870(g_CDemonSetPtr);
        }
        else {
          local_60 = -1;
          while (local_a8 < iVar15) {
            iVar13 = local_a8 + 1;
            iVar3 = this_ptr->index_data_ptr[lod_index][local_a8];
            if (iVar13 < iVar15) {
              piVar11 = this_ptr->index_data_ptr[lod_index] + iVar13;
              do {
                if (iVar3 != *piVar11) break;
                iVar13 = iVar13 + 1;
                piVar11 = piVar11 + 1;
              } while (iVar13 < iVar15);
            }
            if (iVar3 != local_60) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr,
                         this_ptr->texture_sets[*local_b0].textures[iVar3].texture_variants);
              local_60 = iVar3;
            }
            core_set_cpp_CDemonSet_FUN_00570870(g_CDemonSetPtr);
            local_a8 = iVar13;
          }
        }
      }
      local_bc = local_bc + 4;
      local_c0 = local_c0 + 0x60;
      local_b0 = local_b0 + 1;
      local_b4 = local_b4 + 1;
      local_a8 = iVar15;
    } while (local_b4 < this_ptr->num_parts);
  }
  local_ac = 0;
  if (0 < this_ptr->num_parts) {
    local_b8 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_c4 = part_visibility_flags;
    do {
      iVar15 = local_a8 + *(int *)(local_b8 + 0x7178);
      if (((*local_c4 & 1) != 0) && (local_a8 < iVar15)) {
        local_44 = local_a8 * 4;
        do {
          if ((part_visibility_flags
               [this_ptr->cap_index_ptr[lod_index][local_a8 - this_ptr->tri_count[lod_index]] * 4] &
              1) == 0) {
            if ((((iVar2 == 0) && (special_render_mode == 0)) && (local_78 == 0)) &&
               (iVar13 = *(int *)((int)this_ptr->index_data_ptr[lod_index] + local_44), iVar13 != -1
               )) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr,
                         this_ptr->texture_sets[texture_set_indices[local_ac]].textures[iVar13].
                         texture_variants);
            }
            core_set_cpp_CDemonSet_FUN_00570870(g_CDemonSetPtr);
          }
          local_a8 = local_a8 + 1;
          local_44 = local_44 + 4;
        } while (local_a8 < iVar15);
      }
      local_c4 = local_c4 + 4;
      local_b8 = local_b8 + 0x60;
      local_ac = local_ac + 1;
      local_a8 = iVar15;
    } while (local_ac < this_ptr->num_parts);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  return;
}
