// Name: core_backgnd.cpp_FUN_004100a0
// Address: 004100a0
// Address Range: [[004100a0, 004100de]]
// Convention: unknown
// Signature: undefined4 core_backgnd_cpp_FUN_004100a0(int param_1,int param_2)

#include "nocturne.h"

uint core_backgnd_cpp_FUN_004100a0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2cc) == 0) {
    return 0;
  }
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x150);
  if (*(int *)(iVar1 + 0x358) != 0) {
    *(int *)(param_2 + 0x24) = param_1 + 0x150;
  }
  return 1;
}
