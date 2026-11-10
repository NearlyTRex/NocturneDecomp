// Name: core_charactr.cpp_CCharacter_renderBackground_FUN_0042f320
// Address: 0042f320
// Address Range: [[0042f320, 0042f38c]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderBackground_FUN_0042f320(CCharacter *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderBackground_FUN_0042f320(CCharacter *this_ptr,int layer_flag)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_34 [6];
  uint local_1c [6];
  
  bVar4 = 0;
  if (this_ptr->render_active == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = local_34;
  puVar3 = local_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_004207b0(local_1c);
  if (iVar1 != 0) {
    core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960(this_ptr);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
  return;
}
