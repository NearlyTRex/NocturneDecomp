// Name: core_boxactor.cpp_CBoxActor_getBoundingBox_FUN_0041ebe0
// Address: 0041ebe0
// Address Range: [[0041ebe0, 0041ec55]]
// Convention: unknown
// Signature: undefined4 * core_boxactor_cpp_CBoxActor_getBoundingBox_FUN_0041ebe0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * core_boxactor_cpp_CBoxActor_getBoundingBox_FUN_0041ebe0(int param_1,uint *param_2)

{
  CKeyFramedModel *pCVar1;
  uint *puVar2;
  double dVar3;
  
  dVar3 = round((double)*(float *)(param_1 + 0x308));
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  puVar2 = (uint *)((int)ROUND(dVar3) * 0x18 + pCVar1->texture_list[7].textures[2].base.count)
  ;
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  param_2[2] = puVar2[2];
  param_2[3] = puVar2[3];
  param_2[4] = puVar2[4];
  param_2[5] = puVar2[5];
  return param_2;
}
