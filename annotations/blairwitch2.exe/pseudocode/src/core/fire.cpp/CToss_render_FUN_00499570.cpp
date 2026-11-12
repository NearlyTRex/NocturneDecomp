// Name: core_fire.cpp_CToss_render_FUN_00499570
// Address: 00499570
// Address Range: [[00499570, 004995d4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_render_FUN_00499570(CToss *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_render_FUN_00499570(CToss *this_ptr)

{
  if (this_ptr->fuse_timer <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,&(this_ptr->physics_box).position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&(this_ptr->physics_box).orientation,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(&this_ptr->model,0.0,-1);
  engine_drender_cpp_pop_FUN_0046b4a0();
  return;
}
