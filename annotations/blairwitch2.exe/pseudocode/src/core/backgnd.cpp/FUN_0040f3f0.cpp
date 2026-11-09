// Name: core_backgnd.cpp_FUN_0040f3f0
// Address: 0040f3f0
// Address Range: [[0040f3f0, 0040f47d]]
// Convention: unknown
// Signature: void core_backgnd_cpp_FUN_0040f3f0(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void core_backgnd_cpp_FUN_0040f3f0(CDemonActor *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar4 = 0;
  if ((param_2 != 0) &&
     ((*(int *)(param_1 + 1) != 0 ||
      (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar1 == 0
      )))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
    puVar2 = auStack_20;
    puVar3 = auStack_38;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041a840(auStack_38);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                ((CKeyFramedModelInstance *)&param_1[1].field_0x4,0.0,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  }
  return;
}
