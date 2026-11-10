// Name: core_ammobox.cpp_CAmmoBox_archive_FUN_0040e860
// Address: 0040e860
// Address Range: [[0040e860, 0040e92d]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_archive_FUN_0040e860(CAmmoBox *this_ptr)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_archive_FUN_0040e860(CAmmoBox *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(&this_ptr->model,"modelName");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->weapon_class_name,"weaponClassName");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->ammo_count,"ammoCount");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->ammo_type,"ammoType");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->open_pct,0);
  if (1 < g_CAmmoBoxClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->item,&DAT_005cb2ca);
  }
  if (2 < g_CAmmoBoxClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->has_collision,"hasCollision");
  }
  if (g_CAmmoBoxClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->open_sound,"openSound");
  return;
}
