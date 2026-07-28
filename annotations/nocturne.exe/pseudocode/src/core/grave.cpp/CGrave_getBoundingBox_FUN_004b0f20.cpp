// Name: core_grave.cpp_CGrave_getBoundingBox_FUN_004b0f20
// Address: 004b0f20
// Address Range: [[004b0f20, 004b0ff4]]
// Convention: unknown
// Signature: int * core_grave_cpp_CGrave_getBoundingBox_FUN_004b0f20(int param_1,int *param_2)

#include "nocturne.h"

int * core_grave_cpp_CGrave_getBoundingBox_FUN_004b0f20(int param_1,int *param_2)

{
  char *pcVar1;
  CKeyFramedModel *pCVar2;
  int *piVar3;
  double dVar4;
  int iVar5;
  
  if (*(int *)(0x01CC9450 + 4) == 0) {
    dVar4 = round((double)*(float *)(param_1 + 0x2cc));
    iVar5 = (int)ROUND(dVar4);
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                       ((CKeyFramedModelInstance *)(param_1 + 0x150));
    piVar3 = (int *)(iVar5 * 0x18 + pCVar2->texture_list[7].textures[2].base.count);
    if (param_2 != piVar3) {
      *param_2 = *piVar3;
      param_2[1] = piVar3[1];
      param_2[2] = piVar3[2];
    }
    if (param_2 + 3 != piVar3 + 3) {
      param_2[3] = piVar3[3];
      param_2[4] = piVar3[4];
      param_2[5] = piVar3[5];
      return param_2;
    }
  }
  else {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                       ((CKeyFramedModelInstance *)(param_1 + 0x150));
    piVar3 = &pCVar2->texture_list[7].textures[1].base.count;
    if (param_2 != piVar3) {
      *param_2 = *piVar3;
      param_2[1] = *(int *)pCVar2->texture_list[7].textures[1].texture_name;
      param_2[2] = *(int *)(pCVar2->texture_list[7].textures[1].texture_name + 4);
    }
    pcVar1 = pCVar2->texture_list[7].textures[1].texture_name + 8;
    if (param_2 + 3 != (int *)pcVar1) {
      param_2[3] = *(int *)pcVar1;
      param_2[4] = *(int *)(pCVar2->texture_list[7].textures[1].texture_name + 0xc);
      param_2[5] = pCVar2->texture_list[7].textures[2].base.type;
    }
  }
  return param_2;
}
