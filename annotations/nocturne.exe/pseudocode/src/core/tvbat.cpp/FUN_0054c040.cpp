// Name: core_tvbat.cpp_FUN_0054c040
// Address: 0054c040
// Address Range: [[0054c040, 0054c0b5]]
// Convention: unknown
// Signature: undefined4 * core_tvbat_cpp_FUN_0054c040(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * core_tvbat_cpp_FUN_0054c040(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  float10 fVar3;
  
  fVar3 = (float10)round((float10)*(float *)(param_1 + 0xbd24));
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0xbd28);
  puVar2 = (uint *)((int)ROUND(fVar3) * 0x18 + *(int *)(iVar1 + 0x350));
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  param_2[2] = puVar2[2];
  param_2[3] = puVar2[3];
  param_2[4] = puVar2[4];
  param_2[5] = puVar2[5];
  return param_2;
}
