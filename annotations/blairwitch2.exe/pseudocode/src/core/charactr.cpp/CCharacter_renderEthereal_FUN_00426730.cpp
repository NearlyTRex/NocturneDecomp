// Name: core_charactr.cpp_CCharacter_renderEthereal_FUN_00426730
// Address: 00426730
// Address Range: [[00426730, 004268af]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderEthereal_FUN_00426730(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderEthereal_FUN_00426730(CCharacter *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonRenderer *pCVar1;
  int iVar2;
  CDeformableModel *this_ptr_01;
  int iVar3;
  double dVar4;
  CBoundingBox3D *bounding_box;
  
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(g_CDemonRenderer_PTR_0060b280,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
            (g_CDemonRenderer_PTR_0060b280,0xc000);
  if ((CHero *)this_ptr == g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]) {
    dVar4 = round
                      ((double)((float)g_INT_007bda90 +
                               g_CGamePtr->delta_time_float * 8388608.0f));
    g_INT_007bda90 = (int)ROUND(dVar4);
  }
  iVar2 = rand();
  g_INT_007bda94 = iVar2 % 6;
  g_CDemonRenderer_PTR_0060b280->skip_uv_extraction = 1;
  engine_texture_cpp_ensureTextureLoaded_FUN_00574e00
            (g_SMRGLTextureBasic_ARRAY_00609a10 + iVar2 % 6);
  this_ptr_00 = &this_ptr->model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620
            (this_ptr_00,(SPose *)&stack0xffffe550);
  core_skeleton_cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_00547110
            (this_ptr_00,1.1,-1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(this_ptr_00);
  bounding_box = &(this_ptr->model).bounding_box;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr_00);
  iVar2 = core_skeleton_cpp_CDeformableModel_selectLOD_FUN_00543d00(this_ptr_01,bounding_box);
  core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280(this_ptr_00,iVar2);
  core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_00548940
            (this_ptr_00,g_INT_007bda90,0);
  iVar2 = 0;
  do {
    pCVar1 = g_CDemonRenderer_PTR_0060b280;
    *(uint *)((int)&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->r + iVar2) = 0xb332;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->g + iVar2) = 0xb332;
    iVar3 = iVar2 + 0x30;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->b + iVar2) = 0xffff;
    iVar2 = iVar3;
  } while (iVar3 != 96000);
  core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_00547370(&this_ptr->model,0x267,1);
  g_CDemonRenderer_PTR_0060b280->skip_uv_extraction = 0;
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005486f0
            (&this_ptr->model,(SPose *)&stack0xffffe550);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(g_CDemonRenderer_PTR_0060b280,0);
  return;
}
