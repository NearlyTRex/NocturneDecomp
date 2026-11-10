// Name: core_manpuz.cpp_CMirrorHack_renderOpaque_FUN_004e7820
// Address: 004e7820
// Address Range: [[004e7820, 004e786e]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMirrorHack_renderOpaque_FUN_004e7820(CMirrorHack *this_ptr)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMirrorHack_renderOpaque_FUN_004e7820(CMirrorHack *this_ptr)

{
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
  g_CGamePtr->render_mode = 1;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            (&this_ptr->mirror_model,0.0,-1);
  g_CGamePtr->render_mode = 0;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
  return 1;
}
