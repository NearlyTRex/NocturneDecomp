// Name: core_grave.cpp_CGrave_renderBackground_FUN_004b0d40
// Address: 004b0d40
// Address Range: [[004b0d40, 004b0db9]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_renderBackground_FUN_004b0d40(CGrave *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_renderBackground_FUN_004b0d40(CGrave *this_ptr,int layer_flag)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if (layer_flag != 0) {
    if (this_ptr->animation_started == 0) {
      if (this_ptr->grave_state != 2) {
        return;
      }
      this_ptr->animation_started = 1;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_1c);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                (&this_ptr->model,this_ptr->cur_frame,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  }
  return;
}
