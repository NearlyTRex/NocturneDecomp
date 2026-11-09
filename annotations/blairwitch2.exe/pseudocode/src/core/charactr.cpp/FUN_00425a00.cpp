// Name: core_charactr.cpp_FUN_00425a00
// Address: 00425a00
// Address Range: [[00425a00, 00425a6c]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00425a00(CCharacter *param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_00425a00(CCharacter *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_34 [6];
  uint local_1c [6];
  
  bVar4 = 0;
  if (*(int *)&param_1->field_0x2568 == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
  puVar2 = local_34;
  puVar3 = local_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041a840(local_1c);
  if (iVar1 != 0) {
    core_charactr_cpp_FUN_00424bd0(param_1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
  return;
}
