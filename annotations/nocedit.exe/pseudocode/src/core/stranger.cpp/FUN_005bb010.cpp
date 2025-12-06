// Name: core_stranger.cpp_FUN_005bb010
// Address: 005bb010
// Address Range: [[005bb010, 005bb0d8]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005bb010()

#include "nocturne.h"

/* Signature: byte actors_other_stone.cpp_FUN_005bb010(uint param_1) */

float core_stranger_cpp_FUN_005bb010(void)

{
  CDemonActor *pCVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  CKeyFramedModel *pCVar5;
  int iVar6;
  int iVar7;
  CDemonActor *in_stack_00000004;
  int iVar8;
  
  pCVar5 = (CKeyFramedModel *)0x0;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CBoxActorClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)(pCVar1 + 1));
  }
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CCryptVesselClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)(pCVar1 + 1));
  }
  if (pCVar5 != (CKeyFramedModel *)0x0) {
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar8 = 0;
    for (iVar3 = 0; iVar3 < pCVar5->vertex_count; iVar3 = iVar3 + 1) {
      piVar2 = (int *)((int)pCVar5->vertex_list + iVar4);
      if (iVar7 < *piVar2) {
        iVar8 = piVar2[1];
        iVar7 = *piVar2;
      }
      if (iVar6 < piVar2[1]) {
        iVar6 = piVar2[1];
      }
      iVar4 = iVar4 + 0xc;
    }
    return (float)(iVar6 - iVar8) * (float)0.00390625;
  }
  return 0.0;
}
