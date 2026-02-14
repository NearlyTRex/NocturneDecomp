// Name: core_cloth.cpp_CCloth_render_FUN_0043bae0
// Address: 0043bae0
// Address Range: [[0043bae0, 0043bf33]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_render_FUN_0043bae0(CCloth *this_ptr,int use_joined_light)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_render_FUN_0043bae0(CCloth *this_ptr,int use_joined_light)

{
  SMRGLPrimitiveQuad **ppSVar1;
  CDemonRenderer *pCVar2;
  CCloth *pCVar3;
  byte *puVar4;
  int iVar5;
  byte bVar6;
  double dVar7;
  SMRGLPrimitiveQuad *pSVar8;
  int iVar9;
  int iVar10;
  int local_20;
  int local_1c;
  byte *local_18;
  
  bVar6 = 0;
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,(this_ptr->model).vertex_count,(int *)(this_ptr->model).vertex_list);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  dVar7 = round((double)(this_ptr->transparency * (float)65535));
  iVar10 = (int)ROUND(dVar7);
  if (iVar10 < 1000) {
    return;
  }
  if (iVar10 < 63000) {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,iVar10);
  }
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&(this_ptr->model).texture_list[0].base);
  if (this_ptr->double_sided == 0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,(this_ptr->model).poly_count / 2,
               (SInputFace *)(this_ptr->model).poly_vert_list,(int)(this_ptr->model).vertex_list,4,0
              );
    if ((use_joined_light != 0) && (iVar5 = 0, pCVar3 = this_ptr, 0 < this_ptr->locked_vertex_count)
       ) {
      do {
        pCVar2 = g_CDemonRendererPtr2;
        iVar9 = pCVar3->locked_vertex_indices[0];
        g_CDemonRendererPtr2->vertex_buffer_ptr[iVar9].light = pCVar3->locked_vertex_indices[600];
        pCVar2->vertex_buffer_ptr[iVar9].color = pCVar3->locked_vertex_indices[700];
        pCVar2->vertex_buffer_ptr[iVar9].fog = pCVar3->locked_vertex_indices[800];
        iVar5 = iVar5 + 1;
        pCVar3 = (CCloth *)((pCVar3->model).model_filename + 4);
      } while (iVar5 < this_ptr->locked_vertex_count);
    }
    if (iVar10 < 63000) {
      iVar5 = (this_ptr->model).poly_count;
      iVar9 = 0x267;
      pSVar8 = (SMRGLPrimitiveQuad *)(this_ptr->model).poly_vert_list;
    }
    else {
      iVar5 = (this_ptr->model).poly_count;
      iVar9 = -1;
      pSVar8 = (SMRGLPrimitiveQuad *)(this_ptr->model).poly_vert_list;
    }
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(g_CDemonSetPtr,pSVar8,iVar5 / 2,iVar9);
    iVar5 = (this_ptr->model).poly_count / 2;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,iVar5,
               (SInputFace *)((this_ptr->model).poly_vert_list + iVar5 * 0x12),
               (int)(this_ptr->model).vertex_list,4,0);
    if (62999 < iVar10) {
      local_20 = (this_ptr->model).poly_count / 2;
      iVar10 = -1;
      pSVar8 = (SMRGLPrimitiveQuad *)((this_ptr->model).poly_vert_list + local_20 * 0x12);
      goto LAB_0043bcda;
    }
    local_20 = (this_ptr->model).poly_count / 2;
    pSVar8 = (SMRGLPrimitiveQuad *)((this_ptr->model).poly_vert_list + local_20 * 0x12);
  }
  else {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,(this_ptr->model).poly_count,
               (SInputFace *)(this_ptr->model).poly_vert_list,(int)(this_ptr->model).vertex_list,4,0
              );
    if ((use_joined_light != 0) && (iVar5 = 0, pCVar3 = this_ptr, 0 < this_ptr->locked_vertex_count)
       ) {
      do {
        pCVar2 = g_CDemonRendererPtr2;
        iVar9 = pCVar3->locked_vertex_indices[0];
        g_CDemonRendererPtr2->vertex_buffer_ptr[iVar9].light = pCVar3->locked_vertex_indices[600];
        pCVar2->vertex_buffer_ptr[iVar9].color = pCVar3->locked_vertex_indices[700];
        pCVar2->vertex_buffer_ptr[iVar9].fog = pCVar3->locked_vertex_indices[800];
        iVar5 = iVar5 + 1;
        pCVar3 = (CCloth *)((pCVar3->model).model_filename + 4);
      } while (iVar5 < this_ptr->locked_vertex_count);
    }
    if (iVar10 < 63000) {
      iVar9 = 0x267;
      iVar5 = (this_ptr->model).poly_count;
      pSVar8 = (SMRGLPrimitiveQuad *)(this_ptr->model).poly_vert_list;
    }
    else {
      iVar9 = -1;
      iVar5 = (this_ptr->model).poly_count;
      pSVar8 = (SMRGLPrimitiveQuad *)(this_ptr->model).poly_vert_list;
    }
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(g_CDemonSetPtr,pSVar8,iVar5,iVar9);
    local_20 = (this_ptr->model).poly_count;
    if (1000 < local_20) {
      local_20 = 1000;
    }
    local_1c = 0;
    if (0 < local_20) {
      local_18 = &DAT_00827500;
      do {
        ppSVar1 = (this_ptr->model).poly_vert_list;
        *(SMRGLPrimitiveQuad **)(local_18 + 4) = ppSVar1[local_1c * 0x12 + 1];
        iVar5 = 0;
        puVar4 = local_18;
        if (0 < (int)ppSVar1[local_1c * 0x12 + 1]) {
          do {
            iVar9 = (int)ppSVar1[local_1c * 0x12 + 1] + (-1 - iVar5);
            *(SMRGLPrimitiveQuad **)(puVar4 + 0x18) = ppSVar1[local_1c * 0x12 + iVar9 * 3 + 6];
            *(SMRGLPrimitiveQuad **)(puVar4 + (uint)bVar6 * -8 + 0x1c) =
                 ppSVar1[local_1c * 0x12 + iVar9 * 3 + (uint)bVar6 * -2 + 7];
            *(SMRGLPrimitiveQuad **)
             ((int)(puVar4 + (uint)bVar6 * -8 + 0x1c) + ((uint)bVar6 * -2 + 1) * 4) =
                 (ppSVar1 + local_1c * 0x12 + iVar9 * 3 + (uint)bVar6 * -2 + 7)
                 [(uint)bVar6 * -2 + 1];
            iVar5 = iVar5 + 1;
            puVar4 = puVar4 + 0xc;
          } while (iVar5 < (int)ppSVar1[local_1c * 0x12 + 1]);
        }
        local_18 = local_18 + 0x48;
        local_1c = local_1c + 1;
      } while (local_1c < local_20);
    }
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,(this_ptr->model).vertex_count,local_20,(SInputFace *)&DAT_00827500,
               (int)(this_ptr->model).vertex_list,4,0);
    if (62999 < iVar10) {
      iVar10 = -1;
      pSVar8 = (SMRGLPrimitiveQuad *)&DAT_00827500;
      goto LAB_0043bcda;
    }
    pSVar8 = (SMRGLPrimitiveQuad *)&DAT_00827500;
  }
  iVar10 = 0x267;
LAB_0043bcda:
  core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(g_CDemonSetPtr,pSVar8,local_20,iVar10);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
  return;
}
