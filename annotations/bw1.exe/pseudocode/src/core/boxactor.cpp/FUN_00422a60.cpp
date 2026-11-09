// Name: core_boxactor.cpp_FUN_00422a60
// Address: 00422a60
// Address Range: [[00422a60, 00422aa9]]
// Convention: unknown
// Signature: undefined4 core_boxactor_cpp_FUN_00422a60(int param_1,int param_2)

#include "nocturne.h"

uint core_boxactor_cpp_FUN_00422a60(int param_1,int param_2)

{
  CKeyFramedModel *pCVar1;
  
  if ((*(int *)(param_1 + 0x5f8) != 0) && (*(int *)(param_1 + 0x318) == 0)) {
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                       ((CKeyFramedModelInstance *)(param_1 + 0x158));
    if (*(int *)&pCVar1->field_0x358 != 0) {
      *(int *)(param_2 + 0x24) = param_1 + 0x158;
    }
    return 1;
  }
  return 0;
}
