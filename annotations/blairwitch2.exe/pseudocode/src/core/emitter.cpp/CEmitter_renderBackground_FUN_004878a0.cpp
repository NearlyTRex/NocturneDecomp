// Name: core_emitter.cpp_CEmitter_renderBackground_FUN_004878a0
// Address: 004878a0
// Address Range: [[004878a0, 00487903]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_renderBackground_FUN_004878a0(CEmitter *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_renderBackground_FUN_004878a0(CEmitter *this_ptr,int layer_flag)

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
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x24))(this_ptr,0);
  puVar3 = auStack_34;
  puVar4 = auStack_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uVar1 = core_box_cpp_FUN_0041a840(auStack_1c);
  *(uint *)&this_ptr->field_0x60c = uVar1;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  return;
}
