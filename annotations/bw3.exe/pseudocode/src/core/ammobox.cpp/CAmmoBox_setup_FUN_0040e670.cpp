// Name: core_ammobox.cpp_CAmmoBox_setup_FUN_0040e670
// Address: 0040e670
// Address Range: [[0040e670, 0040e69f]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_setup_FUN_0040e670(CAmmoBox *this_ptr)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_setup_FUN_0040e670(CAmmoBox *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  this_ptr->is_sound_playing = 0;
  return;
}
