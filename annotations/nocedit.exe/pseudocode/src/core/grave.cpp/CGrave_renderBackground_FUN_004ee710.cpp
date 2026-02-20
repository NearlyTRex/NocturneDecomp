// Name: core_grave.cpp_CGrave_renderBackground_FUN_004ee710
// Address: 004ee710
// Address Range: [[004ee710, 004ee785]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_renderBackground_FUN_004ee710(CGrave *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_renderBackground_FUN_004ee710(CGrave *this_ptr,int layer_flag)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D CStack_1c;
  
  if (layer_flag != 0) {
    if (this_ptr->animation_started == 0) {
      if (this_ptr->grave_state != 2) {
        return;
      }
      this_ptr->animation_started = 1;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_1c);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                (&this_ptr->model,this_ptr->cur_frame,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  }
  return;
}
