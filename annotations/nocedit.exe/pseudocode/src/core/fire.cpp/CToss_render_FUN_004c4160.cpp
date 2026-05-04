// Name: core_fire.cpp_CToss_render_FUN_004c4160
// Address: 004c4160
// Address Range: [[004c4160, 004c41c4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_render_FUN_004c4160(CToss *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_render_FUN_004c4160(CToss *this_ptr)

{
  if (this_ptr->fuse_timer <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&(this_ptr->physics_box).position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&(this_ptr->physics_box).orientation,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(&this_ptr->model,0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  return;
}
