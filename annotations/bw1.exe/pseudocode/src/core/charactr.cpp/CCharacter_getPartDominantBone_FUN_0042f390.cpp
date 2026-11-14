// Name: core_charactr.cpp_CCharacter_getPartDominantBone_FUN_0042f390
// Address: 0042f390
// Address Range: [[0042f390, 0042f3b3]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042f390(CCharacter *this_ptr,int part_index)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042f390(CCharacter *this_ptr,int part_index)

{
  CDeformableModel *this_ptr_00;
  SPart *pSVar1;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          (&this_ptr->model);
  pSVar1 = core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_00565760(this_ptr_00,part_index);
  return pSVar1->dominant_bone;
}
