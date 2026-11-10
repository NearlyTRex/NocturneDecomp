// Name: core_manpuz.cpp_CMirrorHack_renderOpaque_FUN_005064c0
// Address: 005064c0
// Address Range: [[005064c0, 0050650e]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMirrorHack_renderOpaque_FUN_005064c0(CMirrorHack *this_ptr)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMirrorHack_renderOpaque_FUN_005064c0(CMirrorHack *this_ptr)

{
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
  *(uint *)&g_CGamePtr->field_0x210 = 1;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
            (&this_ptr->mirror_model,0.0,-1);
  *(uint *)&g_CGamePtr->field_0x210 = 0;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
  return 1;
}
