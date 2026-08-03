// Name: core_ammobox.cpp_CAmmoBox_setup_FUN_0040f0f0
// Address: 0040f0f0
// Address Range: [[0040f0f0, 0040f11f]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_setup_FUN_0040f0f0(CAmmoBox *this_ptr)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_setup_FUN_0040f0f0(CAmmoBox *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  this_ptr->is_sound_playing = 0;
  return;
}
