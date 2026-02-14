// Name: core_larva.cpp_CLarva_getTargetPoints_FUN_00503c00
// Address: 00503c00
// Address Range: [[00503c00, 00503c48]]
// Convention: __cdecl
// Signature: int __cdecl core_larva_cpp_CLarva_getTargetPoints_FUN_00503c00(CLarva *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_larva_cpp_CLarva_getTargetPoints_FUN_00503c00(CLarva *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f local_10;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_10,0);
  if (out_points_array == pCVar1) {
    return 1;
  }
  out_points_array->x = pCVar1->x;
  out_points_array->y = pCVar1->y;
  out_points_array->z = pCVar1->z;
  return 1;
}
