// Name: core_charactr.cpp_CCharacter_getPartDominantBone_FUN_0042e370
// Address: 0042e370
// Address Range: [[0042e370, 0042e393]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042e370(CCharacter *this_ptr,int part_index)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042e370(CCharacter *this_ptr,int part_index)

{
  CDeformableModel *this_ptr_00;
  SPart *pSVar1;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                          (&this_ptr->model);
  pSVar1 = core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0054a2f0(this_ptr_00,part_index);
  return pSVar1->dominant_bone;
}
