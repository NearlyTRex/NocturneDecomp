// Name: core_drone.cpp_CDrone_getTargetPoints_FUN_0048f4d0
// Address: 0048f4d0
// MANUAL RECONSTRUCTION
// Address Range: [[0048f4d0, 0048f518]]
// Convention: __cdecl
// Signature: int __cdecl core_drone_cpp_CDrone_getTargetPoints_FUN_0048f4d0(CDrone *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_drone_cpp_CDrone_getTargetPoints_FUN_0048f4d0(CDrone *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f local_10;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_10,0);
  if (out_points_array == pCVar1) {
    return 1;
  }
  *out_points_array = *pCVar1;
  return 1;
}
