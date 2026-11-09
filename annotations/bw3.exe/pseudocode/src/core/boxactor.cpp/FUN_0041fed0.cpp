// Name: core_boxactor.cpp_FUN_0041fed0
// Address: 0041fed0
// Address Range: [[0041fed0, 0041ff19]]
// Convention: unknown
// Signature: undefined4 core_boxactor_cpp_FUN_0041fed0(int param_1,int param_2)

#include "nocturne.h"

uint core_boxactor_cpp_FUN_0041fed0(int param_1,int param_2)

{
  CKeyFramedModel *pCVar1;
  
  if ((*(int *)(param_1 + 0x5f8) != 0) && (*(int *)(param_1 + 0x318) == 0)) {
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                       ((CKeyFramedModelInstance *)(param_1 + 0x158));
    if (*(int *)&pCVar1->field_0x358 != 0) {
      *(int *)(param_2 + 0x24) = param_1 + 0x158;
    }
    return 1;
  }
  return 0;
}
