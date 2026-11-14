// Name: core_cloth.cpp_CCloth_render_FUN_0043f460
// Address: 0043f460
// Address Range: [[0043f460, 0043f8b3]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_render_FUN_0043f460(CCloth *this_ptr,CDeformableModelInstance *deformable_model)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_render_FUN_0043f460(CCloth *this_ptr,CDeformableModelInstance *deformable_model)

{
  CDemonRenderer *pCVar1;
  CCloth *pCVar2;
  byte *puVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  SMRGLPrimitiveQuad *pSVar8;
  int iVar9;
  int iVar10;
  int local_1c;
  int local_18;
  byte *local_14;
  
  bVar6 = 0;
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00538ad0
            (g_CDemonSetPtr,(this_ptr->model).vertex_count,(this_ptr->model).vertex_list);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
  engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  fVar7 = (float10)this_ptr->weight * (float10)_DAT_005b91d8;
  round();
  iVar10 = (int)ROUND(fVar7);
  if (iVar10 < 1000) {
    return;
  }
  if (iVar10 < 63000) {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,iVar10);
  }
  engine_texture_cpp_FUN_0056aa10((this_ptr->model).texture_list);
  if (this_ptr->transparency == 0.0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_00538dd0
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,(this_ptr->model).poly_count / 2,
               (this_ptr->model).poly_vert_list,(this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if ((deformable_model != (CDeformableModelInstance *)0x0) &&
       (iVar4 = 0, pCVar2 = this_ptr, 0 < this_ptr->locked_vertex_count)) {
      do {
        pCVar1 = DAT_005f2afc;
        iVar9 = pCVar2->locked_vertex_indices[0];
        DAT_005f2afc->vertex_buffer_ptr[iVar9].r = pCVar2->locked_vertex_indices[600];
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
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_0053ab80(g_CDemonSetPtr,pSVar8,iVar4 / 2,iVar9);
    iVar4 = (this_ptr->model).poly_count / 2;
    core_set_cpp_CDemonSet_lightVerticies_FUN_00538dd0
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,iVar4,
               (this_ptr->model).poly_vert_list + iVar4,(this_ptr->model).vertex_list,4,
               (CVector3i *)0x0);
    if (62999 < iVar10) {
      local_1c = (this_ptr->model).poly_count / 2;
      iVar10 = -1;
      pSVar8 = (this_ptr->model).poly_vert_list + local_1c;
      goto LAB_0043f65a;
    }
    local_1c = (this_ptr->model).poly_count / 2;
    pSVar8 = (this_ptr->model).poly_vert_list + local_1c;
  }
  else {
    core_set_cpp_CDemonSet_lightVerticies_FUN_00538dd0
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,(this_ptr->model).poly_count,
               (this_ptr->model).poly_vert_list,(this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if ((deformable_model != (CDeformableModelInstance *)0x0) &&
       (iVar4 = 0, pCVar2 = this_ptr, 0 < this_ptr->locked_vertex_count)) {
      do {
        pCVar1 = DAT_005f2afc;
        iVar9 = pCVar2->locked_vertex_indices[0];
        DAT_005f2afc->vertex_buffer_ptr[iVar9].r = pCVar2->locked_vertex_indices[600];
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
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_0053ab80(g_CDemonSetPtr,pSVar8,iVar4,iVar9);
    local_1c = (this_ptr->model).poly_count;
    if (1000 < local_1c) {
      local_1c = 1000;
    }
    local_18 = 0;
    if (0 < local_1c) {
      local_14 = &DAT_007e6564;
      do {
        pSVar8 = (this_ptr->model).poly_vert_list;
        *(int *)(local_14 + 4) = pSVar8[local_18].base.base.count;
        iVar4 = 0;
        puVar3 = local_14;
        if (0 < pSVar8[local_18].base.base.count) {
          do {
            iVar9 = ((pSVar8[local_18].base.base.count - iVar4) + -1) * 0xc + local_18 * 0x48;
            puVar5 = (uint *)((int)pSVar8 + (uint)bVar6 * -8 + iVar9 + 0x1c);
            *(uint *)(puVar3 + 0x18) = *(uint *)((int)pSVar8 + iVar9 + 0x18);
            *(uint *)(puVar3 + (uint)bVar6 * -8 + 0x1c) = *puVar5;
            *(uint *)((int)(puVar3 + (uint)bVar6 * -8 + 0x1c) + ((uint)bVar6 * -2 + 1) * 4) =
                 puVar5[(uint)bVar6 * -2 + 1];
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 0xc;
          } while (iVar4 < pSVar8[local_18].base.base.count);
        }
        local_14 = local_14 + 0x48;
        local_18 = local_18 + 1;
      } while (local_18 < local_1c);
    }
    core_set_cpp_CDemonSet_lightVerticies_FUN_00538dd0
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,local_1c,&DAT_007e6564,
               (this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if (62999 < iVar10) {
      iVar10 = -1;
      pSVar8 = (SMRGLPrimitiveQuad *)&DAT_007e6564;
      goto LAB_0043f65a;
    }
    pSVar8 = (SMRGLPrimitiveQuad *)&DAT_007e6564;
  }
  iVar10 = 0x267;
LAB_0043f65a:
  core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_0053ab80(g_CDemonSetPtr,pSVar8,local_1c,iVar10);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
  return;
}
