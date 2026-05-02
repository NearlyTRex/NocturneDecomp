// Name: core_mobster.cpp_CMobster_getTargetPoints_FUN_005278d0
// Address: 005278d0
// MANUAL RECONSTRUCTION
// Address Range: [[005278d0, 005279c8]]
// Convention: __cdecl
// Signature: int __cdecl core_mobster_cpp_CMobster_getTargetPoints_FUN_005278d0(CMobster *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_mobster_cpp_CMobster_getTargetPoints_FUN_005278d0(CMobster *this_ptr,CVector3f *out_points_array)

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
                     (&(this_ptr->base).base.model,&local_1c,g_MobsterIndices[0]);
  if (out_points_array != pCVar1) {
    out_points_array->x = pCVar1->x;
    out_points_array->y = pCVar1->y;
    out_points_array->z = pCVar1->z;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[8]] != 0) {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_28,g_MobsterIndices[9]);
    if (out_points_array + 1 != pCVar2) {
      out_points_array[1].x = pCVar2->x;
      out_points_array[1].y = pCVar2->y;
      out_points_array[1].z = pCVar2->z;
    }
    iVar2 = 2;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[9]] == 0) {
    return iVar2;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_34,g_MobsterIndices[0xb]);
  pCVar3 = out_points_array + iVar2;
  if (pCVar3 != pCVar2) {
    pCVar3->x = pCVar2->x;
    pCVar3->y = pCVar2->y;
    pCVar3->z = pCVar2->z;
  }
  return iVar2 + 1;
}
