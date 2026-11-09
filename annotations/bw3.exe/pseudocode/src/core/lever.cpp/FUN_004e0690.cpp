// Name: core_lever.cpp_FUN_004e0690
// Address: 004e0690
// Address Range: [[004e0690, 004e072c]]
// Convention: unknown
// Signature: int core_lever_cpp_FUN_004e0690(CDemonActor *param_1)

#include "nocturne.h"

int core_lever_cpp_FUN_004e0690(CDemonActor *param_1)

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
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
  puVar3 = auStack_2c;
  puVar4 = auStack_44;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041daf0(auStack_44);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
    return 0;
  }
  render_flags = -1;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                     ((CKeyFramedModelInstance *)(param_1 + 1));
  iStack_14 = *(int *)&pCVar1->field_0x100 + -1;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
            ((CKeyFramedModelInstance *)(param_1 + 1),
             (float)iStack_14 * *(float *)&param_1[2].field_0x2c,render_flags);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
  return iVar2;
}
