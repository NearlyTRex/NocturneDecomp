// Name: core_platfrm.cpp_FUN_00519a00
// Address: 00519a00
// Address Range: [[00519a00, 00519a1f] [00519a26, 00519a3b]]
// Convention: unknown
// Signature: undefined4 core_platfrm_cpp_FUN_00519a00(int param_1,int param_2)

#include "nocturne.h"

uint core_platfrm_cpp_FUN_00519a00(int param_1,int param_2)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)(param_1 + 0x2b4));
  if (*(int *)&pCVar1->field_0x358 == 0) {
    return 1;
  }
  *(int *)(param_2 + 0x24) = param_1 + 0x2b4;
  return 1;
}
