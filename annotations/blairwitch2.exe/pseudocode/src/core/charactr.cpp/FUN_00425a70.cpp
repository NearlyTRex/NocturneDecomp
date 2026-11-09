// Name: core_charactr.cpp_FUN_00425a70
// Address: 00425a70
// Address Range: [[00425a70, 00425a93]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_00425a70(int param_1,int param_2)

#include "nocturne.h"

uint core_charactr_cpp_FUN_00425a70(int param_1,int param_2)

{
  CDeformableModel *this_ptr;
  SPart *pSVar1;
  
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                       ((CDeformableModelInstance *)(param_1 + 0x2b4));
  pSVar1 = core_skeleton_cpp_FUN_005430e0(this_ptr,param_2);
  return *(uint *)(pSVar1 + 0x5c);
}
