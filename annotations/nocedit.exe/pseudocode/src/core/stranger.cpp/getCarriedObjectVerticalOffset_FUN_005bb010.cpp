// Name: core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_005bb010
// Address: 005bb010
// Address Range: [[005bb010, 005bb0d8]]
// Convention: __cdecl
// Signature: float __cdecl core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_005bb010(CDemonActor *object)

#include "nocturne.h"

float __cdecl core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_005bb010(CDemonActor *object)

{
  CBoxActor *pCVar1;
  CCryptVessel *pCVar2;
  int *piVar1;
  int iVar2;
  int iVar3;
  CKeyFramedModel *pCVar4;
  int iVar5;
  int iVar6;
  int local_14;
  
  pCVar4 = (CKeyFramedModel *)0x0;
  pCVar1 = (CBoxActor *)
           core_actor_cpp_castToClassHash_FUN_0040c790(object,g_CBoxActorClassInfo.name_hash);
  if (pCVar1 != (CBoxActor *)0x0) {
    pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&pCVar1->model);
  }
  pCVar2 = (CCryptVessel *)
           core_actor_cpp_castToClassHash_FUN_0040c790(object,g_CCryptVesselClassInfo.name_hash);
  if (pCVar2 != (CCryptVessel *)0x0) {
    pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&pCVar2->model);
  }
  if (pCVar4 != (CKeyFramedModel *)0x0) {
    iVar6 = 0;
    iVar5 = 0;
    iVar3 = 0;
    local_14 = 0;
    for (iVar2 = 0; iVar2 < pCVar4->vertex_count; iVar2 = iVar2 + 1) {
      piVar1 = (int *)((int)&pCVar4->vertex_list->x + iVar3);
      if (iVar6 < *piVar1) {
        local_14 = piVar1[1];
        iVar6 = *piVar1;
      }
      if (iVar5 < piVar1[1]) {
        iVar5 = piVar1[1];
      }
      iVar3 = iVar3 + 0xc;
    }
    return (float)(iVar5 - local_14) * (float)0.00390625;
  }
  return 0.0;
}
