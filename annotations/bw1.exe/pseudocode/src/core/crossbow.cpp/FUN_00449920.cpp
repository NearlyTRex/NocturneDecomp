// Name: core_crossbow.cpp_FUN_00449920
// Address: 00449920
// Address Range: [[00449920, 004499b3]]
// Convention: unknown
// Signature: int core_crossbow_cpp_FUN_00449920(CCrossbow *param_1)

#include "nocturne.h"

int core_crossbow_cpp_FUN_00449920(CCrossbow *param_1)

{
  float animation_frame;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int in_stack_ffffffc0;
  uint auStack_28 [7];
  
  bVar4 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
  puVar2 = auStack_28;
  puVar3 = (uint *)&stack0xffffffc0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_004207b0(&stack0xffffffc0);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
    return 0;
  }
  animation_frame = core_crossbow_cpp_CCrossbow_getCurFrame_FUN_0044a0c0(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
            ((CKeyFramedModelInstance *)&param_1->field_0x158,animation_frame,in_stack_ffffffc0);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
  return iVar1;
}
