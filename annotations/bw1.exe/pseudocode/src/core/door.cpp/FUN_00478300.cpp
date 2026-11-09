// Name: core_door.cpp_FUN_00478300
// Address: 00478300
// Address Range: [[00478300, 00478387]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_00478300(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void core_door_cpp_FUN_00478300(CDemonActor *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if ((param_2 != 0) && (1 < *(int *)&param_1[7].field_0x60)) {
    *(uint *)&param_1[7].field_0x60 = 3;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
    puVar2 = auStack_34;
    puVar3 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_004207b0(auStack_1c);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(param_1);
    return;
  }
  return;
}
