// Name: FUN_004f3df0
// Address: 004f3df0
// Address Range: [[004f3df0, 004f3e2e]]
// Convention: unknown
// Signature: undefined4 FUN_004f3df0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_004f3df0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x438) == 0) {
    return 0;
  }
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x150);
  if (*(int *)(iVar1 + 0x358) != 0) {
    *(int *)(param_2 + 0x24) = param_1 + 0x150;
  }
  return 1;
}
