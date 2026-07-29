// Name: core_dog.cpp_CZombieDog_getTargetPoints_FUN_00454ee0
// Address: 00454ee0
// Address Range: [[00454ee0, 00454f2e]]
// Convention: __cdecl
// Signature: int __cdecl core_dog_cpp_CZombieDog_getTargetPoints_FUN_00454ee0(CZombieDog *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_dog_cpp_CZombieDog_getTargetPoints_FUN_00454ee0(CZombieDog *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f local_10;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_10,this_ptr->bone_indices[0]);
  if (out_points_array == pCVar1) {
    return 1;
  }
  out_points_array->x = pCVar1->x;
  out_points_array->y = pCVar1->y;
  out_points_array->z = pCVar1->z;
  return 1;
}
