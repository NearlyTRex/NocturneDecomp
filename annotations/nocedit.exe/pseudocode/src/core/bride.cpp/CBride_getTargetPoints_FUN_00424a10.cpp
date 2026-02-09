// Name: core_bride.cpp_CBride_getTargetPoints_FUN_00424a10
// Address: 00424a10
// Address Range: [[00424a10, 00424a9e]]
// Convention: __cdecl
// Signature: int __cdecl core_bride_cpp_CBride_getTargetPoints_FUN_00424a10(CBride *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl
core_bride_cpp_CBride_getTargetPoints_FUN_00424a10(CBride *this_ptr,CVector3f *out_points_array)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  CVector3f local_1c;
  CVector3f local_10;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk + 0x20)] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (this_ptr_00,&local_10,INT_00822cdc);
    if (out_points_array != pCVar1) {
      out_points_array->x = pCVar1->x;
      out_points_array->y = pCVar1->y;
      out_points_array->z = pCVar1->z;
    }
    return 1;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr_00,&local_1c,INT_00822d00);
  if (out_points_array != pCVar1) {
    out_points_array->x = pCVar1->x;
    out_points_array->y = pCVar1->y;
    out_points_array->z = pCVar1->z;
  }
  return 1;
}
