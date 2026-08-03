// Name: core_imp.cpp_CImp_getTargetPoints_FUN_004bce00
// Address: 004bce00
// Address Range: [[004bce00, 004bcfa9]]
// Convention: __cdecl
// Signature: int __cdecl core_imp_cpp_CImp_getTargetPoints_FUN_004bce00(CImp *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_imp_cpp_CImp_getTargetPoints_FUN_004bce00(CImp *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  iVar3 = 0;
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (&(this_ptr->base).base.model,&local_30,_DAT_01cae30c);
    if (out_points_array != pCVar1) {
      out_points_array->x = pCVar1->x;
      out_points_array->y = pCVar1->y;
      out_points_array->z = pCVar1->z;
    }
    iVar3 = 1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (&(this_ptr->base).base.model,&local_3c,_DAT_01cae320);
    pCVar2 = out_points_array + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (&(this_ptr->base).base.model,&local_18,_DAT_01cae324);
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
                       (&(this_ptr->base).base.model,&local_48,_DAT_01cae330);
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
                     (&(this_ptr->base).base.model,&local_24,_DAT_01cae338);
  pCVar2 = out_points_array + iVar3;
  if (pCVar2 != pCVar1) {
    pCVar2->x = pCVar1->x;
    pCVar2->y = pCVar1->y;
    pCVar2->z = pCVar1->z;
  }
  return iVar3 + 1;
}
