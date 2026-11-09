// Name: core_platfrm.cpp_FUN_00512a40
// Address: 00512a40
// Address Range: [[00512a40, 00512a5f] [00512a66, 00512a7b]]
// Convention: unknown
// Signature: undefined4 core_platfrm_cpp_FUN_00512a40(int param_1,int param_2)

#include "nocturne.h"

uint core_platfrm_cpp_FUN_00512a40(int param_1,int param_2)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                     ((CKeyFramedModelInstance *)(param_1 + 0x158));
  if (*(int *)&pCVar1->field_0x358 == 0) {
    return 1;
  }
  *(int *)(param_2 + 0x24) = param_1 + 0x158;
  return 1;
}
