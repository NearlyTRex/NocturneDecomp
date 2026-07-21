// Name: FUN_00495000
// Address: 00495000
// Address Range: [[00495000, 00495075]]
// Convention: unknown
// Signature: undefined4 * FUN_00495000(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * FUN_00495000(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  float10 fVar3;
  
  fVar3 = (float10)round((float10)*(float *)(param_1 + 0x178));
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x17c);
  puVar2 = (uint *)((int)ROUND(fVar3) * 0x18 + *(int *)(iVar1 + 0x350));
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  param_2[2] = puVar2[2];
  param_2[3] = puVar2[3];
  param_2[4] = puVar2[4];
  param_2[5] = puVar2[5];
  return param_2;
}
