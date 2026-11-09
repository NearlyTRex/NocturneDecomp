// Name: core_mimic.cpp_FUN_004f1b80
// Address: 004f1b80
// Address Range: [[004f1b80, 004f1c1b]]
// Convention: unknown
// Signature: void core_mimic_cpp_FUN_004f1b80(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void core_mimic_cpp_FUN_004f1b80(CDemonActor *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if (*(int *)&param_1[0x62].field_0x17c != 0) {
    if (param_2 != 0) {
      *(uint *)&param_1[0xd].field_0x244 = 1;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
    puVar2 = auStack_34;
    puVar3 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041a840(auStack_1c);
    if (iVar1 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
                ((CDeformableModelInstance *)(param_1 + 1),-1,0xffffffff,1,0);
      core_cloth_cpp_CCloth_render_FUN_005b0fe0
                ((CCloth *)&param_1[99].field_0x24,(CDeformableModelInstance *)0x0);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  }
  return;
}
