// Name: core_lever.cpp_CLever_getHandlePosition_FUN_004c6640
// Address: 004c6640
// Address Range: [[004c6640, 004c66ef]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_lever_cpp_CLever_getHandlePosition_FUN_004c6640(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_lever_cpp_CLever_getHandlePosition_FUN_004c6640(int param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  uint uVar6;
  float fStack_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_14;
  
  fVar1 = (float)(param_1 + 0x150);
  fStack_28 = fVar1;
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530();
  iVar2 = *(int *)(iVar2 + 0x10c);
  fStack_28 = fVar1;
  iVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530();
  local_14 = *(int *)(iVar3 + 0x100) + -1;
  uVar6 = 0x4c6688;
  fStack_28 = fVar1;
  fVar5 = (float10)round
                             ((float10)local_14 * (float10)*(float *)(param_1 + 0x2d4));
  local_1c = (int)ROUND(fVar5);
  iVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(uVar6);
  piVar4 = (int *)((*(int *)(param_1 + 0x40c) + *(int *)(iVar3 + 0x104) * local_1c) * 0xc + iVar2);
  fStack_28 = (float)*piVar4 * _DAT_0059fc28;
  local_24 = (float)piVar4[1] * _DAT_0059fc28;
  local_20 = (float)piVar4[2] * _DAT_0059fc28;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,param_2,&fStack_28);
  return param_2;
}
