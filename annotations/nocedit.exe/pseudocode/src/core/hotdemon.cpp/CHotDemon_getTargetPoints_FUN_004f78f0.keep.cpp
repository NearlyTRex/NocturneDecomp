// Name: core_hotdemon.cpp_CHotDemon_getTargetPoints_FUN_004f78f0
// Address: 004f78f0
// MANUAL RECONSTRUCTION
// Address Range: [[004f78f0, 004f79aa]]
// Convention: __cdecl
// Signature: int __cdecl core_hotdemon_cpp_CHotDemon_getTargetPoints_FUN_004f78f0(CHotDemon *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_hotdemon_cpp_CHotDemon_getTargetPoints_FUN_004f78f0(CHotDemon *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_28,g_HotDemonIndices[0]);
  if (out_points_array != pCVar1) {
    *out_points_array = *pCVar1;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_1c,g_HotDemonIndices[9]);
  if (out_points_array + 1 != pCVar2) {
    out_points_array[1] = *pCVar2;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_34,g_HotDemonIndices[0xb]);
  if (out_points_array + 2 != pCVar2) {
    out_points_array[2] = *pCVar2;
  }
  return 3;
}
