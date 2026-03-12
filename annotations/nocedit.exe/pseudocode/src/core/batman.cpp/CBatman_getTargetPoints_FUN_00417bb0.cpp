// Name: core_batman.cpp_CBatman_getTargetPoints_FUN_00417bb0
// Address: 00417bb0
// Address Range: [[00417bb0, 00417ca8]]
// Convention: __cdecl
// Signature: int __cdecl core_batman_cpp_CBatman_getTargetPoints_FUN_00417bb0(CBatman *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

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
                     (&(this_ptr->base).base.model,&local_1c,INT_008227b8);
  if (out_points_array != pCVar1) {
    out_points_array->x = pCVar1->x;
    out_points_array->y = pCVar1->y;
    out_points_array->z = pCVar1->z;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] != 0) {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_28,INT_008227dc);
    if (out_points_array + 1 != pCVar2) {
      out_points_array[1].x = pCVar2->x;
      out_points_array[1].y = pCVar2->y;
      out_points_array[1].z = pCVar2->z;
    }
    iVar2 = 2;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] == 0) {
    return iVar2;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_34,INT_008227e4);
  pCVar3 = out_points_array + iVar2;
  if (pCVar3 != pCVar2) {
    pCVar3->x = pCVar2->x;
    pCVar3->y = pCVar2->y;
    pCVar3->z = pCVar2->z;
  }
  return iVar2 + 1;
}
