// Name: core_cloth.cpp_CCloth_render_FUN_00437db0
// Address: 00437db0
// Address Range: [[00437db0, 00438203]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_render_FUN_00437db0(CCloth *this_ptr,CDeformableModelInstance *deformable_model)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_render_FUN_00437db0(CCloth *this_ptr,CDeformableModelInstance *deformable_model)

{
  CDemonRenderer *pCVar1;
  CCloth *pCVar2;
  SMRGLPrimitiveQuad *pSVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  double dVar8;
  SMRGLPrimitiveQuad *pSVar9;
  int iVar10;
  int iVar11;
  int local_20;
  int local_1c;
  SMRGLPrimitiveQuad *local_18;
  
  bVar7 = 0;
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
            (g_CDemonSetPtr,(this_ptr->model).vertex_count,(this_ptr->model).vertex_list);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(g_CDemonRenderer_PTR_005ae704,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (g_CDemonRenderer_PTR_005ae704,0xffff);
  engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00461090(g_CDemonRenderer_PTR_005ae704);
  dVar8 = round((double)(this_ptr->transparency * (float)65535));
  iVar11 = (int)ROUND(dVar8);
  if (iVar11 < 1000) {
    return;
  }
  if (iVar11 < 63000) {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
              (g_CDemonRenderer_PTR_005ae704,iVar11);
  }
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920
            ((SMRGLTextureBasic *)(this_ptr->model).texture_list);
  if (this_ptr->double_sided == 0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,(this_ptr->model).poly_count / 2,
               (this_ptr->model).poly_vert_list,(this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if ((deformable_model != (CDeformableModelInstance *)0x0) &&
       (iVar4 = 0, pCVar2 = this_ptr, 0 < this_ptr->locked_vertex_count)) {
      do {
        pCVar1 = g_CDemonRenderer_PTR_005ae704;
        iVar10 = pCVar2->locked_vertex_indices[0];
        g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[iVar10].r =
             pCVar2->locked_vertex_indices[600];
        pCVar1->vertex_buffer_ptr[iVar10].g = pCVar2->locked_vertex_indices[700];
        pCVar1->vertex_buffer_ptr[iVar10].b = pCVar2->locked_vertex_indices[800];
        iVar4 = iVar4 + 1;
        pCVar2 = (CCloth *)((pCVar2->model).model_filename + 4);
      } while (iVar4 < this_ptr->locked_vertex_count);
    }
    if (iVar11 < 63000) {
      iVar4 = (this_ptr->model).poly_count;
      iVar10 = 0x267;
      pSVar9 = (this_ptr->model).poly_vert_list;
    }
    else {
      iVar4 = (this_ptr->model).poly_count;
      iVar10 = -1;
      pSVar9 = (this_ptr->model).poly_vert_list;
    }
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_0050ddd0(g_CDemonSetPtr,pSVar9,iVar4 / 2,iVar10)
    ;
    iVar4 = (this_ptr->model).poly_count / 2;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,iVar4,
               (this_ptr->model).poly_vert_list + iVar4,(this_ptr->model).vertex_list,4,
               (CVector3i *)0x0);
    if (62999 < iVar11) {
      local_20 = (this_ptr->model).poly_count / 2;
      iVar11 = -1;
      pSVar9 = (this_ptr->model).poly_vert_list + local_20;
      goto LAB_00437faa;
    }
    local_20 = (this_ptr->model).poly_count / 2;
    pSVar9 = (this_ptr->model).poly_vert_list + local_20;
  }
  else {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,(this_ptr->model).poly_count,
               (this_ptr->model).poly_vert_list,(this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if ((deformable_model != (CDeformableModelInstance *)0x0) &&
       (iVar4 = 0, pCVar2 = this_ptr, 0 < this_ptr->locked_vertex_count)) {
      do {
        pCVar1 = g_CDemonRenderer_PTR_005ae704;
        iVar10 = pCVar2->locked_vertex_indices[0];
        g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[iVar10].r =
             pCVar2->locked_vertex_indices[600];
        pCVar1->vertex_buffer_ptr[iVar10].g = pCVar2->locked_vertex_indices[700];
        pCVar1->vertex_buffer_ptr[iVar10].b = pCVar2->locked_vertex_indices[800];
        iVar4 = iVar4 + 1;
        pCVar2 = (CCloth *)((pCVar2->model).model_filename + 4);
      } while (iVar4 < this_ptr->locked_vertex_count);
    }
    if (iVar11 < 63000) {
      iVar10 = 0x267;
      iVar4 = (this_ptr->model).poly_count;
      pSVar9 = (this_ptr->model).poly_vert_list;
    }
    else {
      iVar10 = -1;
      iVar4 = (this_ptr->model).poly_count;
      pSVar9 = (this_ptr->model).poly_vert_list;
    }
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_0050ddd0(g_CDemonSetPtr,pSVar9,iVar4,iVar10);
    local_20 = (this_ptr->model).poly_count;
    if (1000 < local_20) {
      local_20 = 1000;
    }
    local_1c = 0;
    if (0 < local_20) {
      local_18 = g_ClothBackfaceBuffer;
      do {
        pSVar9 = (this_ptr->model).poly_vert_list;
        (local_18->base).base.count = pSVar9[local_1c].base.base.count;
        iVar4 = 0;
        pSVar3 = local_18;
        if (0 < pSVar9[local_1c].base.base.count) {
          do {
            iVar10 = ((pSVar9[local_1c].base.base.count - iVar4) + -1) * 0xc + local_1c * 0x48;
            puVar6 = (uint *)((int)pSVar3 + (uint)bVar7 * -8 + 0x1c);
            puVar5 = (uint *)((int)pSVar9 + (uint)bVar7 * -8 + iVar10 + 0x1c);
            pSVar3->vertices[0].vertex_index = *(int *)((int)pSVar9 + iVar10 + 0x18);
            *puVar6 = *puVar5;
            puVar6[(uint)bVar7 * -2 + 1] = puVar5[(uint)bVar7 * -2 + 1];
            iVar4 = iVar4 + 1;
            pSVar3 = (SMRGLPrimitiveQuad *)&(pSVar3->base).surface_normal.B;
          } while (iVar4 < pSVar9[local_1c].base.base.count);
        }
        local_18 = local_18 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < local_20);
    }
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,local_20,g_ClothBackfaceBuffer,
               (this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if (62999 < iVar11) {
      iVar11 = -1;
      pSVar9 = g_ClothBackfaceBuffer;
      goto LAB_00437faa;
    }
    pSVar9 = g_ClothBackfaceBuffer;
  }
  iVar11 = 0x267;
LAB_00437faa:
  core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_0050ddd0(g_CDemonSetPtr,pSVar9,local_20,iVar11);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(g_CDemonRenderer_PTR_005ae704,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(g_CDemonRenderer_PTR_005ae704,1);
  return;
}
