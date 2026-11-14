// Name: core_grave.cpp_CGrave_renderOpaque_FUN_004ca290
// Address: 004ca290
// Address Range: [[004ca290, 004ca334]]
// Convention: __cdecl
// Signature: int __cdecl core_grave_cpp_CGrave_renderOpaque_FUN_004ca290(CGrave *this_ptr)

#include "nocturne.h"

int __cdecl core_grave_cpp_CGrave_renderOpaque_FUN_004ca290(CGrave *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if ((this_ptr->animation_started == 0) &&
     (((*(int *)(0x01D182F0 + 0x1008) != 0 || (this_ptr->hide_on_first_frame == 0)) ||
      (this_ptr->grave_state != 0)))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar2 = auStack_34;
    puVar3 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041a840(auStack_1c);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                (&this_ptr->model,this_ptr->cur_frame,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
    return iVar1;
  }
  return 0;
}
