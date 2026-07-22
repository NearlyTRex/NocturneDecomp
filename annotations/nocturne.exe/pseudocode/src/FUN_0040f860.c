// Name: FUN_0040f860
// Address: 0040f860
// Address Range: [[0040f860, 0040f8ad]]
// Convention: unknown
// Signature: undefined4 * FUN_0040f860(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * FUN_0040f860(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x150);
  puVar1 = *(uint **)(iVar2 + 0x350);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  param_2[3] = puVar1[3];
  param_2[4] = puVar1[4];
  param_2[5] = puVar1[5];
  return param_2;
}
