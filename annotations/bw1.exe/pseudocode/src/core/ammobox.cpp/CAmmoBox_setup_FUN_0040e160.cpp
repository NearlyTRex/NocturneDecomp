// Name: core_ammobox.cpp_CAmmoBox_setup_FUN_0040e160
// Address: 0040e160
// Address Range: [[0040e160, 0040e18f]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_setup_FUN_0040e160(CAmmoBox *this_ptr)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_setup_FUN_0040e160(CAmmoBox *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  this_ptr->is_sound_playing = 0;
  return;
}
