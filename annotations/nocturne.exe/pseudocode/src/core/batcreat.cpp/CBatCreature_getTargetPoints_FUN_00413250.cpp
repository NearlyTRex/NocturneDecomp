// Name: core_batcreat.cpp_CBatCreature_getTargetPoints_FUN_00413250
// Address: 00413250
// Address Range: [[00413250, 0041329f]]
// Convention: __cdecl
// Signature: int __cdecl core_batcreat_cpp_CBatCreature_getTargetPoints_FUN_00413250(CBatCreature *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_batcreat_cpp_CBatCreature_getTargetPoints_FUN_00413250(CBatCreature *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f local_14;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_14,DAT_0076459c);
  if (out_points_array == pCVar1) {
    return 1;
  }
  out_points_array->x = pCVar1->x;
  out_points_array->y = pCVar1->y;
  out_points_array->z = pCVar1->z;
  return 1;
}
