// Name: core_bride.cpp_CBride_getTargetPoints_FUN_00424a10
// Address: 00424a10
// MANUAL RECONSTRUCTION
// Address Range: [[00424a10, 00424a9e]]
// Convention: __cdecl
// Signature: int __cdecl core_bride_cpp_CBride_getTargetPoints_FUN_00424a10(CBride *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_bride_cpp_CBride_getTargetPoints_FUN_00424a10(CBride *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f local_1c;
  CVector3f local_10;
  CDeformableModelInstance *this_ptr_00;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[8]] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (this_ptr_00,&local_10,g_BrideIndices[0]);
    if (out_points_array != pCVar1) {
      *out_points_array = *pCVar1;
    }
    return 1;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr_00,&local_1c,g_BrideIndices[9]);
  if (out_points_array != pCVar2) {
    *out_points_array = *pCVar2;
  }
  return 1;
}
