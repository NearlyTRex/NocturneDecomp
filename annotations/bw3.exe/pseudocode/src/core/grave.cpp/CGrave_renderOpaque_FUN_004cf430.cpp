// Name: core_grave.cpp_CGrave_renderOpaque_FUN_004cf430
// Address: 004cf430
// Address Range: [[004cf430, 004cf4d4]]
// Convention: __cdecl
// Signature: int __cdecl core_grave_cpp_CGrave_renderOpaque_FUN_004cf430(CGrave *this_ptr)

#include "nocturne.h"

int __cdecl core_grave_cpp_CGrave_renderOpaque_FUN_004cf430(CGrave *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if ((this_ptr->animation_started == 0) &&
     (((*(int *)(0x01D81080 + 0x1008) != 0 || (this_ptr->hide_on_first_frame == 0)) ||
      (this_ptr->grave_state != 0)))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar2 = auStack_34;
    puVar3 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041daf0(auStack_1c);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                (&this_ptr->model,this_ptr->cur_frame,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
    return iVar1;
  }
  return 0;
}
