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
  int unaff_EDI;
  uint *puVar3;
  byte bVar4;
  uint auStack_2c [4];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if ((this_ptr->animation_started == 0) &&
     (((g_CDemonMission_PTR_00600530->is_in_editor != 0 || (this_ptr->hide_on_first_frame == 0)) ||
      (this_ptr->grave_state != 0)))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar2 = auStack_2c;
    puVar3 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0
                      ((CBoundingBox3D *)(auStack_1c + 2),unaff_EDI);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                (&this_ptr->model,this_ptr->cur_frame,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
    return iVar1;
  }
  return 0;
}
