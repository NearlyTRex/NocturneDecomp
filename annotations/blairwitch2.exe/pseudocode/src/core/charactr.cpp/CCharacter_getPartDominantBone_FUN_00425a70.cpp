// Name: core_charactr.cpp_CCharacter_getPartDominantBone_FUN_00425a70
// Address: 00425a70
// Address Range: [[00425a70, 00425a93]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_getPartDominantBone_FUN_00425a70(CCharacter *this_ptr,int part_index)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_getPartDominantBone_FUN_00425a70(CCharacter *this_ptr,int part_index)

{
  CDeformableModel *this_ptr_00;
  SPart *pSVar1;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                          (&this_ptr->model);
  pSVar1 = core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_005430e0(this_ptr_00,part_index);
  return pSVar1->dominant_bone;
}
