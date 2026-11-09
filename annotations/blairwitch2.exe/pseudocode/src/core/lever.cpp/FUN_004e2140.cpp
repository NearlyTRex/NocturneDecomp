// Name: core_lever.cpp_FUN_004e2140
// Address: 004e2140
// Address Range: [[004e2140, 004e21dc]]
// Convention: unknown
// Signature: int core_lever_cpp_FUN_004e2140(CDemonActor *param_1)

#include "nocturne.h"

int core_lever_cpp_FUN_004e2140(CDemonActor *param_1)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  int render_flags;
  uint auStack_44 [6];
  uint auStack_2c [6];
  int iStack_14;
  
  bVar5 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
  puVar3 = auStack_2c;
  puVar4 = auStack_44;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041a840(auStack_44);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
    return 0;
  }
  render_flags = -1;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)(param_1 + 1));
  iStack_14 = *(int *)&pCVar1->field_0x100 + -1;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            ((CKeyFramedModelInstance *)(param_1 + 1),
             (float)iStack_14 * *(float *)&param_1[1].field_0x184,render_flags);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  return iVar2;
}
