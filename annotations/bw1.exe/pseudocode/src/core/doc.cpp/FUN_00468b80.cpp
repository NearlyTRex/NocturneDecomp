// Name: core_doc.cpp_FUN_00468b80
// Address: 00468b80
// Address Range: [[00468b80, 00468c48]]
// Convention: unknown
// Signature: float core_doc_cpp_FUN_00468b80(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_doc_cpp_FUN_00468b80(uint param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  CKeyFramedModel *pCVar5;
  int iVar6;
  int local_14;
  
  pCVar5 = (CKeyFramedModel *)0x0;
  iVar1 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c600(param_1,g_CBoxActorClassInfo.name_hash);
  if (iVar1 != 0) {
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                       ((CKeyFramedModelInstance *)(iVar1 + 0x158));
  }
  iVar1 = (CCryptVessel *)core_actor_cpp_castToClassHash_FUN_0040c600(param_1,g_CCryptVesselClassInfo.name_hash);
  if (iVar1 != 0) {
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                       ((CKeyFramedModelInstance *)(iVar1 + 0x158));
  }
  if (pCVar5 != (CKeyFramedModel *)0x0) {
    iVar6 = 0;
    iVar1 = 0;
    iVar4 = 0;
    local_14 = 0;
    for (iVar3 = 0; iVar3 < *(int *)&pCVar5->field_0x104; iVar3 = iVar3 + 1) {
      piVar2 = (int *)(*(int *)&pCVar5->field_0x10c + iVar4);
      if (iVar6 < *piVar2) {
        local_14 = piVar2[1];
        iVar6 = *piVar2;
      }
      if (iVar1 < piVar2[1]) {
        iVar1 = piVar2[1];
      }
      iVar4 = iVar4 + 0xc;
    }
    return (float)(iVar1 - local_14) * (float)_DAT_005d989c;
  }
  return 0.0;
}
