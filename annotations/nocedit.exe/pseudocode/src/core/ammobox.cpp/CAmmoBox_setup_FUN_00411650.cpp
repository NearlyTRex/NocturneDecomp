// Name: core_ammobox.cpp_CAmmoBox_setup_FUN_00411650
// Address: 00411650
// Address Range: [[00411650, 00411650]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_setup_FUN_00411650(CAmmoBox *this_ptr)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_setup_FUN_00411650(CAmmoBox *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  this_ptr->is_sound_playing = 0;
  return;
}
