// Name: core_doc.cpp_FUN_00468b80
// Address: 00468b80
// Address Range: [[00468b80, 00468c48]]
// Convention: unknown
// Signature: float core_doc_cpp_FUN_00468b80(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_doc_cpp_FUN_00468b80(CDemonActor *param_1)

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
  pCVar1 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c600(param_1,g_CBoxActorClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                       ((CKeyFramedModelInstance *)(pCVar1 + 1));
  }
  pCVar1 = (CCryptVessel *)core_actor_cpp_castToClassHash_FUN_0040c600(param_1,g_CCryptVesselClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
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
    return (float)(iVar6 - local_14) * (float)_DAT_005d989c;
  }
  return 0.0;
}
