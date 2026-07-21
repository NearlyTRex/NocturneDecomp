// Name: core_grave.cpp_CGrave_getBoundingBox_FUN_004b0f20
// Address: 004b0f20
// Address Range: [[004b0f20, 004b0ff4]]
// Convention: unknown
// Signature: undefined4 * core_grave_cpp_CGrave_getBoundingBox_FUN_004b0f20(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * core_grave_cpp_CGrave_getBoundingBox_FUN_004b0f20(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  float10 fVar4;
  
  if (*(int *)(0x01CC9450 + 4) == 0) {
    fVar4 = (float10)round((float10)*(float *)(param_1 + 0x2cc));
    iVar1 = (int)ROUND(fVar4);
    iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x150);
    puVar3 = (uint *)(iVar1 * 0x18 + *(int *)(iVar2 + 0x350));
    if (param_2 != puVar3) {
      *param_2 = *puVar3;
      param_2[1] = puVar3[1];
      param_2[2] = puVar3[2];
    }
    if (param_2 + 3 != puVar3 + 3) {
      param_2[3] = puVar3[3];
      param_2[4] = puVar3[4];
      param_2[5] = puVar3[5];
      return param_2;
    }
  }
  else {
    iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x150);
    if (param_2 != (uint *)(iVar1 + 0x338)) {
      *param_2 = *(uint *)(iVar1 + 0x338);
      param_2[1] = *(uint *)(iVar1 + 0x33c);
      param_2[2] = *(uint *)(iVar1 + 0x340);
    }
    if (param_2 + 3 != (uint *)(iVar1 + 0x344)) {
      param_2[3] = *(uint *)(iVar1 + 0x344);
      param_2[4] = *(uint *)(iVar1 + 0x348);
      param_2[5] = *(uint *)(iVar1 + 0x34c);
    }
  }
  return param_2;
}
