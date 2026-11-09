// Name: core_lever.cpp_FUN_004e2220
// Address: 004e2220
// Address Range: [[004e2220, 004e22d7]]
// Convention: unknown
// Signature: void core_lever_cpp_FUN_004e2220(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_lever_cpp_FUN_004e2220(int param_1)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  int *piVar3;
  uint *unaff_ESI;
  byte bVar4;
  float10 fVar5;
  float afStackY_1008 [1013];
  CKeyFramedModelInstance *this_ptr;
  float local_2c;
  float local_28;
  float local_24;
  uint local_20;
  int local_14;
  int local_10;
  
  bVar4 = 0;
  this_ptr = (CKeyFramedModelInstance *)(param_1 + 0x2b4);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(this_ptr);
  iVar1 = *(int *)&pCVar2->field_0x10c;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(this_ptr);
  local_10 = *(int *)&pCVar2->field_0x100 + -1;
  fVar5 = (float10)local_10 * (float10)*(float *)(param_1 + 0x438);
  round();
  local_14 = (int)ROUND(fVar5);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(this_ptr);
  piVar3 = (int *)((*(int *)(param_1 + 0x570) + *(int *)&pCVar2->field_0x104 * local_14) * 0xc +
                  iVar1);
  local_2c = (float)*piVar3 * _DAT_005f9488;
  local_28 = (float)piVar3[1] * _DAT_005f9488;
  local_24 = (float)piVar3[2] * _DAT_005f9488;
  core_actor_cpp_FUN_00408d70(param_1,&stack0xffffffd4);
  *unaff_ESI = local_20;
  unaff_ESI[(uint)bVar4 * -2 + 1] =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * 0xfffffffe * 4);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return;
}
