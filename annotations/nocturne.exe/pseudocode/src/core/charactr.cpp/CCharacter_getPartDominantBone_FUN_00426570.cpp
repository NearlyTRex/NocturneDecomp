// Name: core_charactr.cpp_CCharacter_getPartDominantBone_FUN_00426570
// Address: 00426570
// Address Range: [[00426570, 00426593]]
// Convention: unknown
// Signature: int core_charactr_cpp_CCharacter_getPartDominantBone_FUN_00426570(int param_1,int param_2)

#include "nocturne.h"

int core_charactr_cpp_CCharacter_getPartDominantBone_FUN_00426570(int param_1,int param_2)

{
  CDeformableModel *this_ptr;
  SPart *pSVar1;
  
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                       ((CDeformableModelInstance *)(param_1 + 0x150));
  pSVar1 = core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_00519b10(this_ptr,param_2);
  return pSVar1->dominant_bone;
}
