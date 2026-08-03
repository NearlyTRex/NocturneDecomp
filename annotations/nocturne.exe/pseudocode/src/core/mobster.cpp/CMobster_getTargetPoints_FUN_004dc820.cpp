// Name: core_mobster.cpp_CMobster_getTargetPoints_FUN_004dc820
// Address: 004dc820
// Address Range: [[004dc820, 004dc918]]
// Convention: __cdecl
// Signature: int __cdecl core_mobster_cpp_CMobster_getTargetPoints_FUN_004dc820(CMobster *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mobster_cpp_CMobster_getTargetPoints_FUN_004dc820(CMobster *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar2 = 1;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_1c,_DAT_01ccdba8);
  if (out_points_array != pCVar1) {
    out_points_array->x = pCVar1->x;
    out_points_array->y = pCVar1->y;
    out_points_array->z = pCVar1->z;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[8]] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (&(this_ptr->base).base.model,&local_28,_DAT_01ccdbcc);
    if (out_points_array + 1 != pCVar1) {
      out_points_array[1].x = pCVar1->x;
      out_points_array[1].y = pCVar1->y;
      out_points_array[1].z = pCVar1->z;
    }
    iVar2 = 2;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[9]] == 0) {
    return iVar2;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_34,_DAT_01ccdbd4);
  pCVar3 = out_points_array + iVar2;
  if (pCVar3 != pCVar1) {
    pCVar3->x = pCVar1->x;
    pCVar3->y = pCVar1->y;
    pCVar3->z = pCVar1->z;
  }
  return iVar2 + 1;
}
