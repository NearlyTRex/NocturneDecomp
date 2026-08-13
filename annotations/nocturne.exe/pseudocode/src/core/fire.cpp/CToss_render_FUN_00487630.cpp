// Name: core_fire.cpp_CToss_render_FUN_00487630
// Address: 00487630
// Address Range: [[00487630, 00487694]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_render_FUN_00487630(CToss *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_render_FUN_00487630(CToss *this_ptr)

{
  if (this_ptr->fuse_timer <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (g_CDemonRenderer_PTR_005ae704,&(this_ptr->physics_box).position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (g_CDemonRenderer_PTR_005ae704,&(this_ptr->physics_box).orientation,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(&this_ptr->model,0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  return;
}
