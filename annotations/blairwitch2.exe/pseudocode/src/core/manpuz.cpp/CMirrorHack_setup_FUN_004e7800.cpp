// Name: core_manpuz.cpp_CMirrorHack_setup_FUN_004e7800
// Address: 004e7800
// Address Range: [[004e7800, 004e781f]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_setup_FUN_004e7800(CMirrorHack *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_setup_FUN_004e7800(CMirrorHack *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->mirror_model);
  return;
}
