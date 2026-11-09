// Name: core_mimic.cpp_FUN_00510910
// Address: 00510910
// Address Range: [[00510910, 005109ab]]
// Convention: unknown
// Signature: void core_mimic_cpp_FUN_00510910(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void core_mimic_cpp_FUN_00510910(CDemonActor *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if (*(int *)&param_1[0x90].field_0x54 != 0) {
    if (param_2 != 0) {
      *(uint *)&param_1[0x1b].field_0xb4 = 1;
    }
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
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
                ((CDeformableModelInstance *)(param_1 + 1),-1,0xffffffff,1,0);
      core_cloth_cpp_CCloth_render_FUN_00441800
                ((CCloth *)&param_1[0x91].field_0x58,(CDeformableModelInstance *)0x0);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(param_1);
  }
  return;
}
