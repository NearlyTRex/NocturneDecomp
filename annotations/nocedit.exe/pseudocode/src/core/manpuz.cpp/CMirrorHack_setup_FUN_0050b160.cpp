// Name: core_manpuz.cpp_CMirrorHack_setup_FUN_0050b160
// Address: 0050b160
// Address Range: [[0050b160, 0050b17f]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_setup_FUN_0050b160(CMirrorHack *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_setup_FUN_0050b160(CMirrorHack *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->mirror_model);
  return;
}
