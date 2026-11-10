// Name: core_emitter.cpp_CEmitter_renderBackground_FUN_0049ff00
// Address: 0049ff00
// Address Range: [[0049ff00, 0049ff63]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_renderBackground_FUN_0049ff00(CEmitter *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_renderBackground_FUN_0049ff00(CEmitter *this_ptr,int layer_flag)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar5 = 0;
  if (layer_flag == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
  puVar3 = auStack_34;
  puVar4 = auStack_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uVar1 = core_box_cpp_FUN_004207b0(auStack_1c);
  *(uint *)&this_ptr->field_0x4b0 = uVar1;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  return;
}
