// Name: core_manpuz.cpp_CMirrorHack_setup_FUN_005064a0
// Address: 005064a0
// Address Range: [[005064a0, 005064bf]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_setup_FUN_005064a0(CMirrorHack *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_setup_FUN_005064a0(CMirrorHack *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->mirror_model);
  return;
}
