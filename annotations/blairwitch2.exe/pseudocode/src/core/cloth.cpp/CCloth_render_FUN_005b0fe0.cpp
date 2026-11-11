// Name: core_cloth.cpp_CCloth_render_FUN_005b0fe0
// Address: 005b0fe0
// Address Range: [[005b0fe0, 005b1433]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_render_FUN_005b0fe0(CCloth *this_ptr,CDeformableModelInstance *deformable_model)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_render_FUN_005b0fe0(CCloth *this_ptr,CDeformableModelInstance *deformable_model)

{
  int iVar1;
  CDemonRenderer *pCVar2;
  CCloth *pCVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  SMRGLPrimitiveQuad *pSVar9;
  int iVar10;
  int iVar11;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar7 = 0;
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00531e90
            (g_CDemonSetPtr,(this_ptr->model).vertex_count,(this_ptr->model).vertex_list);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
  engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  fVar8 = (float10)this_ptr->transparency * (float10)_DAT_005f119b;
  round();
  iVar11 = (int)ROUND(fVar8);
  if (iVar11 < 1000) {
    return;
  }
  if (iVar11 < 63000) {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,iVar11);
  }
  engine_texture_cpp_FUN_00574e00((this_ptr->model).texture_list);
  if (this_ptr->double_sided == 0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_00532190
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,(this_ptr->model).poly_count / 2,
               (this_ptr->model).poly_vert_list,(this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if ((deformable_model != (CDeformableModelInstance *)0x0) &&
       (iVar4 = 0, pCVar3 = this_ptr, 0 < this_ptr->locked_vertex_count)) {
      do {
        pCVar2 = DAT_0060b280;
        iVar10 = pCVar3->locked_vertex_indices[0];
        DAT_0060b280->vertex_buffer_ptr[iVar10].r = pCVar3->locked_vertex_indices[600];
        pCVar2->vertex_buffer_ptr[iVar10].g = pCVar3->locked_vertex_indices[700];
        pCVar2->vertex_buffer_ptr[iVar10].b = pCVar3->locked_vertex_indices[800];
        iVar4 = iVar4 + 1;
        pCVar3 = (CCloth *)((pCVar3->model).model_filename + 4);
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
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00533f40(g_CDemonSetPtr,pSVar9,iVar4 / 2,iVar10)
    ;
    iVar4 = (this_ptr->model).poly_count / 2;
    core_set_cpp_CDemonSet_lightVerticies_FUN_00532190
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,iVar4,
               (this_ptr->model).poly_vert_list + iVar4,(this_ptr->model).vertex_list,4,
               (CVector3i *)0x0);
    if (62999 < iVar11) {
      local_1c = (this_ptr->model).poly_count / 2;
      iVar11 = -1;
      pSVar9 = (this_ptr->model).poly_vert_list + local_1c;
      goto LAB_005b11da;
    }
    local_1c = (this_ptr->model).poly_count / 2;
    pSVar9 = (this_ptr->model).poly_vert_list + local_1c;
  }
  else {
    core_set_cpp_CDemonSet_lightVerticies_FUN_00532190
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,(this_ptr->model).poly_count,
               (this_ptr->model).poly_vert_list,(this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if ((deformable_model != (CDeformableModelInstance *)0x0) &&
       (iVar4 = 0, pCVar3 = this_ptr, 0 < this_ptr->locked_vertex_count)) {
      do {
        pCVar2 = DAT_0060b280;
        iVar10 = pCVar3->locked_vertex_indices[0];
        DAT_0060b280->vertex_buffer_ptr[iVar10].r = pCVar3->locked_vertex_indices[600];
        pCVar2->vertex_buffer_ptr[iVar10].g = pCVar3->locked_vertex_indices[700];
        pCVar2->vertex_buffer_ptr[iVar10].b = pCVar3->locked_vertex_indices[800];
        iVar4 = iVar4 + 1;
        pCVar3 = (CCloth *)((pCVar3->model).model_filename + 4);
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
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00533f40(g_CDemonSetPtr,pSVar9,iVar4,iVar10);
    local_1c = (this_ptr->model).poly_count;
    if (1000 < local_1c) {
      local_1c = 1000;
    }
    local_18 = 0;
    if (0 < local_1c) {
      local_14 = 0x2668a10;
      do {
        pSVar9 = (this_ptr->model).poly_vert_list;
        *(int *)(local_14 + 4) = pSVar9[local_18].base.base.count;
        iVar10 = 0;
        iVar4 = local_14;
        if (0 < pSVar9[local_18].base.base.count) {
          do {
            iVar1 = ((pSVar9[local_18].base.base.count - iVar10) + -1) * 0xc + local_18 * 0x48;
            puVar6 = (uint *)(iVar4 + 0x1c + (uint)bVar7 * -8);
            puVar5 = (uint *)((int)pSVar9 + (uint)bVar7 * -8 + iVar1 + 0x1c);
            *(uint *)(iVar4 + 0x18) = *(uint *)((int)pSVar9 + iVar1 + 0x18);
            *puVar6 = *puVar5;
            puVar6[(uint)bVar7 * -2 + 1] = puVar5[(uint)bVar7 * -2 + 1];
            iVar10 = iVar10 + 1;
            iVar4 = iVar4 + 0xc;
          } while (iVar10 < pSVar9[local_18].base.base.count);
        }
        local_14 = local_14 + 0x48;
        local_18 = local_18 + 1;
      } while (local_18 < local_1c);
    }
    core_set_cpp_CDemonSet_lightVerticies_FUN_00532190
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,local_1c,(void *)0x2668a10,
               (this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if (62999 < iVar11) {
      iVar11 = -1;
      pSVar9 = (SMRGLPrimitiveQuad *)0x2668a10;
      goto LAB_005b11da;
    }
    pSVar9 = (SMRGLPrimitiveQuad *)0x2668a10;
  }
  iVar11 = 0x267;
LAB_005b11da:
  core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00533f40(g_CDemonSetPtr,pSVar9,local_1c,iVar11);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
  return;
}
