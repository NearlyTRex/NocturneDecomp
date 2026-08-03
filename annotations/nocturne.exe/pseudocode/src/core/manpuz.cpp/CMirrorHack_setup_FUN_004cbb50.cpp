// Name: core_manpuz.cpp_CMirrorHack_setup_FUN_004cbb50
// Address: 004cbb50
// Address Range: [[004cbb50, 004cbb6f]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_setup_FUN_004cbb50(CMirrorHack *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_setup_FUN_004cbb50(CMirrorHack *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->mirror_model);
  return;
}
