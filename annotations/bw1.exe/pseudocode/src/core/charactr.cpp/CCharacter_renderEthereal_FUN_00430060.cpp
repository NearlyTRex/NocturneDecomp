// Name: core_charactr.cpp_CCharacter_renderEthereal_FUN_00430060
// Address: 00430060
// Address Range: [[00430060, 004301df]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderEthereal_FUN_00430060(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_renderEthereal_FUN_00430060(CCharacter *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonRenderer *pCVar1;
  int iVar2;
  CDeformableModel *this_ptr_01;
  int iVar3;
  float10 fVar4;
  CBoundingBox3D *bounding_box;
  SPose local_1aac [6816];
  
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xc000);
  if (this_ptr == *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
    fVar4 = (float10)DAT_007c6178 + (float10)g_CGamePtr->delta_time_float * (float10)_DAT_005d5a2f;
    round();
    DAT_007c6178 = (int)ROUND(fVar4);
  }
  iVar2 = rand();
  _DAT_007c617c = iVar2 % 6;
  DAT_00612560->skip_uv_extraction = 1;
  engine_texture_cpp_FUN_00597a20(&DAT_00610c20 + (iVar2 % 6) * 0x18);
  this_ptr_00 = &this_ptr->model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0(this_ptr_00,local_1aac);
  core_skeleton_cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005697b0
            (this_ptr_00,1.1,-1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(this_ptr_00);
  bounding_box = &(this_ptr->model).bounding_box;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr_00);
  iVar2 = core_skeleton_cpp_CDeformableModel_selectLOD_FUN_00566380(this_ptr_01,bounding_box);
  core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00569920(this_ptr_00,iVar2);
  core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0056afe0
            (this_ptr_00,DAT_007c6178,0);
  iVar2 = 0;
  do {
    pCVar1 = DAT_00612560;
    *(uint *)(DAT_00612560->vertex_buffer_ptr + iVar2 + 0x20) = 0xb332;
    *(uint *)(pCVar1->vertex_buffer_ptr + iVar2 + 0x24) = 0xb332;
    iVar3 = iVar2 + 0x30;
    *(uint *)(pCVar1->vertex_buffer_ptr + iVar2 + 0x28) = 0xffff;
    iVar2 = iVar3;
  } while (iVar3 != 96000);
  core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_00569a10(&this_ptr->model,0x267,1);
  DAT_00612560->skip_uv_extraction = 0;
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90
            (&this_ptr->model,local_1aac);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  return;
}
