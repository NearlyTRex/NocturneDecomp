// Name: core_werewolf.cpp_CWerewolf_getTargetPoints_FUN_005f1df0
// Address: 005f1df0
// Address Range: [[005f1df0, 005f1e3e]]
// Convention: __cdecl
// Signature: int __cdecl core_werewolf_cpp_CWerewolf_getTargetPoints_FUN_005f1df0 (CWerewolf *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl
core_werewolf_cpp_CWerewolf_getTargetPoints_FUN_005f1df0
          (CWerewolf *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f local_10;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_10,this_ptr->bone_index);
  if (out_points_array == pCVar1) {
    return 1;
  }
  out_points_array->x = pCVar1->x;
  out_points_array->y = pCVar1->y;
  out_points_array->z = pCVar1->z;
  return 1;
}
