// Name: core_grave.cpp_FUN_004cf4e0
// Address: 004cf4e0
// Address Range: [[004cf4e0, 004cf573]]
// Convention: unknown
// Signature: void core_grave_cpp_FUN_004cf4e0(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void core_grave_cpp_FUN_004cf4e0(CDemonActor *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if (param_2 != 0) {
    if (*(int *)&param_1[2].field_0x2c == 0) {
      if (*(int *)&param_1[2].field_0x30 != 2) {
        return;
      }
      *(uint *)&param_1[2].field_0x2c = 1;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
    puVar2 = auStack_34;
    puVar3 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041daf0(auStack_1c);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                ((CKeyFramedModelInstance *)(param_1 + 1),*(float *)&param_1[2].field_0x24,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
  }
  return;
}
