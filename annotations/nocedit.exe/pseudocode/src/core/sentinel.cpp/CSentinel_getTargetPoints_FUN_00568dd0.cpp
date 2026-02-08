// Name: core_sentinel.cpp_CSentinel_getTargetPoints_FUN_00568dd0
// Address: 00568dd0
// Address Range: [[00568dd0, 00568eed]]
// Convention: __cdecl
// Signature: int __cdecl core_sentinel_cpp_CSentinel_getTargetPoints_FUN_00568dd0 (CSentinel *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl
core_sentinel_cpp_CSentinel_getTargetPoints_FUN_00568dd0
          (CSentinel *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_34,INT_0311420c);
  if (out_points_array != pCVar1) {
    out_points_array->x = pCVar1->x;
    out_points_array->y = pCVar1->y;
    out_points_array->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_28,INT_03114220);
  if (out_points_array + 1 != pCVar1) {
    out_points_array[1].x = pCVar1->x;
    out_points_array[1].y = pCVar1->y;
    out_points_array[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_1c,INT_03114224);
  if (out_points_array + 2 != pCVar1) {
    out_points_array[2].x = pCVar1->x;
    out_points_array[2].y = pCVar1->y;
    out_points_array[2].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_40,INT_03114230);
  if (out_points_array + 3 != pCVar1) {
    out_points_array[3].x = pCVar1->x;
    out_points_array[3].y = pCVar1->y;
    out_points_array[3].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_4c,INT_03114238);
  if (out_points_array + 4 == pCVar1) {
    return 5;
  }
  out_points_array[4].x = pCVar1->x;
  out_points_array[4].y = pCVar1->y;
  out_points_array[4].z = pCVar1->z;
  return 5;
}
