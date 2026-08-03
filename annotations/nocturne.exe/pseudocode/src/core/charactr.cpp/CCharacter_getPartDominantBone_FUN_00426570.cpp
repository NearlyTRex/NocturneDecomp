// Name: core_charactr.cpp_CCharacter_getPartDominantBone_FUN_00426570
// Address: 00426570
// Address Range: [[00426570, 00426593]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_getPartDominantBone_FUN_00426570(CCharacter *this_ptr,int part_index)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_getPartDominantBone_FUN_00426570(CCharacter *this_ptr,int part_index)

{
  CDeformableModel *this_ptr_00;
  SPart *pSVar1;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                          (&this_ptr->model);
  pSVar1 = core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_00519b10(this_ptr_00,part_index);
  return pSVar1->dominant_bone;
}
