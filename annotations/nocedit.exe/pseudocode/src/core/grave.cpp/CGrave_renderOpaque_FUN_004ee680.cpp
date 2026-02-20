// Name: core_grave.cpp_CGrave_renderOpaque_FUN_004ee680
// Address: 004ee680
// Address Range: [[004ee680, 004ee70b]]
// Convention: __cdecl
// Signature: int __cdecl core_grave_cpp_CGrave_renderOpaque_FUN_004ee680(CGrave *this_ptr)

#include "nocturne.h"

int __cdecl core_grave_cpp_CGrave_renderOpaque_FUN_004ee680(CGrave *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if ((this_ptr->animation_started == 0) &&
     (((g_CDemonMissionPtr->is_in_editor != 0 || (this_ptr->hide_on_first_frame == 0)) ||
      (this_ptr->grave_state != 0)))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_1c);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                (&this_ptr->model,this_ptr->cur_frame,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    return iVar1;
  }
  return 0;
}
