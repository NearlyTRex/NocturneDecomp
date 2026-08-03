// Name: core_ammobox.cpp_CAmmoBox_archive_FUN_0040f390
// Address: 0040f390
// Address Range: [[0040f390, 0040f45d]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_archive_FUN_0040f390(CAmmoBox *this_ptr)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_archive_FUN_0040f390(CAmmoBox *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->weapon_class_name,"weaponClassName");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->ammo_count,"ammoCount");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&this_ptr->ammo_type,"ammoType");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->open_pct,(char *)0x0);
  if (1 < g_INT_005aceb4) {
    core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->item,"item");
  }
  if (2 < g_INT_005aceb4) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->has_collision,"hasCollision");
  }
  if (g_INT_005aceb4 < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->open_sound,"openSound");
  return;
}
