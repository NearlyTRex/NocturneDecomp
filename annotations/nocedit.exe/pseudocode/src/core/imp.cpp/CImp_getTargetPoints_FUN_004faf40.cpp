// Name: core_imp.cpp_CImp_getTargetPoints_FUN_004faf40
// Address: 004faf40
// Address Range: [[004faf40, 004fb0e9]]
// Convention: __cdecl
// Signature: int __cdecl core_imp_cpp_CImp_getTargetPoints_FUN_004faf40(CImp *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl
core_imp_cpp_CImp_getTargetPoints_FUN_004faf40(CImp *this_ptr,CVector3f *out_points_array)

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
  if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk + 0x34)] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_30,INT_02db89f4);
    if (out_points_array != pCVar1) {
      out_points_array->x = pCVar1->x;
      out_points_array->y = pCVar1->y;
      out_points_array->z = pCVar1->z;
    }
    iVar3 = 1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk + 0xc)] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_3c,INT_02db8a08);
    pCVar2 = out_points_array + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk + 0x14)] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_18,INT_02db8a0c);
    pCVar2 = out_points_array + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk + 0x2c)] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_48,INT_02db8a18);
    pCVar2 = out_points_array + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk + 0x30)] == 0) {
    return iVar3;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_24,INT_02db8a20);
  pCVar2 = out_points_array + iVar3;
  if (pCVar2 != pCVar1) {
    pCVar2->x = pCVar1->x;
    pCVar2->y = pCVar1->y;
    pCVar2->z = pCVar1->z;
  }
  return iVar3 + 1;
}
