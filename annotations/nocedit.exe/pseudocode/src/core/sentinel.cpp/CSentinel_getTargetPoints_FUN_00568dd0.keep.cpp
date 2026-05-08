// Name: core_sentinel.cpp_CSentinel_getTargetPoints_FUN_00568dd0
// Address: 00568dd0
// MANUAL RECONSTRUCTION
// Address Range: [[00568dd0, 00568eed]]
// Convention: __cdecl
// Signature: int __cdecl core_sentinel_cpp_CSentinel_getTargetPoints_FUN_00568dd0(CSentinel *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_sentinel_cpp_CSentinel_getTargetPoints_FUN_00568dd0(CSentinel *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_34,g_SentinelIndices[0]);
  if (out_points_array != pCVar1) {
    *out_points_array = *pCVar1;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_28,g_SentinelIndices[5]);
  if (out_points_array + 1 != pCVar2) {
    out_points_array[1] = *pCVar2;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_1c,g_SentinelIndices[6]);
  if (out_points_array + 2 != pCVar2) {
    out_points_array[2] = *pCVar2;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_40,g_SentinelIndices[9]);
  if (out_points_array + 3 != pCVar2) {
    out_points_array[3] = *pCVar2;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_4c,g_SentinelIndices[0xb]);
  if (out_points_array + 4 != pCVar2) {
    out_points_array[4] = *pCVar2;
  }
  return 5;
}
