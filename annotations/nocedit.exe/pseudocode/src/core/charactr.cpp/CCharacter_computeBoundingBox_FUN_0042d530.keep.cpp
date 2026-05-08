// Name: core_charactr.cpp_CCharacter_computeBoundingBox_FUN_0042d530
// Address: 0042d530
// MANUAL RECONSTRUCTION
// Address Range: [[0042d530, 0042d598]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_computeBoundingBox_FUN_0042d530(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_computeBoundingBox_FUN_0042d530(CCharacter *this_ptr)

{
  CVector3f *pCVar1;
  CBoundingBox3D *pCVar2;
  CBoundingBox3D CStack_1c;
  
  if ((this_ptr->model).model_name[0] != '\0') {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005a16c0
                       (&this_ptr->model,&CStack_1c);
    if (&this_ptr->cached_bounding_box != pCVar2) {
      (this_ptr->cached_bounding_box).min = pCVar2->min;
    }
    pCVar1 = &(this_ptr->cached_bounding_box).max;
    if (pCVar1 != &pCVar2->max) {
      *pCVar1 = pCVar2->max;
      return;
    }
  }
  return;
}
