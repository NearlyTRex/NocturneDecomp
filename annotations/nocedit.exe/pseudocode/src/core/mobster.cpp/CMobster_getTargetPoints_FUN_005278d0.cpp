// Name: core_mobster.cpp_CMobster_getTargetPoints_FUN_005278d0
// Address: 005278d0
// Address Range: [[005278d0, 005279c8]]
// Convention: __cdecl
// Signature: int __cdecl core_mobster_cpp_CMobster_getTargetPoints_FUN_005278d0(CMobster *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_mobster_cpp_CMobster_getTargetPoints_FUN_005278d0(CMobster *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar2 = 1;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_1c,INT_02f37ec8);
  if (out_points_array != pCVar1) {
    out_points_array->x = pCVar1->x;
    out_points_array->y = pCVar1->y;
    out_points_array->z = pCVar1->z;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk2 + 0x30)] != 0)
  {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_28,INT_02f37eec);
    if (out_points_array + 1 != pCVar1) {
      out_points_array[1].x = pCVar1->x;
      out_points_array[1].y = pCVar1->y;
      out_points_array[1].z = pCVar1->z;
    }
    iVar2 = 2;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk2 + 0x34)] == 0)
  {
    return iVar2;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_34,INT_02f37ef4);
  pCVar3 = out_points_array + iVar2;
  if (pCVar3 != pCVar1) {
    pCVar3->x = pCVar1->x;
    pCVar3->y = pCVar1->y;
    pCVar3->z = pCVar1->z;
  }
  return iVar2 + 1;
}
