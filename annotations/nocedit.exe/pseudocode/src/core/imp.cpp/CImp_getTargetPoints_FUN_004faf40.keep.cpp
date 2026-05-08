// Name: core_imp.cpp_CImp_getTargetPoints_FUN_004faf40
// Address: 004faf40
// MANUAL RECONSTRUCTION
// Address Range: [[004faf40, 004fb0e9]]
// Convention: __cdecl
// Signature: int __cdecl core_imp_cpp_CImp_getTargetPoints_FUN_004faf40(CImp *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_imp_cpp_CImp_getTargetPoints_FUN_004faf40(CImp *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  int iVar3;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  iVar3 = 0;
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]] != 0) {
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_30,g_ImpIndices[0]);
    if (out_points_array != pCVar3) {
      *out_points_array = *pCVar3;
    }
    iVar3 = 1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_3c,g_ImpIndices[5]);
    pCVar2 = out_points_array + iVar3;
    if (pCVar2 != pCVar1) {
      *pCVar2 = *pCVar1;
    }
    iVar3 = iVar3 + 1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_18,g_ImpIndices[6]);
    pCVar4 = out_points_array + iVar3;
    if (pCVar4 != pCVar3) {
      *pCVar4 = *pCVar3;
    }
    iVar3 = iVar3 + 1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[8]] != 0) {
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_48,g_ImpIndices[9]);
    pCVar4 = out_points_array + iVar3;
    if (pCVar4 != pCVar3) {
      *pCVar4 = *pCVar3;
    }
    iVar3 = iVar3 + 1;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[9]] == 0) {
    return iVar3;
  }
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_24,g_ImpIndices[0xb]);
  pCVar4 = out_points_array + iVar3;
  if (pCVar4 != pCVar3) {
    *pCVar4 = *pCVar3;
  }
  return iVar3 + 1;
}
