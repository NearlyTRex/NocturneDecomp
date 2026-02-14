// Name: core_hotdemon.cpp_CHotDemon_getTargetPoints_FUN_004f78f0
// Address: 004f78f0
// Address Range: [[004f78f0, 004f79aa]]
// Convention: __cdecl
// Signature: int __cdecl core_hotdemon_cpp_CHotDemon_getTargetPoints_FUN_004f78f0(CHotDemon *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_hotdemon_cpp_CHotDemon_getTargetPoints_FUN_004f78f0(CHotDemon *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_28,INT_02db88c8);
  if (out_points_array != pCVar1) {
    out_points_array->x = pCVar1->x;
    out_points_array->y = pCVar1->y;
    out_points_array->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_1c,INT_02db88ec);
  if (out_points_array + 1 != pCVar1) {
    out_points_array[1].x = pCVar1->x;
    out_points_array[1].y = pCVar1->y;
    out_points_array[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_34,INT_02db88f4);
  if (out_points_array + 2 == pCVar1) {
    return 3;
  }
  out_points_array[2].x = pCVar1->x;
  out_points_array[2].y = pCVar1->y;
  out_points_array[2].z = pCVar1->z;
  return 3;
}
