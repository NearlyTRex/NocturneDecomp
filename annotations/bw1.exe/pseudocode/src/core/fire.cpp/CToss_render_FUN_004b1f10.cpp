// Name: core_fire.cpp_CToss_render_FUN_004b1f10
// Address: 004b1f10
// Address Range: [[004b1f10, 004b1f74]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_render_FUN_004b1f10(CToss *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_render_FUN_004b1f10(CToss *this_ptr)

{
  if (this_ptr->fuse_timer <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,&(this_ptr->physics_box).position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&(this_ptr->physics_box).orientation,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(&this_ptr->model,0.0,-1);
  engine_drender_cpp_pop_FUN_004839a0();
  return;
}
