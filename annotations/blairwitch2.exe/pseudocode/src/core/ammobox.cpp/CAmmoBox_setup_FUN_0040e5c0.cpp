// Name: core_ammobox.cpp_CAmmoBox_setup_FUN_0040e5c0
// Address: 0040e5c0
// Address Range: [[0040e5c0, 0040e5ef]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_setup_FUN_0040e5c0(CAmmoBox *this_ptr)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_setup_FUN_0040e5c0(CAmmoBox *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  this_ptr->is_sound_playing = 0;
  return;
}
