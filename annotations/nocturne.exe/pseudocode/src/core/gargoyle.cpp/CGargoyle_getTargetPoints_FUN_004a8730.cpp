// Name: core_gargoyle.cpp_CGargoyle_getTargetPoints_FUN_004a8730
// Address: 004a8730
// Address Range: [[004a8730, 004a88ce]]
// Convention: __cdecl
// Signature: int __cdecl core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004a8730(CGargoyle *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004a8730(CGargoyle *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar3 = 1;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_4c,_DAT_01c78b18);
  if (out_points_array != pCVar1) {
    out_points_array->x = pCVar1->x;
    out_points_array->y = pCVar1->y;
    out_points_array->z = pCVar1->z;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (&(this_ptr->base).base.model,&local_40,_DAT_01c78b2c);
    if (out_points_array + 1 != pCVar1) {
      out_points_array[1].x = pCVar1->x;
      out_points_array[1].y = pCVar1->y;
      out_points_array[1].z = pCVar1->z;
    }
    iVar3 = 2;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (&(this_ptr->base).base.model,&local_34,_DAT_01c78b30);
    pCVar2 = out_points_array + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[8]] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (&(this_ptr->base).base.model,&local_1c,_DAT_01c78b3c);
    pCVar2 = out_points_array + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[9]] == 0) {
    return iVar3;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_28,_DAT_01c78b44);
  pCVar2 = out_points_array + iVar3;
  if (pCVar2 != pCVar1) {
    pCVar2->x = pCVar1->x;
    pCVar2->y = pCVar1->y;
    pCVar2->z = pCVar1->z;
  }
  return iVar3 + 1;
}
