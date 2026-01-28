// Name: core_manpuz.cpp_CMirrorHack_renderOpaque_FUN_0050b180
// Address: 0050b180
// Address Range: [[0050b180, 0050b1ce]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMirrorHack_renderOpaque_FUN_0050b180(CMirrorHack *this_ptr)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMirrorHack_renderOpaque_FUN_0050b180(CMirrorHack *this_ptr)

{
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  g_CGamePtr->unk6 = 1;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)this_ptr->unk,0.0,-1);
  g_CGamePtr->unk6 = 0;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return 1;
}
