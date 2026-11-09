// Name: core_drip.cpp_FUN_0046d570
// Address: 0046d570
// Address Range: [[0046d570, 0046d602]]
// Convention: unknown
// Signature: int core_drip_cpp_FUN_0046d570(CDemonActor *param_1)

#include "nocturne.h"

int core_drip_cpp_FUN_0046d570(CDemonActor *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar4 = 0;
  *(uint *)&param_1[1].field_0x1e0 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
  puVar2 = auStack_3c;
  puVar3 = auStack_24;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041a840(auStack_24);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
    return 0;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
  *(uint *)&param_1[1].field_0x1e0 = 1;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  return iVar1;
}
