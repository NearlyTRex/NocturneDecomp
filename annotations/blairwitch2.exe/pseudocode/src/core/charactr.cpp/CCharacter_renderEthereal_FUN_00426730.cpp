// Name: core_charactr.cpp_CCharacter_renderEthereal_FUN_00426730
// Address: 00426730
// Address Range: [[00426730, 004268af]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderEthereal_FUN_00426730(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_renderEthereal_FUN_00426730(CCharacter *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonRenderer *pCVar1;
  int iVar2;
  CDeformableModel *this_ptr_01;
  int iVar3;
  float10 fVar4;
  CBoundingBox3D *bounding_box;
  SPose local_1aac;
  
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xc000);
  if (this_ptr == *(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
    fVar4 = (float10)DAT_007bda90 + (float10)g_CGamePtr->delta_time_float * (float10)_DAT_005ccda6;
    round();
    DAT_007bda90 = (int)ROUND(fVar4);
  }
  iVar2 = rand();
  _DAT_007bda94 = iVar2 % 6;
  DAT_0060b280->skip_uv_extraction = 1;
  engine_texture_cpp_FUN_00574e00(&DAT_00609a10 + (iVar2 % 6) * 0x18);
  this_ptr_00 = &this_ptr->model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620(this_ptr_00,&local_1aac);
  core_skeleton_cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_00547110
            (this_ptr_00,1.1,-1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(this_ptr_00);
  bounding_box = &(this_ptr->model).bounding_box;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr_00);
  iVar2 = core_skeleton_cpp_CDeformableModel_selectLOD_FUN_00543d00(this_ptr_01,bounding_box);
  core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280(this_ptr_00,iVar2);
  core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_00548940
            (this_ptr_00,DAT_007bda90,0);
  iVar2 = 0;
  do {
    pCVar1 = DAT_0060b280;
    *(uint *)((int)&DAT_0060b280->vertex_buffer_ptr->r + iVar2) = 0xb332;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->g + iVar2) = 0xb332;
    iVar3 = iVar2 + 0x30;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->b + iVar2) = 0xffff;
    iVar2 = iVar3;
  } while (iVar3 != 96000);
  core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_00547370(&this_ptr->model,0x267,1);
  DAT_0060b280->skip_uv_extraction = 0;
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005486f0
            (&this_ptr->model,&local_1aac);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  return;
}
