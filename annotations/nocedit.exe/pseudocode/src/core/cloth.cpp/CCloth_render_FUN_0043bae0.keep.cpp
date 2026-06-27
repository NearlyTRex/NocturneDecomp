// Name: core_cloth.cpp_CCloth_render_FUN_0043bae0
// Address: 0043bae0
// MANUAL RECONSTRUCTION
// Address Range: [[0043bae0, 0043bf33] [0060c72f, 0060c74d]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_render_FUN_0043bae0(CCloth *this_ptr,CDeformableModelInstance *deformable_model)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_render_FUN_0043bae0(CCloth *this_ptr,CDeformableModelInstance *deformable_model)

{
  int render_alpha;
  CDemonRenderer *pCVar3;
  int iVar5;
  int iVar4;
  SMRGLPrimitiveQuad *pSVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int iVar9;
  SMRGLPrimitiveQuad *pSVar8;
  CDemonRenderer *pCVar1;
  int iVar10;
  
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0056e7c0
            (g_CDemonSetPtr,(this_ptr->model).vertex_count,(this_ptr->model).vertex_list);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  render_alpha = (int)ROUND(ROUND(this_ptr->transparency * (float)65535));
  if (render_alpha < 1000) {
    return;
  }
  if (render_alpha < 63000) {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,render_alpha)
    ;
  }
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800((this_ptr->model).texture_list[0].textures);
  if (this_ptr->double_sided == 0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,(this_ptr->model).poly_count / 2,
               (this_ptr->model).poly_vert_list,(this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if (deformable_model != (CDeformableModelInstance *)0x0) {
      for (iVar4 = 0; iVar4 < this_ptr->locked_vertex_count; iVar4 = iVar4 + 1) {
        pCVar1 = g_CDemonRendererPtr2;
        iVar5 = this_ptr->locked_vertex_indices[iVar4];
        g_CDemonRendererPtr2->vertex_buffer_ptr[iVar5].r = this_ptr->locked_vertex_indices[iVar4 + 600];
        pCVar1->vertex_buffer_ptr[iVar5].g = this_ptr->locked_vertex_indices[iVar4 + 700];
        pCVar1->vertex_buffer_ptr[iVar5].b = this_ptr->locked_vertex_indices[iVar4 + 800];
      }
    }
    if (render_alpha < 63000) {
      iVar5 = (this_ptr->model).poly_count;
      iVar9 = 0x267;
      pSVar6 = (this_ptr->model).poly_vert_list;
    }
    else {
      iVar5 = (this_ptr->model).poly_count;
      iVar9 = -1;
      pSVar6 = (this_ptr->model).poly_vert_list;
    }
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(g_CDemonSetPtr,pSVar6,iVar5 / 2,iVar9);
    iVar5 = (this_ptr->model).poly_count / 2;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,iVar5,
               (this_ptr->model).poly_vert_list + iVar5,(this_ptr->model).vertex_list,4,
               (CVector3i *)0x0);
    if (62999 < render_alpha) {
      local_1c = (this_ptr->model).poly_count / 2;
      iVar10 = -1;
      pSVar8 = (this_ptr->model).poly_vert_list + local_1c;
      goto LAB_0043bcda;
    }
    local_1c = (this_ptr->model).poly_count / 2;
    pSVar8 = (this_ptr->model).poly_vert_list + local_1c;
  }
  else {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,(this_ptr->model).poly_count,
               (this_ptr->model).poly_vert_list,(this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if (deformable_model != (CDeformableModelInstance *)0x0) {
      for (iVar5 = 0; iVar5 < this_ptr->locked_vertex_count; iVar5 = iVar5 + 1) {
        pCVar3 = g_CDemonRendererPtr2;
        iVar7 = this_ptr->locked_vertex_indices[iVar5];
        g_CDemonRendererPtr2->vertex_buffer_ptr[iVar7].r = this_ptr->locked_vertex_indices[iVar5 + 600];
        pCVar3->vertex_buffer_ptr[iVar7].g = this_ptr->locked_vertex_indices[iVar5 + 700];
        pCVar3->vertex_buffer_ptr[iVar7].b = this_ptr->locked_vertex_indices[iVar5 + 800];
      }
    }
    if (render_alpha < 63000) {
      iVar7 = 0x267;
      iVar5 = (this_ptr->model).poly_count;
      pSVar6 = (this_ptr->model).poly_vert_list;
    }
    else {
      iVar7 = -1;
      iVar5 = (this_ptr->model).poly_count;
      pSVar6 = (this_ptr->model).poly_vert_list;
    }
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(g_CDemonSetPtr,pSVar6,iVar5,iVar7);
    local_1c = (this_ptr->model).poly_count;
    if (1000 < local_1c) {
      local_1c = 1000;
    }
    local_18 = 0;
    if (0 < local_1c) {
      do {
        pSVar6 = (this_ptr->model).poly_vert_list;
        iVar7 = pSVar6[local_18].base.base.count;
        g_ClothBackfaceBuffer[local_18].base.base.count = iVar7;
        iVar5 = 0;
        if (0 < iVar7) {
          do {
            g_ClothBackfaceBuffer[local_18].vertices[iVar5].vertex_index =
                 pSVar6[local_18].vertices[iVar7 - iVar5 - 1].vertex_index;
            g_ClothBackfaceBuffer[local_18].vertices[iVar5].texture_u =
                 pSVar6[local_18].vertices[iVar7 - iVar5 - 1].texture_u;
            g_ClothBackfaceBuffer[local_18].vertices[iVar5].texture_v =
                 pSVar6[local_18].vertices[iVar7 - iVar5 - 1].texture_v;
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar7);
        }
        local_18 = local_18 + 1;
      } while (local_18 < local_1c);
    }
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,local_1c,g_ClothBackfaceBuffer,
               (this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if (62999 < render_alpha) {
      iVar10 = -1;
      pSVar8 = g_ClothBackfaceBuffer;
      goto LAB_0043bcda;
    }
    pSVar8 = g_ClothBackfaceBuffer;
  }
  iVar10 = 0x267;
LAB_0043bcda:
  core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(g_CDemonSetPtr,pSVar8,local_1c,iVar10);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
  return;
}
