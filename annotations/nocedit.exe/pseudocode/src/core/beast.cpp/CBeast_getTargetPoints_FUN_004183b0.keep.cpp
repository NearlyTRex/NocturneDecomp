// Name: core_beast.cpp_CBeast_getTargetPoints_FUN_004183b0
// Address: 004183b0
// MANUAL RECONSTRUCTION
// Address Range: [[004183b0, 004183f8]]
// Convention: __cdecl
// Signature: int __cdecl core_beast_cpp_CBeast_getTargetPoints_FUN_004183b0(CBeast *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_beast_cpp_CBeast_getTargetPoints_FUN_004183b0(CBeast *this_ptr,CVector3f *out_points_array)

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
