// Name: core_grave.cpp_CGrave_renderOpaque_FUN_004b0cb0
// Address: 004b0cb0
// Address Range: [[004b0cb0, 004b0d3d]]
// Convention: __cdecl
// Signature: int __cdecl core_grave_cpp_CGrave_renderOpaque_FUN_004b0cb0(CGrave *this_ptr)

#include "nocturne.h"

int __cdecl core_grave_cpp_CGrave_renderOpaque_FUN_004b0cb0(CGrave *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if ((this_ptr->animation_started == 0) &&
     (((g_CDemonMission_PTR_005baf90->is_in_editor != 0 || (this_ptr->hide_on_first_frame == 0)) ||
      (this_ptr->grave_state != 0)))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_1c);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                (&this_ptr->model,this_ptr->cur_frame,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
    return iVar1;
  }
  return 0;
}
