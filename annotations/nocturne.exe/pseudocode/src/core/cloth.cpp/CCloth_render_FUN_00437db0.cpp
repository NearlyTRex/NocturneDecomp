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
  byte *puVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  double dVar7;
  SMRGLPrimitiveQuad *pSVar8;
  int iVar9;
  int iVar10;
  int local_20;
  int local_1c;
  byte *local_18;
  
  bVar6 = 0;
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
            (g_CDemonSet_PTR_005be368,(this_ptr->model).vertex_count,(this_ptr->model).vertex_list);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(g_CDemonRenderer_PTR_005ae704,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (g_CDemonRenderer_PTR_005ae704,0xffff);
  engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(g_CDemonRenderer_PTR_005ae704);
  dVar7 = round((double)(this_ptr->transparency * (float)65535));
  iVar10 = (int)ROUND(dVar7);
  if (iVar10 < 1000) {
    return;
  }
  if (iVar10 < 63000) {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
              (g_CDemonRenderer_PTR_005ae704,iVar10);
  }
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920((this_ptr->model).texture_list[0].textures);
  if (this_ptr->double_sided == 0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (g_CDemonSet_PTR_005be368,(this_ptr->model).vertex_count,
               (this_ptr->model).poly_count / 2,(this_ptr->model).poly_vert_list,
               (this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if ((deformable_model != (CDeformableModelInstance *)0x0) &&
       (iVar4 = 0, pCVar2 = this_ptr, 0 < this_ptr->locked_vertex_count)) {
      do {
        pCVar1 = g_CDemonRenderer_PTR_005ae704;
        iVar9 = pCVar2->locked_vertex_indices[0];
        g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[iVar9].r =
             pCVar2->locked_vertex_indices[600];
        pCVar1->vertex_buffer_ptr[iVar9].g = pCVar2->locked_vertex_indices[700];
        pCVar1->vertex_buffer_ptr[iVar9].b = pCVar2->locked_vertex_indices[800];
        iVar4 = iVar4 + 1;
        pCVar2 = (CCloth *)((pCVar2->model).model_filename + 4);
      } while (iVar4 < this_ptr->locked_vertex_count);
    }
    if (iVar10 < 63000) {
      iVar4 = (this_ptr->model).poly_count;
      iVar9 = 0x267;
      pSVar8 = (this_ptr->model).poly_vert_list;
    }
    else {
      iVar4 = (this_ptr->model).poly_count;
      iVar9 = -1;
      pSVar8 = (this_ptr->model).poly_vert_list;
    }
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_0050ddd0
              (g_CDemonSet_PTR_005be368,pSVar8,iVar4 / 2,iVar9);
    iVar4 = (this_ptr->model).poly_count / 2;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (g_CDemonSet_PTR_005be368,(this_ptr->model).vertex_count,iVar4,
               (this_ptr->model).poly_vert_list + iVar4,(this_ptr->model).vertex_list,4,
               (CVector3i *)0x0);
    if (62999 < iVar10) {
      local_20 = (this_ptr->model).poly_count / 2;
      iVar10 = -1;
      pSVar8 = (this_ptr->model).poly_vert_list + local_20;
      goto LAB_00437faa;
    }
    local_20 = (this_ptr->model).poly_count / 2;
    pSVar8 = (this_ptr->model).poly_vert_list + local_20;
  }
  else {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (g_CDemonSet_PTR_005be368,(this_ptr->model).vertex_count,(this_ptr->model).poly_count,
               (this_ptr->model).poly_vert_list,(this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if ((deformable_model != (CDeformableModelInstance *)0x0) &&
       (iVar4 = 0, pCVar2 = this_ptr, 0 < this_ptr->locked_vertex_count)) {
      do {
        pCVar1 = g_CDemonRenderer_PTR_005ae704;
        iVar9 = pCVar2->locked_vertex_indices[0];
        g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[iVar9].r =
             pCVar2->locked_vertex_indices[600];
        pCVar1->vertex_buffer_ptr[iVar9].g = pCVar2->locked_vertex_indices[700];
        pCVar1->vertex_buffer_ptr[iVar9].b = pCVar2->locked_vertex_indices[800];
        iVar4 = iVar4 + 1;
        pCVar2 = (CCloth *)((pCVar2->model).model_filename + 4);
      } while (iVar4 < this_ptr->locked_vertex_count);
    }
    if (iVar10 < 63000) {
      iVar9 = 0x267;
      iVar4 = (this_ptr->model).poly_count;
      pSVar8 = (this_ptr->model).poly_vert_list;
    }
    else {
      iVar9 = -1;
      iVar4 = (this_ptr->model).poly_count;
      pSVar8 = (this_ptr->model).poly_vert_list;
    }
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_0050ddd0
              (g_CDemonSet_PTR_005be368,pSVar8,iVar4,iVar9);
    local_20 = (this_ptr->model).poly_count;
    if (1000 < local_20) {
      local_20 = 1000;
    }
    local_1c = 0;
    if (0 < local_20) {
      local_18 = &DAT_0076934c;
      do {
        pSVar8 = (this_ptr->model).poly_vert_list;
        *(int *)(local_18 + 4) = pSVar8[local_1c].base.base.count;
        iVar4 = 0;
        puVar3 = local_18;
        if (0 < pSVar8[local_1c].base.base.count) {
          do {
            iVar9 = ((pSVar8[local_1c].base.base.count - iVar4) + -1) * 0xc + local_1c * 0x48;
            puVar5 = (uint *)((int)pSVar8 + (uint)bVar6 * -8 + iVar9 + 0x1c);
            *(uint *)(puVar3 + 0x18) = *(uint *)((int)pSVar8 + iVar9 + 0x18);
            *(uint *)(puVar3 + (uint)bVar6 * -8 + 0x1c) = *puVar5;
            *(uint *)((int)(puVar3 + (uint)bVar6 * -8 + 0x1c) + ((uint)bVar6 * -2 + 1) * 4) =
                 puVar5[(uint)bVar6 * -2 + 1];
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 0xc;
          } while (iVar4 < pSVar8[local_1c].base.base.count);
        }
        local_18 = local_18 + 0x48;
        local_1c = local_1c + 1;
      } while (local_1c < local_20);
    }
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (g_CDemonSet_PTR_005be368,(this_ptr->model).vertex_count,local_20,&DAT_0076934c,
               (this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if (62999 < iVar10) {
      iVar10 = -1;
      pSVar8 = (SMRGLPrimitiveQuad *)&DAT_0076934c;
      goto LAB_00437faa;
    }
    pSVar8 = (SMRGLPrimitiveQuad *)&DAT_0076934c;
  }
  iVar10 = 0x267;
LAB_00437faa:
  core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_0050ddd0
            (g_CDemonSet_PTR_005be368,pSVar8,local_20,iVar10);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(g_CDemonRenderer_PTR_005ae704,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(g_CDemonRenderer_PTR_005ae704,1);
  return;
}
