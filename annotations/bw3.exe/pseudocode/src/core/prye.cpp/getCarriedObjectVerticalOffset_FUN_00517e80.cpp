// Name: core_prye.cpp_getCarriedObjectVerticalOffset_FUN_00517e80
// Address: 00517e80
// Address Range: [[00517e80, 00517f48]]
// Convention: __cdecl
// Signature: float __cdecl core_prye_cpp_getCarriedObjectVerticalOffset_FUN_00517e80(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_prye_cpp_getCarriedObjectVerticalOffset_FUN_00517e80(uint param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  CKeyFramedModel *pCVar5;
  int iVar6;
  int local_14;
  
  pCVar5 = (CKeyFramedModel *)0x0;
  iVar1 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c840(param_1,g_CBoxActorClassInfo.name_hash);
  if (iVar1 != 0) {
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                       ((CKeyFramedModelInstance *)(iVar1 + 0x158));
  }
  iVar1 = (CCryptVessel *)core_actor_cpp_castToClassHash_FUN_0040c840(param_1,g_CCryptVesselClassInfo.name_hash);
  if (iVar1 != 0) {
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                       ((CKeyFramedModelInstance *)(iVar1 + 0x158));
  }
  if (pCVar5 != (CKeyFramedModel *)0x0) {
    iVar6 = 0;
    iVar1 = 0;
    iVar4 = 0;
    local_14 = 0;
    for (iVar3 = 0; iVar3 < pCVar5->vertex_count; iVar3 = iVar3 + 1) {
      piVar2 = (int *)((int)&pCVar5->vertex_list->x + iVar4);
      if (iVar6 < *piVar2) {
        local_14 = piVar2[1];
        iVar6 = *piVar2;
      }
      if (iVar1 < piVar2[1]) {
        iVar1 = piVar2[1];
      }
      iVar4 = iVar4 + 0xc;
    }
    return (float)(iVar1 - local_14) * (float)_DAT_005cca97;
  }
  return 0.0;
}
