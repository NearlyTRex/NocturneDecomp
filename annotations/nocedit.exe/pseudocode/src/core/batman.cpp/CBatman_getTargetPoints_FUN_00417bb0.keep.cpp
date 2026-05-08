// Name: core_batman.cpp_CBatman_getTargetPoints_FUN_00417bb0
// Address: 00417bb0
// MANUAL RECONSTRUCTION
// Address Range: [[00417bb0, 00417ca8]]
// Convention: __cdecl
// Signature: int __cdecl core_batman_cpp_CBatman_getTargetPoints_FUN_00417bb0(CBatman *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_batman_cpp_CBatman_getTargetPoints_FUN_00417bb0(CBatman *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar2;
  CVector3f *pCVar3;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar2 = 1;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_1c,g_BatmanIndices[0]);
  if (out_points_array != pCVar1) {
    *out_points_array = *pCVar1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] != 0) {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_28,g_BatmanIndices[9]);
    if (out_points_array + 1 != pCVar2) {
      out_points_array[1] = *pCVar2;
    }
    iVar2 = 2;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] == 0) {
    return iVar2;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_34,g_BatmanIndices[0xb]);
  pCVar3 = out_points_array + iVar2;
  if (pCVar3 != pCVar2) {
    *pCVar3 = *pCVar2;
  }
  return iVar2 + 1;
}
