// Name: core_charactr.cpp_CCharacter_FUN_0042a3f0
// Address: 0042a3f0
// Address Range: [[0042a3f0, 0042a413]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042a3f0(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042a3f0(CCharacter *this_ptr)

{
  CDeformableModel *this_ptr_00;
  SPart *pSVar1;
  int unaff_retaddr;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                          (&this_ptr->model);
  pSVar1 = core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220(this_ptr_00,unaff_retaddr);
  return pSVar1->dominant_bone;
}
