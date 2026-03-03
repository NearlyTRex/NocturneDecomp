// Name: core_ammobox.cpp_CAmmoBox_archive_FUN_00411900
// Address: 00411900
// Address Range: [[00411900, 004119cd]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_archive_FUN_00411900(CAmmoBox *this_ptr)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_archive_FUN_00411900(CAmmoBox *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->weapon_class_name,"weaponClassName");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->ammo_count,"ammoCount");
  core_actor_cpp_archiveInteger_FUN_0040b7f0((int *)&this_ptr->ammo_type,"ammoType");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->open_pct,(char *)0x0);
  if (1 < g_CAmmoBoxClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b870(&this_ptr->item,"item");
  }
  if (2 < g_CAmmoBoxClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->has_collision,"hasCollision");
  }
  if (g_CAmmoBoxClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->open_sound,"openSound");
  return;
}
