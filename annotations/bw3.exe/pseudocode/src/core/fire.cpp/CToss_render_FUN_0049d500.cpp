// Name: core_fire.cpp_CToss_render_FUN_0049d500
// Address: 0049d500
// Address Range: [[0049d500, 0049d56f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_render_FUN_0049d500(CToss *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_render_FUN_0049d500(CToss *this_ptr)

{
  if (this_ptr->fuse_timer <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&(this_ptr->physics_box).position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,&(this_ptr->physics_box).orientation,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(&this_ptr->model,0.0,-1);
  engine_drender_cpp_pop_FUN_0046d080();
  return;
}
