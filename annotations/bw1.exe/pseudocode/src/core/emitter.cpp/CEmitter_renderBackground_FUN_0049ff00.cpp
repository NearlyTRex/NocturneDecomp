// Name: core_emitter.cpp_CEmitter_renderBackground_FUN_0049ff00
// Address: 0049ff00
// Address Range: [[0049ff00, 0049ff63]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_renderBackground_FUN_0049ff00(CEmitter *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_renderBackground_FUN_0049ff00(CEmitter *this_ptr,int layer_flag)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if (layer_flag == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = auStack_34;
  puVar3 = auStack_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_004207b0(auStack_1c);
  this_ptr->was_on_screen = iVar1;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
  return;
}
