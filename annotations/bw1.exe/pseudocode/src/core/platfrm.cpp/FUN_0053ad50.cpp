// Name: core_platfrm.cpp_FUN_0053ad50
// Address: 0053ad50
// Address Range: [[0053ad50, 0053ad6f] [0053ad76, 0053ad8b]]
// Convention: unknown
// Signature: undefined4 core_platfrm_cpp_FUN_0053ad50(int param_1,int param_2)

#include "nocturne.h"

uint core_platfrm_cpp_FUN_0053ad50(int param_1,int param_2)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)(param_1 + 0x158));
  if (*(int *)&pCVar1->field_0x358 == 0) {
    return 1;
  }
  *(int *)(param_2 + 0x24) = param_1 + 0x158;
  return 1;
}
