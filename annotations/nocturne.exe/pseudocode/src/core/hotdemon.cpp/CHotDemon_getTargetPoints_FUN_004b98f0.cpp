// Name: core_hotdemon.cpp_CHotDemon_getTargetPoints_FUN_004b98f0
// Address: 004b98f0
// Address Range: [[004b98f0, 004b99aa]]
// Convention: __cdecl
// Signature: int __cdecl core_hotdemon_cpp_CHotDemon_getTargetPoints_FUN_004b98f0(CHotDemon *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hotdemon_cpp_CHotDemon_getTargetPoints_FUN_004b98f0(CHotDemon *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_28,_DAT_01cae1e0);
  if (out_points_array != pCVar1) {
    out_points_array->x = pCVar1->x;
    out_points_array->y = pCVar1->y;
    out_points_array->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_1c,_DAT_01cae204);
  if (out_points_array + 1 != pCVar1) {
    out_points_array[1].x = pCVar1->x;
    out_points_array[1].y = pCVar1->y;
    out_points_array[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_34,_DAT_01cae20c);
  if (out_points_array + 2 == pCVar1) {
    return 3;
  }
  out_points_array[2].x = pCVar1->x;
  out_points_array[2].y = pCVar1->y;
  out_points_array[2].z = pCVar1->z;
  return 3;
}
