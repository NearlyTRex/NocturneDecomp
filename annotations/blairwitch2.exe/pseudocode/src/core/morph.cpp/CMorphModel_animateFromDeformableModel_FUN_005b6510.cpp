// Name: core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_005b6510
// Address: 005b6510
// Address Range: [[005b6510, 005b655b]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_animateFromDeformableModel_FUN_005b6510(CMorphModel *this_ptr,int part_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_animateFromDeformableModel_FUN_005b6510(CMorphModel *this_ptr,int part_index,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(model_ptr);
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(model_ptr,0);
  iVar1 = *(int *)&model_ptr->field_0x2230;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(model_ptr);
  core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400
            (this_ptr,part_index,*(CVector3i **)&model_ptr->field_0x2234,0,
             *(int *)(&pCVar2->field_0x2c + iVar1 * 4));
  return;
}
