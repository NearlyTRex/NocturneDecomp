// Name: core_cow.cpp_CZombieCow_getTargetPoints_FUN_0043c6a0
// Address: 0043c6a0
// Address Range: [[0043c6a0, 0043c6ee]]
// Convention: __cdecl
// Signature: int __cdecl core_cow_cpp_CZombieCow_getTargetPoints_FUN_0043c6a0(CZombieCow *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_cow_cpp_CZombieCow_getTargetPoints_FUN_0043c6a0(CZombieCow *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f local_10;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_10,this_ptr->bone_spine);
  if (out_points_array == pCVar1) {
    return 1;
  }
  out_points_array->x = pCVar1->x;
  out_points_array->y = pCVar1->y;
  out_points_array->z = pCVar1->z;
  return 1;
}
