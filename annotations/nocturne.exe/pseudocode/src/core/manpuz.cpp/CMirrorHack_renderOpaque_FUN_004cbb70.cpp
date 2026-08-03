// Name: core_manpuz.cpp_CMirrorHack_renderOpaque_FUN_004cbb70
// Address: 004cbb70
// Address Range: [[004cbb70, 004cbbbe]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMirrorHack_renderOpaque_FUN_004cbb70(CMirrorHack *this_ptr)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMirrorHack_renderOpaque_FUN_004cbb70(CMirrorHack *this_ptr)

{
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  g_CGame_PTR_005b9354->render_mode = 1;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            (&this_ptr->mirror_model,0.0,-1);
  g_CGame_PTR_005b9354->render_mode = 0;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  return 1;
}
