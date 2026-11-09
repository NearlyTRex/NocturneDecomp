// Name: core_charactr.cpp_FUN_0042f320
// Address: 0042f320
// Address Range: [[0042f320, 0042f38c]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042f320(CCharacter *param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042f320(CCharacter *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_34 [6];
  uint local_1c [6];
  
  bVar4 = 0;
  if (*(int *)&param_1->field_0x24fc == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
  puVar2 = local_34;
  puVar3 = local_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_004207b0(local_1c);
  if (iVar1 != 0) {
    core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960(param_1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
  return;
}
