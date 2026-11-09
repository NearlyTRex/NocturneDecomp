// Name: core_emitter.cpp_FUN_00488ac0
// Address: 00488ac0
// Address Range: [[00488ac0, 00488b23]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_00488ac0(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void core_emitter_cpp_FUN_00488ac0(CDemonActor *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar5 = 0;
  if (param_2 == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
  puVar3 = auStack_34;
  puVar4 = auStack_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uVar1 = core_box_cpp_FUN_0041daf0(auStack_1c);
  *(uint *)&param_1[3].field_0xa8 = uVar1;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
  return;
}
