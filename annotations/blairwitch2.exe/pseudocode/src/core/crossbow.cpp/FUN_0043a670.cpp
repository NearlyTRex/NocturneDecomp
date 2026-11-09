// Name: core_crossbow.cpp_FUN_0043a670
// Address: 0043a670
// Address Range: [[0043a670, 0043a703]]
// Convention: unknown
// Signature: int core_crossbow_cpp_FUN_0043a670(CDemonActor *param_1)

#include "nocturne.h"

int core_crossbow_cpp_FUN_0043a670(CDemonActor *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int render_flags;
  uint auStack_40 [6];
  uint auStack_28 [6];
  float fStack_10;
  
  bVar4 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
  puVar2 = auStack_28;
  puVar3 = auStack_40;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041a840(auStack_40);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
    return 0;
  }
  render_flags = -1;
  fStack_10 = (float)core_crossbow_cpp_FUN_0043ae10(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            ((CKeyFramedModelInstance *)(param_1 + 1),fStack_10,render_flags);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  return iVar1;
}
