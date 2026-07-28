// Name: core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_00534fc0
// Address: 00534fc0
// Address Range: [[00534fc0, 00535088]]
// Convention: unknown
// Signature: float core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00534fc0(CDemonActor *param_1)

#include "nocturne.h"

float core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00534fc0(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  CKeyFramedModel *pCVar5;
  int iVar6;
  int iVar7;
  int local_14;
  
  pCVar5 = (CKeyFramedModel *)0x0;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (param_1,g_CBoxActorActorType_00764800.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                       ((CKeyFramedModelInstance *)(pCVar1 + 1));
  }
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (param_1,g_CCryptVesselActorType_02dd11cc.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                       ((CKeyFramedModelInstance *)(pCVar1 + 1));
  }
  if (pCVar5 != (CKeyFramedModel *)0x0) {
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    local_14 = 0;
    for (iVar3 = 0; iVar3 < pCVar5->vertex_count; iVar3 = iVar3 + 1) {
      piVar2 = (int *)((int)&pCVar5->vertex_list->x + iVar4);
      if (iVar7 < *piVar2) {
        local_14 = piVar2[1];
        iVar7 = *piVar2;
      }
      if (iVar6 < piVar2[1]) {
        iVar6 = piVar2[1];
      }
      iVar4 = iVar4 + 0xc;
    }
    return (float)(iVar6 - local_14) * (float)0.00390625;
  }
  return 0.0;
}
